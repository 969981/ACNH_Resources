
void FUN_03b4a770(long param_1,long *param_2)

{
  undefined *puVar1;
  MutexType *pMVar2;
  undefined1 *__dest;
  undefined8 *****pppppuVar3;
  long *plVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  undefined4 uVar15;
  int iVar16;
  long lVar17;
  long *plVar18;
  void *pvVar19;
  long lVar20;
  long *plVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined1 *puVar24;
  long *plVar25;
  int *piVar26;
  undefined8 *puVar27;
  long *plVar28;
  long *plVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined8 *puVar32;
  undefined1 *__src;
  undefined *local_110;
  char *pcStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 *****local_d8;
  undefined8 *****local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  ulong local_a4;
  uint local_9c;
  undefined1 local_98;
  undefined4 local_94;
  long local_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined1 local_7f;
  long local_78;
  long lStack_70;
  
  if (*(char *)(param_1 + 1) != '\0') {
    return;
  }
  plVar4 = (long *)*param_2;
  *(long *)(param_1 + 0x108) = param_2[1];
  *(undefined **)(param_1 + 0xe8) = &DAT_040e1a49;
  puVar12 = PTR_DAT_04bb2698;
  lVar31 = *(long *)PTR_DAT_04bb2698;
  if (lVar31 == 0) {
    plVar18 = malloc(0x78a8);
  }
  else {
    plVar18 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar18 = (long *)(lVar31 + 8);
      if (lVar17 != 0) {
        plVar18 = (long *)(lVar17 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        plVar18 = (long *)0x0;
        goto LAB_03b4a820;
      }
    }
    plVar18 = (long *)(**(code **)(*plVar18 + 0x30))(plVar18,0x78a8,8);
  }
LAB_03b4a820:
  puVar13 = PTR_DAT_04bd22f8;
  plVar18[4] = (long)(plVar18 + 4);
  plVar18[2] = (long)(plVar18 + 1);
  plVar18[3] = -0x100000000;
  plVar18[5] = (long)(plVar18 + 4);
  plVar18[6] = -0x100000000;
  *plVar18 = (long)(puVar13 + 0x10);
  plVar18[1] = (long)(plVar18 + 1);
  FUN_038e18e4(plVar18 + 7);
  plVar21 = plVar18 + 0x24;
  *(undefined4 *)(plVar18 + 0x11) = 0;
  plVar18[0xf] = (long)(plVar18 + 0xf);
  plVar18[0x10] = (long)(plVar18 + 0xf);
  lVar31 = 0xff;
  plVar18[0x12] = (long)(plVar18 + 0x15);
  do {
    plVar21[-0xf] = (long)plVar21;
    plVar21[0xf] = (long)(plVar21 + 0x1e);
    *plVar21 = (long)(plVar21 + 0xf);
    lVar31 = lVar31 + -3;
    plVar21 = plVar21 + 0x2d;
  } while (lVar31 != 0);
  plVar18[0x13] = (long)(plVar18 + 0x15);
  plVar18[0xf06] = 0;
  *(undefined4 *)(plVar18 + 0x14) = 0x100;
  *(undefined4 *)((long)plVar18 + 0x1c) = 0x58;
  *(undefined4 *)((long)plVar18 + 0x34) = 0x58;
  *(long **)(param_1 + 0x78) = plVar18;
  if (param_2[0x20] != 0) {
    lVar31 = *(long *)puVar12;
    if (lVar31 == 0) {
      pvVar19 = malloc(1);
    }
    else {
      plVar18 = plVar4;
      if (plVar4 == (long *)0x0) {
        lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar18 = (long *)(lVar31 + 8);
        if (lVar17 != 0) {
          plVar18 = (long *)(lVar17 + 0xa8);
        }
        plVar18 = (long *)*plVar18;
        pvVar19 = (void *)0x0;
        if (plVar18 == (long *)0x0) goto LAB_03b4a914;
      }
      pvVar19 = (void *)(**(code **)(*plVar18 + 0x30))(plVar18,1,8);
    }
LAB_03b4a914:
    *(void **)(param_1 + 0x80) = pvVar19;
  }
  puVar13 = PTR_DAT_04bd1e70;
  if ((char)param_2[0x35] != '\0') {
    DAT_05aebc00 = '\x01';
    nn::audio::InitializeAudioRendererParameter((AudioRendererParameter *)&local_100);
    local_e0 = CONCAT71(local_e0._1_7_,1);
    local_e0 = CONCAT44(0x60,(undefined4)local_e0);
    local_a8 = 0x400;
    local_a4 = (local_a4 >> 8 & 0xffffff) << 8;
    local_9c = local_9c & 0xffffff00;
    local_110 = (undefined *)CONCAT44(local_110._4_4_,2);
    local_7f = 0;
    local_78 = *param_2;
    lStack_70 = param_2[1];
    local_88 = 4;
    iVar16 = *(int *)((long)param_2 + 0xb4);
    local_100 = (short *)CONCAT44((int)param_2[0x16] / 200,(int)param_2[0x16]);
    local_e8 = CONCAT44(6,(int)param_2[0x11]);
    local_f0 = CONCAT44(2,iVar16);
    local_f8 = (char *)CONCAT44(*(int *)((long)param_2 + 0x1ac),
                                *(int *)((long)param_2 + 0x1ac) * 6 + 6);
    iVar7 = *(int *)((long)param_2 + 0x1b4) * iVar16;
    local_d8 = (undefined8 *****)CONCAT44(local_d8._4_4_,iVar7);
    local_c8 = CONCAT44(iVar16,6);
    local_c0 = CONCAT44(iVar7,(int)param_2[2]);
    local_b8 = CONCAT44((int)param_2[0x2a],0x100);
    iVar16 = 0x20000;
    if (*(int *)((long)param_2 + 0x13c) != 0) {
      iVar16 = *(int *)((long)param_2 + 0x13c);
    }
    local_94 = (undefined4)param_2[0x1c];
    local_90 = param_2[0x1d];
    local_98 = 0;
    local_b0 = CONCAT44((int)param_2[0x2a] * 3,iVar16);
    local_80 = *(undefined1 *)((long)param_2 + 0x1aa);
    FUN_03b4f14c(plVar4);
    FUN_03b4fa00(*(undefined8 *)puVar13,&local_100);
    lVar31 = *(long *)puVar12;
    if (lVar31 == 0) {
      pvVar19 = malloc(0x1c8);
    }
    else {
      plVar18 = plVar4;
      if (plVar4 == (long *)0x0) {
        lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar18 = (long *)(lVar31 + 8);
        if (lVar17 != 0) {
          plVar18 = (long *)(lVar17 + 0xa8);
        }
        plVar18 = (long *)*plVar18;
        if (plVar18 == (long *)0x0) {
          pvVar19 = (void *)0x0;
          goto LAB_03b4aab8;
        }
      }
      pvVar19 = (void *)(**(code **)(*plVar18 + 0x30))(plVar18,0x1c8,8);
    }
LAB_03b4aab8:
    FUN_03b481a0(pvVar19,plVar4,*(undefined8 *)puVar13,local_b8._4_4_,(int)param_2[0x1e]);
    *(void **)(param_1 + 0x88) = pvVar19;
    local_110 = (undefined *)CONCAT44(local_110._4_4_,1);
    *(undefined4 *)((long)pvVar19 + 0xd0) = 2;
    nn::os::GetThreadAvailableCoreMask();
    nn::os::SetThreadCoreMask(*(ThreadType **)((long)pvVar19 + 0xe8),-1,2);
    lVar31 = *(long *)(param_1 + 0x88);
    if (*(int *)(lVar31 + 0xcc) == 0) {
      nn::os::StartThread(*(ThreadType **)(lVar31 + 0xe8));
      uVar15 = nn::os::GetThreadId(*(ThreadType **)(lVar31 + 0xe8));
      *(undefined4 *)(lVar31 + 200) = uVar15;
      if (*(int *)(lVar31 + 0xcc) == 0) {
        *(undefined4 *)(lVar31 + 0xcc) = 1;
      }
    }
    lVar31 = *(long *)(param_1 + 0x88);
    if ((1 < *(int *)(lVar31 + 0xcc) - 3U) && (*(long *)(lVar31 + 0xc0) != 1)) {
      nn::os::SendMessageQueue((MessageQueueType *)(lVar31 + 0x30),1);
    }
  }
  if (*(char *)((long)param_2 + 0x174) == '\0') {
    if (DAT_05aebc00 == '\0') {
      lVar31 = *(long *)puVar12;
      if (lVar31 == 0) {
        puVar24 = malloc(0xd10);
      }
      else {
        plVar18 = plVar4;
        if (plVar4 == (long *)0x0) {
          lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar18 = (long *)(lVar31 + 8);
          if (lVar17 != 0) {
            plVar18 = (long *)(lVar17 + 0xa8);
          }
          plVar18 = (long *)*plVar18;
          if (plVar18 == (long *)0x0) {
            puVar24 = (undefined1 *)0x0;
            goto LAB_03b4af8c;
          }
        }
        puVar24 = (undefined1 *)(**(code **)(*plVar18 + 0x30))(plVar18,0xd10,8);
      }
LAB_03b4af8c:
      *puVar24 = 0;
      *(undefined4 *)(puVar24 + 0x10) = 4;
      *(undefined8 *)(puVar24 + 0x18) = 0x4000;
      *(undefined8 *)(puVar24 + 0x20) = 0x20000;
      *(undefined8 *)(puVar24 + 0x30) = 0x4000;
      *(undefined4 *)(puVar24 + 0x38) = 0x3f800000;
      *(undefined4 *)(puVar24 + 0x48) = 5;
      *(undefined8 *)(puVar24 + 8) = 0;
      *(undefined4 *)(puVar24 + 0x28) = 3;
      *(undefined8 *)(puVar24 + 0x40) = 0;
      *(undefined8 *)(puVar24 + 0x60) = 0;
      *(undefined8 *)(puVar24 + 0x68) = 0x7d0000000001;
      *(undefined8 *)(puVar24 + 0x70) = 0x2000000000060;
      *(undefined8 *)(puVar24 + 0x50) = 0;
      *(undefined8 *)(puVar24 + 0x58) = 0;
      FUN_003dff98(puVar24 + 0x78);
      FUN_003e4908(puVar24 + 0x2b8);
      FUN_003ba454(puVar24 + 0x8c8);
      FUN_003e51f4(puVar24 + 0xbd8);
      *(undefined8 *)(puVar24 + 0xca0) = 0;
      *(undefined8 *)(puVar24 + 0xc98) = 0;
      *(undefined1 **)(puVar24 + 0xcb0) = puVar24 + 0xcbc;
      *(undefined8 *)(puVar24 + 0xc90) = 0;
      *(undefined8 *)(puVar24 + 0xc88) = 0;
      *(undefined8 *)(puVar24 + 0xc80) = 0;
      *(undefined8 *)(puVar24 + 0xc78) = 0;
      *(undefined8 *)(puVar24 + 0xc70) = 0;
      *(undefined8 *)(puVar24 + 0xc68) = 0;
      *(undefined8 *)(puVar24 + 0xc60) = 0;
      *(undefined8 *)(puVar24 + 0xc58) = 0;
      *(undefined8 *)(puVar24 + 0xc50) = 0;
      *(undefined8 *)(puVar24 + 0xc48) = 0;
      *(undefined8 *)(puVar24 + 0xc40) = 0;
      *(undefined8 *)(puVar24 + 0xc38) = 0;
      *(undefined8 *)(puVar24 + 0xc30) = 0;
      *(undefined8 *)(puVar24 + 0xc28) = 0;
      *(undefined4 *)(puVar24 + 0xcb8) = 0x20;
      puVar24[0xcdb] = 0;
      *(undefined **)(puVar24 + 0xca8) = PTR_DAT_04bb2028 + 0x10;
      *(undefined8 *)(puVar24 + 0xd00) = 0;
      *(undefined8 *)(puVar24 + 0xd08) = 0;
      puVar24[0xcbc] = 0;
      *(undefined8 *)(puVar24 + 0xce0) = 0;
      *(undefined8 *)(puVar24 + 0xce8) = 0;
      *(undefined8 *)(puVar24 + 0xcf0) = 0;
      puVar24[0xcf8] = 0;
      *(undefined1 **)(param_1 + 0x60) = puVar24;
      local_a8 = *(undefined4 *)((long)param_2 + 0x94);
      local_d0 = (undefined8 *****)(ulong)*(uint *)((long)param_2 + 0x13c);
      local_b0 = 0;
      local_a4 = param_2[0x16];
      local_d8 = (undefined8 *****)CONCAT44(local_d8._4_4_,(int)param_2[0x27]);
      local_9c = *(uint *)(param_2 + 0x17);
      local_c8 = CONCAT44(local_c8._4_4_,(int)param_2[0x28]);
      local_b8 = param_2[0x26];
      local_100 = (short *)CONCAT44(local_100._4_4_,(int)param_2[0x1c]);
      local_f8 = (char *)param_2[0x1d];
      local_f0 = 0x20000;
      local_e8 = CONCAT44(local_e8._4_4_,(int)param_2[0x1e]);
      local_e0 = param_2[0x1f];
      local_c0 = param_2[0x29];
      FUN_03b40bb0(puVar24,&local_100,plVar4);
    }
  }
  else {
    if (plVar4 == (long *)0x0) {
      lVar31 = 1;
      plVar18 = *(long **)(param_1 + 0x160);
    }
    else {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar31 = *(long *)(lVar17 + 0xa8);
      *(long **)(lVar17 + 0xa8) = plVar4;
      plVar18 = *(long **)(param_1 + 0x160);
    }
    if (plVar18 == (long *)0x0) {
      lVar17 = *(long *)puVar12;
      if (lVar17 == 0) {
        plVar18 = malloc(0x68);
      }
      else {
        plVar21 = plVar4;
        if (plVar4 == (long *)0x0) {
          lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar21 = (long *)(lVar17 + 8);
          if (lVar20 != 0) {
            plVar21 = (long *)(lVar20 + 0xa8);
          }
          plVar21 = (long *)*plVar21;
          plVar18 = (long *)0x0;
          if (plVar21 == (long *)0x0) goto LAB_03b4ac58;
        }
        plVar18 = (long *)(**(code **)(*plVar21 + 0x30))(plVar21,0x68,8);
      }
LAB_03b4ac58:
      plVar18[4] = 0x3f800000;
      *(undefined1 *)((long)plVar18 + 0x2c) = 1;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      *plVar18 = (long)(PTR_DAT_04bd2330 + 0x10);
      puVar11 = PTR_DAT_04bb2120;
      *(undefined4 *)(plVar18 + 1) = 0;
      *(undefined4 *)(plVar18 + 5) = 0;
      plVar18[2] = 0;
      plVar18[3] = 0;
      *(undefined1 *)(plVar18 + 0xc) = 0;
      plVar18[10] = 0;
      plVar18[0xb] = 0;
      plVar18[6] = (long)puVar1;
      plVar18[7] = (long)puVar11;
      plVar18[8] = (long)puVar1;
      plVar18[9] = (long)puVar11;
    }
    *(long **)(param_1 + 0x150) = plVar18;
    plVar18[7] = param_2[0x26];
    *(undefined4 *)(plVar18 + 1) = 1;
    *(undefined4 *)(*(long *)(param_1 + 0x150) + 0x18) = 0x8000;
    *(long **)(*(long *)(param_1 + 0x150) + 0x10) = plVar4;
    if (1.0 < *(float *)(param_2 + 0x27)) {
      *(float *)(*(long *)(param_1 + 0x150) + 0x20) = *(float *)(param_2 + 0x27);
    }
    if (*(int *)((long)param_2 + 0x13c) != 0) {
      *(int *)(*(long *)(param_1 + 0x150) + 0x24) = *(int *)((long)param_2 + 0x13c);
    }
    lVar17 = *(long *)(param_1 + 0x158);
    if (lVar17 == 0) {
      lVar17 = *(long *)puVar12;
      if (lVar17 == 0) {
        plVar18 = malloc(0x1a0);
      }
      else {
        plVar18 = plVar4;
        if (plVar4 == (long *)0x0) {
          lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar18 = (long *)(lVar17 + 8);
          if (lVar20 != 0) {
            plVar18 = (long *)(lVar20 + 0xa8);
          }
          plVar18 = (long *)*plVar18;
          if (plVar18 == (long *)0x0) {
            plVar18 = (long *)0x0;
            goto LAB_03b4ad68;
          }
        }
        plVar18 = (long *)(**(code **)(*plVar18 + 0x30))(plVar18,0x1a0,8);
      }
LAB_03b4ad68:
      puVar1 = PTR_DAT_04bd2350;
      plVar18[2] = 0;
      *plVar18 = (long)(puVar1 + 0x10);
      plVar18[1] = 0;
      FUN_003cc7ec(plVar18 + 3);
      *(undefined4 *)(plVar18 + 0x16) = 0;
      *(undefined1 *)((long)plVar18 + 0xbc) = 1;
      FUN_038e18e4(plVar18 + 0x18);
      *(undefined1 *)(plVar18 + 0x20) = 1;
      *(undefined8 *)((long)plVar18 + 0xb4) = 0x100000001;
      plVar18[0x25] = (long)(plVar18 + 0x24);
      plVar18[0x26] = -0x100000000;
      plVar18[0x24] = (long)(plVar18 + 0x24);
      *(undefined8 *)((long)plVar18 + 0x104) = 0;
      *(undefined8 *)((long)plVar18 + 0x10c) = 0;
      *(undefined8 *)((long)plVar18 + 0x111) = 0;
      FUN_038e18e4(plVar18 + 0x27);
      plVar18[0x2f] = 0;
      *(undefined1 *)(plVar18 + 0x30) = 0;
      *(undefined4 *)((long)plVar18 + 0x184) = 0x11;
      *(undefined4 *)(plVar18 + 0x32) = 0;
      puVar1 = PTR_DAT_04bd2358 + 0x10;
      *(undefined1 *)(plVar18 + 0x33) = 1;
      plVar18[0x31] = (long)puVar1;
      *(undefined4 *)((long)plVar18 + 0x134) = 8;
      *(long **)(param_1 + 0x148) = plVar18;
      plVar18[0x21] = (long)plVar4;
      lVar17 = *(long *)(param_1 + 0x148);
      pMVar2 = (MutexType *)(lVar17 + 0xe0);
      nn::os::LockMutex(pMVar2);
      *(undefined1 *)(lVar17 + 0xbc) = 0;
      nn::os::UnlockMutex(pMVar2);
      lVar17 = *(long *)(param_1 + 0x148);
    }
    else {
      *(long *)(param_1 + 0x148) = lVar17;
    }
    local_e0 = *(long *)(param_1 + 0x150);
    local_f0 = 0;
    local_e8 = 0;
    local_100 = (short *)(PTR_DAT_04bd2370 + 0x10);
    local_c8 = 0x800000000;
    local_d8 = &local_d8;
    local_d0 = &local_d8;
    if (*(long *)(param_1 + 0x168) != 0) {
      local_e8 = *(long *)(param_1 + 0x168);
    }
    while ((int)param_2[0x31] != 0) {
      if ((int)param_2[0x31] < 1) {
        plVar18 = (long *)0x0;
      }
      else {
        plVar18 = (long *)param_2[0x30];
        if (*plVar18 != 0) {
          *(long *)(*plVar18 + 8) = plVar18[1];
        }
        if ((long *)plVar18[1] != (long *)0x0) {
          *(long *)plVar18[1] = *plVar18;
        }
        *plVar18 = 0;
        plVar18[1] = 0;
        *(int *)(param_2 + 0x31) = (int)param_2[0x31] + -1;
      }
      lVar20 = 0;
      if (plVar18 != (long *)0x0) {
        lVar20 = (long)plVar18 - (long)*(int *)((long)param_2 + 0x18c);
      }
      pppppuVar3 = (undefined8 *****)(lVar20 + local_c8._4_4_);
      *pppppuVar3 = local_d8;
      pppppuVar3[1] = &local_d8;
      if (local_d8 != (undefined8 *****)0x0) {
        local_d8[1] = pppppuVar3;
      }
      local_c8 = CONCAT44(local_c8._4_4_,(int)local_c8 + 1);
      local_d8 = pppppuVar3;
    }
    local_f8 = (char *)lVar17;
    uVar22 = FUN_03bcf598(plVar4);
    *(undefined8 *)(param_1 + 0x140) = uVar22;
    FUN_03bcf830(uVar22,&local_100,plVar4);
    puVar32 = *(undefined8 **)(*(long *)(param_1 + 0x140) + 0x18);
    if (((*PTR_DAT_04bd1e40 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_04bd1e40), iVar16 != 0)) {
      *(undefined **)PTR_DAT_04bd1e38 = PTR_DAT_04bd1e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd1e40);
    }
    if ((puVar32 != (undefined8 *)0x0) &&
       (uVar23 = (**(code **)*puVar32)(puVar32,PTR_DAT_04bd1e38), (uVar23 & 1) != 0)) {
      FUN_03bce1a4(puVar32[0x69],"GROUP_DUMMY",0xffffffff,0,0);
    }
    if (lVar31 != 1) {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      *(long *)(lVar17 + 0xa8) = lVar31;
    }
  }
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)((long)param_2 + 0x94);
  lVar31 = *(long *)puVar12;
  if (lVar31 == 0) {
    puVar24 = malloc(0x230);
  }
  else {
    plVar18 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar18 = (long *)(lVar31 + 8);
      if (lVar17 != 0) {
        plVar18 = (long *)(lVar17 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        puVar24 = (undefined1 *)0x0;
        goto LAB_03b4b164;
      }
    }
    puVar24 = (undefined1 *)(**(code **)(*plVar18 + 0x30))(plVar18,0x230,8);
  }
