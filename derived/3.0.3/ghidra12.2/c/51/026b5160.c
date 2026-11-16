
void FUN_026b5160(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 != 0) {
    uVar4 = 0;
    iVar5 = 0;
    do {
      uVar1 = 1 << (ulong)(uVar4 & 0x1f);
      if ((*(uint *)(param_2 + (ulong)(uVar4 >> 5) * 4) & uVar1) != 0) {
        lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar2 = FUN_0277d6c4(param_1 + 0x1094c + (long)iVar5 * 0x2c);
        if ((0x752 < (uVar2 >> 3 & 0x1fff)) ||
           ((*(uint *)(lVar3 + (ulong)((uVar2 & 0xffff) >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1) ==
            0)) {
          lVar3 = (ulong)(uVar4 >> 5) * 4;
          *(uint *)(param_2 + lVar3) = *(uint *)(param_2 + lVar3) & (uVar1 ^ 0xffffffff);
        }
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 1;
    } while (uVar4 != 0x18);
    iVar5 = 0;
    uVar4 = 0x18;
    do {
      uVar1 = 1 << (ulong)(uVar4 & 0x1f);
      if ((*(uint *)(param_2 + (ulong)(uVar4 >> 5) * 4) & uVar1) != 0) {
        lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar2 = FUN_0277d6c4(param_1 + 0x10d6c + (long)iVar5 * 0x2c);
        if ((0x752 < (uVar2 >> 3 & 0x1fff)) ||
           ((*(uint *)(lVar3 + (ulong)((uVar2 & 0xffff) >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1) ==
            0)) {
          lVar3 = (ulong)(uVar4 >> 5) * 4;
          *(uint *)(param_2 + lVar3) = *(uint *)(param_2 + lVar3) & (uVar1 ^ 0xffffffff);
        }
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 1;
    } while (uVar4 != 0x38);
  }
  return;
}

