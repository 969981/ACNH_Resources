
/* WARNING: Removing unreachable block (ram,0x0290da20) */
/* WARNING: Removing unreachable block (ram,0x0290db10) */

void FUN_0290d9d0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  short *psVar10;
  uint uVar11;
  short *local_e0;
  long local_d8;
  undefined8 local_d0;
  uint *puStack_c8;
  int local_74;
  short *local_70;
  uint *puStack_68;
  
  local_d0._0_4_ = 1;
  (**(code **)(DAT_055cc228 + 0x18))(&DAT_055cc228);
  local_d0 = (short *)((ulong)local_d0._5_3_ << 0x28);
  uVar5 = FUN_03ea9450(param_2,&local_d0,DAT_055cc230);
  puVar2 = PTR_DAT_04bb2720;
  if (((uVar5 & 1) != 0) && (local_d0._4_1_ - 0xc0 < 2)) {
    local_70 = (short *)*param_2;
    puStack_68 = (uint *)((long)local_70 + ((ulong)local_d0 & 0xffffffff));
    if ((local_70 != (short *)0x0) && ((*puStack_68 & 0xfe) == 0xc0)) {
      uVar11 = *puStack_68 >> 8;
      if (*local_70 == 0x5942) {
        uVar11 = uVar11 & 0xff00 | *puStack_68 >> 0x18 | (uVar11 & 0xff) << 0x10;
      }
      if (uVar11 != 0) {
        uVar8 = 0;
        do {
          uVar5 = FUN_03ea9ac4(&local_70,&local_74,uVar8);
          if ((uVar5 & 1) != 0) {
            if (local_74 < 0x220f9762) {
              if (local_74 == -0x39782e6c) {
                uVar3 = 2;
              }
              else if (local_74 == -0x29c7bf2a) {
                uVar3 = 1;
              }
              else {
LAB_0290dcd4:
                uVar3 = 4;
              }
            }
            else if (local_74 == 0x220f9762) {
              uVar3 = 0;
            }
            else {
              if (local_74 != 0x488d6fcb) goto LAB_0290dcd4;
              uVar3 = 3;
            }
            local_d0 = (short *)CONCAT44(local_d0._4_4_,uVar3);
            plVar9 = &DAT_055cc1c8;
            if (uVar3 < 4) {
              plVar9 = &DAT_055cc1d8 + (long)(int)uVar3 * 2;
            }
            (**(code **)(*plVar9 + 0x18))(plVar9);
            FUN_0071b954(&local_d0,"Stage/%s.byml",plVar9[1]);
            uVar5 = FUN_03eba3a0(&local_d0);
            if ((uVar5 & 1) != 0) {
              lVar7 = *(long *)puVar2;
              if ((lVar7 == 0) || (*(long *)(lVar7 + 0x330) == 0)) {
LAB_0290ddb0:
                lVar7 = FUN_03eb9ee0(&local_d0,0x40,0,1);
              }
              else {
                puVar6 = (undefined8 *)
                         (**(code **)(*DAT_05aed668 + 0x18))
                                   (DAT_05aed668,*(undefined4 *)(lVar7 + 0x338));
                iVar4 = FUN_006bd550(*puVar6,0);
                if ((iVar4 != 0x758f7eaf) ||
                   (((lVar7 = *(long *)puVar2, lVar7 == 0 ||
                     (lVar7 = *(long *)(lVar7 + 0x330), lVar7 == 0)) ||
                    (lVar7 = *(long *)(lVar7 + 0x238), lVar7 == 0)))) goto LAB_0290ddb0;
                lVar7 = FUN_03eba090(&local_d0,lVar7,0x40,0,1,0);
              }
              if (lVar7 != 0) {
                psVar10 = *(short **)(lVar7 + 8);
                local_d8 = 0;
                local_e0 = psVar10;
                if (psVar10 != (short *)0x0) {
                  uVar5 = FUN_03eaa5e0(psVar10);
                  if ((uVar5 & 1) == 0) {
                    local_e0 = (short *)0x0;
                    local_d8 = 0;
                  }
                  else {
                    uVar1 = *(uint *)(psVar10 + 6);
                    uVar3 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
                    if (*psVar10 != 0x5942) {
                      uVar3 = uVar1;
                    }
                    if (uVar3 != 0) {
                      local_d8 = (long)psVar10 + (ulong)uVar3;
                    }
                  }
                }
                FUN_0290d9d0(param_1,&local_e0);
              }
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar11 != uVar8);
      }
    }
  }
  local_d0._0_4_ = 2;
  (**(code **)(DAT_055cc238 + 0x18))(&DAT_055cc238);
  local_d0 = (short *)((ulong)local_d0._5_3_ << 0x28);
  uVar5 = FUN_03ea9450(param_2,&local_d0,DAT_055cc240);
  if (((uVar5 & 1) != 0) && (local_d0._4_1_ - 0xc0 < 2)) {
    psVar10 = (short *)*param_2;
    puStack_c8 = (uint *)((long)psVar10 + ((ulong)local_d0 & 0xffffffff));
    if ((psVar10 != (short *)0x0) && ((*puStack_c8 & 0xfe) == 0xc0)) {
      uVar11 = *puStack_c8 >> 8;
      if (*psVar10 == 0x5942) {
        uVar11 = uVar11 & 0xff00 | *puStack_c8 >> 0x18 | (uVar11 & 0xff) << 0x10;
      }
      if (uVar11 != 0) {
        uVar8 = 0;
        local_d0 = psVar10;
        do {
          uVar5 = FUN_03ea9ac4(&local_d0,&local_74,uVar8);
          if (((uVar5 & 1) != 0) && (uVar3 = FUN_0292e100(local_74), uVar3 != 0x23)) {
            local_e0 = (short *)CONCAT44(local_e0._4_4_,uVar3);
            if ((uVar3 < 0x23) && (uVar3 < 0x23)) {
              uVar5 = (ulong)(uVar3 >> 3) & 0x1ffffffc;
              *(uint *)(param_1 + uVar5) = *(uint *)(param_1 + uVar5) | 1 << (ulong)(uVar3 & 0x1f);
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar11 != uVar8);
      }
    }
  }
  return;
}

