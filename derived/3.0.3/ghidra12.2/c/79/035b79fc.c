
uint FUN_035b79fc(long param_1,long *param_2)

{
  uint uVar1;
  undefined1 auStack_14 [4];
  
  uVar1 = FUN_04002180(param_2,0,0,auStack_14);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_2 + 0x28))(param_2,param_1);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 1);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 2);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 3);
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 4);
  }
  return uVar1 & 1;
}

