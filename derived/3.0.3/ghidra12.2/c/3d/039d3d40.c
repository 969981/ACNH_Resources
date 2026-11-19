
undefined8 FUN_039d3d40(long *param_1,long *param_2,long *param_3)

{
  MutexType *pMVar1;
  int *piVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined *puVar5;
  byte bVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  void *__dest;
  void *__src;
  long *plVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  ushort *puVar22;
  undefined4 uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  byte bVar28;
  long lVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  byte *pbVar32;
  uint uVar33;
  size_t *psVar34;
  long *local_e40;
  long local_e18 [3];
  uint local_e00;
  undefined4 uStack_dfc;
  uint local_df8;
  undefined8 local_df0;
  undefined1 local_de8;
  long local_de0;
  undefined8 uStack_dd8;
  undefined8 local_dd0;
  undefined8 uStack_dc8;
  undefined8 local_dc0;
  undefined8 uStack_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 local_d60;
  undefined8 uStack_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined8 local_d40;
  undefined8 uStack_d38;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined8 local_d20;
  undefined8 uStack_d18;
  undefined8 local_d10;
  undefined8 uStack_d08;
  undefined8 local_d00;
  undefined8 uStack_cf8;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined8 local_ce0;
  undefined8 uStack_cd8;
  undefined8 local_cd0;
  undefined8 uStack_cc8;
  undefined8 local_cc0;
  undefined8 uStack_cb8;
  long local_cb0;
  undefined8 local_ca8;
  long local_898;
  undefined8 local_890;
  undefined *local_480;
  undefined1 *local_478;
  undefined4 local_470;
  undefined1 local_46c [1023];
  undefined1 local_6d;
  
  lVar17 = *(long *)(*param_2 + 0x60);
  if ((*(byte *)(*(long *)(lVar17 + 8) + 0x2b4) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 0x40;
  }
  uVar19 = *(uint *)((long)param_2 + 0xc);
  if (uVar19 == 0xffffffff) {
    uVar19 = (uint)*(byte *)(*(long *)(lVar17 + 8) + 0x304);
  }
  *(char *)((long)param_1 + 0x2e2) = (char)uVar19;
  lVar17 = *param_2;
  local_e40 = param_3;
  if (param_3 == (long *)0x0) {
    lVar26 = *(long *)PTR_DAT_04bb2698;
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    local_e40 = (long *)(lVar26 + 8);
    if (lVar12 != 0) {
      local_e40 = (long *)(lVar12 + 0xa8);
    }
    local_e40 = (long *)*local_e40;
  }
  local_df0 = 0;
  local_db0 = 0;
  uStack_da8 = 8;
  local_da0 = 0;
  uStack_d98 = 0xffffffffffffffff;
  local_d90 = 0;
  uStack_d88 = 8;
  local_d80 = 0;
  uStack_d78 = 0xffffffffffffffff;
  local_d70 = 0;
  uStack_d68 = 8;
  local_d60 = 0;
  uStack_d58 = 0xffffffffffffffff;
  local_d50 = 0;
  uStack_d48 = 8;
  local_d40 = 0;
  uStack_d38 = 0xffffffffffffffff;
  local_d30 = 0;
  uStack_d28 = 8;
  local_d20 = 0;
  uStack_d18 = 0xffffffffffffffff;
  local_d10 = 0;
  uStack_d08 = 8;
  local_d00 = 0;
  uStack_cf8 = 0xffffffffffffffff;
  local_cf0 = 0;
  uStack_ce8 = 8;
  local_ce0 = 0;
  uStack_cd8 = 0xffffffffffffffff;
  local_cd0 = 0;
  uStack_cc8 = 8;
  local_cc0 = 0;
  uStack_cb8 = 0xffffffffffffffff;
  local_dd0 = 0;
  uStack_dc8 = 8;
  uVar7 = *(ushort *)(lVar17 + 0x6a);
  local_df8 = 1;
  local_e18[1] = 0;
  local_dc0 = 0;
  uStack_db8 = 0xffffffffffffffff;
  local_de0 = 0;
  uStack_dd8 = 0;
  if (uVar7 != 0) {
    if (uVar7 == 1) {
      uVar24 = 0;
    }
    else {
      uVar24 = 0;
      local_df8 = 1;
      pbVar32 = (byte *)(*(long *)(lVar17 + 0x28) + 0xbb);
      do {
        uVar24 = uVar24 + 2;
        if (local_df8 <= pbVar32[-0x60]) {
          local_df8 = (uint)pbVar32[-0x60];
        }
        if (local_df8 <= *pbVar32) {
          local_df8 = (uint)*pbVar32;
        }
        pbVar32 = pbVar32 + 0xc0;
      } while (((ulong)uVar7 & 0xfffe) != uVar24);
    }
    if (((uVar7 & 1) != 0) &&
       (bVar28 = *(byte *)(*(long *)(lVar17 + 0x28) + uVar24 * 0x60 + 0x5b), local_df8 <= bVar28)) {
      local_df8 = (uint)bVar28;
    }
  }
  local_de8 = 1;
  bVar28 = *(byte *)((long)param_1 + 0x2e2);
  local_e18[2] = (long)CONCAT14(bVar28,(uint)bVar28);
  _local_e00 = CONCAT44((int)param_2[1],(uint)bVar28);
  local_e18[0] = lVar17;
  FUN_003ac360(local_e18);
  lVar12 = local_de0;
  uVar7 = *(ushort *)(lVar17 + 0x6c);
  uVar24 = (ulong)uVar7;
  if (uVar7 == 0) {
    uVar24 = 0;
    uVar19 = 0;
  }
  else {
    if (uVar7 == 1) {
      uVar25 = 0;
      uVar19 = 0;
    }
    else {
      uVar25 = 0;
      uVar19 = 0;
      pbVar32 = (byte *)(*(long *)(lVar17 + 0x38) + 0x144);
      do {
        pbVar4 = pbVar32 + -0xa8;
        uVar25 = uVar25 + 2;
        bVar28 = *pbVar32;
        pbVar32 = pbVar32 + 0x150;
        uVar19 = uVar19 + *pbVar4 + (uint)bVar28;
      } while ((uVar24 & 0xfffe) != uVar25);
    }
    if ((uVar7 & 1) != 0) {
      uVar19 = uVar19 + *(byte *)(*(long *)(lVar17 + 0x38) + uVar25 * 0xa8 + 0x9c);
    }
  }
  lVar26 = local_de0 + (ulong)*(ushort *)(lVar17 + 0x6a) * 8;
  lVar17 = lVar26 + (ulong)*(ushort *)(lVar17 + 0x6a);
  lVar27 = lVar17 + (ulong)uVar19 * 0x28;
  lVar13 = (**(code **)(*local_e40 + 0x30))(local_e40,lVar27 + uVar24 * 0x18,0x10);
  if (lVar13 == 0) {
    return 0;
  }
  plVar16 = param_1 + 0x1b;
  FUN_003ac700(plVar16,local_e18,lVar13,lVar12);
  (**(code **)(*param_1 + 0x278))(param_1);
  lVar29 = *(long *)(param_1[0x1b] + 0x60);
  pMVar1 = (MutexType *)(lVar29 + 0x400);
  nn::os::LockMutex(pMVar1);
  piVar2 = (int *)(lVar29 + 0x420);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar9) {
      *piVar2 = *piVar2 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  nn::os::UnlockMutex(pMVar1);
  puVar10 = PTR_DAT_04bc1010;
  uVar24 = FUN_003acf30(plVar16,*(undefined8 *)(*(long *)PTR_DAT_04bc1010 + 0x30));
  if (uVar24 == 0) goto LAB_039d4168;
  uVar14 = FUN_003ace30(plVar16,*(undefined8 *)(*(long *)puVar10 + 0x30));
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    plVar15 = malloc(0x38);
  }
  else {
    plVar15 = (long *)(**(code **)(*local_e40 + 0x30))(local_e40,0x38,8);
  }
  puVar10 = PTR_DAT_04bb2cc8;
  plVar15[6] = 0;
  *(undefined2 *)((long)plVar15 + 0x2a) = 0;
  plVar18 = plVar15 + 1;
  *plVar18 = 0;
  plVar15[2] = 0;
  plVar15[3] = 0;
  plVar15[4] = 0;
  *(undefined1 *)(plVar15 + 5) = 0;
  *plVar15 = (long)(puVar10 + 0x10);
  if ((uVar24 & 0xffffffff) == 0) {
    iVar11 = 0;
    *(undefined2 *)((long)plVar15 + 0x2a) = 3;
    lVar29 = 0;
LAB_039d4108:
    uVar23 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar15,local_e40,(long)(int)uVar24,uVar14,3);
    lVar29 = plVar15[3];
    *(undefined2 *)((long)plVar15 + 0x2a) = 3;
    iVar11 = 0;
    if (plVar15[4] != 0) {
      iVar11 = (int)*plVar18 - *(int *)(plVar15[4] + 0x10);
    }
    if (lVar29 == 0) goto LAB_039d4108;
    uVar23 = *(undefined4 *)(lVar29 + 0x104);
  }
  *(int *)(param_1 + 0x35) = iVar11;
  *(undefined4 *)((long)param_1 + 0x1ac) = uVar23;
  param_1[0x36] = lVar29;
  param_1[0x37] = (long)plVar15;
  if ((char)param_1[0x5a] != '\0') {
    *(undefined1 *)(param_1 + 0x5a) = 0;
  }
  if (plVar15[4] != 0) {
    plVar18 = (long *)(plVar15[4] + 0x10);
  }
  FUN_0034fb58(param_1 + 0x38,plVar15[3],*plVar18);
  FUN_003ad070(plVar16,*(undefined8 *)(*(long *)PTR_DAT_04bc1010 + 0x30),param_1 + 0x38,
               (int)param_1[0x35],uVar24);
