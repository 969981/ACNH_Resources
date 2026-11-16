
void FUN_028684d0(long param_1,short *param_2)

{
  short *psVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  undefined *local_90;
  undefined1 *puStack_88;
  undefined4 local_80;
  undefined1 local_7c [31];
  undefined1 local_5d;
  undefined *local_58;
  short local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined8 local_48;
  
  lVar10 = 0;
  while (psVar1 = (short *)(param_1 + lVar10), *psVar1 != -2) {
    uVar6 = FUN_0277d7b4(psVar1,param_2);
    if ((uVar6 & 1) != 0) {
      return;
    }
    bVar4 = lVar10 == 0x1f8;
    lVar10 = lVar10 + 8;
    if (bVar4) {
      return;
    }
  }
  local_50 = *param_2;
  *psVar1 = local_50;
  local_4e = (undefined1)param_2[1];
  *(undefined1 *)(psVar1 + 1) = local_4e;
  local_4d = *(undefined1 *)((long)param_2 + 3);
  *(undefined1 *)((long)psVar1 + 3) = local_4d;
  local_4c = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(psVar1 + 2) = local_4c;
  puVar3 = PTR_DAT_04bb43c0;
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 == 0) {
LAB_028685fc:
    puVar9 = (uint *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_028685fc;
    lVar10 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(psVar1);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if (*(uint *)(lVar10 + 0x1d8) <= uVar5) goto LAB_028685fc;
    puVar9 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8);
  }
  local_5d = 0;
  local_80 = 0x20;
  puStack_88 = local_7c;
  local_7c[0] = 0;
  local_90 = PTR_DAT_04bb2028 + 0x10;
  if (puVar9 == (uint *)0x0) {
    uVar5 = 0xbc;
  }
  else {
    uVar2 = *puVar9;
    uVar5 = 0;
    if ((uVar2 != 0) && (puVar9 != (uint *)(ulong)uVar2)) {
      puVar8 = (uint *)((long)puVar9 - (long)(ulong)uVar2);
      uVar5 = 0;
      if (*puVar8 != 0) {
        uVar5 = puVar8[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar8 + lVar10 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar10 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)puVar9 - lVar10) / (ulong)uVar5);
            }
            if (*puVar8 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar5 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar5 < 0xbd)) goto LAB_028686c0;
          }
        }
        uVar5 = 0;
      }
    }
  }
LAB_028686c0:
  if (uVar5 < 0xbd) {
    puVar7 = *(undefined8 **)(PTR_DAT_04bb8f90 + (ulong)uVar5 * 8 + 0x830);
  }
  else {
    puVar7 = &DAT_0407ebb1;
  }
  FUN_038d1270(&local_90,"Shop.Catalog.%s",puVar7);
  return;
}

