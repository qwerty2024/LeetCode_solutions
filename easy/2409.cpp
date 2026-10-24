class Solution {
    vector<int> go_date(string s) {
        int month = stoi(s.substr(0, 2));
        int day = stoi(s.substr(3, 2));
        return {month, day};
    }

public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> days = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

        vector<int> alice_arr = go_date(arriveAlice);
        vector<int> alice_l = go_date(leaveAlice);
        vector<int> bob_arr = go_date(arriveBob);
        vector<int> bob_l = go_date(leaveBob);

        vector<int> alice = {days[alice_arr[0] - 1] + alice_arr[1], days[alice_l[0] - 1] + alice_l[1]};
        vector<int> bob = {days[bob_arr[0] - 1] + bob_arr[1], days[bob_l[0] - 1] + bob_l[1]};;

        cout << alice[0] << " " << alice[1] << endl;
        cout << bob[0] << " " << bob[1] << endl;

        return max(0, min(bob[1], alice[1]) - max(bob[0], alice[0]) + 1);
    }
};