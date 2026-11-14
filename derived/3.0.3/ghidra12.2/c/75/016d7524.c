
bool FUN_016d7524(float *param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
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
    puVar8 = &DAT_055c04a0;
  }
  else {
    puVar8 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar3 = FUN_006bd550(*puVar8,0);
      puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar8 = &DAT_055c04a0;
      }
    }
  }
  local_4c = *(undefined4 *)(puVar8 + 7);
  uVar2 = FUN_017baf44();
  local_48 = CONCAT71(local_48._1_7_,uVar2) & 0xffffffffffffff01;
  local_58 = (undefined **)(PTR_DAT_04bb3140 + 0x10);
  FUN_01a5033c(&local_18,&local_58,0,&local_40,0);
  puVar1 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_18);
  lVar9 = *(long *)puVar1;
  if (lVar9 == 0) {
    return false;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar4) {
    return false;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return false;
  }
  local_48 = 0;
  local_50 = local_18;
  local_4c = uStack_14;
  local_58 = &PTR_FUN_04a36b50;
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar1 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(&local_18);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
         (puVar6 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar6 != (uint *)0x0)) {
        uVar4 = *puVar6;
        uVar5 = 0;
        if ((uVar4 == 0) || (puVar6 == (uint *)(ulong)uVar4)) goto LAB_016d77ac;
        puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
        uVar5 = 0;
        if (*puVar7 == 0) goto LAB_016d77ac;
        uVar4 = puVar7[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar9 != 0) {
            uVar5 = 0;
            if ((ulong)uVar4 != 0) {
              uVar5 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar4);
            }
            if (*puVar7 <= uVar5) {
              uVar5 = 0xffffffff;
            }
            if ((uVar5 < DAT_05326d48) &&
               (uVar5 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar5 * 2), uVar5 < 0x52))
            goto LAB_016d77ac;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_016d77ac:
  return uVar5 - 1 < 9;
}

