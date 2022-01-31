class MyStack:

    def __init__(self):
        self.queue=list()

    def push(self, x: int) -> None:
        self.queue.insert(0,x)

    def pop(self) -> int:
        return self.queue.pop(0)

    def top(self) -> int:
        return self.queue[0]

    def empty(self) -> bool:
        return True if len(self.queue)==0 else False