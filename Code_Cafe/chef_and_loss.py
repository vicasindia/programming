# Problem link: https://www.codechef.com/CAFE2020/problems/CFLOS

# Knapsack Problem

class ItemValue:

	"""Item Value DataClass"""

	def __init__(self, wt, val, ind):
		self.wt = wt
		self.val = val
		self.ind = ind
		self.cost = val // wt

	def __lt__(self, other):
		return self.cost < other.cost

# Greedy Approach

class FractionalKnapSack:

	@staticmethod
	def getMaxValue(wt, val, capacity):
		"""function to get maximum value """
		iVal = []
		for i in range(len(wt)):
			iVal.append(ItemValue(wt[i], val[i], i))

		# sorting items by value
		iVal.sort(reverse=True)

		totalValue = 0
		for i in iVal:
			curWt = int(i.wt)
			curVal = int(i.val)
			if capacity - curWt >= 0:
				capacity -= curWt
				totalValue += curVal
			else:
				fraction = capacity / curWt
				totalValue += curVal * fraction
				capacity = int(capacity - (curWt * fraction))
				break
		return totalValue


for _ in range(int(input())):
	n, c = map(int, input().split())
	w = list(map(int, input().split()))
	p = list(map(int, input().split()))
	print(round(FractionalKnapSack().getMaxValue(w, p, c)))

