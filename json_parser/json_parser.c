#include <jansson.h>

int main(int argc, char *argv[])
{
    // Load the JSON data into a string
    char *json_string = "{\"key\": \"value\"}";

    // Parse the JSON string
    json_t *root;
    json_error_t error;
    root = json_loads(json_string, 0, &error);

    // Check for parsing errors
    if (!root) {
        fprintf(stderr, "error: on line %d: %s\n", error.line, error.text);
        return 1;
    }

    // Get the value of the "key" field
    json_t *key_field = json_object_get(root, "key");
    const char *key_value = json_string_value(key_field);
    printf("key: %s\n", key_value);

    // Clean up
    json_decref(root);

    return 0;
}


