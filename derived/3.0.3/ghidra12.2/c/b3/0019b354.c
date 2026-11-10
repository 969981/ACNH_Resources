
int FUN_0019b354(long *param_1)

{
  int iVar1;
  ulong uVar2;
  
  (**(code **)(*param_1 + 0x30))();
  iVar1 = (int)param_1[7];
  if (iVar1 != 0x40) {
    if (iVar1 == 2) {
      uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
      goto joined_r0x0019b3cc;
    }
    if (iVar1 != 1) {
      return iVar1;
    }
  }
  uVar2 = (**(code **)(*param_1 + 0x60))(param_1,2);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*param_1 + 0x28))(param_1,2);
    *(undefined4 *)(param_1 + 7) = 2;
  }
  uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
joined_r0x0019b3cc:
  if (((uVar2 & 1) != 0) && (uVar2 = (**(code **)(*param_1 + 0x60))(param_1,4), (uVar2 & 1) != 0)) {
    (**(code **)(*param_1 + 0x28))(param_1,4);
    *(undefined4 *)(param_1 + 7) = 4;
  }
  return (int)param_1[7];
}

