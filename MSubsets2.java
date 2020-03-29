class  SubSets2{
	public List<List<Integer>> subsetsWithDup(int[] nums) {
		List<List<Integer>> l=new ArrayList<List<Integer>>();
		Arrays.sort(nums);
		ans(nums,l,new ArrayList<Integer>(),0);
		return l;
	}
	void ans(int nums[],List<List<Integer>> l, ArrayList<Integer> temp,int start)
	{
		l.add(new ArrayList<>(temp));
		for(int i=start;i<nums.length;i++)
		{
			if(i>start&&nums[i]==nums[i-1]) continue;
			temp.add(nums[i]);
			ans(nums,l,temp,i+1);
			temp.remove(temp.size()-1);
		}
	}
}
