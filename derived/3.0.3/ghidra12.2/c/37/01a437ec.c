
bool FUN_01a437ec(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar1 = param_1 + 0x2c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(lVar1);
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) goto LAB_01a439ac;
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if ((*(uint *)(lVar10 + 0x1d8) <= uVar4) ||
     (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01a439ac;
  local_50 = *(undefined4 *)(param_1 + 0x2c0);
  local_48 = 0;
  uStack_4c = *(undefined4 *)(param_1 + 0x2c4);
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 == 0) {
LAB_01a4398c:
    uVar6 = 0xbc;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01a4398c;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(lVar1);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
       (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8), puVar7 == (uint *)0x0)
       ) goto LAB_01a4398c;
    uVar6 = 0;
    uVar4 = *puVar7;
    if ((uVar4 != 0) && (puVar7 != (uint *)(ulong)uVar4)) {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
      uVar6 = 0;
      if (*puVar8 != 0) {
        uVar4 = puVar8[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar4);
            }
            if (*puVar8 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar6 < 0xbd))
            goto LAB_01a43998;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_01a43998:
  if (uVar6 == 0x49) {
    return true;
  }
LAB_01a439ac:
  iVar5 = FUN_0277d6c4(lVar1);
  if ((((iVar5 == 0x336c) || (iVar5 = FUN_0277d6c4(lVar1), iVar5 == 0x34c5)) ||
      (iVar5 = FUN_0277d6c4(lVar1), iVar5 == 0x3896)) ||
     ((iVar5 = FUN_0277d6c4(lVar1), iVar5 == 0x318c ||
      (iVar5 = FUN_0277d6c4(lVar1), iVar5 == 0x318b)))) {
    return true;
  }
  iVar5 = FUN_0277d6c4(lVar1);
  return iVar5 == 0x3364;
}

