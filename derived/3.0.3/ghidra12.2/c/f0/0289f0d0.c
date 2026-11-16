
void FUN_0289f0d0(long param_1,long *param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined *puVar9;
  uint uVar10;
  uint *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  ulong local_220;
  int local_20c;
  undefined2 local_200;
  undefined1 local_1fe;
  undefined1 local_1fd;
  undefined4 local_1fc;
  long local_1f8;
  undefined2 local_1ec;
  undefined1 local_1ea;
  undefined1 local_1e9;
  undefined4 local_1e8;
  uint local_1e4;
  uint uStack_1e0;
  uint local_1dc;
  int iStack_1d8;
  undefined2 local_1d4;
  undefined1 local_1d2 [2];
  undefined4 local_1d0 [63];
  uint local_d4;
  undefined *local_d0;
  undefined1 *puStack_c8;
  undefined4 local_c0;
  undefined1 local_bc [31];
  undefined1 local_9d;
  undefined1 auStack_98 [16];
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint *local_78;
  uint local_6c;
  
  FUN_02690004(&local_1d4);
  puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar19 = *puVar11 ^ *puVar11 << 0xb;
  uVar4 = puVar11[3];
  *puVar11 = puVar11[1];
  puVar11[1] = puVar11[2];
  uVar10 = uVar19 ^ uVar4;
  uVar19 = uVar19 >> 8 ^ uVar4 >> 0x13 ^ uVar10;
  puVar11[2] = uVar4;
  puVar11[3] = uVar19;
  local_1e4 = (uVar19 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  uStack_1e0 = (local_1e4 ^ local_1e4 >> 0x1e) * 0x6c078965 + 2;
  local_1dc = (uStack_1e0 ^ uStack_1e0 >> 0x1e) * 0x6c078965 + 3;
  iStack_1d8 = (local_1dc ^ local_1dc >> 0x1e) * 0x6c078965 + 4;
  lVar12 = (**(code **)(*param_2 + 0x20))(param_2);
  lVar16 = 0;
  iVar15 = 0;
  do {
    puVar11 = (uint *)(lVar12 + lVar16);
    lVar16 = lVar16 + 4;
    uVar19 = *puVar11 - (*puVar11 >> 1 & 0x55555555);
    uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
    uVar19 = uVar19 + (uVar19 >> 4) & 0xf0f0f0f;
    uVar19 = uVar19 + (uVar19 >> 8);
    iVar15 = (uVar19 + (uVar19 >> 0x10) & 0x3f) + iVar15;
  } while (lVar16 != 0x754);
  if (iVar15 != 0) {
    local_20c = FUN_01a4cc70(&local_1e4,&local_1d4,param_2,param_3 * 7,0,0,PTR_FUN_04bb67e0,0);
    uVar19 = 0;
    lVar16 = param_1 + 0xe00;
    local_220 = 0;
    puVar1 = PTR_DAT_04bb2028 + 0x10;
    do {
      if (uVar19 != 0x20) {
        iVar15 = 1;
        do {
          puVar9 = PTR_DAT_04bb43c0;
          lVar12 = (long)((ulong)uVar19 << 0x20) >> 0x1d;
          uVar8 = *(undefined2 *)(local_1d2 + lVar12 + -2);
          uVar6 = local_1d2[lVar12];
          uVar7 = local_1d2[lVar12 + 1];
          uVar5 = *(undefined4 *)((long)local_1d0 + lVar12);
          if (0 < local_20c) {
            lVar18 = *(long *)PTR_DAT_04bb43c0;
            local_1ec = uVar8;
            local_1ea = uVar6;
            local_1e9 = uVar7;
            local_1e8 = uVar5;
            uVar10 = FUN_0277d6c4(&local_1ec);
            lVar12 = *(long *)puVar9;
            if (lVar12 != 0) {
              lVar18 = *(long *)(lVar18 + 0x57e58);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
              if ((uVar10 < *(uint *)(lVar18 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                local_1f8 = 0;
                local_200 = uVar8;
                local_1fe = uVar6;
                local_1fd = uVar7;
                local_1fc = uVar5;
                uVar10 = FUN_0277d6c4(&local_200);
                if (*(long *)PTR_DAT_04bb43c0 != 0) {
                  lVar12 = *(long *)(lVar12 + 0x57e58);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                  if ((uVar10 < *(uint *)(lVar12 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                    lVar12 = *(long *)PTR_DAT_04bc0428;
                    uVar10 = FUN_0277d6c4(&local_1ec);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                    if ((uVar10 < *(uint *)(lVar12 + 0x1d8)) &&
                       (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar10 * 8),
                       lVar12 != 0)) {
                      local_1f8 = lVar12;
                    }
                  }
                }
                lVar12 = 0;
                lVar18 = 0;
                local_6c = (uint)local_220;
                do {
                  lVar17 = param_1 + (local_220 & 0xffffffff) * 0x200;
                  if (6 < local_6c) {
                    lVar17 = param_1;
                  }
                  if (*(short *)(lVar17 + lVar12) == -2) {
                    lVar3 = lVar16 + (local_220 & 0xffffffff) * 0x100;
                    if (6 < local_6c) {
                      lVar3 = lVar16;
                    }
                    if (-1 < *(int *)(lVar3 + lVar18 * 4)) goto LAB_0289f418;
LAB_0289f45c:
                    puVar2 = (undefined4 *)(lVar17 + lVar18 * 8);
                    *(undefined2 *)puVar2 = uVar8;
                    *(undefined1 *)((long)puVar2 + 2) = uVar6;
                    *(undefined1 *)((long)puVar2 + 3) = uVar7;
                    puVar2[1] = uVar5;
                    lVar12 = lVar16 + (local_220 & 0xffffffff) * 0x100;
                    if (6 < local_6c) {
                      lVar12 = lVar16;
                    }
                    *(undefined4 *)(lVar12 + lVar18 * 4) = param_4;
                    lVar12 = param_1 + 0x1500 + (local_220 & 0xffffffff) * 0x40;
                    if (6 < local_6c) {
                      lVar12 = param_1 + 0x1500;
                    }
                    *(undefined1 *)(lVar12 + lVar18) = 1;
                    puVar9 = PTR_DAT_04bb43c0;
                    local_80 = *puVar2;
                    uStack_7c = puVar2[1];
                    local_78 = (uint *)0x0;
                    local_88 = PTR_DAT_04bc0510 + 0x10;
                    lVar12 = *(long *)PTR_DAT_04bb43c0;
                    uVar10 = FUN_0277d6c4(&local_80);
                    if (*(long *)puVar9 != 0) {
                      lVar12 = *(long *)(lVar12 + 0x57e58);
                      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                      if ((uVar10 < *(uint *)(lVar12 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                        lVar12 = *(long *)PTR_DAT_04bc0428;
                        uVar10 = FUN_0277d6c4(puVar2);
                        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                        if ((uVar10 < *(uint *)(lVar12 + 0x1d8)) &&
                           (puVar11 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar10 * 8),
                           puVar11 != (uint *)0x0)) {
                          local_78 = puVar11;
                        }
                      }
                    }
                    FUN_01afb1a0(&local_88,auStack_98);
                    local_9d = 0;
                    local_c0 = 0x20;
                    puVar13 = &DAT_0407ebb1;
                    local_bc[0] = 0;
                    if (local_6c < 7) {
                      puVar13 = *(undefined8 **)(PTR_s_Sunday_04bc3898 + (ulong)local_6c * 8 + 0x40)
                      ;
                    }
                    if (local_78 == (uint *)0x0) {
                      local_d4 = 0xbc;
                    }
                    else {
                      uVar10 = *local_78;
                      local_d4 = 0;
                      if ((uVar10 != 0) && (local_78 != (uint *)(ulong)uVar10)) {
                        puVar11 = (uint *)((long)local_78 - (long)(ulong)uVar10);
                        local_d4 = 0;
                        if (*puVar11 != 0) {
                          uVar10 = puVar11[1];
                          if ((uVar10 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
                            lVar12 = 0xc;
                            if (*(char *)((long)puVar11 + 10) != '\0') {
                              lVar12 = 0x1c;
                            }
                            lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
                            if (lVar12 != 0) {
                              uVar4 = 0;
                              if ((ulong)uVar10 != 0) {
                                uVar4 = (uint)((ulong)((long)local_78 - lVar12) / (ulong)uVar10);
                              }
                              if (*puVar11 <= uVar4) {
                                uVar4 = 0xffffffff;
                              }
                              if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                                 (local_d4 = (uint)*(ushort *)
                                                    (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                    (long)(int)uVar4 * 2), local_d4 < 0xbd))
                              goto LAB_0289f630;
                            }
                          }
                          local_d4 = 0;
                        }
                      }
                    }
LAB_0289f630:
                    puVar14 = &DAT_0407ebb1;
                    if (local_d4 < 0xbd) {
                      puVar14 = *(undefined8 **)(PTR_DAT_04bb8f90 + (ulong)local_d4 * 8 + 0x830);
                    }
                    local_d0 = puVar1;
                    puStack_c8 = local_bc;
                    FUN_038d1270(&local_d0,"Shop.Zakka.%s.%s",puVar13,puVar14);
                    break;
                  }
LAB_0289f418:
                  lVar17 = param_1 + (local_220 & 0xffffffff) * 0x200;
                  if (6 < local_6c) {
                    lVar17 = param_1;
                  }
                  if (*(short *)(lVar17 + lVar12 + 8) == -2) {
                    lVar3 = lVar16 + (local_220 & 0xffffffff) * 0x100;
                    if (6 < local_6c) {
                      lVar3 = lVar16;
                    }
                    if (*(int *)(lVar3 + lVar18 * 4 + 4) < 0) {
                      lVar18 = lVar18 + 1;
                      goto LAB_0289f45c;
                    }
                  }
                  lVar18 = lVar18 + 2;
                  lVar12 = lVar12 + 0x10;
                } while (lVar18 != 0x40);
                local_20c = local_20c + -1;
              }
            }
          }
          uVar19 = uVar19 + 1;
        } while ((iVar15 < param_3) && (iVar15 = 2, uVar19 != 0x20));
      }
      local_220 = local_220 + 1;
    } while (local_220 != 7);
  }
  return;
}

