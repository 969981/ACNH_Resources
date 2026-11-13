
undefined8 FUN_0118bbd0(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined **local_d8;
  char *local_d0;
  undefined **local_c8;
  undefined1 *puStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  char local_44 [4];
  
  puVar3 = PTR_DAT_04bb5c90;
  if (param_1 != (undefined4 *)0x0) {
    puStack_c0 = (undefined1 *)&local_e0;
    local_e0 = 0x6351a0c8;
    local_44[0] = '\0';
    local_a8 = 0;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    local_d0 = local_44;
    uStack_98 = 0;
    local_d8 = &PTR_FUN_04983bb8;
    local_c8 = &local_b8;
    lVar8 = *(long *)PTR_DAT_04bb5c90;
    uVar5 = *(uint *)(lVar8 + 0x50);
    if (0 < (int)uVar5) {
      uVar9 = 0;
      local_b8 = puVar1;
      puStack_b0 = puVar2;
      local_a0 = puVar2;
      do {
        lVar7 = *(long *)(lVar8 + 0x58);
        if (**(int **)(lVar7 + uVar9 * 8) != 0x7e3d1e46) {
          local_90 = (undefined *)CONCAT44(**(undefined4 **)(lVar7 + uVar9 * 8),(int)uVar9);
          lVar7 = *(long *)(lVar7 + uVar9 * 8);
          local_78 = *(undefined8 *)(lVar7 + 0x18);
          local_68 = *(undefined8 *)(lVar7 + 0x28);
          local_88 = puVar1;
          local_80 = puVar2;
          local_70 = puVar2;
          (*(code *)*local_d8)(&local_d8,&local_90);
        }
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
      if (local_44[0] != '\0') {
        uVar6 = (undefined4)local_a8;
        uVar4 = local_a8._4_4_;
        FUN_011b9ab0(&local_b8,0x6351a0c8);
        uVar5 = FUN_011baa50(&local_b8);
        local_d8 = (undefined **)(PTR_DAT_04bbb978 + 0x10);
        lVar8 = *(long *)puVar3;
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x498);
        if (uVar5 < *(uint *)(lVar8 + 0x478)) {
          local_d0 = *(char **)(*(long *)(lVar8 + 0x480) + (long)(int)uVar5 * 8);
        }
        else {
          local_d0 = (char *)0x0;
        }
        FUN_0119ffb0(&local_e0,&local_d8);
        puVar3 = PTR_DAT_04bb43c0;
        lVar7 = *(long *)PTR_DAT_04bb43c0;
        uVar5 = FUN_0277d6c4(&local_e0);
        lVar8 = *(long *)puVar3;
        if (lVar8 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            local_80 = (undefined *)0x0;
            local_90 = PTR_DAT_04bc0510 + 0x10;
            local_88 = (undefined *)CONCAT44(uStack_dc,local_e0);
            uVar5 = FUN_0277d6c4(&local_88);
            if (*(long *)puVar3 != 0) {
              lVar8 = *(long *)(lVar8 + 0x57e58);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
              if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
                lVar8 = *(long *)PTR_DAT_04bc0428;
                uVar5 = FUN_0277d6c4(&local_e0);
                uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
                if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
                   (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8), lVar8 != 0))
                {
                  local_80 = (undefined *)lVar8;
                }
              }
            }
            param_1[4] = uVar6;
            param_1[5] = uVar4;
            *param_1 = local_e0;
            param_1[1] = uStack_dc;
            uVar6 = FUN_01ae98d0(&local_90);
            param_1[6] = uVar6;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

