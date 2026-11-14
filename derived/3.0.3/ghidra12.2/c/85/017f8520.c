
void FUN_017f8520(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_04bb46d0;
  lVar8 = *(long *)PTR_DAT_04bb46d0;
  uVar4 = FUN_017f1348(param_1,param_2);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x400);
  if (((((uVar4 < *(uint *)(lVar8 + 0x3e0)) &&
        (lVar6 = *(long *)(*(long *)(lVar8 + 1000) + (long)(int)uVar4 * 8), lVar6 != 0)) &&
       (*(long *)(lVar8 + 0x2b8) != 0)) &&
      ((puVar7 = *(uint **)(*(long *)(lVar8 + 0x2b8) + 8), puVar7 != (uint *)0x0 && (*puVar7 != 0)))
      ) && ((uVar4 = puVar7[1], uVar4 != 0 && ((ulong)(ushort)puVar7[2] != 0)))) {
    lVar1 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
    if (lVar1 != 0) {
      uVar2 = 0;
      if ((ulong)uVar4 != 0) {
        uVar2 = (uint)((ulong)(lVar6 - lVar1) / (ulong)uVar4);
      }
      if (*puVar7 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      uVar5 = (ulong)uVar2;
      if ((0 < *(int *)(lVar8 + 0x3c8)) && (uVar2 < *(uint *)(lVar8 + 0x3d0))) {
        uVar5 = (ulong)*(short *)(*(long *)(lVar8 + 0x3d8) + (long)(int)uVar2 * 2);
      }
      goto LAB_017f85e4;
    }
  }
  uVar5 = 0xffffffff;
LAB_017f85e4:
  FUN_017c1400(*(undefined8 *)puVar3,uVar5);
  return;
}

