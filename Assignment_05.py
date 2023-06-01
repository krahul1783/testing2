import nltk
from nltk.chat.util import Chat, reflections

pairs = [
    #
    [
        r"my name is (.)",
        ["Hello %1, How are you"]
    ],
    [
        r"Hi|Hello|hi|hello|hey there|Hey there",
        ["Hello, Welcome to website of our store"]
    ],

    [
        r"you seem very nice, tell me something about yourself | what is your name?",
        ["I am a bot created by Rahul Kumar. you can call me Era!", ]
    ],
    [
        r"how are you ?",
        ["I'm doing good How about You?", ]
    ],

    [
        r"I am fine",
        ["Great to hear that, How can I help you?", ]
    ],

    [
        r"how can you help me?| How can you help me|how can you help me",
        ["I am here to make you comfortable while exploring our store. \nYou can ask me what kind of books are "
         "avaliable in our store, about there prices, famous books, trending books,", ]
    ],

    [
        r"What kind of books avaliable at your store?|what kind of books avaliable at your store?|What kind of books "
        r"avaliable at your store|what kind of books avaliable at your store",
        ["System Programming and Operating System	Rs 500\nComputer Network and Security			Rs 400\nTheory of "
         "Computation				Rs 450\nHuman Computer Interface			Rs 230\nDatabase Management			"
         "	Rs 234\nArtificial Intelligence				Rs 600\nCloud Computing					Rs 450\nData "
         "Science					Rs 345\nWeb Technology					Rs 934", ]
    ],

    [
        r"famous books | Famous books ?",
        ["Artificial Intelligence				Rs 600\nCloud Computing					Rs 450", ]
    ],

    [
        r"trending books | Trending books ?",
        ["Artificial Intelligence				Rs 600\nSystem Programming and Operating System				Rs 500", ]
    ],


    [
        r"sorry (.*)",
        ["Its alright", "Its OK, never mind", ]
    ],

    [
        r"I (.*) good",
        ["Nice to hear that", "How can I help you?:)", ]
    ],
    [
        r"(.*) age?",
        ["I'm a computer program dude Seriously you are asking me this?", ]
    ],
    [
        r"what (.*) want ?",
        ["Make me an offer I can't refuse", ]
    ],
    [
        r"(.*) created ?",
        ["Rahul created me using Python's NLTK library ", "top secret ;)", ]
    ],
    [
        r"(.*) (location|city) ?",
        ['Pune',]
    ],
    [
        r"how is weather in (.*)?",
        ["Weather in %1 is awesome like always", "Too hot man here in %1", "Too cold man here in %1",
         "Never even heard about %1",]
    ],
    [
        r"i work in (.*)?",
        ["%1 is an Amazing company, I have heard about it. But they are in huge loss these days.", ]
    ],
    [
        r"(.*)raining in (.*)",
        ["No rain since last week here in %2", "Damn its raining too much here in %2"]
    ],
    [
        r"how (.*) health(.*)",
        ["I'm a computer program, so I'm always healthy ", ]
    ],
    [
        r"(.*) (sports|game) ?",
        ["I'm a very big fan of Football", ]
    ],
    [
        r"who (.*) sportsperson ?",
        ["Messy", "Ronaldo", "Roony"]
    ],
    [
        r"who (.*) (moviestar|actor)?",
        ["Brad Pitt"]
    ],
    [
        r"i am looking for online guides and courses to learn data science, can you suggest?",
        ["Crazy_Tech has many great articles with each step explanation along with code, you can explore"]
    ],
    [
        r"quit",
        ["Thank you for using our intelligence services"]
    ],

]


def chat():
    print("Hey there! I am your personal assistant at your service")
    chat = Chat(pairs)
    chat.converse()


if __name__ == "__main__":
    chat()
