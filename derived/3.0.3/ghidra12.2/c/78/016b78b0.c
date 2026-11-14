
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x016b7988 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016b78b0(uint *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  bool bVar17;
  long lVar18;
  long *plVar19;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  undefined4 local_a8;
  int local_a0;
  uint uStack_9c;
  long *local_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70 [2];
  
  uVar13 = FUN_016b74c0(param_1,param_2);
  puVar10 = PTR_DAT_04bb9a60;
  puVar9 = PTR_DAT_04bb9a58;
  puVar8 = PTR_DAT_04bb27c0;
  if ((uVar13 & 1) == 0) {
    return;
  }
  uStack_9c = 0;
  local_98 = (long *)0x0;
  puStack_88 = &local_80;
  local_78 = 0;
  if (local_70 != (long *)0x0) {
    uStack_9c = 2;
    local_98 = local_70;
  }
  local_a0 = 0;
  local_d8 = (undefined *)CONCAT44(local_d8._4_4_,param_2);
  local_80._4_4_ = (uint)((ulong)&local_78 >> 0x20);
  if (param_2 == 1) {
    local_90 = puStack_88;
    puVar15 = &local_78;
    if (local_70 == (long *)0x0) goto LAB_016b79bc;
    local_80 = (undefined8 *)CONCAT44(local_80._4_4_,1);
    *local_98 = (long)puStack_88;
    local_a0 = 1;
    local_90 = &local_78;
    puVar15 = local_80;
    if (uStack_9c < 2) goto LAB_016b79bc;
    local_a0 = 1;
    if (&local_78 != (undefined8 *)0x0) {
      local_90 = (undefined8 *)0x0;
    }
    local_78 = 2;
    if (uStack_9c < 2) goto LAB_016b79bc;
    lVar18 = 1;
    puVar15 = &local_78;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    if (local_70 == (long *)0x0) {
      return;
    }
    lVar18 = 0;
    local_80 = (undefined8 *)((ulong)local_80._4_4_ << 0x20);
    puVar15 = puStack_88;
    local_90 = &local_78;
  }
  local_98[lVar18] = (long)puVar15;
  local_a0 = local_a0 + 1;
  puVar15 = local_80;
LAB_016b79bc:
  local_80 = puVar15;
  if (local_a0 != 0) {
    lVar18 = (long)local_a0 << 3;
    puVar1 = PTR_DAT_04bb6718 + 0x10;
    puVar2 = PTR_DAT_04bbc1a0 + 0x10;
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    puVar4 = PTR_DAT_04bb3750 + 0x10;
    plVar19 = local_98;
    do {
      uVar6 = *(uint *)*plVar19;
      local_d8 = (undefined *)CONCAT44(local_d8._4_4_,uVar6);
      puVar5 = param_1 + (ulong)uVar6 * 7;
      if (2 < uVar6) {
        puVar5 = param_1;
      }
      uVar6 = *puVar5;
      if (uVar6 != 0) {
        lVar16 = *(long *)puVar8;
        local_b0 = (long *)0x0;
        local_a8 = 0x100;
        if (lVar16 == 0) {
LAB_016b7b78:
          local_a8._0_2_ = (ushort)(byte)local_a8;
        }
        else {
          local_b0 = *(long **)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) +
                               ((ulong)(uVar6 >> 0x11) & 0x7ff8));
          if (((local_b0 == (long *)0x0) || ((*(uint *)(local_b0 + 0x49) >> 1 & 1) != 0)) ||
             (*(uint *)(local_b0 + 0x46) != uVar6)) {
            local_b0 = (long *)0x0;
          }
          if (*(int *)(lVar16 + 0x288) == 1 || *(int *)(lVar16 + 0x288) == -1) {
            plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar16 = *(long *)puVar8;
            iVar12 = (**(code **)(*plVar14 + 0x60))();
            if ((0x10 < iVar12) &&
               ((uVar6 = *(uint *)(lVar16 + 0x5e8), 4 < uVar6 ||
                ((1 << (ulong)(uVar6 & 0x1f) & 0x1aU) == 0)))) goto LAB_016b7b24;
          }
          else {
LAB_016b7b24:
            local_a8._0_2_ = (ushort)(byte)local_a8;
          }
          uVar6 = local_a8;
          plVar14 = local_b0;
          if (local_b0 != (long *)0x0) {
            local_a8 = CONCAT31(local_a8._1_3_,(int)local_b0[0x2a] == 1);
            uVar11 = local_a8;
            local_a8._3_1_ = SUB41(uVar6,3);
            local_a8._0_2_ = (ushort)uVar11;
            local_a8 = CONCAT13(local_a8._3_1_,
                                CONCAT12((char)(*(uint *)(local_b0 + 0x49) >> 4),(ushort)local_a8))
                       & 0xff01ffff;
            if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar12 != 0)) {
              *(undefined **)PTR_DAT_04bb37d0 = puVar4;
              __cxa_guard_release(PTR_DAT_04bb37d8);
            }
            uVar13 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb37d0);
            if ((uVar13 & 1) == 0) goto LAB_016b7b78;
          }
        }
        if (((local_b0 != (long *)0x0) && ((byte)local_a8 != '\0')) && (local_a8._1_1_ != '\0')) {
          plVar14 = (long *)local_b0[0x77];
          if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
            *(undefined **)puVar9 = puVar1;
            __cxa_guard_release(puVar10);
          }
          if ((plVar14 != (long *)0x0) &&
             (uVar13 = (**(code **)*plVar14)(plVar14,puVar9), (uVar13 & 1) != 0)) {
            local_c8 = 0;
            uStack_b8 = 0;
            local_d8 = puVar2;
            puStack_d0 = puVar3;
            local_c0 = puVar3;
            FUN_01811430(&local_d8);
            iVar12 = *(int *)((long)plVar14 + 0x77f4);
            iVar7 = (int)plVar14[0xef6];
            if (iVar12 == 0x3c) {
LAB_016b7c14:
              bVar17 = false;
LAB_016b7c18:
              if ((*(ushort *)((long)plVar14 + 0xaf64) & 0x40) == 0) {
                bVar17 = true;
              }
              if ((iVar7 != 0x3d) && (bVar17)) {
                FUN_01f0929c(plVar14);
                goto LAB_016b7a50;
              }
            }
            else {
              if (iVar7 == 0x3c) {
LAB_016b7c4c:
                bVar17 = false;
              }
              else {
                if (iVar12 == 0x10) goto LAB_016b7c14;
                if (iVar7 == 0x10) goto LAB_016b7c4c;
                bVar17 = iVar12 != 0x3e && iVar7 != 0x3e;
              }
              if (iVar12 != 0x3d) goto LAB_016b7c18;
            }
            FUN_03722940(*(undefined8 *)PTR_DAT_04bb4e28,&local_b0,&local_d8);
            iVar12 = *(int *)((long)plVar14 + 0x77f4);
            iVar7 = (int)plVar14[0xef6];
            if (iVar12 == 0x3c) {
LAB_016b7c8c:
              bVar17 = false;
LAB_016b7d10:
              if ((*(ushort *)((long)plVar14 + 0xaf64) & 0x40) == 0) {
                bVar17 = true;
              }
              if ((iVar7 != 0x3d) && (bVar17)) goto LAB_016b7a50;
            }
            else {
              if (iVar7 == 0x3c) {
                bVar17 = false;
              }
              else {
                if (iVar12 == 0x10) goto LAB_016b7c8c;
                if (iVar7 == 0x10) {
                  bVar17 = false;
                }
                else {
                  bVar17 = iVar12 != 0x3e && iVar7 != 0x3e;
                }
              }
              if (iVar12 != 0x3d) goto LAB_016b7d10;
            }
            (**(code **)(*plVar14 + 0x38))(plVar14,0x3e,0,0);
          }
        }
      }
LAB_016b7a50:
      plVar19 = plVar19 + 1;
      lVar18 = lVar18 + -8;
    } while (lVar18 != 0);
  }
  return;
}

