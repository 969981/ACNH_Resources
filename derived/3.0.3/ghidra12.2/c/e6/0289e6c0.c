
void FUN_0289e6c0(long param_1,long *param_2,int param_3,uint param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  uint local_210;
  undefined *local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  long local_1f8;
  undefined4 local_1ec;
  undefined4 uStack_1e8;
  uint local_1e4;
  uint uStack_1e0;
  uint local_1dc;
  int iStack_1d8;
  undefined4 local_1d4 [64];
  uint local_d4;
  undefined8 local_d0;
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
  
  local_210 = 0;
  lVar1 = param_1 + 0xe00;
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  puVar3 = PTR_DAT_04bb2028 + 0x10;
  do {
    iVar10 = param_3;
    if (param_3 < 0) {
      lVar12 = (**(code **)(*param_2 + 0x20))();
      lVar17 = 0;
      iVar10 = 0;
      do {
        puVar13 = (uint *)(lVar12 + lVar17);
        lVar17 = lVar17 + 4;
        uVar18 = *puVar13 - (*puVar13 >> 1 & 0x55555555);
        uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
        uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
        uVar18 = uVar18 + (uVar18 >> 8);
        iVar10 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + iVar10;
      } while (lVar17 != 0x754);
    }
    FUN_02690004(local_1d4);
    puVar13 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar18 = *puVar13 ^ *puVar13 << 0xb;
    uVar20 = puVar13[3];
    *puVar13 = puVar13[1];
    puVar13[1] = puVar13[2];
    uVar21 = uVar18 ^ uVar20;
    uVar18 = uVar18 >> 8 ^ uVar20 >> 0x13 ^ uVar21;
    puVar13[2] = uVar20;
    puVar13[3] = uVar18;
    local_1e4 = (uVar18 ^ uVar21 >> 0x1e) * 0x6c078965 + 1;
    uStack_1e0 = (local_1e4 ^ local_1e4 >> 0x1e) * 0x6c078965 + 2;
    local_1dc = (uStack_1e0 ^ uStack_1e0 >> 0x1e) * 0x6c078965 + 3;
    iStack_1d8 = (local_1dc ^ local_1dc >> 0x1e) * 0x6c078965 + 4;
    lVar12 = (**(code **)(*param_2 + 0x20))();
    lVar17 = 0;
    iVar16 = 0;
    do {
      puVar13 = (uint *)(lVar12 + lVar17);
      lVar17 = lVar17 + 4;
      uVar18 = *puVar13 - (*puVar13 >> 1 & 0x55555555);
      uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
      uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
      uVar18 = uVar18 + (uVar18 >> 8);
      iVar16 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + iVar16;
    } while (lVar17 != 0x754);
    if (iVar16 != 0) {
      iVar10 = FUN_01a4cc70(&local_1e4,local_1d4,param_2,iVar10,0,0,PTR_FUN_04bb67e0,0);
      uVar18 = iVar10 - 1;
      if (0 < iVar10) {
        uVar20 = 0;
        uVar21 = 0;
        if (0x1e < uVar18) {
          uVar18 = 0x1f;
        }
        do {
          puVar8 = PTR_DAT_04bb43c0;
          lVar17 = (long)((ulong)uVar21 << 0x20) >> 0x1d;
          local_1ec = *(undefined4 *)((long)local_1d4 + lVar17);
          uStack_1e8 = *(undefined4 *)((long)local_1d4 + lVar17 + 4);
          lVar17 = *(long *)PTR_DAT_04bb43c0;
          uVar11 = FUN_0277d6c4(&local_1ec);
          lVar12 = *(long *)puVar8;
          if (lVar12 != 0) {
            lVar17 = *(long *)(lVar17 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
              local_1f8 = 0;
              local_200 = local_1ec;
              uStack_1fc = uStack_1e8;
              local_208 = puVar2;
              uVar11 = FUN_0277d6c4(&local_200);
              if (*(long *)PTR_DAT_04bb43c0 != 0) {
                lVar17 = *(long *)(lVar12 + 0x57e58);
                uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                  lVar17 = *(long *)PTR_DAT_04bc0428;
                  uVar11 = FUN_0277d6c4(&local_1ec);
                  uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                  if (uVar11 < *(uint *)(lVar17 + 0x1d8)) {
                    lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8);
                    if (lVar17 != 0) {
                      local_1f8 = lVar17;
                    }
                  }
                }
              }
              if (((param_4 & 1) != 0) && (iVar10 = FUN_01ad7260(&local_208), iVar10 != 0)) {
                puVar13 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                uVar11 = *puVar13 ^ *puVar13 << 0xb;
                uVar7 = puVar13[3];
                *puVar13 = puVar13[1];
                puVar13[1] = puVar13[2];
                uVar6 = uVar11 ^ uVar7;
                puVar13[2] = uVar7;
                puVar13[3] = uVar11 >> 8 ^ uVar7 >> 0x13 ^ uVar6;
                FUN_02780fe0(&local_d0,&local_1ec,uVar6 >> 0x18);
                local_1ec = (undefined4)local_d0;
                uStack_1e8 = local_d0._4_4_;
              }
              lVar17 = 0;
              lVar12 = 0;
              local_6c = local_210;
              do {
                lVar19 = param_1 + (ulong)local_210 * 0x200;
                if (6 < local_210) {
                  lVar19 = param_1;
                }
                if (*(short *)(lVar19 + lVar17) == -2) {
                  lVar5 = lVar1 + (ulong)local_210 * 0x100;
                  if (6 < local_210) {
                    lVar5 = lVar1;
                  }
                  if (-1 < *(int *)(lVar5 + lVar12 * 4)) goto LAB_0289ead8;
LAB_0289eb1c:
                  puVar4 = (undefined4 *)(lVar19 + lVar12 * 8);
                  *puVar4 = local_1ec;
                  puVar4[1] = uStack_1e8;
                  lVar17 = lVar1 + (ulong)local_210 * 0x100;
                  if (6 < local_210) {
                    lVar17 = lVar1;
                  }
                  *(undefined4 *)(lVar17 + lVar12 * 4) = 0xffffffff;
                  lVar17 = param_1 + 0x1500 + (ulong)local_210 * 0x40;
                  if (6 < local_210) {
                    lVar17 = param_1 + 0x1500;
                  }
                  *(undefined1 *)(lVar17 + lVar12) = 0;
                  puVar8 = PTR_DAT_04bb43c0;
                  local_80 = *puVar4;
                  uStack_7c = puVar4[1];
                  local_78 = (uint *)0x0;
                  local_88 = PTR_DAT_04bc0510 + 0x10;
                  lVar17 = *(long *)PTR_DAT_04bb43c0;
                  uVar11 = FUN_0277d6c4(&local_80);
                  if (*(long *)puVar8 != 0) {
                    lVar17 = *(long *)(lVar17 + 0x57e58);
                    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                    if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                      lVar17 = *(long *)PTR_DAT_04bc0428;
                      uVar11 = FUN_0277d6c4(puVar4);
                      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                      if (uVar11 < *(uint *)(lVar17 + 0x1d8)) {
                        puVar13 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8);
                        if (puVar13 != (uint *)0x0) {
                          local_78 = puVar13;
                        }
                      }
                    }
                  }
                  FUN_01afb1a0(&local_88,auStack_98);
                  local_9d = 0;
                  local_c0 = 0x20;
                  puVar14 = &DAT_0407ebb1;
                  local_bc[0] = 0;
                  if (local_6c < 7) {
                    puVar14 = *(undefined8 **)(PTR_s_Sunday_04bc3898 + (ulong)local_6c * 8 + 0x40);
                  }
                  if (local_78 == (uint *)0x0) {
                    local_d4 = 0xbc;
                  }
                  else {
                    uVar11 = *local_78;
                    local_d4 = 0;
                    if ((uVar11 != 0) && (local_78 != (uint *)(ulong)uVar11)) {
                      puVar13 = (uint *)((long)local_78 - (long)(ulong)uVar11);
                      local_d4 = 0;
                      if (*puVar13 != 0) {
                        uVar11 = puVar13[1];
                        if ((uVar11 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                          lVar17 = 0xc;
                          if (*(char *)((long)puVar13 + 10) != '\0') {
                            lVar17 = 0x1c;
                          }
                          lVar17 = (long)puVar13 + lVar17 + (ulong)(ushort)puVar13[2] * 8;
                          if (lVar17 != 0) {
                            uVar6 = 0;
                            if ((ulong)uVar11 != 0) {
                              uVar6 = (uint)((ulong)((long)local_78 - lVar17) / (ulong)uVar11);
                            }
                            if (*puVar13 <= uVar6) {
                              uVar6 = 0xffffffff;
                            }
                            if ((uVar6 < *(uint *)PTR_DAT_04bc00c8) &&
                               (local_d4 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar6 * 2), local_d4 < 0xbd))
                            goto LAB_0289ece4;
                          }
                        }
                        local_d4 = 0;
                      }
                    }
                  }
LAB_0289ece4:
                  puVar15 = &DAT_0407ebb1;
                  if (local_d4 < 0xbd) {
                    puVar15 = *(undefined8 **)(PTR_DAT_04bb8f90 + (ulong)local_d4 * 8 + 0x830);
                  }
                  local_d0 = puVar3;
                  puStack_c8 = local_bc;
                  FUN_038d1270(&local_d0,"Shop.Zakka.%s.%s",puVar14,puVar15);
                  break;
                }
LAB_0289ead8:
                lVar19 = param_1 + (ulong)local_210 * 0x200;
                if (6 < local_210) {
                  lVar19 = param_1;
                }
                if (*(short *)(lVar19 + lVar17 + 8) == -2) {
                  lVar5 = lVar1 + (ulong)local_210 * 0x100;
                  if (6 < local_210) {
                    lVar5 = lVar1;
                  }
                  if (*(int *)(lVar5 + lVar12 * 4 + 4) < 0) {
                    lVar12 = lVar12 + 1;
                    goto LAB_0289eb1c;
                  }
                }
                lVar12 = lVar12 + 2;
                lVar17 = lVar17 + 0x10;
              } while (lVar12 != 0x40);
            }
          }
          uVar21 = uVar21 + 1;
          bVar9 = uVar20 != uVar18;
          uVar20 = uVar20 + 1;
        } while (bVar9);
      }
    }
    local_210 = local_210 + 1;
    if (local_210 == 7) {
      return;
    }
  } while( true );
}

