
bool FUN_016d8030(float *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  ushort uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 *local_50;
  int local_48;
  int iStack_44;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  byte local_30;
  
  local_38 = 0;
  lVar6 = *(long *)PTR_DAT_04bb2720;
  if (lVar6 == 0) {
    puVar10 = &DAT_055c04a0;
  }
  else {
    puVar10 = &DAT_055c04a0;
    if (*(long *)(lVar6 + 0x330) != 0) {
      puVar10 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar6 + 0x338));
      iVar3 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
    }
  }
  local_34 = *(undefined4 *)(puVar10 + 7);
  local_30 = FUN_017baf44();
  local_30 = local_30 & 1;
  local_40 = PTR_DAT_04bb3140 + 0x10;
  local_50 = &DAT_048f9750;
  local_48 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_44 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  FUN_01a5033c(&local_58,&local_40,0,&local_50,0);
  puVar2 = PTR_DAT_04bb43c0;
  if ((short)local_58 == -2) {
    return false;
  }
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar2 == 0) {
    return false;
  }
  lVar6 = *(long *)(lVar6 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
  if (*(uint *)(lVar6 + 0x1d8) <= uVar4) {
    return false;
  }
  if (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return false;
  }
  uVar5 = FUN_0277e158(&local_58);
  if ((uVar5 & 1) != 0) {
    return false;
  }
  lVar6 = *(long *)puVar2;
  local_60 = 0;
  local_68 = local_58;
  uStack_64 = uStack_54;
  uVar4 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar2 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(&local_58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
         (puVar7 = *(uint **)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar7 != (uint *)0x0)) {
        uVar4 = *puVar7;
        uVar8 = 0;
        if ((uVar4 == 0) || (puVar7 == (uint *)(ulong)uVar4)) goto LAB_016d82e8;
        puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
        uVar8 = 0;
        if (*puVar9 == 0) goto LAB_016d82e8;
        uVar4 = puVar9[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar6 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar9 + lVar6 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar6 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar6) / (ulong)uVar4);
            }
            if (*puVar9 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326d48) &&
               (uVar8 = *(ushort *)(DAT_05326d50 + (long)(int)uVar1 * 2), uVar8 < 0x52))
            goto LAB_016d82e8;
          }
        }
      }
    }
  }
  uVar8 = 0;
LAB_016d82e8:
  return uVar8 != 3;
}

