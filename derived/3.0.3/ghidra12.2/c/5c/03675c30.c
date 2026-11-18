
void FUN_03675c30(long param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  if (1 < (uint)(param_3 + param_2)) {
    iVar1 = (param_3 + param_2) - 1;
    *(uint *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + (param_2 - 1U);
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + iVar1;
    *(ulong *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + (ulong)(param_2 - 1U);
    FUN_03673358(param_1,iVar1);
  }
  *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
  FUN_036726e0(param_1,*(undefined4 *)(param_1 + 0xb8));
  if ((param_4 & 0xf000) != 0x4000) {
    if (param_4 >> 0xd == 2) {
      uVar4 = 2;
      if (0x802 < param_4 >> 3) {
        uVar4 = 3;
      }
    }
    else {
      uVar4 = *(uint *)(&DAT_04057d60 + (ulong)(param_4 >> 0xd) * 4);
    }
    lVar5 = param_1 + (ulong)uVar4 * 0x28;
    uVar4 = *(uint *)(lVar5 + 0x138);
    uVar3 = param_4 - *(int *)(lVar5 + 0x13c);
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = uVar3 / uVar4;
    }
    (**(code **)(lVar5 + 0x158))(param_1 + 0xf0,(uVar3 - uVar2 * uVar4) + *(int *)(lVar5 + 0x13c));
  }
  *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
  FUN_036726e0(param_1,*(undefined4 *)(param_1 + 0xb8));
  if (param_4 >> 0xd == 2) {
    uVar4 = 2;
    if (0x802 < param_4 >> 3) {
      uVar4 = 3;
    }
  }
  else {
    uVar4 = *(uint *)(&DAT_04057d60 + (ulong)(param_4 >> 0xd) * 4);
  }
  lVar5 = param_1 + 0xf0 + (ulong)uVar4 * 0x28;
  uVar4 = *(uint *)(lVar5 + 0x48);
  param_4 = param_4 - *(int *)(lVar5 + 0x4c);
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = param_4 / uVar4;
  }
  (**(code **)(lVar5 + 0x68))(param_1 + 0xf0,(param_4 - uVar3 * uVar4) + *(int *)(lVar5 + 0x4c));
  *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 2;
  FUN_036726e0(param_1,*(int *)(param_1 + 0xb8) << 1);
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}

