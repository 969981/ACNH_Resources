
undefined8 FUN_024f43cc(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  undefined *local_148;
  char *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  undefined4 local_44;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar7 = param_1 + 4;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(lVar7);
  lVar10 = *(long *)puVar2;
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_138 = 0;
      local_140 = *(char **)(param_1 + 4);
      local_148 = PTR_DAT_04bc0510 + 0x10;
      uVar3 = FUN_0277d6c4(&local_140);
      if (*(long *)puVar2 == 0) {
LAB_024f4578:
        local_48 = 0xbc;
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((*(uint *)(lVar10 + 0x1d8) <= uVar3) ||
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_024f4578;
        lVar10 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(lVar7);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((*(uint *)(lVar10 + 0x1d8) <= uVar3) ||
           (puVar8 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8),
           puVar8 == (uint *)0x0)) goto LAB_024f4578;
        local_48 = 0;
        uVar3 = *puVar8;
        if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
          puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
          local_48 = 0;
          if (*puVar9 != 0) {
            uVar3 = puVar9[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar10 != 0) {
                uVar4 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar4 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar3);
                }
                if (*puVar9 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_48 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
                   local_48 < 0xbd)) goto LAB_024f457c;
              }
            }
            local_48 = 0;
          }
        }
      }
LAB_024f457c:
      local_44 = 0x96;
      if (local_48 == 0x96) {
        FUN_0274ca70(param_1,param_1 + 0x68,1);
      }
    }
  }
  uVar6 = FUN_024f48d0(param_1,lVar7);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  lVar11 = *(long *)puVar2;
  uVar4 = FUN_0277d6c4(lVar7);
  lVar10 = *(long *)puVar2;
  uVar3 = 0;
  if (lVar10 == 0) goto LAB_024f4768;
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar3 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if ((uVar3 < *(uint *)(lVar11 + 0x1d8)) &&
     (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
    local_138 = 0;
    local_140 = *(char **)(param_1 + 4);
    local_148 = PTR_DAT_04bc0510 + 0x10;
    uVar3 = FUN_0277d6c4(&local_140);
    if (*(long *)puVar2 == 0) {
LAB_024f4724:
      local_48 = 0xbc;
    }
    else {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((*(uint *)(lVar10 + 0x1d8) <= uVar3) ||
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_024f4724;
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(lVar7);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((*(uint *)(lVar10 + 0x1d8) <= uVar3) ||
         (puVar8 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar8 == (uint *)0x0)) goto LAB_024f4724;
      local_48 = 0;
      uVar3 = *puVar8;
      if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
        puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
        local_48 = 0;
        if (*puVar9 != 0) {
          uVar3 = puVar9[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
            lVar10 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar10 != 0) {
              uVar4 = 0;
              if ((ulong)uVar3 != 0) {
                uVar4 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar3);
              }
              if (*puVar9 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_48 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
                 local_48 < 0xbd)) goto LAB_024f4730;
            }
          }
          local_48 = 0;
        }
      }
    }
LAB_024f4730:
    local_44 = 0x96;
    if (local_48 == 0x96) {
      uVar3 = FUN_0274bce0(param_1,param_1 + 0x10);
      if (99 < (int)uVar3) {
        uVar3 = 100;
      }
      uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
      goto LAB_024f4768;
    }
  }
  uVar3 = 0;
LAB_024f4768:
  local_148 = PTR_DAT_04bb2020 + 0x10;
  local_140 = "MainmenuRecipe";
  iVar5 = FUN_0274bce0(param_1,&local_148);
  uVar4 = nn::os::GetSystemTick();
  if ((iVar5 == 0) ||
     (uVar1 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1, uVar4 = uVar1 ^ uVar1 * 0x800,
     uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2,
     uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3,
     uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4,
     uVar3 <= (uint)((ulong)(uVar4 >> 8 ^ uVar1 >> 0x13 ^ uVar4 ^ uVar1) * 99 >> 0x20))) {
    FUN_024f4b80(param_1,lVar7);
    return 0;
  }
  local_44 = FUN_024f4f30(lVar7);
  puVar2 = PTR_DAT_04bb46f0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = (undefined *)0x0;
  local_140 = (char *)0x0;
  FUN_0262a720(*(long *)PTR_DAT_04bb46f0,&local_148,&local_44,*(long *)PTR_DAT_04bb46f0 + 0xe98e0);
  lVar7 = *(long *)puVar2;
  FUN_0262b0a0(lVar7,&local_148,param_1,lVar7 + 0xe98e0);
  lVar7 = *(long *)puVar2;
  FUN_026326e0(lVar7,&local_148,param_1,lVar7 + 0xe98e0,PTR_DAT_04bb8758);
  return 1;
}

