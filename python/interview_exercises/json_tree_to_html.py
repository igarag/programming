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
    parent_tag = None
    cur_ind = ind * ' '

    for k, v in raw.items():
        if k == "tag":
            parent_tag = raw[k]
            print(f"<{raw[k]}>")
            continue
        elif k == "children":
            for node in v:
                print(f"{cur_ind}<{node['tag']}>")
                print(f"{2*cur_ind}{node['text']}")
                print(f"{cur_ind}</{node['tag']}>")
            print(f"</{parent_tag}>")


if __name__ == "__main__":
    json_tree_to_html(json.dumps(DATA), IND)

