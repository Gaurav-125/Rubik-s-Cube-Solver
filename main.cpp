#include <bits/stdc++.h>
#include "GenericsRubiksCube.h"
#include "./solver/DFSsolver.h"
#include "./solver/IDDFSsolver.h"
#include "./RubiksCube3dArray.cpp"
#include "./RubiksCube1dArray.cpp"
#include "./RubiksCubeBitboard.cpp"
#include "solver/BFSsolver.h"
#include "solver/IDAstarSolver.h"

int main(){
    // DFS solver testing
    // keep randomshuffle less than max_depth
    // 3d array representation testing
    // RubiksCube3dArray cube;
    // // if (cube.isSolved()) cout<<"Solved\n";
    // cube.print();
    // // cout<<"\n";
    // // cube.move(GenericsRubiksCube::MOVE(1));
    // // cube.move(GenericsRubiksCube::MOVE(7));
    // // if (!cube.isSolved())cout<<"Not Solved\n";
    // // cube.print();
    // // cube.invert(GenericsRubiksCube::MOVE(2));
    // // cube.invert(GenericsRubiksCube::MOVE(1));
    // // cube.print();
    //
    // vector<GenericsRubiksCube::MOVE> shuffle_moves=cube.randomShuffleCube(5);
    // cout<<"Shuffled Cube: \n";
    // for (auto move:shuffle_moves) cout<<cube.getMove(move)<<' ';
    // cout<<'\n';
    // cube.print();
    //
    // DFSsolver<RubiksCube3dArray,hash3d> dfsolver(cube,5);
    //
    // cout<<"Solved Cube\n";
    // vector<GenericsRubiksCube::MOVE> solve_moves=dfsolver.solve();
    //
    // for (auto mov:solve_moves) {
    //     cout<<cube.getMove(mov)<<' ';
    //     cube.move(mov);
    // }
    // cout<<'\n';
    //
    // // cout<<solve_moves.size()<<"\n";
    // cube.print();
    // 3d array representation testing end; perfectly working


    // 1d array representation testing
    // RubiksCube1dArray cube;
    // cube.print();
    // // cube.move(GenericsRubiksCube::MOVE(1));
    // // cube.move(GenericsRubiksCube::MOVE(7));
    // // cube.print();
    // // cube.invert(GenericsRubiksCube::MOVE(7));
    // // cube.invert(GenericsRubiksCube::MOVE(1));
    // // // cube.invert(GenericsRubiksCube::MOVE(5));
    // // cube.print();
    //
    // vector<GenericsRubiksCube::MOVE> shuffled_moves=cube.randomShuffleCube(6);
    // cout<<"Shuffled Cube:\n";
    // for (auto mov:shuffled_moves) cout<<cube.getMove(mov)<<" ";
    // cout<<"\n";
    // cube.print();
    //
    // DFSsolver<RubiksCube1dArray,hash1d> dfsSolver(cube,5);
    // vector<GenericsRubiksCube::MOVE> solved_move=dfsSolver.solve();
    // cout<<"Solved Cube:\n";
    // for (auto mov:solved_move) {
    //     cout<<cube.getMove(mov)<<" ";
    //     cube.move(mov);
    // }
    // cout<<"\n";
    // if (cube.isSolved()) cube.print();
    // else cout<<"Not Solved";
    // 1d array representation testing end; perfectly working


    // bitboard representation testing
    // RubiksCubeBitboard cube;
    // cube.print();
    // // cube.move(GenericsRubiksCube::MOVE(3));
    // // cube.move(GenericsRubiksCube::MOVE(8));
    // // cube.print();
    // // cube.invert(GenericsRubiksCube::MOVE(8));
    // // cube.invert(GenericsRubiksCube::MOVE(3));
    // // cube.invert(GenericsRubiksCube::MOVE(12));
    // // cube.print();
    //
    // // cube.move(GenericsRubiksCube::MOVE(15));
    // // cube.invert(GenericsRubiksCube::MOVE(15));
    // // cout<<cube.getMove(GenericsRubiksCube::MOVE(15));
    //
    // vector<GenericsRubiksCube::MOVE> shuffled_move=cube.randomShuffleCube(2);
    // cout<<"Shuffled cube\n";
    // for (auto mov:shuffled_move) {
    //     cout<<cube.getMove(mov)<<" ";
    // }
    // cout<<"\n";
    // cube.print();
    //
    // DFSsolver<RubiksCubeBitboard,HashBitBoard> dfsSolver(cube,4);
    // vector<GenericsRubiksCube::MOVE> solved_move=dfsSolver.solve();
    // cout<<"Solved Cube:\n";
    // for (auto mov:solved_move) {
    //     cout<<cube.getMove(mov)<<" ";
    //     cube.move(mov);
    // }
    // cout<<"\n";
    // if (cube.isSolved())cube.print();
    // else cout<<"Not Solved";
    // bitboard representatio testing done; working fine

    // DFS solver testing ended; 3d and 1d are working perfectly; bitboard is working fine, implementation is correct sometime not producing solution due to depth limit


    // IDDFS solver testing
    // RubiksCube3dArray cube;
    // RubiksCube1dArray cube;
    // RubiksCubeBitboard cube;
    // cube.print();
    //
    // vector<GenericsRubiksCube::MOVE> shuffled_move=cube.randomShuffleCube(4);
    // cout<<"Shuffled cube\n";
    // for (auto mov:shuffled_move) cout<<cube.getMove(mov)<<" ";
    // cout<<"\n";
    // cube.print();
    //
    // IDDFSsolver<RubiksCubeBitboard,HashBitBoard> solver(cube,5);
    // vector<GenericsRubiksCube::MOVE> solved_move=solver.solve();
    // cout<<"Solved cube:\n";
    // for (auto mov:solved_move) {
    //     cout<<cube.getMove(mov)<<" ";
    //     // cube.move(mov); // // or just equate with rubikscube object of IDDFS
    // }
    // cout<<"\n";
    // if (solver.rubiksCube.isSolved()) {
    //     cube=solver.rubiksCube;
    //     cube.print();
    // }
    // else cout<<"NOT solved";
    // IDDFS solver testing done; working perfectly fine with all the representations



    // BFS Solver
    // RubiksCube3dArray cube;
    // RubiksCube1dArray cube;
    // RubiksCubeBitboard cube;
    // cube.print();
    //
    // vector<GenericsRubiksCube::MOVE> shuffled_moves=cube.randomShuffleCube(4);
    // cout<<"Shuffled Cube:\n";
    // for (auto mov:shuffled_moves) cout<<cube.getMove(mov)<<" ";
    // cout<<"\n";
    // cube.print();
    //
    // BFSsolver<RubiksCubeBitboard,HashBitBoard> bfsSolver(cube);
    // vector<GenericsRubiksCube::MOVE> solved_move=bfsSolver.solve();
    // cout<<"Solved Cube:\n";
    // for (auto mov:solved_move) {
    //     cout<<cube.getMove(mov)<<" ";
    //     cube.move(mov);
    // }
    // cout<<"\n";
    //
    // // if (bfsSolver.rubiksCube.isSolved()) {
    // //     cube=bfsSolver.rubiksCube;
    // //     cube.print();
    // // }else {
    // //     cout<<"Not Solved";
    // // }
    //
    // if (cube.isSolved()) cube.print();
    // else cout<<"Not Solved";

    // BFS implementation ended, working perfectly



    // IDAstar solver without pattern database
    // RubiksCube3dArray cube;
    // RubiksCube1dArray cube;
    RubiksCubeBitboard cube;
    cube.print();
    vector<GenericsRubiksCube::MOVE> shuffled_moves=cube.randomShuffleCube(8);
    cout<<"Shuffled Moves: ";
    for (auto mov:shuffled_moves) {
        cout<<cube.getMove(mov)<<" ";
    }
    cout<<"\n";
    cube.print();
    IDAstarSolver<RubiksCubeBitboard,HashBitBoard> solver(cube);
    vector<GenericsRubiksCube::MOVE> solved_moves=solver.solve();

    if (solver.rubiksCube.isSolved()) {
        cout<<"Solved Rubiks Cube: ";
        for (auto mov:solved_moves) {
            cube.move(mov);
            cout<<cube.getMove(mov)<<" ";
        }
        cout<<"\n";
        cube.print();
    }else cout<<"Cube not solved";

    // IDAstar without pattern database implementation ended, working perfectly

    return 0;
}
