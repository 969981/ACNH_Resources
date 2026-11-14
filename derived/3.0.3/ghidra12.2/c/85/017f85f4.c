
bool FUN_017f85f4(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_04bb46d0;
  lVar10 = *(long *)PTR_DAT_04bb46d0;
  uVar5 = FUN_017f1590(param_1,param_2);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x400);
  if (((((uVar5 < *(uint *)(lVar10 + 0x3e0)) &&
        (lVar8 = *(long *)(*(long *)(lVar10 + 1000) + (long)(int)uVar5 * 8), lVar8 != 0)) &&
       (*(long *)(lVar10 + 0x2b8) != 0)) &&
      ((puVar9 = *(uint **)(*(long *)(lVar10 + 0x2b8) + 8), puVar9 != (uint *)0x0 && (*puVar9 != 0))
      )) && ((uVar5 = puVar9[1], uVar5 != 0 && ((ulong)(ushort)puVar9[2] != 0)))) {
    lVar1 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
    if (lVar1 != 0) {
      uVar2 = 0;
      if ((ulong)uVar5 != 0) {
        uVar2 = (uint)((ulong)(lVar8 - lVar1) / (ulong)uVar5);
      }
      if (*puVar9 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      uVar7 = (ulong)uVar2;
      if ((0 < *(int *)(lVar10 + 0x3c8)) && (uVar2 < *(uint *)(lVar10 + 0x3d0))) {
        uVar7 = (ulong)*(short *)(*(long *)(lVar10 + 0x3d8) + (long)(int)uVar2 * 2);
      }
      goto LAB_017f86b8;
    }
  }
  uVar7 = 0xffffffff;
LAB_017f86b8:
  pcVar6 = (char *)FUN_017c1150(*(undefined8 *)puVar3,uVar7);
  bVar4 = false;
  if (pcVar6 != (char *)0x0) {
    bVar4 = *pcVar6 != '\0';
  }
  return bVar4;
}