LAB_03b4b164:
  *puVar24 = 0;
  *(undefined8 *)(puVar24 + 4) = 0xffff00000000;
  *(undefined4 *)(puVar24 + 0x20) = 0x40;
  __dest = puVar24 + 0x24;
  puVar24[99] = 0;
  puVar1 = PTR_PTR_04bb2238;
  *(undefined **)(puVar24 + 0x10) = PTR_DAT_04bb2f70 + 0x10;
  *(undefined1 **)(puVar24 + 0x18) = __dest;
  (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
  __src = *(undefined1 **)(puVar1 + 8);
  if (__dest != __src) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    lVar31 = 0;
    do {
      if (*(char *)(*(long *)(puVar1 + 8) + lVar31) == '\0') goto LAB_03b4b210;
      lVar17 = *(long *)(puVar1 + 8) + lVar31;
      if (*(char *)(lVar17 + 1) == '\0') {
        lVar31 = lVar31 + 1;
        goto LAB_03b4b210;
      }
      if (*(char *)(lVar17 + 2) == '\0') {
        lVar31 = lVar31 + 2;
        goto LAB_03b4b210;
      }
      lVar31 = lVar31 + 3;
    } while (lVar31 != 0x80001);
    lVar31 = 0;
LAB_03b4b210:
    iVar16 = (int)lVar31;
    if (*(int *)(puVar24 + 0x20) <= (int)lVar31) {
      iVar16 = *(int *)(puVar24 + 0x20) + -1;
    }
    memcpy(__dest,__src,(long)iVar16);
    __dest[iVar16] = 0;
  }
  *(undefined4 *)(puVar24 + 0x80) = 0;
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(puVar24 + 0x68) = 0x3f800000;
  *(undefined1 **)(puVar24 + 0x70) = puVar24 + 0x84;
  *(undefined8 *)(puVar24 + 0x78) = 0x10;
  puVar24[0x1d4] = 0;
  *(undefined4 *)(puVar24 + 0x188) = 0;
  *(undefined4 *)(puVar24 + 0x1d0) = 0x40;
  *(undefined **)(puVar24 + 0x10) = puVar1 + 0x10;
  puVar24[0x213] = 0;
  puVar24[0x218] = 0;
  *(undefined8 *)(puVar24 + 0x228) = 0;
  *(undefined8 *)(puVar24 + 0x220) = 0;
  *(undefined8 *)(puVar24 + 400) = 0;
  *(undefined8 *)(puVar24 + 0x198) = 0;
  *(undefined8 *)(puVar24 + 0x1a0) = 0;
  *(undefined8 *)(puVar24 + 0x1a8) = 0;
  *(undefined8 *)(puVar24 + 0x1b0) = 0;
  *(undefined8 *)(puVar24 + 0x1b8) = 0;
  *(undefined **)(puVar24 + 0x1c0) = puVar1 + 0x10;
  *(undefined1 **)(puVar24 + 0x1c8) = puVar24 + 0x1d4;
  *(undefined1 **)(param_1 + 0x90) = puVar24;
  FUN_03b38f80(puVar24,plVar4);
  lVar31 = *(long *)puVar12;
  if (lVar31 == 0) {
    pvVar19 = malloc(0x60);
  }
  else {
    plVar18 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar18 = (long *)(lVar31 + 8);
      if (lVar17 != 0) {
        plVar18 = (long *)(lVar17 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
    }
    pvVar19 = (void *)(**(code **)(*plVar18 + 0x30))(plVar18,0x60,8);
  }
  FUN_03b7fa4c();
  *(void **)(param_1 + 0x98) = pvVar19;
  if ((int)param_2[0x37] < 1) {
    bVar14 = false;
  }
  else {
    lVar31 = *(long *)puVar12;
    if (lVar31 == 0) {
      plVar18 = malloc(0xc0);
    }
    else {
      plVar18 = plVar4;
      if (plVar4 == (long *)0x0) {
        lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar18 = (long *)(lVar31 + 8);
        if (lVar17 != 0) {
          plVar18 = (long *)(lVar17 + 0xa8);
        }
        plVar18 = (long *)*plVar18;
        if (plVar18 == (long *)0x0) {
          plVar18 = (long *)0x0;
          goto LAB_03b4b378;
        }
      }
      plVar18 = (long *)(**(code **)(*plVar18 + 0x30))(plVar18,0xc0,8);
    }
LAB_03b4b378:
    puVar1 = PTR_DAT_04bd1e88;
    plVar18[2] = 0;
    plVar18[3] = 0xffffffff;
    plVar18[4] = (long)(plVar18 + 4);
    plVar18[5] = (long)(plVar18 + 4);
    plVar18[8] = (long)(plVar18 + 7);
    plVar18[9] = -0x100000000;
    plVar18[6] = -0x100000000;
    plVar18[7] = (long)(plVar18 + 7);
    *plVar18 = (long)(puVar1 + 0x10);
    plVar18[1] = 0;
    plVar18[10] = (long)(plVar18 + 10);
    plVar18[0xb] = (long)(plVar18 + 10);
    plVar18[0xe] = (long)(plVar18 + 0xd);
    plVar18[0xf] = -0x100000000;
    plVar18[0xc] = -0x100000000;
    plVar18[0xd] = (long)(plVar18 + 0xd);
    FUN_038e18e4(plVar18 + 0x10);
    *(undefined4 *)((long)plVar18 + 0x34) = 0x68;
    *(undefined4 *)((long)plVar18 + 0x4c) = 0x68;
    *(undefined4 *)((long)plVar18 + 100) = 0x78;
    *(undefined4 *)((long)plVar18 + 0x7c) = 0x78;
    *(long **)(param_1 + 0xb0) = plVar18;
    FUN_03b4d980(plVar18,(long)(int)param_2[0x37],plVar4);
    bVar14 = *(long *)(param_1 + 0x98) == 0;
  }
  if ((((short *)param_2[0xf] != (short *)0x0) && (!bVar14)) && (*(long *)(param_1 + 0x90) != 0)) {
    local_f8 = (char *)0x0;
    local_100 = (short *)param_2[0xf];
    uVar23 = FUN_03b36f10();
    if ((uVar23 & 1) == 0) {
      local_100 = (short *)0x0;
      local_f8 = (char *)0x0;
    }
    else {
      uVar5 = *(uint *)(local_100 + 6);
      uVar8 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
      if (*local_100 != 0x5942) {
        uVar8 = uVar5;
      }
      if (uVar8 != 0) {
        local_f8 = (char *)((long)local_100 + (ulong)uVar8);
      }
    }
    FUN_03b80450(*(undefined8 *)(param_1 + 0x98),plVar4,plVar4,1,&local_100);
    local_110 = PTR_DAT_04bb2020 + 0x10;
    pcStack_108 = "Default";
    FUN_03b3a860(*(undefined8 *)(param_1 + 0x90),plVar4,&local_100,&local_110);
  }
  lVar31 = *(long *)puVar12;
  if (lVar31 == 0) {
    plVar18 = malloc(0x68);
  }
  else {
    plVar18 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar18 = (long *)(lVar31 + 8);
      if (lVar17 != 0) {
        plVar18 = (long *)(lVar17 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
    }
    plVar18 = (long *)(**(code **)(*plVar18 + 0x30))(plVar18,0x68,8);
  }
  *(undefined1 *)(plVar18 + 1) = 0;
  puVar1 = PTR_DAT_04bd2258;
  plVar18[2] = 0;
  plVar18[3] = 0;
  *(undefined4 *)(plVar18 + 6) = 0;
  plVar18[7] = 0;
  plVar18[8] = 0;
  *(undefined4 *)(plVar18 + 9) = 0;
  *plVar18 = (long)(puVar1 + 0x10);
  plVar18[4] = (long)(plVar18 + 4);
  plVar18[5] = (long)(plVar18 + 4);
  plVar18[10] = (long)(plVar18 + 10);
  plVar18[0xb] = (long)(plVar18 + 10);
  plVar18[0xc] = -0x100000000;
  *(long **)(param_1 + 0x20) = plVar18;
  FUN_03baa960(plVar18,(int)param_2[4],plVar4);
  *(long *)(param_1 + 0xb8) = param_2[0x24];
  lVar31 = *(long *)puVar12;
  *(char *)(param_1 + 0xc0) = (char)param_2[0x25];
  if (lVar31 == 0) {
    plVar18 = malloc(0x30);
  }
  else {
    plVar21 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar21 = (long *)(lVar31 + 8);
      if (lVar17 != 0) {
        plVar21 = (long *)(lVar17 + 0xa8);
      }
      plVar21 = (long *)*plVar21;
      plVar18 = (long *)0x0;
      if (plVar21 == (long *)0x0) goto LAB_03b4b5a0;
    }
    plVar18 = (long *)(**(code **)(*plVar21 + 0x30))(plVar21,0x30,8);
  }
LAB_03b4b5a0:
  puVar1 = PTR_DAT_04bd2088;
  plVar18[2] = 0;
  plVar18[3] = 0;
  plVar18[4] = 0;
  plVar18[5] = 0;
  *plVar18 = (long)(puVar1 + 0x10);
  plVar18[1] = 0;
  *(long **)(param_1 + 0x68) = plVar18;
  FUN_03b739e4(plVar18,(int)param_2[0x16],plVar4);
  lVar31 = *(long *)puVar12;
  if (lVar31 == 0) {
    plVar18 = malloc(0xc78);
  }
  else {
    plVar18 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar18 = (long *)(lVar31 + 8);
      if (lVar17 != 0) {
        plVar18 = (long *)(lVar17 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        plVar18 = (long *)0x0;
        goto LAB_03b4b628;
      }
    }
    plVar18 = (long *)(**(code **)(*plVar18 + 0x30))(plVar18,0xc78,8);
  }
LAB_03b4b628:
  *plVar18 = (long)(PTR_DAT_04bd1e60 + 0x10);
  plVar18[0x25] = (long)(PTR_DAT_04bd1e68 + 0x10);
  plVar18[0x26] = -0x3ddfffffba060000;
  *(undefined4 *)(plVar18 + 0x27) = 0x473b8000;
  if (*(long *)puVar13 != 0) {
    *(float *)(plVar18 + 0x27) = (float)*(int *)(*(long *)puVar13 + 0x50);
  }
  *(undefined1 *)(plVar18 + 0x188) = 0;
  *(undefined8 *)((long)plVar18 + 0xc44) = 1;
  *(undefined1 *)((long)plVar18 + 0xc56) = 0;
  *(undefined8 *)((long)plVar18 + 0xc4c) = 0x300000001;
  *(undefined2 *)((long)plVar18 + 0xc54) = 0x100;
  plVar18[0x18b] = 0x442f0000447a0000;
  plVar18[1] = 0;
  plVar18[2] = 0;
  plVar18[0x18c] = 0x3dcccccd42480000;
  plVar18[3] = 0;
  plVar18[4] = 0;
  plVar18[0x18d] = 0x3e99999a3e4ccccd;
  *(undefined4 *)(plVar18 + 0x18e) = 0x3f400000;
  *(undefined4 *)(plVar18 + 0x24) = 0xffffffff;
  plVar18[0x21] = -1;
  plVar18[5] = 0;
  plVar18[6] = 0;
  plVar18[7] = 0;
  plVar18[8] = 0;
  plVar18[9] = 0;
  plVar18[10] = 0;
  plVar18[0xb] = 0;
  plVar18[0xc] = 0;
  plVar18[0xd] = 0;
  plVar18[0xe] = 0;
  plVar18[0xf] = 0;
  plVar18[0x10] = 0;
  plVar18[0x11] = 0;
  plVar18[0x12] = 0;
  plVar18[0x13] = 0;
  plVar18[0x14] = 0;
  plVar18[0x15] = 0;
  plVar18[0x16] = 0;
  plVar18[0x17] = 0;
  plVar18[0x18] = 0;
  plVar18[0x19] = 0;
  plVar18[0x1a] = 0;
  plVar18[0x1b] = 0;
  plVar18[0x1c] = 0;
  plVar18[0x1d] = 0;
  plVar18[0x1e] = 0;
  plVar18[0x1f] = 0;
  plVar18[0x20] = 0;
  plVar18[0x22] = -1;
  plVar18[0x23] = -1;
  FUN_03b37270(plVar18);
  *(long **)(param_1 + 0x70) = plVar18;
  lVar31 = *(long *)puVar12;
  if (lVar31 == 0) {
    pvVar19 = malloc(0x1a0);
  }
  else {
    plVar18 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar18 = (long *)(lVar31 + 8);
      if (lVar17 != 0) {
        plVar18 = (long *)(lVar17 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
    }
    pvVar19 = (void *)(**(code **)(*plVar18 + 0x30))(plVar18,0x1a0,8);
  }
  FUN_03b415d8();
  *(void **)(param_1 + 0x10) = pvVar19;
  FUN_03b4170c(*(undefined4 *)((long)param_2 + 0x19c),pvVar19,(int)param_2[0xe],param_2[0xc],
               param_2[0xd],plVar4);
  lVar31 = *(long *)puVar12;
  if (lVar31 == 0) {
    pvVar19 = malloc(200);
  }
  else {
    plVar18 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar18 = (long *)(lVar31 + 8);
      if (lVar17 != 0) {
        plVar18 = (long *)(lVar17 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        pvVar19 = (void *)0x0;
        goto LAB_03b4b80c;
      }
    }
    pvVar19 = (void *)(**(code **)(*plVar18 + 0x30))(plVar18,200,8);
  }
LAB_03b4b80c:
  *(void **)pvVar19 = pvVar19;
  *(void **)((long)pvVar19 + 8) = pvVar19;
  *(long *)((long)pvVar19 + 0x20) = (long)pvVar19 + 0x18;
  *(undefined8 *)((long)pvVar19 + 0x28) = 0xffffffff00000000;
  *(undefined8 *)((long)pvVar19 + 0x10) = 0xffffffff00000000;
  *(long *)((long)pvVar19 + 0x18) = (long)pvVar19 + 0x18;
  FUN_038e18e4((long)pvVar19 + 0x30);
  *(undefined1 *)((long)pvVar19 + 0x70) = 0;
  *(undefined4 *)((long)pvVar19 + 0x7c) = 0x41200000;
  *(undefined8 *)((long)pvVar19 + 0x80) = 0;
  *(undefined8 *)((long)pvVar19 + 0x88) = 0;
  *(undefined8 *)((long)pvVar19 + 0x90) = 0x3f0000003f800000;
  *(undefined1 **)((long)pvVar19 + 0x98) = &DAT_3f8000003f800000;
  *(undefined8 *)((long)pvVar19 + 0xc0) = 0x3f80000000000000;
  *(undefined8 *)((long)pvVar19 + 0xa0) = 0x3f80000000000000;
  *(undefined8 *)((long)pvVar19 + 0xa8) = 0x3f80000000000000;
  *(undefined8 *)((long)pvVar19 + 0xb0) = 0x3f80000000000000;
  *(undefined8 *)((long)pvVar19 + 0xb8) = 0x3f800000;
  *(undefined4 *)((long)pvVar19 + 0x14) = 0x50;
  *(undefined4 *)((long)pvVar19 + 0x2c) = 0x40;
  *(undefined8 *)((long)pvVar19 + 0x74) = 0x3dcccccd000000cb;
  *(void **)(param_1 + 0x30) = pvVar19;
  FUN_03bd06ac(pvVar19,*(undefined8 *)(param_1 + 0x108));
  if (param_2[5] != 0) {
    local_f8 = *(char **)(param_1 + 0x30);
    local_100 = (short *)(PTR_DAT_04bd2378 + 0x10);
    FUN_03bd0ab0(&local_100,param_2[5],plVar4);
  }
  lVar31 = FUN_03bbffd8(plVar4);
  uVar8 = *(uint *)(param_2 + 9);
  uVar5 = uVar8 - 1;
  if ((int)uVar8 < 1) {
LAB_03b4b9a4:
    lVar31 = *(long *)puVar12;
    if (lVar31 == 0) goto LAB_03b4ba24;
    plVar18 = plVar4;
    if (plVar4 == (long *)0x0) {
LAB_03b4b9b8:
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar18 = (long *)(lVar31 + 8);
      if (lVar17 != 0) {
        plVar18 = (long *)(lVar17 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
    }
    puVar32 = (undefined8 *)(**(code **)(*plVar18 + 0x30))(plVar18,0x10,8);
  }
  else {
    lVar17 = *(long *)puVar12;
    if (lVar17 == 0) {
      pvVar19 = malloc((long)(int)uVar8 * 0x60);
joined_r0x03b4b938:
      if (pvVar19 != (void *)0x0) {
        *(void **)(lVar31 + 0x20) = pvVar19;
        if (1 < uVar8) {
          if (uVar5 == 1) {
            uVar23 = 0;
          }
          else {
            uVar23 = 0;
            plVar18 = (long *)((long)pvVar19 + 0x60);
            do {
              uVar23 = uVar23 + 2;
              plVar18[-0xc] = (long)plVar18;
              *plVar18 = (long)(plVar18 + 0xc);
              plVar18 = plVar18 + 0x18;
            } while (((ulong)uVar5 & 0xfffffffe) != uVar23);
          }
          if ((uVar5 & 1) != 0) {
            plVar18 = (long *)((long)pvVar19 + uVar23 * 0x60);
            *plVar18 = (long)(plVar18 + 0xc);
          }
        }
        *(undefined8 *)((long)pvVar19 + (long)(int)(uVar5 * 0xc) * 8) = 0;
        *(void **)(lVar31 + 0x28) = pvVar19;
        *(uint *)(lVar31 + 0x30) = uVar8;
      }
      goto LAB_03b4b9a4;
    }
    plVar18 = plVar4;
    if (plVar4 != (long *)0x0) {
LAB_03b4b914:
      pvVar19 = (void *)(**(code **)(*plVar18 + 0x30))(plVar18,(long)(int)uVar8 * 0x60,8);
      goto joined_r0x03b4b938;
    }
    lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar18 = (long *)(lVar17 + 8);
    if (lVar20 != 0) {
      plVar18 = (long *)(lVar20 + 0xa8);
    }
    plVar18 = (long *)*plVar18;
    if (plVar18 != (long *)0x0) goto LAB_03b4b914;
    lVar31 = *(long *)puVar12;
    if (lVar31 != 0) goto LAB_03b4b9b8;
LAB_03b4ba24:
    puVar32 = malloc(0x10);
  }
  *puVar32 = 0;
  lVar31 = *(long *)puVar12;
  *(undefined4 *)(puVar32 + 1) = 0x46fa0000;
  *(undefined8 **)(param_1 + 0x48) = puVar32;
  if (lVar31 == 0) {
    pvVar19 = malloc(0x60);
  }
  else {
    plVar18 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar18 = (long *)(lVar31 + 8);
      if (lVar17 != 0) {
        plVar18 = (long *)(lVar17 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        pvVar19 = (void *)0x0;
        goto LAB_03b4ba9c;
      }
    }
    pvVar19 = (void *)(**(code **)(*plVar18 + 0x30))(plVar18,0x60,8);
  }
LAB_03b4ba9c:
  *(void **)pvVar19 = pvVar19;
  *(void **)((long)pvVar19 + 8) = pvVar19;
  *(undefined8 *)((long)pvVar19 + 0x10) = 0xffffffff00000000;
  FUN_038e18e4((long)pvVar19 + 0x18);
  lVar31 = *(long *)puVar12;
  *(undefined1 *)((long)pvVar19 + 0x58) = 0;
  *(undefined4 *)((long)pvVar19 + 0x14) = 8;
  *(void **)(param_1 + 0x58) = pvVar19;
  DAT_05aebb70 = pvVar19;
  if (lVar31 == 0) {
    pvVar19 = malloc(400);
  }
  else {
    plVar18 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar18 = (long *)(lVar31 + 8);
      if (lVar17 != 0) {
        plVar18 = (long *)(lVar17 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        pvVar19 = (void *)0x0;
        goto LAB_03b4bb28;
      }
    }
    pvVar19 = (void *)(**(code **)(*plVar18 + 0x30))(plVar18,400,8);
  }
LAB_03b4bb28:
  *(undefined4 *)((long)pvVar19 + 0x38) = 0;
  *(undefined4 *)((long)pvVar19 + 0x20) = 1;
  *(void **)pvVar19 = pvVar19;
  *(void **)((long)pvVar19 + 8) = pvVar19;
  *(undefined8 *)((long)pvVar19 + 0x60) = 0;
  *(undefined8 *)((long)pvVar19 + 0x10) = 0xffffffff00000000;
  *(undefined8 *)((long)pvVar19 + 0x18) = 0;
  *(undefined8 *)((long)pvVar19 + 0x28) = 0;
  *(undefined8 *)((long)pvVar19 + 0x30) = 0;
  *(long *)((long)pvVar19 + 0x40) = (long)pvVar19 + 0x40;
  *(long *)((long)pvVar19 + 0x48) = (long)pvVar19 + 0x40;
  *(undefined8 *)((long)pvVar19 + 0x50) = 0xffffffff00000000;
  *(undefined8 *)((long)pvVar19 + 0x58) = 0;
  FUN_038e18e4((long)pvVar19 + 0x68);
  FUN_038e18e4((long)pvVar19 + 0xa8);
  FUN_038e18e4((long)pvVar19 + 0xe8);
  *(undefined1 *)((long)pvVar19 + 0x128) = 1;
  *(undefined8 *)((long)pvVar19 + 0x130) = 0;
  *(undefined8 *)((long)pvVar19 + 0x138) = 0;
  *(undefined8 *)((long)pvVar19 + 0x188) = 0;
  *(undefined1 *)((long)pvVar19 + 0x180) = 0;
  *(undefined8 *)((long)pvVar19 + 0x140) = 0;
  *(undefined8 *)((long)pvVar19 + 0x148) = 0;
  *(undefined8 *)((long)pvVar19 + 0x150) = 0;
  *(undefined8 *)((long)pvVar19 + 0x158) = 0x4248000042200000;
  *(undefined8 *)((long)pvVar19 + 0x160) = 0;
  *(undefined8 *)((long)pvVar19 + 0x168) = 0;
  *(undefined8 *)((long)pvVar19 + 0x170) = 0;
  *(undefined8 *)((long)pvVar19 + 0x178) = 0;
  *(void **)(param_1 + 8) = pvVar19;
  local_100 = (short *)CONCAT44(*(undefined4 *)((long)param_2 + 0x4c),(int)param_2[2]);
  local_f8 = (char *)param_2[0xb];
  local_f0 = CONCAT44(local_f0._4_4_,(int)param_2[10]);
  FUN_03b3d7b0(pvVar19,&local_100,plVar4);
  if (*(int *)((long)param_2 + 0x14) == 1) {
    iVar16 = *(int *)((long)param_2 + 0x1c);
joined_r0x03b4bbe8:
    if (iVar16 != 0) {
      lVar31 = *(long *)(param_1 + 8);
      local_110 = PTR_DAT_04bb2020 + 0x10;
      pcStack_108 = "aal::Emitter";
      uVar22 = FUN_038c6d48(iVar16,&local_110,plVar4,8,1,1);
      *(undefined8 *)(lVar31 + 0x18) = uVar22;
    }
  }
  else if (*(int *)((long)param_2 + 0x14) == 0) {
    iVar16 = (int)param_2[3] * 0x208;
    goto joined_r0x03b4bbe8;
  }
  lVar31 = *(long *)puVar12;
  if (lVar31 == 0) {
    pvVar19 = malloc(0x188);
  }
  else {
    plVar18 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar18 = (long *)(lVar31 + 8);
      if (lVar17 != 0) {
        plVar18 = (long *)(lVar17 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
    }
    pvVar19 = (void *)(**(code **)(*plVar18 + 0x30))(plVar18,0x188,8);
  }
  FUN_03baf5cc();
  *(void **)(param_1 + 0x28) = pvVar19;
  FUN_03baf910(pvVar19,plVar4);
  lVar31 = *(long *)puVar12;
  if (lVar31 == 0) {
    plVar18 = malloc(0xc0);
  }
  else {
    plVar21 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar21 = (long *)(lVar31 + 8);
      if (lVar17 != 0) {
        plVar21 = (long *)(lVar17 + 0xa8);
      }
      plVar21 = (long *)*plVar21;
      plVar18 = (long *)0x0;
      if (plVar21 == (long *)0x0) goto LAB_03b4bcf4;
    }
    plVar18 = (long *)(**(code **)(*plVar21 + 0x30))(plVar21,0xc0,8);
  }
LAB_03b4bcf4:
  puVar13 = PTR_DAT_04bd21e8;
  *(undefined2 *)(plVar18 + 1) = 0;
  plVar25 = plVar18 + 8;
  *plVar25 = (long)(puVar13 + 0x10);
  puVar13 = PTR_DAT_04bd2200;
  plVar21 = plVar18 + 4;
  *(undefined4 *)(plVar18 + 9) = 0;
  plVar18[2] = 0;
  plVar18[3] = 0;
  plVar18[4] = (long)plVar21;
  plVar18[5] = (long)plVar21;
  *plVar18 = (long)(puVar13 + 0x10);
  plVar18[6] = -0x100000000;
  plVar18[7] = (long)plVar25;
  puVar13 = PTR_DAT_04bd1eb0;
  plVar18[0x13] = 0;
  *(undefined4 *)(plVar18 + 0x11) = 0;
  *(undefined8 *)((long)plVar18 + 0x8c) = 0;
  *(undefined4 *)(plVar18 + 0x14) = 0;
  plVar18[0x15] = 0;
  plVar18[0x16] = 0;
  *(undefined4 *)(plVar18 + 0x17) = 0;
  plVar18[10] = 0;
  plVar18[0xb] = (long)(puVar13 + 0x10);
  *(undefined4 *)(plVar18 + 0xc) = 0x3f800000;
  plVar18[0xf] = 0x3f800000;
  plVar18[0x10] = -0x100000000;
  *(undefined8 *)((long)plVar18 + 100) = 0xbf800000bf800000;
  *(undefined8 *)((long)plVar18 + 0x6c) = 0xbf800000bf800000;
  *(undefined4 *)((long)plVar18 + 0x74) = 0xbf800000;
  *(long **)(param_1 + 0x18) = plVar18;
  if ((char)plVar18[1] == '\0') {
    plVar28 = (long *)param_2[0x2b];
    *(undefined4 *)((long)plVar18 + 0x34) = 0x188;
    plVar9 = (long *)plVar18[5];
    while (plVar9 != plVar21) {
      plVar29 = (long *)plVar9[1];
      *plVar9 = 0;
      plVar9[1] = 0;
      plVar9 = plVar29;
    }
    *(undefined4 *)(plVar18 + 6) = 0;
    if (plVar28 != (long *)0x0) {
      plVar25 = plVar28;
    }
    plVar18[4] = (long)(plVar18 + 4);
    plVar18[5] = (long)plVar21;
    plVar18[7] = (long)plVar25;
    *(undefined1 *)(plVar18 + 1) = 1;
    plVar18 = *(long **)(param_1 + 0x18);
  }
  FUN_03ba3a2c(plVar18,param_2[0x10],plVar4);
  lVar31 = *(long *)puVar12;
  if (lVar31 == 0) {
    plVar18 = malloc(0xe0);
  }
  else {
    plVar18 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar18 = (long *)(lVar31 + 8);
      if (lVar17 != 0) {
        plVar18 = (long *)(lVar17 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        plVar18 = (long *)0x0;
        goto LAB_03b4be48;
      }
    }
    plVar18 = (long *)(**(code **)(*plVar18 + 0x30))(plVar18,0xe0,8);
  }
LAB_03b4be48:
  puVar13 = PTR_DAT_04bd22f0;
  plVar18[4] = (long)(plVar18 + 4);
  plVar18[5] = (long)(plVar18 + 4);
  *(undefined1 *)(plVar18 + 1) = 0;
  plVar18[2] = 0;
  plVar18[3] = 0;
  *(undefined4 *)((long)plVar18 + 0x54) = 0;
  *plVar18 = (long)(puVar13 + 0x10);
  plVar18[8] = (long)&PTR_PTR_04c4be48;
  *(undefined1 *)(plVar18 + 0xb) = 0xff;
  plVar18[6] = -0x100000000;
  plVar18[7] = 0;
  FUN_038e18e4(plVar18 + 0xc);
  *(undefined1 *)(plVar18 + 0x14) = 0;
  *(undefined1 *)((long)plVar18 + 0xbc) = 0;
  *(undefined8 *)((long)plVar18 + 0xa4) = 0x4220000044430000;
  uVar10 = DAT_04102318;
  uVar22 = DAT_04102310;
  plVar18[0x18] = 0;
  *(undefined8 *)((long)plVar18 + 0xac) = uVar22;
  *(undefined8 *)((long)plVar18 + 0xb4) = uVar10;
  lVar31 = nn::os::GetSystemTick();
  plVar18[9] = 0;
  *(undefined4 *)(plVar18 + 0x1b) = 0x4b7e502b;
  *(undefined4 *)((long)plVar18 + 0x34) = 0x1b0;
  plVar18[0x19] = lVar31;
  plVar18[0x1a] = 0;
  *(byte *)((long)plVar18 + 0xbc) = *(byte *)((long)plVar18 + 0xbc) | 1;
  *(long **)(param_1 + 0x38) = plVar18;
  local_100 = (short *)CONCAT44(local_100._4_4_,(int)param_2[6]);
  local_f8 = (char *)param_2[7];
  FUN_03bc6ee0(plVar18,&local_100,plVar4,*(undefined8 *)(param_1 + 0x108));
  lVar31 = *(long *)puVar12;
  if (lVar31 == 0) {
    plVar18 = malloc(0xc0);
  }
  else {
    plVar18 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar18 = (long *)(lVar31 + 8);
      if (lVar17 != 0) {
        plVar18 = (long *)(lVar17 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        plVar18 = (long *)0x0;
        goto LAB_03b4bf70;
      }
    }
    plVar18 = (long *)(**(code **)(*plVar18 + 0x30))(plVar18,0xc0,8);
  }
LAB_03b4bf70:
  plVar18[2] = (long)(plVar18 + 2);
  plVar18[3] = (long)(plVar18 + 2);
  puVar13 = PTR_DAT_04bd22a0;
  *(undefined1 *)(plVar18 + 1) = 0;
  *(undefined4 *)(plVar18 + 4) = 0;
  plVar18[5] = 0;
  plVar18[6] = 0;
  *(undefined4 *)(plVar18 + 7) = 0;
  *(undefined4 *)(plVar18 + 10) = 0;
  *(undefined4 *)(plVar18 + 0xd) = 0;
  *plVar18 = (long)(puVar13 + 0x10);
  plVar18[0xb] = 0;
  plVar18[0xc] = 0;
  plVar18[8] = (long)(plVar18 + 8);
  plVar18[9] = (long)(plVar18 + 8);
  FUN_038e18e4(plVar18 + 0xe);
  *(undefined1 *)(plVar18 + 0x16) = 0;
  *(undefined8 *)((long)plVar18 + 0xb4) = 0x43e10000440c0000;
  *(long **)(param_1 + 0x40) = plVar18;
  local_100 = (short *)CONCAT44((int)param_2[8],*(undefined4 *)((long)param_2 + 0x44));
  FUN_03bc0d30(plVar18,&local_100,plVar4);
  if ((char)param_2[0x12] != '\0') {
    lVar31 = *(long *)puVar12;
    if (lVar31 == 0) {
      plVar18 = malloc(0x110);
    }
    else {
      plVar18 = plVar4;
      if (plVar4 == (long *)0x0) {
        lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar18 = (long *)(lVar31 + 8);
        if (lVar17 != 0) {
          plVar18 = (long *)(lVar17 + 0xa8);
        }
        plVar18 = (long *)*plVar18;
        if (plVar18 == (long *)0x0) {
          plVar18 = (long *)0x0;
          goto LAB_03b4c048;
        }
      }
      plVar18 = (long *)(**(code **)(*plVar18 + 0x30))(plVar18,0x110,8);
    }
LAB_03b4c048:
    local_100 = (short *)(PTR_DAT_04bb2020 + 0x10);
    local_f8 = "aal::LowPrioWorkerThread";
    FUN_038e1f88(plVar18,&local_100,plVar4,(int)param_2[0x14],0,0x7fffffff,
                 *(undefined4 *)((long)param_2 + 0x9c),0x20);
    puVar13 = PTR_DAT_04bd20f0;
    plVar18[0x21] = 0;
    *plVar18 = (long)(puVar13 + 0x10);
    *(long **)(param_1 + 0x50) = plVar18;
    uVar8 = *(uint *)((long)param_2 + 0x94);
    if (*(uint *)(param_2 + 0x13) != 0x21) {
      uVar8 = *(uint *)(param_2 + 0x13);
    }
    local_100 = (short *)CONCAT44(local_100._4_4_,uVar8);
    uVar23 = 1L << ((ulong)uVar8 & 0x3f);
    *(int *)(plVar18 + 0x1a) = (int)uVar23;
    nn::os::GetThreadAvailableCoreMask();
    nn::os::SetThreadCoreMask((ThreadType *)plVar18[0x1d],-1,uVar23);
    (**(code **)(**(long **)(param_1 + 0x50) + 0x30))();
  }
  if (**(char **)(param_1 + 0x90) == '\0') {
    uVar22 = FUN_03b6cc54(plVar4);
    local_f0 = *(undefined8 *)((long)param_2 + 0xcc);
    local_e8 = *(long *)((long)param_2 + 0xd4);
    local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)((long)param_2 + 0xdc));
    local_100 = (short *)CONCAT71((int7)((ulong)*(undefined8 *)((long)param_2 + 0xbc) >> 8),
                                  (char)param_2[0x12]);
    local_f8 = (char *)CONCAT44((int)param_2[0x16],(int)*(undefined8 *)((long)param_2 + 0xc4));
    FUN_03b6ce84(uVar22,&local_100,plVar4);
  }
  piVar26 = (int *)param_2[0x10];
  if ((piVar26 == (int *)0x0) || (*piVar26 != 0x54534741)) goto LAB_03b4c3e0;
  if (((char)(*(ushort *)(piVar26 + 1) >> 8) != -1) || ((*(ushort *)(piVar26 + 1) & 0xff) != 0xfe))
  {
    uVar6 = *(ushort *)((long)piVar26 + 6);
    if (0xfffffff9 < uVar6 - 8) {
      lVar31 = (ulong)(uint)piVar26[5] + (long)piVar26;
      if (((4 < uVar6) || (uVar6 == 4)) && ((lVar31 != 0 && (*(int *)(lVar31 + 4) != 0)))) {
        lVar17 = lVar31 + 8;
        local_f8 = (char *)0x0;
        local_100 = (short *)lVar17;
        uVar23 = FUN_03b36f10(lVar17);
        if ((uVar23 & 1) == 0) {
          local_100 = (short *)0x0;
          local_f8 = (char *)0x0;
        }
        else {
          uVar5 = *(uint *)(lVar31 + 0x14);
          uVar8 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
          if (*(short *)(lVar31 + 8) != 0x5942) {
            uVar8 = uVar5;
          }
          if (uVar8 != 0) {
            local_f8 = (char *)(lVar17 + (ulong)uVar8);
          }
        }
        lVar31 = *(long *)puVar12;
        if (lVar31 == 0) {
          plVar18 = malloc(0x90);
        }
        else {
          plVar18 = plVar4;
          if (plVar4 == (long *)0x0) {
            lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar18 = (long *)(lVar31 + 8);
            if (lVar17 != 0) {
              plVar18 = (long *)(lVar17 + 0xa8);
            }
            plVar18 = (long *)*plVar18;
            if (plVar18 == (long *)0x0) {
              plVar18 = (long *)0x0;
              goto LAB_03b4c26c;
            }
          }
          plVar18 = (long *)(**(code **)(*plVar18 + 0x30))(plVar18,0x90,8);
        }
LAB_03b4c26c:
        puVar13 = PTR_DAT_04bd1e80;
        plVar18[2] = 0;
        plVar18[3] = 0;
        plVar18[4] = 0;
        plVar18[5] = 0;
        plVar18[8] = 0;
        plVar18[6] = 0;
        plVar18[7] = 0;
        *plVar18 = (long)(puVar13 + 0x10);
        plVar18[1] = 0;
        FUN_038e18e4(plVar18 + 9);
        *(undefined4 *)(plVar18 + 0x11) = 2;
        *(long **)(param_1 + 0xa0) = plVar18;
        FUN_03b3ee50(plVar18,&local_100,plVar4);
        piVar26 = (int *)param_2[0x10];
        if (piVar26 == (int *)0x0) goto LAB_03b4c3e0;
      }
    }
  }
  if ((*piVar26 != 0x54534741) ||
     ((((0xfe < (byte)(*(ushort *)(piVar26 + 1) >> 8) && ((*(ushort *)(piVar26 + 1) & 0xff) == 0xfe)
        ) || (2 < *(ushort *)((long)piVar26 + 6) - 5)) ||
      ((lVar31 = (ulong)(uint)piVar26[6] + (long)piVar26, lVar31 == 0 || (*(int *)(lVar31 + 4) == 0)
       ))))) goto LAB_03b4c3e0;
  lVar17 = lVar31 + 8;
  local_f8 = (char *)0x0;
  local_100 = (short *)lVar17;
  uVar23 = FUN_03b36f10(lVar17);
  if ((uVar23 & 1) == 0) {
    local_100 = (short *)0x0;
    local_f8 = (char *)0x0;
  }
  else {
    uVar5 = *(uint *)(lVar31 + 0x14);
    uVar8 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    if (*(short *)(lVar31 + 8) != 0x5942) {
      uVar8 = uVar5;
    }
    if (uVar8 != 0) {
      local_f8 = (char *)(lVar17 + (ulong)uVar8);
    }
  }
  lVar31 = *(long *)puVar12;
  if (lVar31 == 0) {
    plVar18 = malloc(0x80);
  }
  else {
    plVar18 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar18 = (long *)(lVar31 + 8);
      if (lVar17 != 0) {
        plVar18 = (long *)(lVar17 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        plVar18 = (long *)0x0;
        goto LAB_03b4c3a4;
      }
    }
    plVar18 = (long *)(**(code **)(*plVar18 + 0x30))(plVar18,0x80,8);
  }
LAB_03b4c3a4:
  puVar12 = PTR_DAT_04bd1e90;
  plVar18[2] = 0;
  plVar18[3] = 0;
  plVar18[4] = 0;
  plVar18[5] = 0;
  plVar18[6] = 0;
  *(undefined4 *)(plVar18 + 7) = 0;
  *plVar18 = (long)(puVar12 + 0x10);
  plVar18[1] = 0;
  FUN_038e18e4(plVar18 + 8);
  *(long **)(param_1 + 0xa8) = plVar18;
  FUN_03b4e1a0(plVar18,&local_100,plVar4);
LAB_03b4c3e0:
  if (DAT_05aebc00 == '\0') {
    puVar32 = (undefined8 *)0x0;
    if (DAT_05aebb78 != 0) {
      if ((*(long *)(DAT_05aebb78 + 0x140) == 0) ||
         (puVar30 = *(undefined8 **)(*(long *)(DAT_05aebb78 + 0x140) + 0x18),
         puVar30 == (undefined8 *)0x0)) {
        puVar30 = *(undefined8 **)(DAT_05aebb78 + 0x60);
        puVar27 = puVar30 + 0x119;
      }
      else {
        if (((*PTR_DAT_04bd1e40 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04bd1e40), iVar16 != 0)) {
          *(undefined **)PTR_DAT_04bd1e38 = PTR_DAT_04bd1e48 + 0x10;
          __cxa_guard_release(PTR_DAT_04bd1e40);
        }
        uVar23 = (**(code **)*puVar30)(puVar30,PTR_DAT_04bd1e38);
        if ((uVar23 & 1) == 0) {
          puVar30 = (undefined8 *)0x0;
        }
        puVar27 = puVar30 + 1;
      }
      puVar32 = (undefined8 *)0x0;
      if (puVar30 != (undefined8 *)0x0) {
        puVar32 = puVar27;
      }
    }
    *(undefined8 **)PTR_DAT_04bd1ea0 = puVar32;
  }
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

