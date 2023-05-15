Here I'll explain my thought process behind the algorithm I've devised:
 
I have first alloted each mentee to a project using a greedy algorithm, which picks the just suitable candidate out of those available for a role. This will ensure I don't run into allotment redundancy problems like a 5-skilled person getting a 1-skill project while a 3-skill person is left for a 4-skill project. After one complete round of mentee allotment to a project.

Then I have used the optimise function to swap pairs of people serving the same skill project, who would fare better in the other role and would be able to mentor someone which they wouldn't in their current project. After performing at the most nC2 swaps, we'll be done will the allotment and obtain the answer. The coding is yet to be concluded but te skeleton code is in place. 
