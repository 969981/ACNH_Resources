
void FUN_0326f2dc(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_58 [44];
  int local_2c [3];
  
  if (*(int *)(param_1 + 0x220) == 1) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x210) + 0x588);
    if (*(uint *)(lVar3 + 0x298) < 2) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(lVar3 + 0x444) + *(int *)(lVar3 + 0x2e8) * *(int *)(lVar3 + 0x440);
    }
    FUN_03264a78(local_2c,param_1 + 0x228,iVar2);
    FUN_03414580(auStack_58,local_2c,param_1 + 0x1f8);
    uVar1 = FUN_03416230(local_2c,auStack_58);
    if ((uVar1 >> 5 & 1) != 0) {
      if (local_2c[0] != 7) {
        uVar1 = uVar1 & 0xffffffdf;
      }
    }
  }
  else {
    uVar1 = 7;
  }
  FUN_0326f388(param_1,uVar1);
  return;
}

