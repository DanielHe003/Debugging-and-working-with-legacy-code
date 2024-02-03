/*
 * Type definitions for memory allocation functions
 */

Professor *newprofessor();
Assistant *newassistant();
Student *newstudent();
Section *newsection();
Assignment *newassignment();
Course *newcourse();
Score *newscore();
char *newstring(char *tp, int size);

Freqs *newfreqs();
Classstats *newclassstats();
Sectionstats *newsectionstats();
Stats *newstats();
struct Ifile *newifile();