LAB_039d4168:
  param_1[0x2d] = lVar13 + lVar12;
  param_1[0x2e] = lVar13 + lVar26;
  uVar7 = *(ushort *)((long)param_1 + 0x10a);
  if ((ulong)uVar7 != 0) {
    uVar24 = 0;
    lVar17 = lVar13 + lVar17;
    do {
      plVar15 = (long *)(param_1[0x24] + uVar24 * 0x80);
      psVar34 = (size_t *)(plVar15 + 0xc);
      if ((*psVar34 != 0) && (*(byte *)((long)plVar15 + 10) != 0)) {
        lVar12 = 0;
        uVar25 = 0;
        puVar22 = (ushort *)(plVar15 + 1);
        plVar18 = plVar15 + 8;
        lVar26 = *(long *)(*plVar15 + 0x80);
        do {
          lVar29 = 0;
          if (*plVar18 != 0 && (*puVar22 & 1) != 0) {
            lVar29 = *plVar18 + lVar12;
          }
          __dest = (void *)FUN_00347cc4(lVar29);
          lVar21 = *(long *)(lVar26 + 0x130);
          lVar29 = 0;
          if (lVar21 != 0 && (*(ushort *)(lVar26 + 0xf8) & 1) != 0) {
            lVar29 = lVar21;
          }
          __src = (void *)FUN_00347cc4(lVar29);
          memcpy(__dest,__src,*psVar34);
          lVar29 = 0;
          if (*plVar18 != 0 && (*puVar22 & 1) != 0) {
            lVar29 = *plVar18 + lVar12;
          }
          FUN_00347cdc(lVar29,0,*psVar34);
          lVar29 = 0;
          if (*plVar18 != 0 && (*puVar22 & 1) != 0) {
            lVar29 = *plVar18 + lVar12;
          }
          FUN_00347cd8(lVar29);
          uVar25 = uVar25 + 1;
          lVar12 = lVar12 + 0x48;
        } while (uVar25 < *(byte *)((long)plVar15 + 10));
      }
      plVar18 = (long *)(lVar13 + lVar27 + uVar24 * 0x18);
      *plVar18 = (long)param_1;
      *(short *)(plVar18 + 2) = (short)uVar24;
      uVar24 = uVar24 + 1;
      lVar12 = 0;
      if (*(char *)(*plVar15 + 0x9c) != '\0') {
        lVar12 = lVar17;
      }
      plVar18[1] = lVar12;
      plVar15[0xd] = (long)plVar18;
      lVar17 = lVar17 + (ulong)*(byte *)(*plVar15 + 0x9c) * 0x28;
    } while (uVar24 != uVar7);
  }
  param_1[0x31] = (long)&PTR_LAB_04b6b368;
  lVar17 = param_1[0x22];
  *(undefined8 *)(lVar17 + 0x58) = 0;
  uVar7 = *(ushort *)(lVar17 + 0x52);
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xf7;
  uVar19 = (uint)uVar7;
  if (uVar19 == 0xffff) {
    uVar19 = 0xffffffff;
  }
  if ((int)(uint)*(ushort *)(lVar17 + 0x50) <= (int)uVar19 || uVar7 == 0xffff) {
    uVar19 = 0xffffffff;
  }
  *(short *)(lVar17 + 0x52) = (short)uVar19;
  iVar11 = (**(code **)(*param_1 + 0x1e0))(param_1);
  if (iVar11 < 1) {
    bVar28 = 1;
  }
  else {
    uVar24 = 0;
    bVar28 = 1;
    do {
      *(undefined8 *)(param_1[0x2d] + uVar24 * 8) = 0;
      plVar15 = (long *)(**(code **)(*param_1 + 0x2b8))(param_1,uVar24 & 0xffffffff,local_e40);
      if (plVar15 == (long *)0x0) {
        return 0;
      }
      lVar17 = param_1[0x23];
      plVar18 = (long *)(lVar17 + uVar24 * 0x70);
      bVar6 = *(byte *)(*plVar18 + 0x5b);
      *(byte *)((long)plVar15 + 0x25b) = bVar6;
      if (bVar28 <= bVar6) {
        bVar28 = bVar6;
      }
      iVar11 = (**(code **)(*plVar15 + 0x38))(plVar15,0);
      if (1 < iVar11) {
        *(ushort *)((long)param_1 + 0xac) = *(ushort *)((long)param_1 + 0xac) | 8;
        *(byte *)((long)plVar15 + 0x25a) = *(byte *)((long)plVar15 + 0x25a) | 1;
      }
      if (plVar15[0x4a] != 0) {
        *(ushort *)((long)param_1 + 0xac) = *(ushort *)((long)param_1 + 0xac) | 0x20;
      }
      pbVar32 = (byte *)(lVar17 + uVar24 * 0x70 + 0xe);
      bVar6 = *pbVar32;
      uVar19 = (uint)bVar6;
      if (bVar6 != 0) {
        uVar33 = 0;
        lVar17 = lVar17 + uVar24 * 0x70;
        uVar20 = (uint)*(byte *)((long)param_1 + 0x2e2);
        pcVar3 = (char *)(lVar17 + 0xd);
        plVar15 = (long *)(lVar17 + 0x20);
        pbVar4 = (byte *)(lVar17 + 0xf);
        do {
          if (uVar20 != 0) {
            uVar19 = 0;
            do {
              uVar20 = uVar19;
              if (*pcVar3 != '\0') {
                uVar20 = uVar19 + uVar33 * *pbVar4;
              }
              lVar17 = 0;
              if (*plVar15 != 0) {
                lVar17 = *plVar15 + (long)(int)uVar20 * 0x48;
              }
              uVar14 = FUN_00347cc4(lVar17);
              FUN_03ad38a0(*(long *)(param_1[0x2d] + uVar24 * 8) + 0x268,uVar14,
                           *(undefined1 *)(*plVar18 + 0x5a),0);
              uVar20 = uVar19;
              if (*pcVar3 != '\0') {
                uVar20 = uVar19 + uVar33 * *pbVar4;
              }
              lVar17 = 0;
              if (*plVar15 != 0) {
                lVar17 = *plVar15 + (long)(int)uVar20 * 0x48;
              }
              FUN_00347cdc(lVar17,0,0x100);
              uVar20 = uVar19;
              if (*pcVar3 != '\0') {
                uVar20 = uVar19 + uVar33 * *pbVar4;
              }
              lVar17 = 0;
              if (*plVar15 != 0) {
                lVar17 = *plVar15 + (long)(int)uVar20 * 0x48;
              }
              FUN_00347cd8(lVar17);
              uVar20 = (uint)*(byte *)((long)param_1 + 0x2e2);
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar20);
            uVar19 = (uint)*pbVar32;
          }
          uVar33 = uVar33 + 1;
        } while (uVar33 < uVar19);
      }
      uVar24 = uVar24 + 1;
      iVar11 = (**(code **)(*param_1 + 0x1e0))(param_1);
    } while ((long)uVar24 < (long)iVar11);
  }
  (**(code **)(*param_1 + 0x250))(param_1,bVar28);
  if ((*(ushort *)((long)param_1 + 0xac) >> 3 & 1) != 0) {
    iVar11 = (**(code **)(*param_1 + 0x1e0))(param_1);
    if (0 < iVar11) {
      lVar17 = 0;
      do {
        FUN_039f9f10(*(undefined8 *)(param_1[0x2d] + lVar17 * 8),param_3);
        lVar17 = lVar17 + 1;
        iVar11 = (**(code **)(*param_1 + 0x1e0))(param_1);
      } while (lVar17 < iVar11);
    }
    iVar11 = (**(code **)(*param_1 + 0x218))(param_1);
    if (0 < iVar11) {
      lVar17 = 0;
      do {
        lVar12 = (**(code **)(*param_1 + 0x1f8))(param_1,param_3);
        iVar11 = (**(code **)(*param_1 + 0x1e0))(param_1);
        if (0 < iVar11) {
          lVar13 = 0;
          lVar26 = 0;
          do {
            lVar27 = *(long *)(*(long *)(param_1[0x2d] + lVar26 * 8) + 0x248);
            if (lVar27 != 0) {
              *(long *)(lVar27 + lVar17 * 0x18) = lVar12;
            }
            lVar26 = lVar26 + 1;
            uVar19 = (uint)*(ushort *)(*(long *)(*(long *)(param_1[0x23] + lVar13) + 0x18) + 0x34);
            if (*(byte *)(*(long *)(param_1[0x23] + lVar13) + 0x5b) < 2) {
              uVar19 = uVar19 + 1 >> 1;
            }
            lVar12 = lVar12 + (ulong)(uVar19 + 1) * 6;
            iVar11 = (**(code **)(*param_1 + 0x1e0))(param_1);
            lVar13 = lVar13 + 0x70;
          } while (lVar26 < iVar11);
        }
        lVar17 = lVar17 + 1;
        iVar11 = (**(code **)(*param_1 + 0x218))(param_1);
      } while (lVar17 < iVar11);
    }
  }
  uVar24 = FUN_03ad4444(param_1,param_3);
  if ((uVar24 & 1) == 0) {
    uVar14 = 0;
  }
  else {
    bVar28 = *(byte *)(param_1 + 0x16);
    iVar11 = (**(code **)(*param_1 + 0x218))(param_1);
    if (0 < iVar11) {
      lVar12 = 0;
      lVar17 = (ulong)bVar28 * 4 + 0x10;
      do {
        lVar12 = lVar12 + 1;
        *(undefined4 *)(param_1[9] + lVar17) = 0;
        iVar11 = (**(code **)(*param_1 + 0x218))(param_1);
        lVar17 = lVar17 + 0x58;
      } while (lVar12 < iVar11);
    }
    puVar10 = PTR_DAT_04bbdcb8;
    uVar7 = *(ushort *)((long)param_1 + 0x10a);
    if ((ulong)uVar7 != 0) {
      uVar24 = 0;
      lVar17 = *(long *)PTR_DAT_04bd1148;
      do {
        plVar15 = (long *)(param_1[0x24] + uVar24 * 0x80);
        bVar28 = *(byte *)(*plVar15 + 0x9c);
        if (bVar28 != 0) {
          lVar12 = plVar15[0xd];
          puVar30 = *(undefined8 **)(lVar12 + 8);
          if (lVar17 == 0) {
            plVar15 = plVar15 + 10;
            lVar26 = *(long *)puVar10 + 0x240;
            if (bVar28 == 1) {
              uVar25 = 0;
            }
            else {
              uVar25 = 0;
              puVar31 = puVar30;
              do {
                puVar31[3] = lVar12;
                puVar31[4] = 0;
                puVar31[2] = lVar26;
                *puVar31 = 0;
                puVar31[1] = 0;
                lVar13 = *(long *)(*plVar15 + uVar25 * 8);
                uVar14 = 0;
                if (lVar13 != 0) {
                  uVar14 = *(undefined8 *)(lVar13 + 0x40);
                }
                puVar31[4] = uVar14;
                puVar31[5] = 0;
                puVar31[6] = 0;
                puVar31[7] = lVar26;
                puVar31[8] = lVar12;
                puVar31[9] = 0;
                lVar13 = *(long *)(*plVar15 + uVar25 * 8 + 8);
                if (lVar13 == 0) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = *(undefined8 *)(lVar13 + 0x40);
                }
                puVar30 = puVar31 + 10;
                uVar25 = uVar25 + 2;
                puVar31[9] = uVar14;
                puVar31 = puVar30;
              } while (((ulong)bVar28 & 0xfe) != uVar25);
              if ((bVar28 & 1) == 0) goto LAB_039d46e0;
            }
            puVar30[3] = lVar12;
            puVar30[4] = 0;
            puVar30[2] = lVar26;
            *puVar30 = 0;
            puVar30[1] = 0;
            lVar12 = *(long *)(*plVar15 + uVar25 * 8);
            uVar14 = 0;
            if (lVar12 != 0) {
              uVar14 = *(undefined8 *)(lVar12 + 0x40);
            }
            puVar30[4] = uVar14;
          }
          else {
            lVar26 = 0;
            do {
              puVar30[3] = 0;
              puVar30[4] = 0;
              *puVar30 = 0;
              puVar30[1] = 0;
              puVar30[2] = 0;
              puVar30[2] = *(long *)puVar10 + 0x240;
              puVar30[3] = lVar12;
              if (((*(long *)(plVar15[10] + lVar26) != 0) &&
                  (lVar13 = *(long *)(*(long *)(plVar15[10] + lVar26) + 0x40), puVar30[4] = lVar13,
                  lVar13 != 0)) &&
                 (uVar25 = (**(code **)(**(long **)(lVar17 + 0x38) + 0x88))(), (uVar25 & 1) != 0)) {
                FUN_039d9fa0(lVar17,puVar30[4],puVar30,0);
              }
              lVar26 = lVar26 + 8;
              puVar30 = puVar30 + 5;
            } while ((ulong)bVar28 * 8 != lVar26);
          }
        }
LAB_039d46e0:
        uVar24 = uVar24 + 1;
      } while (uVar24 != uVar7);
    }
    lVar17 = param_2[2];
    if (lVar17 == 0) {
      lVar17 = *(long *)(*plVar16 + 0x60);
      if (*(int *)(lVar17 + 0x3d8) != 0) {
        lVar12 = *(long *)PTR_DAT_04bb2698;
        if (lVar12 == 0) {
          plVar16 = malloc(0x38);
        }
        else {
          plVar16 = param_3;
          if (param_3 == (long *)0x0) {
            lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar16 = (long *)(lVar12 + 8);
            if (lVar26 != 0) {
              plVar16 = (long *)(lVar26 + 0xa8);
            }
            plVar16 = (long *)*plVar16;
          }
          plVar16 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16,0x38,8);
        }
        puVar5 = PTR_DAT_04bd1790;
        *(undefined4 *)(plVar16 + 6) = 0x3f800000;
        plVar16[2] = 0;
        plVar16[3] = 0;
        plVar16[4] = 0;
        plVar16[5] = 0;
        *plVar16 = (long)(puVar5 + 0x10);
        plVar16[1] = 0;
        *(undefined1 *)((long)plVar16 + 0x34) = 8;
        param_1[0x2f] = (long)plVar16;
        FUN_039b2080(plVar16,lVar17 + 0x28,param_1,param_3);
      }
    }
    else {
      param_1[0x2f] = lVar17;
      FUN_039b2b10(0,lVar17,param_1);
    }
    if ((((char)param_2[3] != '\0') && (param_1[0x30] != 0)) &&
       ((*(long *)(param_1[0x30] + 0x10) == 0 &&
        (uVar19 = (**(code **)(*param_1 + 0xb8))(param_1), 0 < (int)uVar19)))) {
      uVar24 = (ulong)uVar19;
      puVar22 = (ushort *)(param_1[10] + 6);
      do {
        if ((*puVar22 & 0x11) != 0) {
          FUN_039bf520(param_1[0x30],param_3);
          *(byte *)((long)param_1 + 0x2e1) =
               *(byte *)((long)param_1 + 0x2e1) & 0xf0 |
               (byte)(-1 << (ulong)(*(byte *)((long)param_1 + 0x2e2) & 0x1f)) ^ 0xff;
          uVar19 = (**(code **)(*param_1 + 0x1e0))(param_1);
          if (0 < (int)uVar19) {
            if (uVar19 == 1) {
              uVar24 = 0;
            }
            else {
              uVar24 = 0;
              do {
                *(byte *)(param_1[0x2e] + uVar24) =
                     ~(byte)(-1 << (ulong)(*(byte *)((long)param_1 + 0x2e2) & 0x1f));
                lVar17 = param_1[0x2e] + uVar24;
                uVar24 = uVar24 + 2;
                *(byte *)(lVar17 + 1) =
                     ~(byte)(-1 << (ulong)(*(byte *)((long)param_1 + 0x2e2) & 0x1f));
              } while (((ulong)uVar19 & 0xfffffffe) != uVar24);
            }
            if ((uVar19 & 1) != 0) {
              *(byte *)(param_1[0x2e] + uVar24) =
                   ~(byte)(-1 << (ulong)(*(byte *)((long)param_1 + 0x2e2) & 0x1f));
            }
          }
          break;
        }
        uVar24 = uVar24 - 1;
        puVar22 = puVar22 + 6;
      } while (uVar24 != 0);
    }
    if (*(char *)((long)param_2 + 0x19) != '\0') {
      lVar17 = *(long *)PTR_DAT_04bb2698;
      if (lVar17 == 0) {
        plVar16 = malloc(0x20);
      }
      else {
        plVar16 = param_3;
        if (param_3 == (long *)0x0) {
          lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar16 = (long *)(lVar17 + 8);
          if (lVar12 != 0) {
            plVar16 = (long *)(lVar12 + 0xa8);
          }
          plVar16 = (long *)*plVar16;
        }
        plVar16 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16,0x20,8);
      }
      plVar16[2] = 0;
      *plVar16 = (long)(PTR_DAT_04bd17c0 + 0x10);
      plVar16[1] = 0;
      *(undefined2 *)(plVar16 + 3) = 0xff06;
      param_1[0x30] = (long)plVar16;
    }
    (**(code **)(*param_1 + 0x288))(param_1,PTR_DAT_04bb2f80,PTR_DAT_04bb2f78);
    (**(code **)(*param_1 + 0x260))(param_1);
    if (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0) {
      local_6d = 0;
      local_470 = 0x400;
      local_46c[0] = 0;
      puVar5 = PTR_DAT_04bb2f40 + 0x10;
      local_480 = puVar5;
      local_478 = local_46c;
      FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png","NW_3DEditor6");
      if (param_1[0x30] != 0) {
        FUN_006e9454(&local_cb0,"%s_%s","appli","debug");
        local_6d = 0;
        local_470 = 0x400;
        local_46c[0] = 0;
        local_480 = puVar5;
        local_478 = local_46c;
        (**(code **)(local_cb0 + 0x18))(&local_cb0);
        FUN_006e9454(&local_898,"%s\\%s","appli",local_ca8);
        (**(code **)(local_898 + 0x18))(&local_898);
        FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",local_890);
      }
    }
    plVar16 = *(long **)(*(long *)puVar10 + 0x48);
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x58))(plVar16,param_1,param_3);
    }
    *(byte *)((long)param_1 + 0x2e1) =
         *(byte *)((long)param_1 + 0x2e1) & 0xf0 |
         (byte)(-1 << (ulong)(*(byte *)((long)param_1 + 0x2e2) & 0x1f)) ^ 0xff;
    uVar19 = (**(code **)(*param_1 + 0x1e0))(param_1);
    if (0 < (int)uVar19) {
      if (uVar19 == 1) {
        uVar24 = 0;
      }
      else {
        uVar24 = 0;
        do {
          *(byte *)(param_1[0x2e] + uVar24) =
               ~(byte)(-1 << (ulong)(*(byte *)((long)param_1 + 0x2e2) & 0x1f));
          lVar17 = param_1[0x2e] + uVar24;
          uVar24 = uVar24 + 2;
          *(byte *)(lVar17 + 1) = ~(byte)(-1 << (ulong)(*(byte *)((long)param_1 + 0x2e2) & 0x1f));
        } while (((ulong)uVar19 & 0xfffffffe) != uVar24);
      }
      if ((uVar19 & 1) != 0) {
        *(byte *)(param_1[0x2e] + uVar24) =
             ~(byte)(-1 << (ulong)(*(byte *)((long)param_1 + 0x2e2) & 0x1f));
      }
    }
    uVar14 = 1;
    *(byte *)((long)param_1 + 0x2e1) =
         *(byte *)((long)param_1 + 0x2e1) & 0xf |
         (byte)(~(-1 << (ulong)(*(byte *)((long)param_1 + 0x2e2) & 0x1f)) << 4);
  }
  return uVar14;
}

