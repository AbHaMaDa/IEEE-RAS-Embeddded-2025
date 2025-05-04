#include <stdio.h>
#include <string.h>

// Union to store sensor data
union SensorValue {
    int temperature;  // For storing temperature (int)
    float pressure;   // For storing pressure (float)
    char status;      // For storing status (char)
};

// Struct to store sensor metadata and corresponding data
struct SensorData {
    int sensorID;            // Sensor ID
    char sensorType[20];     // Sensor type (e.g., "Temperature", "Pressure", "Displacement")
    union SensorValue data;  // Sensor data (stored using the union)
};

// Function to print the sensor data
void printSensorData(struct SensorData sensor) {
    printf("Sensor ID: %d\n", sensor.sensorID);
    printf("Sensor Type: %s\n", sensor.sensorType);

    // Print the sensor data based on the sensor type
    if (strcmp(sensor.sensorType, "Temperature") == 0) {
        printf("Temperature: %d°C\n", sensor.data.temperature);
    } else if (strcmp(sensor.sensorType, "Pressure") == 0) {
        printf("Pressure: %.2f Pa\n", sensor.data.pressure);
    } else if (strcmp(sensor.sensorType, "Status") == 0) {
        printf("Status: %c\n", sensor.data.status);
    } else {
        printf("Unknown sensor type.\n");
    }
}

int main() {
    // Create an array of sensors with different types of data
    struct SensorData sensors[3];

    // Initialize the first sensor (Temperature)
    sensors[0].sensorID = 101;
    strcpy(sensors[0].sensorType, "Temperature");
    sensors[0].data.temperature = 25;  // Temperature in Celsius

    // Initialize the second sensor (Pressure)
    sensors[1].sensorID = 102;
    strcpy(sensors[1].sensorType, "Pressure");
    sensors[1].data.pressure = 1013.25;  // Pressure in Pascals

    // Initialize the third sensor (Status)
    sensors[2].sensorID = 103;
    strcpy(sensors[2].sensorType, "Status");
    sensors[2].data.status = 'A';  // Status 'A' (Active)

    // Print the sensor data
    for (int i = 0; i < 3; i++) {
        printf("\nSensor %d Data:\n", i + 1);
        printSensorData(sensors[i]);
    }

    return 0;
}
