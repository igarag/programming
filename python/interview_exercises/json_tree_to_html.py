import json
DATA = {
    "tag": "ul",
    "children": [
        {
            "tag": "li",
            "text": "hello"
        },
        {
            "tag": "li",
            "text": "world"
        }
    ]
}

IND = 4



def json_tree_to_html(data, ind):

    raw = json.loads(data)
    current_indentation = 0
    for k, v in raw.items():
        if k == "tag":
            print(f"<{data[k]}>")
        elif k == "children":
            current_indentation += ind
            print(f"\n\n{type(v)}\n\n")
            for node in v:
                print(f"{node}")
            print(f"")
        elif k == "text":
            pass

    #  for k, v in raw.items():
        #  if type(v) == list:
            #  for children in v:
                #  for sub_tag, sub_val in children.items():
                    #  print(f"{ind*' '}<{sub_val}>\n")
                    #  print(f"{2*ind*' '}{sub_val}")
        print(f"<{v}>")
        

if __name__ == "__main__":
    json_tree_to_html(json.dumps(DATA), IND)

