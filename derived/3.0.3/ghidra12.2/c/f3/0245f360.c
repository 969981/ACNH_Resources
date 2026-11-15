
undefined8 FUN_0245f360(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  byte *pbVar18;
  byte local_78 [4];
  undefined4 local_74;
  undefined2 local_70;
  byte local_6c [4];
  undefined4 local_68;
  undefined2 local_64;
  
  uVar11 = FUN_0245bbd8(*(long *)(param_1 + 0x68) + 0x278);
  uVar16 = 0;
  if (((uVar11 & 1) == 0) && (*(int *)(param_1 + 0x178) == 0)) {
    FUN_02507c6c(local_6c,7,1,1,0);
    puVar8 = PTR_DAT_04bb5038;
    puVar7 = PTR_DAT_04bb4718;
    puVar6 = PTR_DAT_04bb3350;
    puVar5 = PTR_DAT_04bb3238;
    puVar4 = PTR_DAT_04bb27c0;
    uVar14 = (uint)local_6c[0];
    local_74 = local_68;
    local_78[0] = 0xff;
    if (local_6c[0] < 8) {
      local_78[0] = local_6c[0];
    }
    local_70 = local_64;
    if (local_6c[0] < 8) {
      puVar1 = PTR_DAT_04bb3780 + 0x10;
      do {
        if (7 < *(byte *)(param_1 + 0x1ee8) || *(byte *)(param_1 + 0x1ee8) != uVar14) {
          puVar2 = (uint *)puVar5;
          if (*(long *)puVar7 != 0) {
            puVar2 = (uint *)(*(long *)puVar7 + (ulong)uVar14 * 4 + 0xde8);
          }
          lVar15 = *(long *)puVar4;
          if (lVar15 != 0) {
            uVar14 = *puVar2;
            if ((((uVar14 == 0) ||
                 (plVar17 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                                      ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0))
                || ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) ||
               (*(uint *)(plVar17 + 0x46) != uVar14)) {
              plVar17 = (long *)0x0;
            }
            if (*(int *)(lVar15 + 0x288) == 1 || *(int *)(lVar15 + 0x288) == -1) {
              plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
              lVar15 = *(long *)puVar4;
              iVar10 = (**(code **)(*plVar12 + 0x60))();
              if (iVar10 < 0x11) {
                uVar14 = 1;
              }
              else {
                uVar14 = *(uint *)(lVar15 + 0x5e8);
                if (4 < uVar14) goto LAB_0245f518;
                uVar14 = 0x1aU >> (ulong)(uVar14 & 0x1f) & 1;
              }
            }
            else {
LAB_0245f518:
              uVar14 = 0;
            }
            if (plVar17 != (long *)0x0) {
              lVar15 = plVar17[0x2a];
              if (((*PTR_DAT_04bb3778 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar10 != 0)) {
                *(undefined **)PTR_DAT_04bb3770 = puVar1;
                __cxa_guard_release(PTR_DAT_04bb3778);
              }
              uVar11 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb3770);
              uVar3 = 0;
              if ((int)lVar15 == 1) {
                uVar3 = uVar14;
              }
              if (((uVar11 & 1) != 0) && (uVar3 != 0)) {
                uVar14 = 0;
                if (plVar17[0xe] != 0) {
                  uVar3 = *(uint *)(plVar17[0xe] + 0x280);
                  uVar14 = 0;
                  if (uVar3 < 0x149) {
                    uVar14 = uVar3;
                  }
                }
                if ((uVar14 - 0x49 < 0xc) && ((1 << (ulong)(uVar14 - 0x49 & 0x1f) & 0xdddU) != 0)) {
                  return 0;
                }
              }
            }
          }
        }
        bVar9 = local_78[0];
        uVar11 = (ulong)local_78[0];
        if ((7 < local_78[0]) || (uVar11 + 1 == 8)) break;
        pbVar18 = puVar8 + uVar11 + 1;
        uVar13 = FUN_02507924(local_78,pbVar18);
        if ((uVar13 & 1) == 0) {
          if (uVar11 + 2 == 8) break;
          pbVar18 = puVar8 + uVar11 + 2;
          uVar13 = FUN_02507924(local_78,pbVar18);
          if ((uVar13 & 1) == 0) {
            if (uVar11 + 3 == 8) break;
            pbVar18 = puVar8 + uVar11 + 3;
            uVar13 = FUN_02507924(local_78,pbVar18);
            if ((uVar13 & 1) == 0) {
              if (uVar11 + 4 == 8) break;
              pbVar18 = puVar8 + uVar11 + 4;
              uVar13 = FUN_02507924(local_78,pbVar18);
              if ((uVar13 & 1) == 0) {
                if (uVar11 + 5 == 8) break;
                pbVar18 = puVar8 + uVar11 + 5;
                uVar13 = FUN_02507924(local_78,pbVar18);
                if ((uVar13 & 1) == 0) {
                  if (uVar11 + 6 == 8) break;
                  pbVar18 = puVar8 + uVar11 + 6;
                  uVar13 = FUN_02507924(local_78,pbVar18);
                  if ((uVar13 & 1) == 0) {
                    if (uVar11 + 7 == 8) break;
                    pbVar18 = puVar8 + uVar11 + 7;
                    uVar13 = FUN_02507924(local_78,pbVar18);
                    if ((uVar13 & 1) == 0) {
                      if (bVar9 == 0) break;
                      pbVar18 = puVar8 + uVar11 + 8;
                      FUN_02507924(local_78,pbVar18);
                    }
                  }
                }
              }
            }
          }
        }
        uVar14 = (uint)*pbVar18;
        if (7 < uVar14) break;
        local_78[0] = *pbVar18;
      } while( true );
    }
    uVar16 = 1;
    FUN_0236a88c(param_1,6,1,0);
  }
  return uVar16;
}

