
void FUN_0285a20c(short *param_1,undefined1 param_2,short *param_3,short *param_4,short *param_5,
                 byte param_6,undefined1 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,char param_11)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  short sVar7;
  long lVar8;
  long lVar9;
  short local_94 [2];
  short local_90 [2];
  short local_8c [2];
  short local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  short local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined **local_78;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  *(undefined1 *)(param_1 + 0xf) = param_2;
  puVar5 = PTR_DAT_04bb43c0;
  if (*param_3 == -2) {
    sVar7 = -2;
LAB_0285a260:
    *param_1 = sVar7;
    *(char *)(param_1 + 1) = (char)param_3[1];
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_3 + 3);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 2);
  }
  else {
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(param_3);
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        local_68 = 0;
        local_70 = *(undefined4 *)param_3;
        local_6c = *(undefined4 *)(param_3 + 2);
        local_78 = &PTR_FUN_04a36b50;
        uVar6 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            lVar8 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(param_3);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
               (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8), lVar8 != 0)) {
              local_68 = lVar8;
            }
          }
        }
        uVar6 = FUN_01b01f10(&local_78);
        lVar8 = *(long *)PTR_DAT_04bb46d0;
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x400);
        if ((uVar6 < *(uint *)(lVar8 + 0x3e0)) &&
           (*(long *)(*(long *)(lVar8 + 1000) + (long)(int)uVar6 * 8) != 0)) {
          sVar7 = *param_3;
          goto LAB_0285a260;
        }
      }
    }
  }
  sVar7 = *param_4;
  uVar2 = (undefined1)param_4[1];
  uVar3 = *(undefined1 *)((long)param_4 + 3);
  uVar4 = *(undefined4 *)param_4;
  uVar1 = *(undefined4 *)(param_4 + 2);
  local_80 = sVar7;
  local_7e = uVar2;
  local_7d = uVar3;
  local_7c = uVar1;
  if (sVar7 == -2) {
    param_1[4] = -2;
LAB_0285a3e8:
    *(undefined1 *)(param_1 + 5) = uVar2;
    *(undefined1 *)((long)param_1 + 0xb) = uVar3;
    *(undefined4 *)(param_1 + 6) = uVar1;
  }
  else {
    lVar9 = *(long *)puVar5;
    uVar6 = FUN_0277d6c4(&local_80);
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        local_78 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        local_68 = 0;
        local_70 = uVar4;
        local_6c = uVar1;
        uVar6 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            lVar8 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(&local_80);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
               (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8), lVar8 != 0)) {
              local_68 = lVar8;
            }
          }
        }
        uVar6 = FUN_01b01f10(&local_78);
        lVar8 = *(long *)PTR_DAT_04bb46d0;
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x400);
        if ((uVar6 < *(uint *)(lVar8 + 0x3e0)) &&
           (*(long *)(*(long *)(lVar8 + 1000) + (long)(int)uVar6 * 8) != 0)) {
          param_1[4] = sVar7;
          goto LAB_0285a3e8;
        }
      }
    }
  }
  sVar7 = *param_5;
  uVar2 = (undefined1)param_5[1];
  uVar3 = *(undefined1 *)((long)param_5 + 3);
  uVar4 = *(undefined4 *)param_5;
  uVar1 = *(undefined4 *)(param_5 + 2);
  local_88 = sVar7;
  local_86 = uVar2;
  local_85 = uVar3;
  local_84 = uVar1;
  if (sVar7 == -2) {
    param_1[8] = -2;
  }
  else {
    lVar9 = *(long *)puVar5;
    uVar6 = FUN_0277d6c4(&local_88);
    lVar8 = *(long *)puVar5;
    if (lVar8 == 0) goto LAB_0285a690;
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0285a690;
    local_78 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    local_68 = 0;
    local_70 = uVar4;
    local_6c = uVar1;
    uVar6 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar5 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(&local_88);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
           (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8), lVar8 != 0)) {
          local_68 = lVar8;
        }
      }
    }
    uVar6 = FUN_01b020f0(&local_78);
    lVar8 = *(long *)PTR_DAT_04bb46d0;
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x200);
    if ((*(uint *)(lVar8 + 0x1e0) <= uVar6) ||
       (*(long *)(*(long *)(lVar8 + 0x1e8) + (long)(int)uVar6 * 8) == 0)) goto LAB_0285a690;
    param_1[8] = sVar7;
  }
  *(undefined1 *)(param_1 + 9) = uVar2;
  *(undefined1 *)((long)param_1 + 0x13) = uVar3;
  *(undefined4 *)(param_1 + 10) = uVar1;
LAB_0285a690:
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe | param_6 & 1;
  *(undefined1 *)((long)param_1 + 0x1f) = param_7;
  FUN_007ef010(local_8c,param_8);
  param_1[0xd] = local_8c[0];
  FUN_007ef010(local_90,param_9);
  param_1[0xc] = local_90[0];
  FUN_007ef010(local_94,param_10);
  param_1[0xe] = local_94[0];
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xe1 | param_11 << 1 | 0x10;
  return;
}

