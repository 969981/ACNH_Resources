
void FUN_0142cdcc(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if (*(uint *)((long)param_1 + 0x544) < 3) {
    uVar2 = FUN_0142ce9c(param_1);
    uVar3 = 2;
    if ((uVar2 & 1) == 0) {
      uVar3 = 3;
    }
    uVar1 = (**(code **)(*param_1 + 0x198))(param_1);
    if ((uVar3 < uVar1) &&
       ((uVar2 = (**(code **)(*param_1 + 0x1b0))(param_1), (uVar2 & 1) == 0 ||
        (*(uint *)(param_1 + 0x50) != uVar3)))) {
      FUN_03ebb160(param_1 + 0x4f,uVar3);
      (**(code **)(*param_1 + 0x218))(param_1,uVar3,0);
    }
    *(int *)((long)param_1 + 0x544) = *(int *)((long)param_1 + 0x544) + 1;
  }
  FUN_03ebb268(param_1 + 0x6c);
  if (((int)param_1[0x6d] != 0) && (DAT_0556aa70 != 0)) {
    *(uint *)(DAT_0556aa70 + 0x43c) = *(uint *)(DAT_0556aa70 + 0x43c) | 0x10;
  }
  return;
}

