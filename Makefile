BOARD = uno
PORT = /dev/ttyACM0

# Define file
SRC = line_follower.c

# Upload command
upload:
	arduino-cli compile --fqbn arduino:avr:uno $(SRC)
	arduino-cli upload -p $(PORT) --fqbn arduino:avr:uno $(SRC)

# Clean up
clean:
	rm -rf build
