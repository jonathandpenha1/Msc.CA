from pip._vendor import requests

def fetch_dictionary_entry(api_url):
    response = requests.get(api_url)
   
    if response.status_code == 200:
        return response.json()
    else:
        print(f"Error: {response.status_code}")
        return None

def display_definition(entry_data):
    if entry_data:
        print("Dictionary Definition:")
        print(f"Word: {entry_data[0]['word']}")
        for meaning in entry_data[0]['meanings']:
            print(f"Part of Speech: {meaning['partOfSpeech']}")
            for definition in meaning['definitions']:
                print(f" - {definition['definition']}")
    else:
        print("No definition data available.")

if __name__ == "__main__":
    word = input("Enter Word: ")
    api_url = f"https://api.dictionaryapi.dev/api/v2/entries/en/{word}"
    entry_data = fetch_dictionary_entry(api_url)
    display_definition(entry_data)