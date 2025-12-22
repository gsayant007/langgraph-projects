#!/bin/bash

# 1. Configuration - Use these variables for everything
SOURCE="physics_1.c"
OUTPUT="physics_1_output"

# 2. Compile the file
echo "🚀 Compiling $SOURCE..."
# We use the variables defined above
gcc "$SOURCE" -o "$OUTPUT"

# 3. Check if compilation worked, then Run
if [ $? -eq 0 ]; then
    echo "✅ Success! Running your program:"
    echo "------------------------------------"
    ./"$OUTPUT"
    echo "" # Adds a clean line after output
    echo "------------------------------------"
else
    echo "❌ Compilation failed. Please check the errors above."
fi
