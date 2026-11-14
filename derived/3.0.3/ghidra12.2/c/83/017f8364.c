
undefined8 FUN_017f8364(long param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_04bb46d0;
  if ((*(ushort *)(param_1 + 0x1cc) >> 1 & 1) != 0) {
    return 0;
  }
  lVar9 = *(long *)PTR_DAT_04bb46d0;
  uVar4 = FUN_017f1348(param_1,param_2);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x400);
  if (((((uVar4 < *(uint *)(lVar9 + 0x3e0)) &&
        (lVar7 = *(long *)(*(long *)(lVar9 + 1000) + (long)(int)uVar4 * 8), lVar7 != 0)) &&
       (*(long *)(lVar9 + 0x2b8) != 0)) &&
      ((puVar8 = *(uint **)(*(long *)(lVar9 + 0x2b8) + 8), puVar8 != (uint *)0x0 && (*puVar8 != 0)))
      ) && ((uVar4 = puVar8[1], uVar4 != 0 && ((ulong)(ushort)puVar8[2] != 0)))) {
    lVar1 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
    if (lVar1 != 0) {
      uVar2 = 0;
      if ((ulong)uVar4 != 0) {
        uVar2 = (uint)((ulong)(lVar7 - lVar1) / (ulong)uVar4);
      }
      if (*puVar8 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      uVar6 = (ulong)uVar2;
      if ((0 < *(int *)(lVar9 + 0x3c8)) && (uVar2 < *(uint *)(lVar9 + 0x3d0))) {
        uVar6 = (ulong)*(short *)(*(long *)(lVar9 + 0x3d8) + (long)(int)uVar2 * 2);
      }
      goto LAB_017f8438;
    }
  }
  uVar6 = 0xffffffff;
LAB_017f8438:
  uVar5 = FUN_017c0eb0(*(undefined8 *)puVar3,uVar6,1);
  return uVar5;
}

