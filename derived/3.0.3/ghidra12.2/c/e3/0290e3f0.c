
/* WARNING: Removing unreachable block (ram,0x0290e43c) */

void FUN_0290e3f0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  short *psVar11;
  short *local_e0;
  long local_d8;
  uint local_d0;
  byte local_cc;
  int local_74;
  short *local_70;
  uint *puStack_68;
  
  local_d0 = 1;
  (**(code **)(DAT_055cc228 + 0x18))(&DAT_055cc228);
  local_d0 = 0;
  local_cc = 0;
  uVar6 = FUN_03ea9450(param_1,&local_d0,DAT_055cc230);
  puVar4 = PTR_DAT_04bb2720;
  if (((uVar6 & 1) != 0) && (local_cc - 0xc0 < 2)) {
    local_70 = (short *)*param_1;
    puStack_68 = (uint *)((long)local_70 + (ulong)local_d0);
    if ((local_70 != (short *)0x0) && ((*puStack_68 & 0xfe) == 0xc0)) {
      uVar2 = *puStack_68 >> 8;
      if (*local_70 == 0x5942) {
        uVar2 = uVar2 & 0xff00 | *puStack_68 >> 0x18 | (uVar2 & 0xff) << 0x10;
      }
      if (uVar2 != 0) {
        uVar9 = 0;
        do {
          uVar6 = FUN_03ea9ac4(&local_70,&local_74,uVar9);
          if ((uVar6 & 1) != 0) {
            if (local_74 < 0x220f9762) {
              if (local_74 == -0x39782e6c) {
                local_d0 = 2;
              }
              else if (local_74 == -0x29c7bf2a) {
                local_d0 = 1;
              }
              else {
LAB_0290e5d0:
                local_d0 = 4;
              }
            }
            else if (local_74 == 0x220f9762) {
              local_d0 = 0;
            }
            else {
              if (local_74 != 0x488d6fcb) goto LAB_0290e5d0;
              local_d0 = 3;
            }
            plVar10 = &DAT_055cc1c8;
            if (local_d0 < 4) {
              plVar10 = &DAT_055cc1d8 + (long)(int)local_d0 * 2;
            }
            (**(code **)(*plVar10 + 0x18))(plVar10);
            FUN_0071b954(&local_d0,"Stage/%s.byml",plVar10[1]);
            uVar6 = FUN_03eba3a0(&local_d0);
            if ((uVar6 & 1) != 0) {
              lVar8 = *(long *)puVar4;
              if ((lVar8 == 0) || (*(long *)(lVar8 + 0x330) == 0)) {
LAB_0290e6a0:
                lVar8 = FUN_03eb9ee0(&local_d0,0x40,0,1);
              }
              else {
                puVar7 = (undefined8 *)
                         (**(code **)(*DAT_05aed668 + 0x18))
                                   (DAT_05aed668,*(undefined4 *)(lVar8 + 0x338));
                iVar5 = FUN_006bd550(*puVar7,0);
                if ((iVar5 != 0x758f7eaf) ||
                   (((lVar8 = *(long *)puVar4, lVar8 == 0 ||
                     (lVar8 = *(long *)(lVar8 + 0x330), lVar8 == 0)) ||
                    (lVar8 = *(long *)(lVar8 + 0x238), lVar8 == 0)))) goto LAB_0290e6a0;
                lVar8 = FUN_03eba090(&local_d0,lVar8,0x40,0,1,0);
              }
              if (lVar8 != 0) {
                psVar11 = *(short **)(lVar8 + 8);
                local_d8 = 0;
                local_e0 = psVar11;
                if (psVar11 != (short *)0x0) {
                  uVar6 = FUN_03eaa5e0(psVar11);
                  if ((uVar6 & 1) == 0) {
                    local_e0 = (short *)0x0;
                    local_d8 = 0;
                  }
                  else {
                    uVar1 = *(uint *)(psVar11 + 6);
                    uVar3 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
                    if (*psVar11 != 0x5942) {
                      uVar3 = uVar1;
                    }
                    if (uVar3 != 0) {
                      local_d8 = (long)psVar11 + (ulong)uVar3;
                    }
                  }
                }
                FUN_0290e3f0(&local_e0);
                FUN_0290e700(&local_e0);
                FUN_02910de0(&local_e0);
              }
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar2 != uVar9);
      }
    }
  }
  return;
}

