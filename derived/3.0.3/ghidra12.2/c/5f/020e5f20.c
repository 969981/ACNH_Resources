
void FUN_020e5f20(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  uint *puVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  undefined1 *puVar19;
  undefined *local_98;
  undefined1 *local_90;
  undefined **local_88;
  uint *puStack_80;
  code *local_78;
  undefined8 uStack_70;
  uint local_64;
  
  puVar7 = PTR_DAT_04bb3968;
  puVar6 = PTR_DAT_04bb27c0;
  lVar12 = *(long *)PTR_DAT_04bb3968;
  if (lVar12 != 0) {
    uVar18 = 0;
    puVar1 = PTR_DAT_04bb3750 + 0x10;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      if ((*(uint *)(param_1 + 0x208 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0
         ) {
        local_78 = FUN_020e4178;
        uStack_70 = 0;
        iVar9 = *(int *)(*(long *)puVar7 + 0xb88);
        local_88 = &PTR_FUN_04a74088;
        puStack_80 = &local_64;
        local_64 = uVar18;
        if (iVar9 == 0) {
          lVar17 = *(long *)puVar6;
          puVar14 = (uint *)PTR_DAT_04bb3238;
        }
        else {
          puVar13 = *(undefined8 **)(*(long *)puVar7 + 0xb90);
          lVar17 = (long)iVar9 << 3;
          do {
            puVar14 = (uint *)*puVar13;
            uVar10 = (*(code *)*local_88)(&local_88,puVar14);
            if ((uVar10 & 1) != 0) goto LAB_020e6044;
            puVar13 = puVar13 + 1;
            lVar17 = lVar17 + -8;
          } while (lVar17 != 0);
          puVar14 = (uint *)PTR_DAT_04bb3238;
LAB_020e6044:
          lVar17 = *(long *)puVar6;
        }
        if (lVar17 != 0) {
          uVar4 = *puVar14;
          if ((((uVar4 == 0) ||
               (plVar15 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                                    ((ulong)(uVar4 >> 0x11) & 0x7ff8)), plVar15 == (long *)0x0)) ||
              ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar15 + 0x46) != uVar4))
          {
            plVar15 = (long *)0x0;
          }
          if (*(int *)(lVar17 + 0x288) == 1 || *(int *)(lVar17 + 0x288) == -1) {
            plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar17 = *(long *)puVar6;
            iVar9 = (**(code **)(*plVar11 + 0x60))();
            if (iVar9 < 0x11) {
              uVar16 = 1;
            }
            else {
              if (4 < *(uint *)(lVar17 + 0x5e8)) goto LAB_020e60f4;
              uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_020e60f4:
            uVar16 = 0;
          }
          if (plVar15 != (long *)0x0) {
            lVar17 = plVar15[0x2a];
            if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar9 != 0)) {
              *(undefined **)PTR_DAT_04bb37d0 = puVar1;
              __cxa_guard_release(PTR_DAT_04bb37d8);
            }
            uVar10 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb37d0);
            uVar3 = 0;
            if ((int)lVar17 == 1) {
              uVar3 = uVar16;
            }
            if (((uVar10 & 1) != 0) && (uVar3 != 0)) {
              plVar11 = plVar15 + 0x7c;
              local_90 = &DAT_040bf969;
              local_98 = puVar2;
              (**(code **)(plVar15[0x7c] + 0x18))(plVar11);
              (**(code **)(plVar15[0x7c] + 0x18))(plVar11);
              puVar19 = (undefined1 *)plVar15[0x7d];
              (**(code **)(local_98 + 0x18))(&local_98);
              if (puVar19 == local_90) {
LAB_020e5fc8:
                *(uint *)(lVar12 + 0xa24) = uVar4;
              }
              else {
                uVar10 = 0;
                bVar8 = true;
                do {
                  lVar17 = plVar15[0x7d] + 2 + uVar10;
                  cVar5 = *(char *)(lVar17 + -2);
                  if (cVar5 != local_90[uVar10]) break;
                  if (cVar5 == '\0') {
                    if (bVar8) goto LAB_020e5fc8;
                    break;
                  }
                  cVar5 = *(char *)(lVar17 + -1);
                  if (cVar5 != local_90[uVar10 + 1]) break;
                  if (cVar5 == '\0') goto LAB_020e5fc8;
                  cVar5 = *(char *)(plVar15[0x7d] + 2 + uVar10);
                  if (cVar5 != local_90[uVar10 + 2]) break;
                  if (cVar5 == '\0') goto LAB_020e5fc8;
                  bVar8 = uVar10 < 0x7fffe;
                  uVar10 = uVar10 + 3;
                } while (uVar10 != 0x80001);
                local_98 = PTR_DAT_04bb2020 + 0x10;
                local_90 = &DAT_040dedd9;
                (**(code **)(plVar15[0x7c] + 0x18))(plVar11);
                (**(code **)(plVar15[0x7c] + 0x18))(plVar11);
                puVar19 = (undefined1 *)plVar15[0x7d];
                (**(code **)(local_98 + 0x18))(&local_98);
                if (puVar19 == local_90) {
LAB_020e62f4:
                  *(uint *)(lVar12 + 0xa28) = uVar4;
                }
                else {
                  uVar10 = 0;
                  bVar8 = true;
                  do {
                    lVar17 = plVar15[0x7d] + 2 + uVar10;
                    cVar5 = *(char *)(lVar17 + -2);
                    if (cVar5 != local_90[uVar10]) break;
                    if (cVar5 == '\0') {
                      if (bVar8) goto LAB_020e62f4;
                      break;
                    }
                    cVar5 = *(char *)(lVar17 + -1);
                    if (cVar5 != local_90[uVar10 + 1]) break;
                    if (cVar5 == '\0') goto LAB_020e62f4;
                    cVar5 = *(char *)(plVar15[0x7d] + 2 + uVar10);
                    if (cVar5 != local_90[uVar10 + 2]) break;
                    if (cVar5 == '\0') goto LAB_020e62f4;
                    bVar8 = uVar10 < 0x7fffe;
                    uVar10 = uVar10 + 3;
                  } while (uVar10 != 0x80001);
                  local_98 = PTR_DAT_04bb2020 + 0x10;
                  local_90 = &DAT_04066e12;
                  (**(code **)(plVar15[0x7c] + 0x18))(plVar11);
                  (**(code **)(plVar15[0x7c] + 0x18))(plVar11);
                  puVar19 = (undefined1 *)plVar15[0x7d];
                  (**(code **)(local_98 + 0x18))(&local_98);
                  if (puVar19 == local_90) {
LAB_020e63d4:
                    *(uint *)(lVar12 + 0xa2c) = uVar4;
                  }
                  else {
                    uVar10 = 0;
                    bVar8 = true;
                    do {
                      lVar17 = plVar15[0x7d] + 2 + uVar10;
                      cVar5 = *(char *)(lVar17 + -2);
                      if (cVar5 != local_90[uVar10]) break;
                      if (cVar5 == '\0') {
                        if (bVar8) goto LAB_020e63d4;
                        break;
                      }
                      cVar5 = *(char *)(lVar17 + -1);
                      if (cVar5 != local_90[uVar10 + 1]) break;
                      if (cVar5 == '\0') goto LAB_020e63d4;
                      cVar5 = *(char *)(plVar15[0x7d] + 2 + uVar10);
                      if (cVar5 != local_90[uVar10 + 2]) break;
                      if (cVar5 == '\0') goto LAB_020e63d4;
                      bVar8 = uVar10 < 0x7fffe;
                      uVar10 = uVar10 + 3;
                    } while (uVar10 != 0x80001);
                  }
                }
              }
            }
          }
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != 0x10);
  }
  return;
}

