
undefined4 FUN_0262a66c(long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  if (*(long *)puVar2 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if (((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
       (iVar4 = FUN_0277d6c4(param_2), iVar4 < 15000)) {
      uVar5 = FUN_0277d6c4(param_2);
      puVar1 = (undefined4 *)(param_1 + 0x2f8) + (uVar5 & 0xffffffff);
      if (0x752 < ((uint)(uVar5 >> 3) & 0x1fffffff)) {
        puVar1 = (undefined4 *)(param_1 + 0x2f8);
      }
      return *puVar1;
    }
  }
  return 0;
}

