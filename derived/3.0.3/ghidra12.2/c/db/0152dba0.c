
void FUN_0152dba0(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined4 local_e0;
  undefined1 local_dc [127];
  undefined1 local_5d;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar8 = *(long *)puVar2;
  if (lVar8 == 0) {
    return;
  }
  lVar9 = *(long *)(lVar9 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if (*(uint *)(lVar9 + 0x1d8) <= uVar3) {
    return;
  }
  if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return;
  }
  local_48 = (uint *)0x0;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  local_58 = &PTR_FUN_04a36b50;
  uVar3 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
         (puVar7 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar7 != (uint *)0x0)) {
        local_48 = puVar7;
      }
    }
  }
  iVar4 = FUN_01ad7260(&local_58);
  if (iVar4 != 0) {
    local_5d = 0;
    local_e0 = 0x80;
    puStack_e8 = local_dc;
    local_dc[0] = 0;
    local_f0 = &DAT_048fc708;
    FUN_01afe3e0(&local_58,&local_f0);
    FUN_0074ed40(param_1,&local_f0,0);
  }
  iVar4 = FUN_01afcfa0(&local_58);
  if (iVar4 != 0) {
    local_5d = 0;
    local_e0 = 0x80;
    puStack_e8 = local_dc;
    local_dc[0] = 0;
    local_f0 = &DAT_048fc708;
    FUN_01afeef4(&local_58,&local_f0);
    FUN_0074ed40(param_1,&local_f0,0);
    iVar4 = FUN_01afcfa0(&local_58);
    if (((iVar4 != 0) && (puVar5 = (ushort *)FUN_01afd600(&local_58), puVar5 != (ushort *)0x0)) &&
       ((*puVar5 & 0x18) == 8)) {
      local_5d = 0;
      local_e0 = 0x80;
      puStack_e8 = local_dc;
      local_dc[0] = 0;
      local_f0 = &DAT_048fc708;
      FUN_01aff000(&local_58,&local_f0);
      FUN_0074ed40(param_1,&local_f0,0);
    }
  }
  if (((local_48 != (uint *)0x0) && (uVar3 = *local_48, uVar3 != 0)) &&
     (local_48 != (uint *)(ulong)uVar3)) {
    puVar7 = (uint *)((long)local_48 - (long)(ulong)uVar3);
    if (*puVar7 != 0) {
      uVar3 = puVar7[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar8 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar8 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)local_48 - lVar8) / (ulong)uVar3);
          }
          if (*puVar7 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326ec0) && (*(short *)(DAT_05326ec8 + (long)(int)uVar1 * 2) == 0xad))
          goto LAB_0152dea4;
        }
      }
      if ((*puVar7 != 0) && ((uVar3 = puVar7[1], uVar3 != 0 && ((ulong)(ushort)puVar7[2] != 0)))) {
        lVar8 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar8 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)local_48 - lVar8) / (ulong)uVar3);
          }
          if (*puVar7 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
             (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) == 0xaf))
          goto LAB_0152dea4;
        }
      }
    }
  }
  uVar6 = FUN_01ae8b58(&local_58);
  if ((uVar6 & 1) == 0) {
    return;
  }
LAB_0152dea4:
  local_5d = 0;
  local_e0 = 0x80;
  puStack_e8 = local_dc;
  local_dc[0] = 0;
  local_f0 = &DAT_048fc708;
  uVar6 = FUN_01b08dd0(&local_58,&local_f0);
  if ((uVar6 & 1) != 0) {
    FUN_0074ed40(param_1,&local_f0,0);
  }
  return;
}

