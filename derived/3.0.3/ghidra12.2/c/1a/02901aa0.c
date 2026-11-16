
void FUN_02901aa0(long param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined *local_80;
  undefined1 *puStack_78;
  undefined4 local_70;
  undefined1 local_6c [31];
  undefined1 local_4d;
  undefined *local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined8 local_38;
  
  uVar6 = 0;
  while (*(short *)(param_1 + (-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3)) != -2) {
    uVar4 = (int)uVar6 + 1;
    uVar6 = (ulong)uVar4;
    if (uVar4 == 0x40) {
      return;
    }
  }
  puVar1 = (undefined2 *)(param_1 + (long)(int)uVar6 * 8);
  local_40 = *param_2;
  *puVar1 = local_40;
  local_3e = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(puVar1 + 1) = local_3e;
  local_3d = *(undefined1 *)((long)param_2 + 3);
  *(undefined1 *)((long)puVar1 + 3) = local_3d;
  local_3c = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(puVar1 + 2) = local_3c;
  puVar3 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_40);
  puVar7 = (uint *)0x0;
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (uVar4 < *(uint *)(lVar9 + 0x1d8)) {
      puVar7 = (uint *)0x0;
      if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0) {
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(puVar1);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (*(uint *)(lVar9 + 0x1d8) <= uVar4) goto LAB_02901bac;
        puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8);
      }
    }
    else {
LAB_02901bac:
      puVar7 = (uint *)0x0;
    }
  }
  local_4d = 0;
  local_70 = 0x20;
  puStack_78 = local_6c;
  local_6c[0] = 0;
  local_80 = PTR_DAT_04bb2028 + 0x10;
  if (puVar7 == (uint *)0x0) {
    uVar4 = 0xbc;
  }
  else {
    uVar2 = *puVar7;
    uVar4 = 0;
    if ((uVar2 != 0) && (puVar7 != (uint *)(ulong)uVar2)) {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar2);
      uVar4 = 0;
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
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar4 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar4 < 0xbd)) goto LAB_02901c70;
          }
        }
        uVar4 = 0;
      }
    }
  }
LAB_02901c70:
  if (uVar4 < 0xbd) {
    puVar5 = *(undefined8 **)(PTR_DAT_04bb8f90 + (ulong)uVar4 * 8 + 0x830);
  }
  else {
    puVar5 = &DAT_0407ebb1;
  }
  FUN_038d1270(&local_80,"Shop.WherearenTailor.%s",puVar5);
  return;
}

