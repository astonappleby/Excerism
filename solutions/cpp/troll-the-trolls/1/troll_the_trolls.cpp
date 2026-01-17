namespace hellmath {
    enum class AccountStatus {
    mod,
    user,
    guest,
    troll
    };

    enum class Action {
    read,
    write,
    remove
    };

    bool display_post(AccountStatus poster, AccountStatus viewer){
        if (poster == AccountStatus::troll and viewer != AccountStatus::troll){
            return false;
        } else {
            return true;
        }
    }

    bool permission_check(Action action, AccountStatus user){
        if (user == AccountStatus::guest){
            if(action != Action::read){
                return false;
            } 
            return true;
        }else if (user == AccountStatus::troll or user == AccountStatus::user){
                if(action == Action::remove){
                    return false;
             }
            return true;
            }
        else {
            return true;
        }
    }

    bool valid_player_combination(AccountStatus p1, AccountStatus p2){
        if (p1 == AccountStatus::guest or p2 == AccountStatus::guest){
            return false;
        } else if (p1 == AccountStatus::troll and p2 == AccountStatus::troll) {
            return true;
        } else if (p1 == AccountStatus::troll or p2 == AccountStatus::troll){
            return false;
        } else {
            return true;
        }
    }

    bool has_priority(AccountStatus p1, AccountStatus p2){
        int i1 = static_cast<int>(p1);
        int i2{static_cast<int>(p2)};
        return i1 < i2;
    }
// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.

}  // namespace hellmath
