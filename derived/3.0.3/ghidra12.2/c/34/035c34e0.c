
void * FUN_035c34e0(long *param_1,ulong param_2,ulong param_3)

{
  MutexType *pMVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined2 uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  void *pvVar9;
  undefined4 uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined2 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long *plVar20;
  ulong uVar21;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  long *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  FUN_035bf810();
  uVar12 = param_1[0xcb];
  if (uVar12 - param_1[0xca] != 8) {
LAB_035c38d0:
    uVar12 = uVar12 & 7;
    *(undefined1 *)(param_1 + 5) = 1;
    uVar5 = *(undefined2 *)((long)param_1 + 0x3c);
    plVar20 = (long *)param_1[uVar12 * 0x17 + 0x1e];
    param_1[uVar12 * 0x17 + 10] = 0;
    param_1[uVar12 * 0x17 + 0xb] = 0;
    param_1[uVar12 * 0x17 + 0xc] = 0;
    param_1[uVar12 * 0x17 + 0xd] = 0;
    *(undefined8 *)((long)param_1 + uVar12 * 0xb8 + 0x6e) = 0;
    *(undefined2 *)((long)param_1 + uVar12 * 0xb8 + 0x76) = uVar5;
    param_1[uVar12 * 0x17 + 0x1d] = 0;
    param_1[uVar12 * 0x17 + 0x1e] = 0;
    if (plVar20 != (long *)0x0) {
      plVar2 = plVar20 + 1;
      do {
        lVar15 = *plVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = lVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        std::__shared_weak_count::__release_weak();
      }
    }
    pvVar9 = (void *)param_1[uVar12 * 0x17 + 0x1b];
    param_1[uVar12 * 0x17 + 0x19] = 0;
    param_1[uVar12 * 0x17 + 0x12] = 0;
    if (pvVar9 != (void *)0x0) {
      memset(pvVar9,0,0x5a00);
    }
    uVar10 = 0;
    *(undefined4 *)((long)param_1 + uVar12 * 0xb8 + 0xfc) = 0;
    *(undefined4 *)(param_1 + uVar12 * 0x17 + 0x20) = 0;
    *(undefined4 *)((long)param_1 + uVar12 * 0xb8 + 0x104) = 0;
    lVar15 = *param_1;
    if (2 < *(byte *)(lVar15 + 0xd2)) {
      if (*(char *)(lVar15 + 0x200) < '\0') {
        uVar10 = 3;
      }
      else {
        uVar10 = 1;
        if ((*(byte *)(lVar15 + 0xec3) & 4) == 0) {
          uVar10 = 2;
        }
      }
    }
    *(undefined4 *)(param_1 + uVar12 * 0x17 + 0x1f) = uVar10;
    lVar13 = param_1[uVar12 * 0x17 + 0x1c];
    param_1[0xcc] = lVar13;
    param_1[0xcd] = lVar13;
    lVar13 = param_1[uVar12 * 0x17 + 0x1b];
    param_1[0xce] = lVar13;
    param_1[0xcf] = lVar13;
    FUN_035c2f98(param_1,(uint)*(byte *)(lVar15 + 0x2d9) | (uint)*(byte *)(lVar15 + 0x2da) << 2 |
                         (uint)*(byte *)(lVar15 + 0x2db) << 4 | (uint)*(byte *)(lVar15 + 0x2dc) << 6
                 ,0);
    FUN_035c2f98(param_1,*(undefined1 *)(lVar15 + 0x2c7),1);
    FUN_035c2f98(param_1,*(undefined1 *)(lVar15 + 0x2c8),2);
    if (2 < *(byte *)(*param_1 + 0xd2)) {
      uVar16 = *(undefined8 *)(lVar15 + 0x2e6);
      uVar17 = *(undefined8 *)(lVar15 + 0x2ee);
      uVar18 = *(undefined8 *)(lVar15 + 0x2fe);
      puVar19 = (undefined8 *)param_1[uVar12 * 0x17 + 0x14];
      puVar19[2] = *(undefined8 *)(lVar15 + 0x2f6);
      puVar19[3] = uVar18;
      *puVar19 = uVar16;
      puVar19[1] = uVar17;
      uVar16 = *(undefined8 *)(lVar15 + 0x306);
      uVar17 = *(undefined8 *)(lVar15 + 0x30e);
      uVar18 = *(undefined8 *)(lVar15 + 0x31e);
      puVar19[6] = *(undefined8 *)(lVar15 + 0x316);
      puVar19[7] = uVar18;
      puVar19[4] = uVar16;
      puVar19[5] = uVar17;
      puVar19 = (undefined8 *)param_1[uVar12 * 0x17 + 0x15];
      uVar16 = *(undefined8 *)(lVar15 + 0x32e);
      uVar17 = *(undefined8 *)(lVar15 + 0x336);
      uVar18 = *(undefined8 *)(lVar15 + 0x346);
      puVar19[2] = *(undefined8 *)(lVar15 + 0x33e);
      puVar19[3] = uVar18;
      *puVar19 = uVar16;
      puVar19[1] = uVar17;
      uVar17 = *(undefined8 *)(lVar15 + 0x34e);
      uVar18 = *(undefined8 *)(lVar15 + 0x356);
      uVar16 = *(undefined8 *)(lVar15 + 0x366);
      puVar19[6] = *(undefined8 *)(lVar15 + 0x35e);
      puVar19[7] = uVar16;
      puVar19[4] = uVar17;
      puVar19[5] = uVar18;
    }
    pvVar9 = (void *)param_1[0xcc];
    if ((param_2 & 1) != 0) {
      if (*(char *)((long)param_1 + 0x2c) == '\0') {
        lVar15 = 0;
        uVar5 = *(undefined2 *)((long)param_1 + 0x3c);
        do {
          puVar19 = (undefined8 *)((long)pvVar9 + lVar15 * 0x10);
          lVar15 = lVar15 + 6;
          puVar19[1] = CONCAT26(uVar5,CONCAT24(uVar5,CONCAT22(uVar5,uVar5)));
          *puVar19 = CONCAT26(uVar5,CONCAT24(uVar5,CONCAT22(uVar5,uVar5)));
          puVar19[3] = CONCAT26(uVar5,CONCAT24(uVar5,CONCAT22(uVar5,uVar5)));
          puVar19[2] = CONCAT26(uVar5,CONCAT24(uVar5,CONCAT22(uVar5,uVar5)));
          puVar19[5] = CONCAT26(uVar5,CONCAT24(uVar5,CONCAT22(uVar5,uVar5)));
          puVar19[4] = CONCAT26(uVar5,CONCAT24(uVar5,CONCAT22(uVar5,uVar5)));
          puVar19[7] = CONCAT26(uVar5,CONCAT24(uVar5,CONCAT22(uVar5,uVar5)));
          puVar19[6] = CONCAT26(uVar5,CONCAT24(uVar5,CONCAT22(uVar5,uVar5)));
          puVar19[9] = CONCAT26(uVar5,CONCAT24(uVar5,CONCAT22(uVar5,uVar5)));
          puVar19[8] = CONCAT26(uVar5,CONCAT24(uVar5,CONCAT22(uVar5,uVar5)));
          puVar19[0xb] = CONCAT26(uVar5,CONCAT24(uVar5,CONCAT22(uVar5,uVar5)));
          puVar19[10] = CONCAT26(uVar5,CONCAT24(uVar5,CONCAT22(uVar5,uVar5)));
        } while (lVar15 != 0xb40);
        pvVar9 = (void *)param_1[0xcc];
      }
      else if (pvVar9 != (void *)0x0) {
        uVar11 = (int)param_1[0xcb] - 1U & 7;
        memcpy(pvVar9,(void *)param_1[(ulong)uVar11 * 0x17 + 0x1c],0xb400);
        memcpy((void *)param_1[0xce],(void *)param_1[(ulong)uVar11 * 0x17 + 0x1b],0x5a00);
        pvVar9 = (void *)param_1[0xcc];
        param_1[0xcd] = (long)pvVar9 + 0xb400;
        param_1[0xcf] = param_1[0xce] + 0x5a00;
      }
    }
    return pvVar9;
  }
  pMVar1 = (MutexType *)(param_1 + 0xd0);
LAB_035c3548:
  do {
    nn::os::LockMutex(pMVar1);
    do {
      if (param_1[0xdd] == 0) {
        lVar15 = param_1[0xd9];
        if ((param_1[0xd7] == -1) || ((char)lVar15 != '\0')) {
          nn::os::UnlockMutex(pMVar1);
          if ((char)lVar15 == '\0') {
            uVar12 = param_1[0xca];
            if (*(char *)((long)param_1 + 0x3f) != '\0') {
              uVar21 = uVar12 + 1 & 7;
              lVar15 = -0x720;
              if (-1 < *(char *)(*param_1 + 0x200)) {
                lVar15 = -0x71c;
              }
              uVar3 = (param_3 - 0x11110) + lVar15;
              uVar4 = 0;
              if (uVar3 <= param_3) {
                uVar4 = uVar3;
              }
              if (uVar4 < (ulong)param_1[uVar21 * 0x17 + 10]) {
                if ((ulong)param_1[0xcb] <= uVar12 + 1) {
                  FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
                  uVar12 = param_1[0xca];
                  uVar21 = (ulong)((int)uVar12 + 1) & 7;
                }
                if (param_3 < 0x88880) {
                  lVar13 = 0x10e00;
                  lVar15 = param_1[uVar21 * 0x17 + 0x1d] + 0x4a;
                  do {
                    *(undefined8 *)(lVar15 + -10) = 0xff00ff00ff00ff00;
                    lVar13 = lVar13 + -6;
                    *(undefined4 *)(lVar15 + -2) = 0xff00ff00;
                    lVar15 = lVar15 + 0xc;
                  } while (lVar13 != 0);
                  if (((DAT_05aa8dc0 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(&DAT_05aa8dc0), iVar8 != 0)) {
                    DAT_05aa8db8 = *(undefined2 *)((long)param_1 + 0x3c);
                    __cxa_guard_release(&DAT_05aa8dc0);
                  }
                  uVar5 = DAT_05aa8db8;
                  lVar15 = 0x5a00;
                  puVar14 = (undefined2 *)(param_1[uVar21 * 0x17 + 0x1c] + 6);
                  do {
                    puVar14[-3] = uVar5;
                    lVar15 = lVar15 + -6;
                    puVar14[-2] = uVar5;
                    puVar14[-1] = uVar5;
                    *puVar14 = uVar5;
                    puVar14[1] = uVar5;
                    puVar14[2] = uVar5;
                    puVar14 = puVar14 + 6;
                  } while (lVar15 != 0);
                  uVar12 = param_1[0xca];
                }
                param_1[uVar21 * 0x17 + 10] = 0;
                *(undefined4 *)(param_1 + uVar21 * 0x17 + 0x20) = 1;
                *(undefined4 *)((long)param_1 + uVar21 * 0xb8 + 0x104) = 0;
                param_1[uVar21 * 0x17 + 0xb] = 0;
                param_1[uVar21 * 0x17 + 0xc] = 0;
                if (uVar12 + 2 < (ulong)param_1[0xcb]) {
                  uVar12 = uVar12 + 9;
                  do {
                    plVar20 = param_1 + (ulong)((int)uVar12 - 7U & 7) * 0x17 + 10;
                    *(undefined4 *)(plVar20 + 0x16) = 0;
                    *(undefined4 *)((long)plVar20 + 0xb4) = 0;
                    plVar20[1] = 0;
                    plVar20[2] = 0;
                    *plVar20 = 0;
                    local_a0 = (long *)0x0;
                    local_98 = 0;
                    local_90 = 0;
                    uStack_88 = 0;
                    local_c8[0] = 0;
                    local_80 = 0;
                    uStack_78 = 0;
                    local_70 = 0;
                    uStack_68 = 0;
                    local_b0 = 0;
                    local_c0 = 0x1000002;
                    local_b8 = 0;
                    local_a8 = plVar20;
                    FUN_035c6a10(pMVar1,local_c8);
                    local_a0 = param_1 + (uVar12 & 7) * 0x17 + 10;
                    local_70 = 0;
                    uStack_68 = 0;
                    local_b0 = param_1[6];
                    local_80 = 0;
                    uStack_78 = 0;
                    local_90 = 0;
                    uStack_88 = 0;
                    local_98 = 0;
                    local_c8[0] = 1;
                    local_b8 = *plVar20;
                    local_c0 = CONCAT62(CONCAT42((int)param_1[7],
                                                 *(undefined2 *)((long)param_1 + 0x2a)),
                                        CONCAT11(*(char *)(*param_1 + 0xd2) == '\x03' ||
                                                 *(char *)(*param_1 + 0xd5) != '\0',
                                                 *(undefined1 *)((long)param_1 + 0x3f)));
                    local_a8 = plVar20;
                    FUN_035c6a10(pMVar1,local_c8);
                    uVar21 = uVar12 - 6;
                    uVar12 = uVar12 + 1;
                  } while (uVar21 < (ulong)param_1[0xcb]);
                }
                lVar15 = *param_1;
                FUN_035c4240(lVar15 + 0x438,*(undefined8 *)(lVar15 + 0x4128),
                             *(undefined8 *)(lVar15 + 0x4130));
                uVar12 = param_1[0xca];
              }
            }
            uVar12 = uVar12 & 7;
            plVar20 = (long *)param_1[uVar12 * 0x17 + 0x1e];
            *(undefined2 *)((long)param_1 + uVar12 * 0xb8 + 0x76) =
                 *(undefined2 *)((long)param_1 + 0x3c);
            param_1[uVar12 * 0x17 + 10] = 0;
            param_1[uVar12 * 0x17 + 0xb] = 0;
            param_1[uVar12 * 0x17 + 0xc] = 0;
            param_1[uVar12 * 0x17 + 0xd] = 0;
            *(undefined8 *)((long)param_1 + uVar12 * 0xb8 + 0x6e) = 0;
            param_1[uVar12 * 0x17 + 0x1d] = 0;
            param_1[uVar12 * 0x17 + 0x1e] = 0;
            if (plVar20 != (long *)0x0) {
              plVar2 = plVar20 + 1;
              do {
                lVar15 = *plVar2;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar7) {
                  *plVar2 = lVar15 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar15 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                std::__shared_weak_count::__release_weak();
              }
            }
            param_1[uVar12 * 0x17 + 0x19] = 0;
            param_1[uVar12 * 0x17 + 0x12] = 0;
            if ((void *)param_1[uVar12 * 0x17 + 0x1b] != (void *)0x0) {
              memset((void *)param_1[uVar12 * 0x17 + 0x1b],0,0x5a00);
            }
            *(undefined4 *)((long)param_1 + uVar12 * 0xb8 + 0xfc) = 0;
            *(undefined4 *)(param_1 + uVar12 * 0x17 + 0x20) = 0;
            *(undefined4 *)((long)param_1 + uVar12 * 0xb8 + 0x104) = 0;
            param_1[0xca] = param_1[0xca] + 1;
            uVar12 = param_1[0xcb];
            goto LAB_035c38d0;
          }
          goto LAB_035c3548;
        }
      }
      else if ((char)param_1[0xd9] != '\0') break;
      iVar8 = nn::os::TimedWaitConditionVariable(param_1 + 0xd6,pMVar1,1000000000);
    } while (iVar8 == 1);
    nn::os::UnlockMutex(pMVar1);
  } while( true );
}

