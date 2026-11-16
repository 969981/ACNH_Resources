
int FUN_02815f98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
    return 0;
  }
  lVar6 = *(long *)(lVar6 + 0x57e58);
  uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
  if (*(uint *)(lVar6 + 0x1d8) <= uVar2) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) == 0) {
    return 0;
  }
  uVar2 = FUN_0277d6c4(param_2);
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      iVar3 = FUN_026e98c8(param_1,param_2);
      uVar2 = FUN_0277d7b4(param_1 + 0x1190,param_2);
      iVar3 = iVar3 + (uVar2 & 1);
      goto LAB_02816088;
    }
  }
  iVar3 = 0;
LAB_02816088:
  uVar4 = FUN_02816430(param_1 + 0x1198);
  uVar2 = FUN_0277d7b4(uVar4,param_2);
  return iVar3 + (uVar2 & 1);
}

