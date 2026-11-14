
undefined8 FUN_01582250(long param_1,long *param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  undefined *puVar7;
  char *__src;
  bool bVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  void *__s;
  long lVar16;
  long *plVar17;
  MutexType *pMVar18;
  char *__dest;
  int *piVar19;
  undefined *local_198;
  char *local_190;
  undefined8 local_188;
  undefined8 local_180;
  long lStack_178;
  long local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined *local_158;
  char *local_150;
  undefined1 local_85;
  undefined8 local_80;
  undefined **local_78;
  undefined8 uStack_70;
  
  lVar15 = *param_2;
  pMVar1 = (MutexType *)(lVar15 + 0x60);
  nn::os::LockMutex(pMVar1);
  if ((*(ushort *)(lVar15 + 0x38) >> 2 & 1) == 0) {
    *(undefined4 *)(lVar15 + 0x3c) = 3;
    nn::os::UnlockMutex(pMVar1);
    uVar4 = *(ushort *)(lVar15 + 0x38);
    uVar2 = *(uint *)(lVar15 + 0x20);
    if ((uVar4 >> 4 & 1) != 0) {
      uVar10 = uVar2;
      if (uVar2 == *(uint *)(param_1 + 0x5ec)) {
        uVar10 = *(uint *)(param_1 + 0x5c8);
      }
      local_80 = CONCAT44(local_80._4_4_,uVar10);
      if ((uVar10 & 0x38) == 0x10) {
        lVar13 = param_1 + 0x5c8;
        if ((uVar10 & 0xfff8) != 0x50) {
          lVar13 = param_1 + 0x508;
        }
        uVar11 = *(ulong *)(lVar13 + 8);
        if (uVar11 == 0) {
LAB_01582594:
          *(undefined4 *)(lVar15 + 0x3c) = 6;
          *(undefined4 *)(lVar15 + 0x80) = 1;
          return 0;
        }
        lVar13 = *(long *)(lVar13 + 0x18);
      }
      else {
        __s = *(void **)(param_1 + 0x750);
        memset(__s,0,0x19400);
        puVar7 = PTR_DAT_04bc3808;
        *(undefined8 *)(param_1 + 0x760) = 0;
        *(undefined4 *)(param_1 + 0x768) = 0;
        *(undefined **)(param_1 + 0x770) = puVar7 + 0x10;
        *(undefined **)(param_1 + 0x790) = puVar7 + 0x10;
        **(undefined1 **)(param_1 + 0x7b8) = 0;
        *(undefined8 *)(param_1 + 0x8c8) = 0;
        *(undefined4 *)(param_1 + 0x8d0) = 0;
        local_198 = PTR_DAT_04bb21f8 + 0x10;
        local_85 = 0;
        local_188 = CONCAT35(local_188._5_3_,0x100);
        *(uint *)(param_1 + 0x760) = *(uint *)(param_1 + 0x760) | 1;
        local_190 = (char *)((long)&local_188 + 4);
        FUN_007d6ff0(&local_80,&local_198);
        __dest = *(char **)(param_1 + 0x7b8);
        (**(code **)(local_198 + 0x18))(&local_198);
        __src = local_190;
        if (__dest != local_190) {
          (**(code **)(local_198 + 0x18))(&local_198);
          lVar13 = 0;
          do {
            if (local_190[lVar13] == '\0') goto LAB_0158240c;
            if (local_190[lVar13 + 1] == '\0') {
              lVar13 = lVar13 + 1;
              goto LAB_0158240c;
            }
            if (local_190[lVar13 + 2] == '\0') {
              lVar13 = lVar13 + 2;
              goto LAB_0158240c;
            }
            lVar13 = lVar13 + 3;
          } while (lVar13 != 0x80001);
          lVar13 = 0;
LAB_0158240c:
          iVar5 = (int)lVar13;
          if (*(int *)(param_1 + 0x7c0) <= (int)lVar13) {
            iVar5 = *(int *)(param_1 + 0x7c0) + -1;
          }
          memcpy(__dest,__src,(long)iVar5);
          __dest[iVar5] = '\0';
        }
        *(void **)(param_1 + 0x8c8) = __s;
        uVar12 = 0;
        if (__s != (void *)0x0) {
          uVar12 = 0x19400;
        }
        *(undefined4 *)(param_1 + 0x8d0) = uVar12;
        if ((((*(long *)PTR_DAT_04bb8460 == 0) ||
             (FUN_0283e414(*(long *)PTR_DAT_04bb8460,param_1 + 0x758),
             (*(byte *)(param_1 + 0x768) & 1) == 0)) || (*(int *)(param_1 + 0x764) != 1)) ||
           (uVar11 = (ulong)*(uint *)((long)__s + 0x34), *(uint *)((long)__s + 0x34) == 0))
        goto LAB_01582594;
        lVar13 = (long)__s + 0x400;
      }
      *(long *)(lVar15 + 0x10) = lVar13;
      *(ulong *)(lVar15 + 0x18) = uVar11;
    }
    lVar13 = param_1 + 0x400;
    if ((uVar4 >> 3 & 1) == 0) {
      if (*(uint *)(param_1 + 0x410) < *(uint *)(param_1 + 0x160)) {
        nn::os::LockMutex((MutexType *)(param_1 + 0x3e0));
        if (*(int *)(param_1 + 0x3b8) < 1) {
          plVar17 = (long *)0x0;
        }
        else {
          plVar17 = *(long **)(param_1 + 0x3b0);
          if (*plVar17 != 0) {
            *(long *)(*plVar17 + 8) = plVar17[1];
          }
          if ((long *)plVar17[1] != (long *)0x0) {
            *(long *)plVar17[1] = *plVar17;
          }
          *plVar17 = 0;
          plVar17[1] = 0;
          *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + -1;
        }
        iVar5 = *(int *)(param_1 + 0x3bc);
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x3e0));
        if ((plVar17 == (long *)0x0) || (lVar16 = (long)plVar17 - (long)iVar5, lVar16 == 0))
        goto LAB_01582620;
      }
      else {
LAB_01582620:
        lVar16 = FUN_01586a10(param_1);
        if (lVar16 == 0) {
LAB_01582848:
          lVar13 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x120) + 0x38);
          if (lVar13 == 0) {
            return 1;
          }
          if (*(long *)(lVar13 + 0x20) == 0) {
            return 1;
          }
          local_198 = PTR_DAT_04bb5070 + 0x10;
          local_158 = PTR_DAT_04bb2020 + 0x10;
          local_188 = 0;
          local_80 = 0;
          local_190 = (char *)CONCAT53((int5)((ulong)local_190 >> 0x18),0x10000);
          lStack_178 = param_1 + 0x38;
          local_180 = *(undefined8 *)(lVar13 + 8);
          uStack_168 = 0;
          local_160 = 0;
          local_150 = "Decode(WaitForReserveHotelRoomPhotographTextureData)";
          local_78 = &local_198;
          uStack_70 = 0;
          local_170 = lVar15;
          FUN_03f45184(*(long *)(lVar13 + 0x20),&local_80);
          return 1;
        }
      }
      *(undefined4 *)(lVar15 + 0x3c) = 4;
      if ((*(ushort *)(lVar16 + 0x470) >> 1 & 1) == 0) {
        lVar9 = FUN_01584944(param_1,&LAB_002191c0);
        if (lVar9 != 0) {
          nn::os::LockMutex((MutexType *)(param_1 + 0x680));
          plVar17 = (long *)(*(int *)(param_1 + 0x65c) + lVar9);
          lVar14 = *(long *)(param_1 + 0x648);
          *(long **)(param_1 + 0x648) = plVar17;
          *plVar17 = lVar14;
          plVar17[1] = param_1 + 0x648;
          if (lVar14 != 0) {
            *(long **)(lVar14 + 8) = plVar17;
          }
          *(int *)(param_1 + 0x658) = *(int *)(param_1 + 0x658) + 1;
          nn::os::UnlockMutex((MutexType *)(param_1 + 0x680));
          if (*(long *)(lVar9 + 0x50) != 0) {
            local_198 = PTR_DAT_04bb2020 + 0x10;
            local_190 = "HotelRoomPhotographTexture";
            FUN_01587e9c(lVar16,0x3c0,0x21c,&local_198);
            goto LAB_015826cc;
          }
        }
LAB_015828e4:
        uVar12 = 2;
        goto LAB_015828ec;
      }
