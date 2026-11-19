
void FUN_0387173c(int *param_1,long *param_2)

{
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [16];
  
  if (*param_1 == 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    FUN_002279b0(auStack_60,param_2[1]);
    FUN_002bde30(auStack_40,param_1 + 8,auStack_60);
    if (*param_1 == 2) {
      FUN_0022d52c(auStack_40,param_1 + 0x1b4a,param_1 + 0x176a);
      FUN_0022d584(auStack_40,param_1 + 0x1b4a,param_1 + 0x17da,param_1[0x834]);
    }
    else if (*param_1 == 1) {
      FUN_002cbc30(auStack_40,param_1 + 0x918,param_1 + 8);
      FUN_002cbc90(auStack_40,param_1 + 0x918,param_1 + 0x198,param_1[0x834]);
    }
  }
  return;
}

