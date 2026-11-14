
bool FUN_016d77dc(float *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  ushort uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined **local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulong local_48;
  undefined *local_40;
  int local_38;
  int iStack_34;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_40 = PTR_DAT_04bb2010 + 0x10;
  local_50 = 0;
  local_38 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_34 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  if (DAT_05aed670 == 0) {
    puVar9 = &DAT_055c04a0;
  }
  else {
    puVar9 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar9 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar9,0);
      puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar9 = &DAT_055c04a0;
      }
    }
  }
  local_4c = *(undefined4 *)(puVar9 + 7);
  uVar3 = FUN_017baf44();
  local_48 = CONCAT71(local_48._1_7_,uVar3) & 0xffffffffffffff01;
  local_58 = (undefined **)(PTR_DAT_04bb3140 + 0x10);
  FUN_01a5033c(&local_18,&local_58,0,&local_40,0);
  puVar2 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_18);
  lVar10 = *(long *)puVar2;
  if (lVar10 == 0) {
    return false;
  }
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if (*(uint *)(lVar11 + 0x1d8) <= uVar5) {
    return false;
  }
  if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return false;
  }
  local_48 = 0;
  local_50 = local_18;
  local_4c = uStack_14;
  local_58 = &PTR_FUN_04a36b50;
  uVar5 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(&local_18);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar10 + 0x1d8)) &&
         (puVar6 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar6 != (uint *)0x0)) {
        uVar5 = *puVar6;
        uVar7 = 0;
        if ((uVar5 == 0) || (puVar6 == (uint *)(ulong)uVar5)) goto LAB_016d7a64;
        puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
        uVar7 = 0;
        if (*puVar8 == 0) goto LAB_016d7a64;
        uVar5 = puVar8[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar8 + lVar10 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar5 != 0) {
              uVar1 = (uint)((ulong)((long)puVar6 - lVar10) / (ulong)uVar5);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326d48) &&
               (uVar7 = *(ushort *)(DAT_05326d50 + (long)(int)uVar1 * 2), uVar7 < 0x52))
            goto LAB_016d7a64;
          }
        }
      }
    }
  }
  uVar7 = 0;
LAB_016d7a64:
  return (uVar7 & 0xfffe) == 10;
}

