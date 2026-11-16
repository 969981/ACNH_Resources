
void FUN_028a9020(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  void *__s;
  undefined8 *puVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  undefined8 *puVar18;
  uint *puVar19;
  uint *puVar20;
  long lVar21;
  long lVar22;
  uint local_80c;
  undefined4 uStack_808;
  uint local_804;
  undefined *local_800;
  undefined1 *puStack_7f8;
  undefined4 local_7f0;
  undefined1 local_7ec [31];
  undefined1 local_7cd;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  lVar17 = *(long *)PTR_DAT_04bb46b0;
  if (lVar17 != 0) {
    puVar18 = *(undefined8 **)(lVar17 + 0x10);
    if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
      lVar12 = (**(code **)(*(long *)*puVar18 + 0x38))();
      lVar17 = 0;
      if (lVar12 != 0) {
        lVar17 = lVar12 + 0x70;
      }
      goto LAB_028a90a4;
    }
    if (puVar18 != (undefined8 *)0x0) {
      lVar17 = 0;
      if ((long *)puVar18[0x26] != (long *)0x0) {
        lVar17 = (**(code **)(*(long *)puVar18[0x26] + 0x38))();
      }
      goto LAB_028a90a4;
    }
  }
  lVar17 = 0;
LAB_028a90a4:
  if (*(long **)(lVar17 + 0x1a0b70) == (long *)0x0) {
    uVar13 = 0;
  }
  else {
    puVar18 = (undefined8 *)**(long **)(lVar17 + 0x1a0b70);
    uVar13 = 0;
    if (puVar18 != (undefined8 *)0x0) {
      uVar13 = (**(code **)*puVar18)();
    }
  }
  local_8c = *(uint *)(*(long *)(lVar17 + 0x1a0b58) + *(long *)(lVar17 + 0x1a0b50));
  if (3 < local_8c) {
    local_8c = 0;
  }
  if ((((uVar13 & 1) != 0) && (*(long *)(lVar17 + 0x1a0b70) != 0)) &&
     (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0x1a0b70) + 8), puVar18 != (undefined8 *)0x0)) {
    (**(code **)*puVar18)();
  }
  puVar10 = PTR_DAT_04bc0510;
  puVar9 = PTR_DAT_04bb43c0;
  if ((int)local_8c < 2) {
    local_80c = nn::time::GetDayOfWeek
                          ((int)*(short *)(param_2 + 0x10),(int)*(char *)(param_2 + 0x12),
                           (int)*(char *)(param_2 + 0x13));
    lVar17 = 0;
    lVar12 = 0;
    puVar1 = PTR_DAT_04bb2028 + 0x10;
    do {
      lVar21 = *(long *)puVar9;
      lVar22 = param_1 + (ulong)local_80c * 0x200;
      if (6 < local_80c) {
        lVar22 = param_1;
      }
      puVar18 = (undefined8 *)(lVar22 + lVar17);
      uVar11 = FUN_0277d6c4(puVar18);
      lVar22 = *(long *)puVar9;
      if (lVar22 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar21 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          local_80 = (uint *)*puVar18;
          local_78 = 0;
          local_88 = (undefined **)(puVar10 + 0x10);
          uVar11 = FUN_0277d6c4(&local_80);
          if (*(long *)puVar9 != 0) {
            lVar22 = *(long *)(lVar22 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar22 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
              lVar22 = *(long *)PTR_DAT_04bc0428;
              uVar11 = FUN_0277d6c4(puVar18);
              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
              if ((uVar11 < *(uint *)(lVar22 + 0x1d8)) &&
                 (((puVar19 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar11 * 8),
                   puVar19 != (uint *)0x0 && (uVar11 = *puVar19, uVar11 != 0)) &&
                  (puVar19 != (uint *)(ulong)uVar11)))) {
                puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar11);
                if (((*puVar20 != 0) && (uVar11 = puVar20[1], uVar11 != 0)) &&
                   ((ulong)(ushort)puVar20[2] != 0)) {
                  lVar22 = 0xc;
                  if (*(char *)((long)puVar20 + 10) != '\0') {
                    lVar22 = 0x1c;
                  }
                  lVar22 = (long)puVar20 + lVar22 + (ulong)(ushort)puVar20[2] * 8;
                  if (lVar22 != 0) {
                    uVar3 = 0;
                    if ((ulong)uVar11 != 0) {
                      uVar3 = (uint)((ulong)((long)puVar19 - lVar22) / (ulong)uVar11);
                    }
                    if (*puVar20 <= uVar3) {
                      uVar3 = 0xffffffff;
                    }
                    if ((uVar3 < *(uint *)PTR_DAT_04bc0068) &&
                       (*(short *)(*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar3 * 2) == 0x19))
                    {
                      puVar14 = &DAT_0407ebb1;
                      local_7f0 = 0x20;
                      local_7cd = 0;
                      local_7ec[0] = 0;
                      if (local_80c < 7) {
                        puVar14 = (undefined8 *)(&PTR_DAT_04a91f60)[local_80c];
                      }
                      local_800 = puVar1;
                      puStack_7f8 = local_7ec;
                      FUN_038d1270(&local_800,"Shop.Zakka.%s.Remove",puVar14);
                      puVar8 = PTR_DAT_04bb37e0;
                      *(undefined2 *)puVar18 = *(undefined2 *)PTR_DAT_04bb37e0;
                      *(undefined *)((long)puVar18 + 2) = puVar8[2];
                      *(undefined *)((long)puVar18 + 3) = puVar8[3];
                      *(undefined4 *)((long)puVar18 + 4) = *(undefined4 *)(puVar8 + 4);
                      lVar22 = param_1 + 0xe00 + (ulong)local_80c * 0x100;
                      if (6 < local_80c) {
                        lVar22 = param_1 + 0xe00;
                      }
                      *(undefined4 *)(lVar22 + lVar12 * 4) = 0;
                      lVar22 = param_1 + 0x1500 + (ulong)local_80c * 0x40;
                      if (6 < local_80c) {
                        lVar22 = param_1 + 0x1500;
                      }
                      *(undefined1 *)(lVar22 + lVar12) = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
      lVar17 = lVar17 + 8;
      lVar12 = lVar12 + 1;
    } while (lVar17 != 0x200);
  }
  else {
    local_800 = PTR_DAT_04bbfe60 + 0x10;
    memset(&puStack_7f8,0,0x754);
    uVar11 = nn::os::GetSystemTick();
    local_a4 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
    local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
    local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
    local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
    __s = (void *)FUN_01a451fc(&local_800);
    memset(__s,0,0x754);
    local_80 = &local_80c;
    local_80c = 0x19;
    local_88 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(&local_800,&local_88);
    local_804 = nn::time::GetDayOfWeek
                          ((int)*(short *)(param_2 + 0x10),(int)*(char *)(param_2 + 0x12),
                           (int)*(char *)(param_2 + 0x13));
    lVar17 = 0;
    lVar12 = *(long *)puVar9;
    do {
      lVar22 = param_1 + (ulong)local_804 * 0x200;
      if (6 < local_804) {
        lVar22 = param_1;
      }
      plVar2 = (long *)(lVar22 + lVar17);
      uVar11 = FUN_0277d6c4(plVar2);
      lVar22 = *(long *)puVar9;
      if (lVar22 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          local_80 = (uint *)*plVar2;
          local_78 = 0;
          local_88 = (undefined **)(puVar10 + 0x10);
          uVar11 = FUN_0277d6c4(&local_80);
          lVar12 = *(long *)puVar9;
          if (lVar12 != 0) {
            lVar22 = *(long *)(lVar22 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar22 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
              lVar22 = *(long *)PTR_DAT_04bc0428;
              uVar11 = FUN_0277d6c4(plVar2);
              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
              lVar12 = *(long *)puVar9;
              if (uVar11 < *(uint *)(lVar22 + 0x1d8)) {
                puVar19 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar11 * 8);
                if (puVar19 != (uint *)0x0) {
                  uVar11 = *puVar19;
                  if ((uVar11 != 0) && (puVar19 != (uint *)(ulong)uVar11)) {
                    puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar11);
                    if (*puVar20 != 0) {
                      uVar11 = puVar20[1];
                      if (uVar11 != 0) {
                        if ((ulong)(ushort)puVar20[2] != 0) {
                          lVar22 = 0xc;
                          if (*(char *)((long)puVar20 + 10) != '\0') {
                            lVar22 = 0x1c;
                          }
                          lVar22 = (long)puVar20 + lVar22 + (ulong)(ushort)puVar20[2] * 8;
                          if (lVar22 != 0) {
                            uVar3 = 0;
                            if ((ulong)uVar11 != 0) {
                              uVar3 = (uint)((ulong)((long)puVar19 - lVar22) / (ulong)uVar11);
                            }
                            if (*puVar20 <= uVar3) {
                              uVar3 = 0xffffffff;
                            }
                            if (uVar3 < *(uint *)PTR_DAT_04bc0068) {
                              uVar5 = *(ushort *)
                                       (*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar3 * 2);
                              if ((uVar5 < 0x13e) && (uVar5 == 0x19)) {
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          lVar12 = lVar22;
        }
      }
      lVar17 = lVar17 + 8;
    } while (lVar17 != 0x200);
    puVar19 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar11 = *puVar19 ^ *puVar19 << 0xb;
    uVar4 = puVar19[3];
    *puVar19 = puVar19[1];
    puVar19[1] = puVar19[2];
    uVar3 = uVar11 ^ uVar4;
    uVar11 = uVar11 >> 8 ^ uVar4 >> 0x13 ^ uVar3;
    puVar19[2] = uVar4;
    puVar19[3] = uVar11;
    uVar11 = (uVar11 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
    uVar3 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 2;
    local_88 = (undefined **)CONCAT44(uVar3,uVar11);
    uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
    uVar6 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
    local_80 = (uint *)CONCAT44(uVar6,uVar4);
    lVar12 = (**(code **)(local_800 + 0x20))(&local_800);
    lVar17 = 0;
    iVar15 = 0;
    do {
      puVar19 = (uint *)(lVar12 + lVar17);
      lVar17 = lVar17 + 4;
      uVar16 = *puVar19 - (*puVar19 >> 1 & 0x55555555);
      uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
      uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
      uVar16 = uVar16 + (uVar16 >> 8);
      iVar15 = (uVar16 + (uVar16 >> 0x10) & 0x3f) + iVar15;
    } while (lVar17 != 0x754);
    if (iVar15 == 0) {
      local_80c = *(uint *)PTR_DAT_04bb37e0;
      uStack_808 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    }
    else {
      lVar12 = (**(code **)(local_800 + 0x20))(&local_800);
      lVar17 = 0;
      uVar16 = 0;
      do {
        puVar19 = (uint *)(lVar12 + lVar17);
        lVar17 = lVar17 + 4;
        uVar7 = *puVar19 - (*puVar19 >> 1 & 0x55555555);
        uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
        uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
        uVar7 = uVar7 + (uVar7 >> 8);
        uVar16 = (uVar7 + (uVar7 >> 0x10) & 0x3f) + uVar16;
      } while (lVar17 != 0x754);
      uVar11 = uVar11 ^ uVar11 * 0x800;
      local_88 = (undefined **)CONCAT44(uVar4,uVar3);
      uVar11 = uVar11 >> 8 ^ uVar6 >> 0x13 ^ uVar11 ^ uVar6;
      local_80 = (uint *)CONCAT44(uVar11,uVar6);
      FUN_00889f80(&local_80c,&local_800,(int)((ulong)uVar11 * (ulong)uVar16 >> 0x20) + 1);
      FUN_01a4c66c(&local_88,&local_80c);
    }
    lVar17 = *(long *)puVar9;
    uVar11 = FUN_0277d6c4(&local_80c);
    if (*(long *)puVar9 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
        FUN_0289ee00(param_1,&local_80c,local_804,0);
      }
    }
  }
  return;
}