LAB_015826cc:
      *(uint *)(lVar16 + 0x468) = uVar2;
      if ((*(ushort *)(lVar15 + 0x38) & 1) != 0) {
        piVar19 = (int *)(lVar16 + 0x46c);
        do {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar8) {
            *piVar19 = *piVar19 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      uVar11 = FUN_01586720(param_1,lVar16,lVar15,1);
      if ((uVar11 & 1) == 0) goto LAB_015828d8;
LAB_0158281c:
      piVar19 = (int *)(param_1 + 0x410);
      pMVar18 = (MutexType *)(param_1 + 0x438);
      nn::os::LockMutex(pMVar18);
      plVar17 = (long *)(*(int *)(param_1 + 0x414) + lVar16);
      lVar9 = *(long *)(param_1 + 0x400);
      *(long **)(param_1 + 0x400) = plVar17;
      *plVar17 = lVar9;
      plVar17[1] = lVar13;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 8) = plVar17;
      }
      bVar8 = true;
    }
    else {
      pMVar18 = (MutexType *)(param_1 + 0x438);
      nn::os::LockMutex(pMVar18);
      if (*(long *)(param_1 + 0x400) != lVar13) {
        lVar9 = (long)*(int *)(param_1 + 0x414);
        lVar16 = *(long *)(param_1 + 0x400) - lVar9;
LAB_01582510:
        if (*(uint *)(lVar16 + 0x468) != uVar2) goto code_r0x0158251c;
        nn::os::UnlockMutex(pMVar18);
        piVar19 = (int *)(lVar16 + 0x46c);
        *(undefined4 *)(lVar15 + 0x3c) = 4;
        if ((*(ushort *)(lVar15 + 0x38) & 1) == 0) {
          iVar5 = *piVar19;
        }
        else {
          do {
            iVar5 = *piVar19;
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar8) {
              *piVar19 = iVar5 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (iVar5 < 1) {
          bVar8 = true;
LAB_01582ad8:
          uVar11 = FUN_01586720(param_1,lVar16,lVar15,bVar8);
          if ((uVar11 & 1) != 0) goto LAB_01582aec;
          *(undefined4 *)(lVar15 + 0x80) = 3;
          if ((*(ushort *)(lVar15 + 0x38) & 1) != 0) {
            do {
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar8) {
                *piVar19 = *piVar19 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          bVar8 = false;
        }
        else {
          bVar8 = (*(ushort *)(lVar16 + 0x470) & 1) == 0;
          if (((*(ushort *)(lVar16 + 0x470) & 1) == 0) ||
             ((*(ushort *)(lVar15 + 0x38) >> 1 & 1) != 0)) goto LAB_01582ad8;
LAB_01582aec:
          bVar8 = true;
        }
        goto LAB_01582948;
      }
LAB_0158252c:
      nn::os::UnlockMutex(pMVar18);
      if (*(uint *)(param_1 + 0x410) < *(uint *)(param_1 + 0x160)) {
        nn::os::LockMutex((MutexType *)(param_1 + 0x3e0));
        if (*(int *)(param_1 + 0x3b8) < 1) {
          plVar17 = (long *)0x0;
        }
        else {
          plVar17 = *(long **)(param_1 + 0x3b0);
          if (*plVar17 != 0) {
            *(long *)(*plVar17 + 8) = plVar17[1];
          }
          if ((long *)plVar17[1] != (long *)0x0) {
            *(long *)plVar17[1] = *plVar17;
          }
          *plVar17 = 0;
          plVar17[1] = 0;
          *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + -1;
        }
        iVar5 = *(int *)(param_1 + 0x3bc);
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x3e0));
        if ((plVar17 == (long *)0x0) || (lVar16 = (long)plVar17 - (long)iVar5, lVar16 == 0))
        goto LAB_01582730;
      }
      else {
LAB_01582730:
        lVar16 = FUN_01586a10(param_1);
        if (lVar16 == 0) goto LAB_01582848;
      }
      *(undefined4 *)(lVar15 + 0x3c) = 4;
      if ((*(ushort *)(lVar16 + 0x470) >> 1 & 1) == 0) {
        lVar9 = FUN_01584944(param_1,&LAB_002191c0);
        if (lVar9 != 0) {
          nn::os::LockMutex((MutexType *)(param_1 + 0x680));
          plVar17 = (long *)(*(int *)(param_1 + 0x65c) + lVar9);
          lVar14 = *(long *)(param_1 + 0x648);
          *(long **)(param_1 + 0x648) = plVar17;
          *plVar17 = lVar14;
          plVar17[1] = param_1 + 0x648;
          if (lVar14 != 0) {
            *(long **)(lVar14 + 8) = plVar17;
          }
          *(int *)(param_1 + 0x658) = *(int *)(param_1 + 0x658) + 1;
          nn::os::UnlockMutex((MutexType *)(param_1 + 0x680));
          if (*(long *)(lVar9 + 0x50) != 0) {
            local_198 = PTR_DAT_04bb2020 + 0x10;
            local_190 = "HotelRoomPhotographTexture";
            FUN_01587e9c(lVar16,0x3c0,0x21c,&local_198);
            goto LAB_015827dc;
          }
        }
        goto LAB_015828e4;
      }
LAB_015827dc:
      *(uint *)(lVar16 + 0x468) = uVar2;
      if ((*(ushort *)(lVar15 + 0x38) & 1) != 0) {
        piVar19 = (int *)(lVar16 + 0x46c);
        do {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar8) {
            *piVar19 = *piVar19 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      uVar11 = FUN_01586720(param_1,lVar16,lVar15,1);
      if ((uVar11 & 1) != 0) goto LAB_0158281c;
LAB_015828d8:
      uVar12 = 3;
LAB_015828ec:
      uVar3 = *(undefined4 *)PTR_DAT_04bb4b48;
      pMVar18 = (MutexType *)(param_1 + 0x3e0);
      *(undefined4 *)(lVar15 + 0x80) = uVar12;
      *(undefined4 *)(lVar16 + 0x468) = uVar3;
      *(undefined4 *)(lVar16 + 0x46c) = 0;
      nn::os::LockMutex(pMVar18);
      plVar17 = (long *)(*(int *)(param_1 + 0x3bc) + lVar16);
      lVar13 = *(long *)(param_1 + 0x3a8);
      *(long **)(param_1 + 0x3a8) = plVar17;
      *plVar17 = lVar13;
      plVar17[1] = param_1 + 0x3a8;
      if (lVar13 != 0) {
        *(long **)(lVar13 + 8) = plVar17;
      }
      bVar8 = false;
      piVar19 = (int *)(param_1 + 0x3b8);
    }
    *piVar19 = *piVar19 + 1;
    nn::os::UnlockMutex(pMVar18);
LAB_01582948:
    nn::os::LockMutex(pMVar1);
    if ((*(ushort *)(lVar15 + 0x38) >> 2 & 1) == 0) {
      if (bVar8) {
        *(long *)(lVar15 + 0x30) = lVar16;
        uVar12 = 5;
      }
      else {
        uVar12 = 6;
      }
      *(undefined4 *)(lVar15 + 0x3c) = uVar12;
      goto LAB_01582a9c;
    }
    if (bVar8) {
      piVar19 = (int *)(lVar16 + 0x46c);
      do {
        iVar5 = *piVar19;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar8) {
          *piVar19 = iVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 < 2) {
        *(undefined4 *)(lVar16 + 0x468) = *(undefined4 *)PTR_DAT_04bb4b48;
        *(ushort *)(lVar16 + 0x470) = *(ushort *)(lVar16 + 0x470) & 0xfffe;
        *(undefined4 *)(lVar16 + 0x46c) = 0;
        nn::os::LockMutex((MutexType *)(param_1 + 0x438));
        plVar17 = (long *)(*(int *)(param_1 + 0x414) + lVar16);
        if (*plVar17 != 0) {
          *(long *)(*plVar17 + 8) = plVar17[1];
        }
        if ((long *)plVar17[1] != (long *)0x0) {
          *(long *)plVar17[1] = *plVar17;
        }
        *plVar17 = 0;
        plVar17[1] = 0;
        *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + -1;
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x438));
        nn::os::LockMutex((MutexType *)(param_1 + 0x3e0));
        plVar17 = (long *)(*(int *)(param_1 + 0x3bc) + lVar16);
        lVar13 = *(long *)(param_1 + 0x3a8);
        *(long **)(param_1 + 0x3a8) = plVar17;
        *plVar17 = lVar13;
        plVar17[1] = param_1 + 0x3a8;
        if (lVar13 != 0) {
          *(long **)(lVar13 + 8) = plVar17;
        }
        *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + 1;
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x3e0));
      }
    }
  }
  puVar7 = PTR_DAT_04bb4b48;
  *(undefined8 *)(lVar15 + 0x10) = 0;
  *(undefined8 *)(lVar15 + 0x18) = 0;
  *(undefined8 *)(lVar15 + 0x24) = 0;
  uVar12 = *(undefined4 *)puVar7;
  *(undefined8 *)(lVar15 + 0x30) = 0;
  *(undefined4 *)(lVar15 + 0x80) = 0;
  *(undefined2 *)(lVar15 + 0x38) = 0;
  *(undefined4 *)(lVar15 + 0x20) = uVar12;
  *(undefined4 *)(lVar15 + 0x3c) = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x490));
  plVar17 = (long *)(*(int *)(param_1 + 0x46c) + lVar15);
  lVar15 = *(long *)(param_1 + 0x458);
  *(long **)(param_1 + 0x458) = plVar17;
  *plVar17 = lVar15;
  plVar17[1] = param_1 + 0x458;
  if (lVar15 != 0) {
    *(long **)(lVar15 + 8) = plVar17;
  }
  *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x490));
LAB_01582a9c:
  nn::os::UnlockMutex(pMVar1);
  return 1;
code_r0x0158251c:
  lVar16 = *(long *)(lVar16 + lVar9) - lVar9;
  if (lVar16 == lVar13 - lVar9) goto LAB_0158252c;
  goto LAB_01582510;
}

