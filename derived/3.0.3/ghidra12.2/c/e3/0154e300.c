
/* WARNING: Removing unreachable block (ram,0x0154e378) */
/* WARNING: Removing unreachable block (ram,0x0154e380) */

undefined8 FUN_0154e300(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  ulong uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  long local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  int local_88;
  int local_84;
  undefined8 local_80;
  uint local_78;
  undefined4 uStack_74;
  byte local_70;
  undefined4 local_64;
  
  if (((DAT_05217a70 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_05217a70), iVar10 != 0)) {
    DAT_05217a60 = 0x500000002;
    DAT_05217a68 = 0x300000004;
    __cxa_guard_release(&DAT_05217a70);
  }
  local_c0 = (undefined *)((ulong)local_c0._4_4_ << 0x20);
  uVar11 = FUN_02b5e950(&local_c0,*param_1);
  if ((uVar11 & 1) != 0) {
    puVar15 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar15 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar15[1] != 0) {
      local_98 = (ulong)local_98._4_4_ << 0x20;
      local_80 = (undefined *)((ulong)local_80._4_4_ << 0x20);
      local_a0 = PTR_DAT_04bc43f8 + 0x10;
      uVar11 = FUN_02b674f0(&local_80,(ulong)local_c0 & 0xffffffff);
      if ((uVar11 & 1) != 0) {
        local_98 = CONCAT44(local_98._4_4_,(undefined4)local_80);
      }
      uVar11 = FUN_02a59140(puVar15,&local_a0);
      if ((uVar11 & 1) != 0) {
        local_64 = 0;
        uVar11 = FUN_02b5e950(&local_64,*param_1);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
        uVar11 = FUN_01383880(local_64);
        uVar9 = (uint)(uVar11 >> 0x20);
        if ((uint)uVar11 != uVar9) {
          puVar15 = &DAT_05217a60;
          puVar1 = PTR_DAT_04bbfe68 + 0x10;
          puVar2 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
          puVar3 = PTR_DAT_04bb2010 + 0x10;
          do {
            uVar14 = (uint)uVar11;
            puVar4 = puVar2 + (uVar11 & 0xffffffff);
            if (0x38 < uVar14) {
              puVar4 = puVar2;
            }
            uStack_74 = *puVar4;
            local_80 = puVar1;
            local_78 = uVar14;
            local_70 = FUN_017baf44();
            local_70 = local_70 & 1;
            lVar12 = FUN_01a4fa00(&local_80);
            local_a0 = (undefined *)(lVar12 + 8);
            local_98 = lVar12 + 0x18;
            local_88 = *(int *)(lVar12 + 0x20);
            local_84 = *(int *)(lVar12 + 0x24);
            local_90 = puVar3;
            lVar12 = FUN_01a4fa00(&local_80);
            iVar10 = *(int *)(lVar12 + 0x14);
            iVar5 = *(int *)(lVar12 + 0x20);
            while ((iVar5 != local_88 || (iVar10 + -1 != local_84))) {
              FUN_01a50240(&local_a8,&local_80,DAT_05217a60 & 0xffffffff,&local_90);
              iVar8 = FUN_0277d6c4(&local_a8);
              if (iVar8 == 0x33c0) goto LAB_0154e800;
              if (*(int *)(local_a0 + 8) < local_88) {
                local_88 = local_88 + -1;
              }
              else {
                local_84 = local_84 + -1;
                local_88 = *(int *)(local_98 + 8);
              }
            }
            lVar12 = FUN_01a4fa00(&local_80);
            local_a0 = (undefined *)(lVar12 + 8);
            local_98 = lVar12 + 0x18;
            local_88 = *(int *)(lVar12 + 0x20);
            local_84 = *(int *)(lVar12 + 0x24);
            local_90 = PTR_DAT_04bb2010 + 0x10;
            lVar12 = FUN_01a4fa00(&local_80);
            iVar10 = *(int *)(lVar12 + 0x14);
            iVar5 = *(int *)(lVar12 + 0x20);
            uVar11 = DAT_05217a60;
            while ((DAT_05217a60 = uVar11, iVar5 != local_88 || (iVar10 + -1 != local_84))) {
              DAT_05217a60._4_4_ = (undefined4)(uVar11 >> 0x20);
              uVar7 = DAT_05217a60._4_4_;
              FUN_01a50240(&local_a8,&local_80,uVar7,&local_90);
              iVar8 = FUN_0277d6c4(&local_a8);
              if (iVar8 == 0x33c0) {
                puVar15 = (undefined8 *)((long)&DAT_05217a60 + 4);
                goto LAB_0154e800;
              }
              uVar11 = DAT_05217a60;
              if (*(int *)(local_a0 + 8) < local_88) {
                local_88 = local_88 + -1;
              }
              else {
                local_84 = local_84 + -1;
                local_88 = *(int *)(local_98 + 8);
              }
            }
            lVar12 = FUN_01a4fa00(&local_80);
            local_a0 = (undefined *)(lVar12 + 8);
            local_98 = lVar12 + 0x18;
            local_88 = *(int *)(lVar12 + 0x20);
            local_84 = *(int *)(lVar12 + 0x24);
            local_90 = PTR_DAT_04bb2010 + 0x10;
            lVar12 = FUN_01a4fa00(&local_80);
            iVar10 = *(int *)(lVar12 + 0x14);
            iVar5 = *(int *)(lVar12 + 0x20);
            while ((iVar5 != local_88 || (iVar10 + -1 != local_84))) {
              FUN_01a50240(&local_a8,&local_80,DAT_05217a68 & 0xffffffff,&local_90);
              iVar8 = FUN_0277d6c4(&local_a8);
              if (iVar8 == 0x33c0) {
                puVar15 = &DAT_05217a68;
                goto LAB_0154e800;
              }
              if (*(int *)(local_a0 + 8) < local_88) {
                local_88 = local_88 + -1;
              }
              else {
                local_84 = local_84 + -1;
                local_88 = *(int *)(local_98 + 8);
              }
            }
            lVar12 = FUN_01a4fa00(&local_80);
            local_a0 = (undefined *)(lVar12 + 8);
            local_98 = lVar12 + 0x18;
            local_88 = *(int *)(lVar12 + 0x20);
            local_84 = *(int *)(lVar12 + 0x24);
            local_90 = PTR_DAT_04bb2010 + 0x10;
            lVar12 = FUN_01a4fa00(&local_80);
            iVar10 = *(int *)(lVar12 + 0x14);
            iVar5 = *(int *)(lVar12 + 0x20);
            uVar6 = DAT_05217a68;
            while ((DAT_05217a68 = uVar6, iVar5 != local_88 || (iVar10 + -1 != local_84))) {
              DAT_05217a68._4_4_ = (undefined4)(uVar6 >> 0x20);
              uVar7 = DAT_05217a68._4_4_;
              FUN_01a50240(&local_a8,&local_80,uVar7,&local_90);
              iVar8 = FUN_0277d6c4(&local_a8);
              if (iVar8 == 0x33c0) {
                puVar15 = (undefined8 *)((long)&DAT_05217a68 + 4);
LAB_0154e800:
                puVar1 = PTR_DAT_04bb43c0;
                local_b0 = 0;
                local_c0 = PTR_DAT_04bc0510 + 0x10;
                local_b8 = local_a8;
                uStack_b4 = uStack_a4;
                lVar12 = *(long *)PTR_DAT_04bb43c0;
                uVar9 = FUN_0277d6c4(&local_b8);
                if (*(long *)puVar1 != 0) {
                  lVar12 = *(long *)(lVar12 + 0x57e58);
                  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                  if ((uVar9 < *(uint *)(lVar12 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                    lVar12 = *(long *)PTR_DAT_04bc0428;
                    uVar9 = FUN_0277d6c4(&local_a8);
                    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                    if ((uVar9 < *(uint *)(lVar12 + 0x1d8)) &&
                       (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar9 * 8),
                       lVar12 != 0)) {
                      local_b0 = lVar12;
                    }
                  }
                }
                FUN_01aeabb0(&local_c0,1);
                FUN_01a50cb0(&local_80,*(undefined4 *)puVar15,&local_90);
                local_c8 = local_b8;
                uStack_c4 = uStack_b4;
                FUN_01a50970(&local_80,*(undefined4 *)puVar15,&local_c8,&local_90);
                return 1;
              }
              uVar6 = DAT_05217a68;
              if (*(int *)(local_a0 + 8) < local_88) {
                local_88 = local_88 + -1;
              }
              else {
                local_84 = local_84 + -1;
                local_88 = *(int *)(local_98 + 8);
              }
            }
            uVar13 = 0x39;
            if ((int)uVar14 < 0x39) {
              uVar13 = uVar14 + 1;
            }
            uVar11 = (ulong)uVar13;
            if (uVar13 == uVar9) {
              return 0;
            }
          } while( true );
        }
      }
    }
  }
  return 0;
}

