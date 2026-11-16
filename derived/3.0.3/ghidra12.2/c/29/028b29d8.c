
undefined8 FUN_028b29d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_1 + 0x16c0);
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
LAB_028b2a5c:
    uVar2 = FUN_0277d6c4(param_1 + 0x16c8);
    if (*(long *)puVar1 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if (((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
         (uVar3 = FUN_0277d7b4(param_1 + 0x16c8,param_2), (uVar3 & 1) != 0)) goto LAB_028b2ab4;
    }
    uVar4 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((*(uint *)(lVar6 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_028b2a5c;
    uVar3 = FUN_0277d7b4(param_1 + 0x16c0,param_2);
    if ((uVar3 & 1) == 0) {
      lVar5 = *(long *)puVar1;
      goto LAB_028b2a5c;
    }
LAB_028b2ab4:
    uVar4 = 1;
  }
  return uVar4;
}

