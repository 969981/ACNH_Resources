
uint FUN_035bf980(long *param_1,long *param_2)

{
  MutexType *pMVar1;
  long *plVar2;
  void *__s2;
  char cVar3;
  undefined2 uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  ulong *puVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  void *pvVar14;
  undefined8 uVar15;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined1 (*pauVar21) [16];
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  ulong *puVar28;
  long *plVar29;
  uint *puVar30;
  ushort *puVar31;
  void *__s2_00;
  long lVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulong local_888;
  long *local_880;
  ulong local_878;
  undefined1 auStack_86c [4];
  undefined8 local_868;
  long lStack_860;
  undefined8 local_858 [255];
  
  uVar11 = FUN_04002180(param_2,0x1e,0x1e,auStack_86c);
  if ((uVar11 & 1) == 0) goto LAB_035c1da8;
  iVar13 = (int)param_2[1];
  if (iVar13 == 0) {
    pMVar1 = (MutexType *)(param_1 + 0xd0);
LAB_035bfb8c:
    nn::os::LockMutex(pMVar1);
LAB_035bfbc0:
    if (param_1[0xdd] == 0) {
      lVar16 = param_1[0xd9];
      if ((param_1[0xd7] != -1) && ((char)lVar16 == '\0')) goto LAB_035bfba8;
      nn::os::UnlockMutex(pMVar1);
      if ((char)lVar16 == '\0') {
        lVar16 = 0;
        do {
          uVar4 = *(undefined2 *)((long)param_1 + 0x3c);
          plVar29 = (long *)param_1[lVar16 * 0x17 + 0x1e];
          param_1[lVar16 * 0x17 + 10] = 0;
          param_1[lVar16 * 0x17 + 0xb] = 0;
          *(undefined2 *)((long)param_1 + lVar16 * 0xb8 + 0x76) = uVar4;
          param_1[lVar16 * 0x17 + 0xc] = 0;
          param_1[lVar16 * 0x17 + 0xd] = 0;
          *(undefined8 *)((long)param_1 + lVar16 * 0xb8 + 0x6e) = 0;
          param_1[lVar16 * 0x17 + 0x1d] = 0;
          param_1[lVar16 * 0x17 + 0x1e] = 0;
          if (plVar29 != (long *)0x0) {
            plVar2 = plVar29 + 1;
            do {
              lVar32 = *plVar2;
              cVar3 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar9) {
                *plVar2 = lVar32 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar32 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
              std::__shared_weak_count::__release_weak();
            }
          }
          param_1[lVar16 * 0x17 + 0x19] = 0;
          param_1[lVar16 * 0x17 + 0x12] = 0;
          if ((void *)param_1[lVar16 * 0x17 + 0x1b] != (void *)0x0) {
            memset((void *)param_1[lVar16 * 0x17 + 0x1b],0,0x5a00);
          }
          lVar32 = lVar16 + 1;
          *(undefined4 *)((long)param_1 + lVar16 * 0xb8 + 0xfc) = 0;
          *(undefined4 *)(param_1 + lVar16 * 0x17 + 0x20) = 0;
          *(undefined4 *)((long)param_1 + lVar16 * 0xb8 + 0x104) = 0;
          lVar16 = lVar32;
        } while (lVar32 != 8);
        goto LAB_035bfd28;
      }
      goto LAB_035bfb8c;
    }
    if ((char)param_1[0xd9] == '\0') goto LAB_035bfba8;
    goto LAB_035bfb84;
  }
  lVar16 = param_1[0xcb];
  uVar24 = param_1[0xca];
  cVar3 = *(char *)((long)param_1 + 0x3f);
  if (uVar24 < lVar16 - 4U) {
    uVar22 = *(ulong *)(*param_1 + 0x110);
    lVar32 = -0x720;
    if (-1 < *(char *)(*param_1 + 0x200)) {
      lVar32 = -0x71c;
    }
    uVar18 = (uVar22 - 0x11110) + lVar32;
    if (uVar18 <= uVar22) {
      pMVar1 = (MutexType *)(param_1 + 0xd0);
      do {
        uVar24 = uVar24 + 1;
        uVar22 = uVar24 & 7;
        if ((ulong)param_1[uVar22 * 0x17 + 10] < uVar18) {
          if (*(int *)((long)param_1 + uVar22 * 0xb8 + 0xfc) != 1) break;
          if ((cVar3 != '\0') && (plVar29 = param_1 + uVar22 * 0x17 + 0x20, (int)*plVar29 != 1)) {
            nn::os::LockMutex(pMVar1);
            if (((int)*plVar29 != 1) && ((char)param_1[0xd9] == '\0')) {
              do {
                nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0xd6),pMVar1);
              } while ((int)*plVar29 != 1 && (char)param_1[0xd9] == '\0');
            }
            nn::os::UnlockMutex(pMVar1);
          }
          uVar22 = param_1[0xca] & 7;
          plVar29 = (long *)param_1[uVar22 * 0x17 + 0x1e];
          *(undefined2 *)((long)param_1 + uVar22 * 0xb8 + 0x76) =
               *(undefined2 *)((long)param_1 + 0x3c);
          param_1[uVar22 * 0x17 + 10] = 0;
          param_1[uVar22 * 0x17 + 0xb] = 0;
          param_1[uVar22 * 0x17 + 0xc] = 0;
          param_1[uVar22 * 0x17 + 0xd] = 0;
          *(undefined8 *)((long)param_1 + uVar22 * 0xb8 + 0x6e) = 0;
          param_1[uVar22 * 0x17 + 0x1d] = 0;
          param_1[uVar22 * 0x17 + 0x1e] = 0;
          if (plVar29 != (long *)0x0) {
            plVar2 = plVar29 + 1;
            do {
              lVar16 = *plVar2;
              cVar10 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar9) {
                *plVar2 = lVar16 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
              std::__shared_weak_count::__release_weak();
            }
          }
          param_1[uVar22 * 0x17 + 0x19] = 0;
          param_1[uVar22 * 0x17 + 0x12] = 0;
          if ((void *)param_1[uVar22 * 0x17 + 0x1b] != (void *)0x0) {
            memset((void *)param_1[uVar22 * 0x17 + 0x1b],0,0x5a00);
          }
          *(undefined4 *)((long)param_1 + uVar22 * 0xb8 + 0xfc) = 0;
          *(undefined4 *)(param_1 + uVar22 * 0x17 + 0x20) = 0;
          *(undefined4 *)((long)param_1 + uVar22 * 0xb8 + 0x104) = 0;
          param_1[0xca] = param_1[0xca] + 1;
          lVar16 = param_1[0xcb];
        }
      } while (uVar24 < lVar16 - 4U);
    }
  }
  else if (((cVar3 != '\0') && (uVar24 = uVar24 & 7, (int)param_1[uVar24 * 0x17 + 0xe] != 0)) &&
          (*(int *)((long)param_1 + uVar24 * 0xb8 + 0xfc) == 1)) {
    pMVar1 = (MutexType *)(param_1 + 0xd0);
    nn::os::LockMutex(pMVar1);
    if (((int)param_1[uVar24 * 0x17 + 0x20] != 1) && ((char)param_1[0xd9] == '\0')) {
      do {
        nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0xd6),pMVar1);
      } while ((int)param_1[uVar24 * 0x17 + 0x20] != 1 && (char)param_1[0xd9] == '\0');
    }
    nn::os::UnlockMutex(pMVar1);
  }
LAB_035bfd28:
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_868 = CONCAT71(local_868._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
  }
  puVar28 = (ulong *)(param_1 + 0xca);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar28,8);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar22 = *puVar28;
    uVar24 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    local_868 = uVar24 >> 0x20 | uVar24 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_868 = uVar22;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_868);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_868 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_868,8);
    uVar24 = (local_868 & 0xff00ff00ff00ff00) >> 8 | (local_868 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar24 = local_868;
    }
    *puVar28 = uVar24;
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar3 != '\0') {
    local_868._1_7_ = (undefined7)(local_868 >> 8);
    local_868 = CONCAT71(local_868._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
  }
  puVar28 = (ulong *)(param_1 + 0xcb);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar28,8);
  }
  else if ((int)param_2[1] == 1) {
    uVar22 = *puVar28;
    uVar24 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    local_868 = uVar24 >> 0x20 | uVar24 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_868 = uVar22;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_868);
  }
  else {
    local_868 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_868,8);
    uVar24 = (local_868 & 0xff00ff00ff00ff00) >> 8 | (local_868 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar24 = local_868;
    }
    *puVar28 = uVar24;
  }
  local_868._0_1_ = (char)param_1[5];
  (**(code **)(*param_2 + 0x28))(param_2,&local_868);
  *(bool *)(param_1 + 5) = (char)local_868 != '\0';
  local_868._0_1_ = *(char *)((long)param_1 + 0x29);
  (**(code **)(*param_2 + 0x28))(param_2,&local_868);
  *(bool *)((long)param_1 + 0x29) = (char)local_868 != '\0';
  local_868 = CONCAT71(local_868._1_7_,*(undefined1 *)((long)param_1 + 0x2a));
  (**(code **)(*param_2 + 0x28))(param_2,&local_868);
  *(bool *)((long)param_1 + 0x2a) = (char)local_868 != '\0';
  if (iVar13 == 0) {
    local_888 = 0;
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_868 = CONCAT71(local_868._1_7_,8);
      (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
    }
    if ((int)param_2[1] == 2) {
      lVar16 = *param_2;
      puVar28 = &local_888;
    }
    else {
      if ((int)param_2[1] == 1) {
        iVar12 = (int)param_2[2];
        uVar24 = local_888;
        goto LAB_035bffe8;
      }
      lVar16 = *param_2;
      local_868 = 0;
      puVar28 = &local_868;
    }
LAB_035c007c:
    (**(code **)(lVar16 + 0x20))(param_2,puVar28,8);
  }
  else {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_868 = CONCAT71(local_868._1_7_,8);
      (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
    }
    puVar28 = (ulong *)(param_1 + 6);
    if ((int)param_2[1] == 2) {
      lVar16 = *param_2;
      goto LAB_035c007c;
    }
    if ((int)param_2[1] == 1) {
      iVar12 = (int)param_2[2];
      uVar24 = *puVar28;
LAB_035bffe8:
      uVar22 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      local_868 = uVar22 >> 0x20 | uVar22 << 0x20;
      if (iVar12 != 0xff00) {
        local_868 = uVar24;
      }
      (**(code **)(*param_2 + 0x40))(param_2,&local_868);
    }
    else {
      local_868 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_868,8);
      uVar24 = (local_868 & 0xff00ff00ff00ff00) >> 8 | (local_868 & 0xff00ff00ff00ff) << 8;
      uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
      uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
      if ((int)param_2[2] != 0xff00) {
        uVar24 = local_868;
      }
      *puVar28 = uVar24;
    }
  }
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_868 = CONCAT71(local_868._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
  }
  puVar28 = (ulong *)(param_1 + 1);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar28,8);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar22 = *puVar28;
    uVar24 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    local_868 = uVar24 >> 0x20 | uVar24 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_868 = uVar22;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_868);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_868 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_868,8);
    uVar24 = (local_868 & 0xff00ff00ff00ff00) >> 8 | (local_868 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar24 = local_868;
    }
    *puVar28 = uVar24;
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar3 != '\0') {
    local_868._1_7_ = (undefined7)(local_868 >> 8);
    local_868 = CONCAT71(local_868._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
  }
  puVar28 = (ulong *)(param_1 + 2);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar28,8);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar22 = *puVar28;
    uVar24 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    local_868 = uVar24 >> 0x20 | uVar24 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_868 = uVar22;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_868);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_868 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_868,8);
    uVar24 = (local_868 & 0xff00ff00ff00ff00) >> 8 | (local_868 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar24 = local_868;
    }
    *puVar28 = uVar24;
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar3 != '\0') {
    local_868._1_7_ = (undefined7)(local_868 >> 8);
    local_868 = CONCAT71(local_868._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
  }
  puVar28 = (ulong *)(param_1 + 3);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar28,8);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar22 = *puVar28;
    uVar24 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    local_868 = uVar24 >> 0x20 | uVar24 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_868 = uVar22;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_868);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_868 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_868,8);
    uVar24 = (local_868 & 0xff00ff00ff00ff00) >> 8 | (local_868 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar24 = local_868;
    }
    *puVar28 = uVar24;
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar3 != '\0') {
    local_868._1_7_ = (undefined7)(local_868 >> 8);
    local_868 = CONCAT71(local_868._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
  }
  puVar28 = (ulong *)(param_1 + 4);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar28,8);
  }
  else if ((int)param_2[1] == 1) {
    uVar22 = *puVar28;
    uVar24 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    local_868 = uVar24 >> 0x20 | uVar24 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_868 = uVar22;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_868);
  }
  else {
    local_868 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_868,8);
    uVar24 = (local_868 & 0xff00ff00ff00ff00) >> 8 | (local_868 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar24 = local_868;
    }
    *puVar28 = uVar24;
  }
  lVar16 = (param_1[0xcb] - param_1[0xca]) + (ulong)*(byte *)(param_1 + 5);
  if (lVar16 != 0) {
    lVar32 = 0;
    do {
      lVar26 = param_1[0xca];
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_868 = CONCAT71(local_868._1_7_,8);
        (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
      }
      uVar25 = (int)lVar26 + (int)lVar32 & 7;
      puVar28 = (ulong *)(param_1 + (ulong)uVar25 * 0x17 + 10);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,puVar28,8);
        cVar3 = *(char *)((long)param_2 + 0xc);
      }
      else if ((int)param_2[1] == 1) {
        uVar22 = *puVar28;
        uVar24 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        local_868 = uVar24 >> 0x20 | uVar24 << 0x20;
        if ((int)param_2[2] != 0xff00) {
          local_868 = uVar22;
        }
        (**(code **)(*param_2 + 0x40))(param_2,&local_868);
        cVar3 = *(char *)((long)param_2 + 0xc);
      }
      else {
        local_868 = 0;
        (**(code **)(*param_2 + 0x20))(param_2,&local_868,8);
        uVar24 = (local_868 & 0xff00ff00ff00ff00) >> 8 | (local_868 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
        if ((int)param_2[2] != 0xff00) {
          uVar24 = local_868;
        }
        *puVar28 = uVar24;
        cVar3 = *(char *)((long)param_2 + 0xc);
      }
      if (cVar3 != '\0') {
        local_868._1_7_ = (undefined7)(local_868 >> 8);
        local_868 = CONCAT71(local_868._1_7_,8);
        (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
      }
      puVar28 = (ulong *)(param_1 + (ulong)uVar25 * 0x17 + 0xb);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,puVar28,8);
        cVar3 = *(char *)((long)param_2 + 0xc);
      }
      else if ((int)param_2[1] == 1) {
        uVar22 = *puVar28;
        uVar24 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        local_868 = uVar24 >> 0x20 | uVar24 << 0x20;
        if ((int)param_2[2] != 0xff00) {
          local_868 = uVar22;
        }
        (**(code **)(*param_2 + 0x40))(param_2,&local_868);
        cVar3 = *(char *)((long)param_2 + 0xc);
      }
      else {
        local_868 = 0;
        (**(code **)(*param_2 + 0x20))(param_2,&local_868,8);
        uVar24 = (local_868 & 0xff00ff00ff00ff00) >> 8 | (local_868 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
        if ((int)param_2[2] != 0xff00) {
          uVar24 = local_868;
        }
        *puVar28 = uVar24;
        cVar3 = *(char *)((long)param_2 + 0xc);
      }
      if (cVar3 != '\0') {
        local_868._1_7_ = (undefined7)(local_868 >> 8);
        local_868 = CONCAT71(local_868._1_7_,8);
        (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
      }
      puVar28 = (ulong *)(param_1 + (ulong)uVar25 * 0x17 + 0xc);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,puVar28,8);
      }
      else if ((int)param_2[1] == 1) {
        uVar22 = *puVar28;
        uVar24 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        local_868 = uVar24 >> 0x20 | uVar24 << 0x20;
        if ((int)param_2[2] != 0xff00) {
          local_868 = uVar22;
        }
        (**(code **)(*param_2 + 0x40))(param_2,&local_868);
      }
      else {
        local_868 = 0;
        (**(code **)(*param_2 + 0x20))(param_2,&local_868,8);
        uVar24 = (local_868 & 0xff00ff00ff00ff00) >> 8 | (local_868 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
        if ((int)param_2[2] != 0xff00) {
          uVar24 = local_868;
        }
        *puVar28 = uVar24;
      }
      iVar12 = (int)param_2[1];
      if (iVar12 == 2) {
        if (*(char *)((long)param_2 + 0xc) != '\0') {
          local_868 = CONCAT71(local_868._1_7_,4);
          (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
          if ((int)param_2[1] != 2) {
            if ((int)param_2[1] != 1) {
LAB_035c0834:
              local_868 = local_868 & 0xffffffff00000000;
              goto LAB_035c0838;
            }
            goto LAB_035c07e8;
          }
        }
LAB_035c0838:
        lVar26 = *param_2;
        puVar28 = &local_868;
LAB_035c0840:
        (**(code **)(lVar26 + 0x20))(param_2,puVar28,4);
LAB_035c0880:
        iVar12 = (int)param_2[1];
      }
      else {
        if (iVar12 == 1) {
          uVar23 = *(uint *)(param_1 + (ulong)uVar25 * 0x17 + 0xe);
          local_888 = CONCAT44(local_888._4_4_,uVar23);
          if (*(char *)((long)param_2 + 0xc) != '\0') {
            local_868 = CONCAT71(local_868._1_7_,4);
            (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
            if ((int)param_2[1] != 2) {
              if ((int)param_2[1] != 1) goto LAB_035c0834;
              goto LAB_035c07d4;
            }
            lVar26 = *param_2;
            puVar28 = &local_888;
            goto LAB_035c0840;
          }
LAB_035c07d4:
          uVar7 = (uVar23 & 0xff00ff00) >> 8 | (uVar23 & 0xff00ff) << 8;
          uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
          if ((int)param_2[2] != 0xff00) {
            uVar7 = uVar23;
          }
          local_868 = CONCAT44(local_868._4_4_,uVar7);
LAB_035c07e8:
          (**(code **)(*param_2 + 0x38))(param_2,&local_868);
          goto LAB_035c0880;
        }
        if (iVar12 == 0) {
          if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_035c0800:
            local_868 = local_868 & 0xffffffff00000000;
            (**(code **)(*param_2 + 0x20))(param_2,&local_868,4);
            uVar23 = ((uint)local_868 & 0xff00ff00) >> 8 | ((uint)local_868 & 0xff00ff) << 8;
            uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
            if ((int)param_2[2] != 0xff00) {
              uVar23 = (uint)local_868;
            }
          }
          else {
            local_868 = CONCAT71(local_868._1_7_,4);
            (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
            if ((int)param_2[1] == 2) {
              (**(code **)(*param_2 + 0x20))(param_2,&local_888,4);
              uVar23 = (uint)local_888;
            }
            else {
              if ((int)param_2[1] != 1) goto LAB_035c0800;
              (**(code **)(*param_2 + 0x38))(param_2,&local_868);
              uVar23 = extraout_w8;
            }
          }
          *(uint *)(param_1 + (ulong)uVar25 * 0x17 + 0xe) = uVar23;
          goto LAB_035c0880;
        }
      }
      puVar31 = (ushort *)((long)param_1 + (ulong)uVar25 * 0xb8 + 0x74);
      if (iVar12 == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,puVar31,2);
        cVar3 = *(char *)((long)param_2 + 0xc);
      }
      else if (iVar12 == 1) {
        uVar5 = *puVar31;
        uVar6 = uVar5 >> 8 | uVar5 << 8;
        if ((int)param_2[2] != 0xff00) {
          uVar6 = uVar5;
        }
        local_868 = CONCAT62(local_868._2_6_,uVar6);
        (**(code **)(*param_2 + 0x30))(param_2,&local_868);
        cVar3 = *(char *)((long)param_2 + 0xc);
      }
      else {
        local_868 = (ulong)local_868._2_6_ << 0x10;
        (**(code **)(*param_2 + 0x20))(param_2,&local_868,2);
        uVar6 = (ushort)local_868 >> 8 | (ushort)local_868 << 8;
        if ((int)param_2[2] != 0xff00) {
          uVar6 = (ushort)local_868;
        }
        *puVar31 = uVar6;
        cVar3 = *(char *)((long)param_2 + 0xc);
      }
      if (cVar3 != '\0') {
        local_868._1_7_ = (undefined7)(local_868 >> 8);
        local_868 = CONCAT71(local_868._1_7_,8);
        (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
      }
      puVar28 = (ulong *)(param_1 + (ulong)uVar25 * 0x17 + 0xd);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,puVar28,8);
      }
      else if ((int)param_2[1] == 1) {
        uVar22 = *puVar28;
        uVar24 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        local_868 = uVar24 >> 0x20 | uVar24 << 0x20;
        if ((int)param_2[2] != 0xff00) {
          local_868 = uVar22;
        }
        (**(code **)(*param_2 + 0x40))(param_2,&local_868);
      }
      else {
        local_868 = 0;
        (**(code **)(*param_2 + 0x20))(param_2,&local_868,8);
        uVar24 = (local_868 & 0xff00ff00ff00ff00) >> 8 | (local_868 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
        if ((int)param_2[2] != 0xff00) {
          uVar24 = local_868;
        }
        *puVar28 = uVar24;
      }
      iVar12 = (int)param_2[1];
      if (iVar12 == 2) {
        if (*(char *)((long)param_2 + 0xc) != '\0') {
          local_868 = CONCAT71(local_868._1_7_,4);
          (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
          if ((int)param_2[1] != 2) {
            if ((int)param_2[1] != 1) {
LAB_035c0b64:
              local_868 = local_868 & 0xffffffff00000000;
              goto LAB_035c0b68;
            }
            goto LAB_035c0b18;
          }
        }
LAB_035c0b68:
        lVar26 = *param_2;
        puVar28 = &local_868;
LAB_035c0b70:
        (**(code **)(lVar26 + 0x20))(param_2,puVar28,4);
LAB_035c0bb0:
        iVar12 = (int)param_2[1];
      }
      else {
        puVar30 = (uint *)((long)param_1 + (ulong)uVar25 * 0xb8 + 0xfc);
        if (iVar12 == 1) {
          uVar23 = *puVar30;
          local_888 = CONCAT44(local_888._4_4_,uVar23);
          if (*(char *)((long)param_2 + 0xc) != '\0') {
            local_868 = CONCAT71(local_868._1_7_,4);
            (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
            if ((int)param_2[1] != 2) {
              if ((int)param_2[1] != 1) goto LAB_035c0b64;
              goto LAB_035c0b04;
            }
            lVar26 = *param_2;
            puVar28 = &local_888;
            goto LAB_035c0b70;
          }
LAB_035c0b04:
          uVar7 = (uVar23 & 0xff00ff00) >> 8 | (uVar23 & 0xff00ff) << 8;
          uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
          if ((int)param_2[2] != 0xff00) {
            uVar7 = uVar23;
          }
          local_868 = CONCAT44(local_868._4_4_,uVar7);
LAB_035c0b18:
          (**(code **)(*param_2 + 0x38))(param_2,&local_868);
          goto LAB_035c0bb0;
        }
        if (iVar12 == 0) {
          if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_035c0b30:
            local_868 = local_868 & 0xffffffff00000000;
            (**(code **)(*param_2 + 0x20))(param_2,&local_868,4);
            uVar23 = ((uint)local_868 & 0xff00ff00) >> 8 | ((uint)local_868 & 0xff00ff) << 8;
            uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
            if ((int)param_2[2] != 0xff00) {
              uVar23 = (uint)local_868;
            }
          }
          else {
            local_868 = CONCAT71(local_868._1_7_,4);
            (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
            if ((int)param_2[1] == 2) {
              (**(code **)(*param_2 + 0x20))(param_2,&local_888,4);
              uVar23 = (uint)local_888;
            }
            else {
              if ((int)param_2[1] != 1) goto LAB_035c0b30;
              (**(code **)(*param_2 + 0x38))(param_2,&local_868);
              uVar23 = extraout_w8_00;
            }
          }
          *puVar30 = uVar23;
          goto LAB_035c0bb0;
        }
      }
      puVar31 = (ushort *)((long)param_1 + (ulong)uVar25 * 0xb8 + 0x76);
      if (iVar12 == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,puVar31,2);
      }
      else if (iVar12 == 1) {
        uVar5 = *puVar31;
        uVar6 = uVar5 >> 8 | uVar5 << 8;
        if ((int)param_2[2] != 0xff00) {
          uVar6 = uVar5;
        }
        local_868 = CONCAT62(local_868._2_6_,uVar6);
        (**(code **)(*param_2 + 0x30))(param_2,&local_868);
      }
      else {
        local_868 = (ulong)local_868._2_6_ << 0x10;
        (**(code **)(*param_2 + 0x20))(param_2,&local_868,2);
        uVar6 = (ushort)local_868 >> 8 | (ushort)local_868 << 8;
        if ((int)param_2[2] != 0xff00) {
          uVar6 = (ushort)local_868;
        }
        *puVar31 = uVar6;
      }
      (**(code **)(*param_2 + 0x20))(param_2,param_1[(ulong)uVar25 * 0x17 + 0x1b],0x5a00);
      iVar12 = (int)param_2[1];
      puVar28 = (ulong *)(param_1 + (ulong)uVar25 * 0x17 + 0x19);
      uVar24 = *puVar28;
      uVar23 = 0;
      if (iVar12 != 0) {
        uVar23 = 0x56454354;
      }
      local_888 = CONCAT44(local_888._4_4_,uVar23);
      if (iVar12 == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,&local_888,4);
        uVar23 = (uint)local_888;
      }
      else if (iVar12 == 1) {
        uVar7 = (uVar23 & 0xff00ff00) >> 8 | (uVar23 & 0xff00ff) << 8;
        uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          uVar7 = uVar23;
        }
        local_868 = CONCAT44(local_868._4_4_,uVar7);
        (**(code **)(*param_2 + 0x38))(param_2,&local_868);
      }
      else {
        local_868 = (ulong)local_868._4_4_ << 0x20;
        (**(code **)(*param_2 + 0x20))(param_2,&local_868,4);
        uVar23 = ((uint)local_868 & 0xff00ff00) >> 8 | ((uint)local_868 & 0xff00ff) << 8;
        uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          uVar23 = (uint)local_868;
        }
      }
      if (uVar23 == 0x56454354) {
        if ((int)param_2[1] == 0) {
          local_868 = (ulong)local_868._4_4_ << 0x20;
          (**(code **)(*param_2 + 0x20))(param_2,&local_868,4);
          uVar23 = ((uint)local_868 & 0xff00ff00) >> 8 | ((uint)local_868 & 0xff00ff) << 8;
          uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
          if ((int)param_2[2] != 0xff00) {
            uVar23 = (uint)local_868;
          }
          uVar24 = (ulong)uVar23;
          iVar12 = (int)param_2[1];
joined_r0x035c0da4:
          if (iVar12 == 0) goto LAB_035c0ddc;
LAB_035c0d64:
          uVar24 = *puVar28;
        }
        else {
          uVar23 = (uint)uVar24;
          local_888 = CONCAT44(local_888._4_4_,uVar23);
          if ((int)param_2[1] != 2) {
            uVar7 = (uVar23 & 0xff00ff00) >> 8 | (uVar23 & 0xff00ff) << 8;
            uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
            if ((int)param_2[2] != 0xff00) {
              uVar7 = uVar23;
            }
            local_868 = CONCAT44(local_868._4_4_,uVar7);
            (**(code **)(*param_2 + 0x38))(param_2,&local_868);
            iVar12 = (int)param_2[1];
            goto joined_r0x035c0da4;
          }
          (**(code **)(*param_2 + 0x20))(param_2,&local_888,4);
          if ((int)param_2[1] != 0) goto LAB_035c0d64;
LAB_035c0ddc:
          if ((ulong)param_1[(ulong)uVar25 * 0x17 + 0x1a] < uVar24) {
            uVar22 = uVar24;
            if (uVar24 < 5) {
              uVar22 = 4;
            }
            iVar12 = FUN_035c57e0(param_1 + (ulong)uVar25 * 0x17 + 0x16,uVar22);
            if (iVar12 != 0) {
              FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
              uVar24 = *puVar28;
              goto joined_r0x035c0d68;
            }
          }
          *puVar28 = uVar24;
        }
joined_r0x035c0d68:
        if (uVar24 != 0) {
          lVar26 = uVar24 << 2;
          puVar30 = (uint *)param_1[(ulong)uVar25 * 0x17 + 0x18];
          do {
            if (*(char *)((long)param_2 + 0xc) != '\0') {
              local_868 = CONCAT71(local_868._1_7_,4);
              (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
            }
            if ((int)param_2[1] == 2) {
              (**(code **)(*param_2 + 0x20))(param_2,puVar30,4);
            }
            else if ((int)param_2[1] == 1) {
              uVar7 = *puVar30;
              uVar23 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
              uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
              if ((int)param_2[2] != 0xff00) {
                uVar23 = uVar7;
              }
              local_868 = CONCAT44(local_868._4_4_,uVar23);
              (**(code **)(*param_2 + 0x38))(param_2,&local_868);
            }
            else {
              local_868 = (ulong)local_868._4_4_ << 0x20;
              (**(code **)(*param_2 + 0x20))(param_2,&local_868,4);
              uVar23 = ((uint)local_868 & 0xff00ff00) >> 8 | ((uint)local_868 & 0xff00ff) << 8;
              uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
              if ((int)param_2[2] != 0xff00) {
                uVar23 = (uint)local_868;
              }
              *puVar30 = uVar23;
            }
            puVar30 = puVar30 + 1;
            lVar26 = lVar26 + -4;
          } while (lVar26 != 0);
        }
      }
      if (2 < *(byte *)(*param_1 + 0xd2)) {
        (**(code **)(*param_2 + 0x20))(param_2,param_1[(ulong)uVar25 * 0x17 + 0x14],0x40);
        (**(code **)(*param_2 + 0x20))(param_2,param_1[(ulong)uVar25 * 0x17 + 0x15],0x40);
        iVar12 = (int)param_2[1];
        uVar23 = 0;
        if (iVar12 != 0) {
          uVar23 = 0x56454354;
        }
        puVar28 = (ulong *)(param_1 + (ulong)uVar25 * 0x17 + 0x12);
        uVar24 = *puVar28;
        local_888 = CONCAT44(local_888._4_4_,uVar23);
        if (iVar12 == 2) {
          (**(code **)(*param_2 + 0x20))(param_2,&local_888,4);
          uVar23 = (uint)local_888;
        }
        else if (iVar12 == 1) {
          uVar7 = (uVar23 & 0xff00ff00) >> 8 | (uVar23 & 0xff00ff) << 8;
          uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
          if ((int)param_2[2] != 0xff00) {
            uVar7 = uVar23;
          }
          local_868 = CONCAT44(local_868._4_4_,uVar7);
          (**(code **)(*param_2 + 0x38))(param_2,&local_868);
        }
        else {
          local_868 = (ulong)local_868._4_4_ << 0x20;
          (**(code **)(*param_2 + 0x20))(param_2,&local_868,4);
          uVar23 = ((uint)local_868 & 0xff00ff00) >> 8 | ((uint)local_868 & 0xff00ff) << 8;
          uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
          if ((int)param_2[2] != 0xff00) {
            uVar23 = (uint)local_868;
          }
        }
        if (uVar23 == 0x56454354) {
          if ((int)param_2[1] == 0) {
            local_868 = (ulong)local_868._4_4_ << 0x20;
            (**(code **)(*param_2 + 0x20))(param_2,&local_868,4);
            uVar23 = ((uint)local_868 & 0xff00ff00) >> 8 | ((uint)local_868 & 0xff00ff) << 8;
            uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
            if ((int)param_2[2] != 0xff00) {
              uVar23 = (uint)local_868;
            }
            uVar24 = (ulong)uVar23;
            iVar12 = (int)param_2[1];
joined_r0x035c1074:
            if (iVar12 == 0) goto LAB_035c10ac;
LAB_035c1034:
            uVar24 = *puVar28;
          }
          else {
            uVar23 = (uint)uVar24;
            local_888 = CONCAT44(local_888._4_4_,uVar23);
            if ((int)param_2[1] != 2) {
              uVar7 = (uVar23 & 0xff00ff00) >> 8 | (uVar23 & 0xff00ff) << 8;
              uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
              if ((int)param_2[2] != 0xff00) {
                uVar7 = uVar23;
              }
              local_868 = CONCAT44(local_868._4_4_,uVar7);
              (**(code **)(*param_2 + 0x38))(param_2,&local_868);
              iVar12 = (int)param_2[1];
              goto joined_r0x035c1074;
            }
            (**(code **)(*param_2 + 0x20))(param_2,&local_888,4);
            if ((int)param_2[1] != 0) goto LAB_035c1034;
LAB_035c10ac:
            if ((ulong)param_1[(ulong)uVar25 * 0x17 + 0x13] < uVar24) {
              uVar22 = uVar24;
              if (uVar24 < 5) {
                uVar22 = 4;
              }
              iVar12 = FUN_035c5900(param_1 + (ulong)uVar25 * 0x17 + 0xf,uVar22);
              if (iVar12 != 0) {
                FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
                uVar24 = *puVar28;
                goto joined_r0x035c1038;
              }
            }
            *puVar28 = uVar24;
          }
joined_r0x035c1038:
          if (uVar24 != 0) {
            lVar26 = uVar24 << 1;
            puVar31 = (ushort *)param_1[(ulong)uVar25 * 0x17 + 0x11];
            do {
              if ((int)param_2[1] == 2) {
                (**(code **)(*param_2 + 0x20))(param_2,puVar31,2);
              }
              else if ((int)param_2[1] == 1) {
                uVar5 = *puVar31;
                uVar6 = uVar5 >> 8 | uVar5 << 8;
                if ((int)param_2[2] != 0xff00) {
                  uVar6 = uVar5;
                }
                local_868 = CONCAT62(local_868._2_6_,uVar6);
                (**(code **)(*param_2 + 0x30))(param_2,&local_868);
              }
              else {
                local_868 = (ulong)local_868._2_6_ << 0x10;
                (**(code **)(*param_2 + 0x20))(param_2,&local_868,2);
                uVar6 = (ushort)local_868 >> 8 | (ushort)local_868 << 8;
                if ((int)param_2[2] != 0xff00) {
                  uVar6 = (ushort)local_868;
                }
                *puVar31 = uVar6;
              }
              puVar31 = puVar31 + 1;
              lVar26 = lVar26 + -2;
            } while (lVar26 != 0);
          }
        }
      }
      iVar12 = (int)param_2[1];
      if (iVar12 == 2) {
        if (*(char *)((long)param_2 + 0xc) != '\0') {
          local_868 = CONCAT71(local_868._1_7_,4);
          (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
          if ((int)param_2[1] != 2) {
            if ((int)param_2[1] != 1) {
LAB_035c12f4:
              local_868 = local_868 & 0xffffffff00000000;
              goto LAB_035c12f8;
            }
            goto LAB_035c12dc;
          }
        }
LAB_035c12f8:
        lVar26 = *param_2;
        puVar28 = &local_868;
LAB_035c1300:
        (**(code **)(lVar26 + 0x20))(param_2,puVar28,4);
      }
      else if (iVar12 == 1) {
        uVar25 = *(uint *)(param_1 + (ulong)uVar25 * 0x17 + 0x1f);
        local_888 = CONCAT44(local_888._4_4_,uVar25);
        if (*(char *)((long)param_2 + 0xc) != '\0') {
          local_868 = CONCAT71(local_868._1_7_,4);
          (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
          if ((int)param_2[1] != 2) {
            if ((int)param_2[1] != 1) goto LAB_035c12f4;
            goto LAB_035c12c8;
          }
          lVar26 = *param_2;
          puVar28 = &local_888;
          goto LAB_035c1300;
        }
LAB_035c12c8:
        uVar23 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
        uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          uVar23 = uVar25;
        }
        local_868 = CONCAT44(local_868._4_4_,uVar23);
LAB_035c12dc:
        (**(code **)(*param_2 + 0x38))(param_2,&local_868);
      }
      else if (iVar12 == 0) {
        if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_035c0410:
          local_868 = local_868 & 0xffffffff00000000;
          (**(code **)(*param_2 + 0x20))(param_2,&local_868,4);
          uVar23 = ((uint)local_868 & 0xff00ff00) >> 8 | ((uint)local_868 & 0xff00ff) << 8;
          uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
          if ((int)param_2[2] != 0xff00) {
            uVar23 = (uint)local_868;
          }
        }
        else {
          local_868 = CONCAT71(local_868._1_7_,4);
          (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
          if ((int)param_2[1] == 2) {
            (**(code **)(*param_2 + 0x20))(param_2,&local_888,4);
            uVar23 = (uint)local_888;
          }
          else {
            if ((int)param_2[1] != 1) goto LAB_035c0410;
            (**(code **)(*param_2 + 0x38))(param_2,&local_868);
            uVar23 = extraout_w8_01;
          }
        }
        *(uint *)(param_1 + (ulong)uVar25 * 0x17 + 0x1f) = uVar23;
      }
      lVar32 = lVar32 + 1;
    } while (lVar32 != lVar16);
  }
  local_878 = 0;
  if (param_1[0xcc] != 0) {
    local_878 = param_1[0xcd] - param_1[0xcc] >> 1;
  }
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_868 = CONCAT71(local_868._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,&local_878,8);
  }
  else if ((int)param_2[1] == 1) {
    uVar24 = (local_878 & 0xff00ff00ff00ff00) >> 8 | (local_878 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    local_868 = uVar24 >> 0x20 | uVar24 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_868 = local_878;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_868);
  }
  else {
    local_868 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_868,8);
    uVar24 = (local_868 & 0xff00ff00ff00ff00) >> 8 | (local_868 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    local_878 = uVar24 >> 0x20 | uVar24 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_878 = local_868;
    }
  }
  if (iVar13 == 0) {
    if ((char)param_1[5] == '\0') {
      lVar17 = 0;
      lVar32 = 0;
      lVar20 = 0;
      lVar26 = 0;
    }
    else {
      lVar20 = param_1[(param_1[0xcb] & 7U) * 0x17 + 0x1b];
      lVar17 = param_1[(param_1[0xcb] & 7U) * 0x17 + 0x1c];
      lVar32 = lVar17 + local_878 * 2;
      lVar26 = lVar20 + local_878;
    }
    param_1[0xcc] = lVar17;
    param_1[0xcd] = lVar32;
    param_1[0xce] = lVar20;
    param_1[0xcf] = lVar26;
    FUN_035bf5f0(param_1);
  }
  uVar24 = param_1[0xca] & 7;
  local_868 = CONCAT71(local_868._1_7_,*(uint *)(param_1 + uVar24 * 0x17 + 0x20) == 1);
  (**(code **)(*param_2 + 0x28))(param_2,&local_868);
  cVar3 = (char)local_868;
  if ((char)local_868 != '\0') {
    if (iVar13 != 0) {
      lVar16 = param_1[uVar24 * 0x17 + 0x1d];
      if ((int)param_2[2] == 0xff) {
        if (*(char *)((long)param_2 + 0xc) != '\0') {
          local_868 = CONCAT71(local_868._1_7_,2);
          (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
        }
        (**(code **)(*param_2 + 0x20))(param_2,lVar16 + 0x40,0x21c00);
      }
      else {
        FUN_035c6820(param_2,lVar16 + 0x40);
      }
      goto LAB_035c1da8;
    }
    puVar28 = (ulong *)(param_1 + uVar24 * 0x17 + 10);
    uVar22 = *puVar28;
    pMVar1 = (MutexType *)(param_1 + 0x12e);
    lVar32 = param_1[uVar24 * 0x17 + 0xe];
    FUN_035c7610(&local_888,pMVar1,uVar22,(char)lVar32);
    if (local_888 != 0) {
      if (local_880 != (long *)0x0) {
        plVar29 = local_880 + 1;
        do {
          cVar10 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar9) {
            *plVar29 = *plVar29 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      param_1[uVar24 * 0x17 + 0x1d] = local_888;
      plVar29 = (long *)param_1[uVar24 * 0x17 + 0x1e];
      param_1[uVar24 * 0x17 + 0x1e] = (long)local_880;
      if (plVar29 != (long *)0x0) {
        plVar2 = plVar29 + 1;
        do {
          lVar32 = *plVar2;
          cVar10 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar32 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar32 == 0) {
          (**(code **)(*plVar29 + 0x10))(plVar29);
          std::__shared_weak_count::__release_weak();
        }
      }
      uVar22 = param_1[uVar24 * 0x17 + 0x1d];
      pvVar14 = (void *)(uVar22 + 0x40);
      if ((int)param_2[2] == 0xff) {
        if (*(char *)((long)param_2 + 0xc) != '\0') {
          local_868 = CONCAT71(local_868._1_7_,2);
          (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
        }
        if ((int)param_2[1] == 0) {
          pvVar14 = (void *)(uVar22 + 0x21840);
          lVar32 = 0x21400;
          do {
            (**(code **)(*param_2 + 0x20))(param_2,&local_868,0x800);
            iVar13 = memcmp(&local_868,(void *)(uVar22 + 0x40),0x800);
            if (iVar13 != 0) {
              memcpy((void *)(uVar22 + 0x40),&local_868,0x800);
              (**(code **)(*param_2 + 0x20))(param_2,uVar22 + 0x840,lVar32);
              cVar10 = '\x01';
              goto LAB_035c1c54;
            }
            uVar22 = uVar22 + 0x800;
            bVar9 = lVar32 != 0x400;
            lVar32 = lVar32 + -0x800;
          } while (bVar9);
          (**(code **)(*param_2 + 0x20))(param_2,&local_868,0x400);
          iVar13 = memcmp(&local_868,pvVar14,0x400);
          cVar10 = iVar13 != 0;
          memcpy(pvVar14,&local_868,0x400);
        }
        else {
          if ((int)param_2[1] == 2) {
            lVar32 = *param_2;
            uVar15 = 0x21c00;
          }
          else {
            lVar32 = 0x43;
            do {
              (**(code **)(*param_2 + 0x20))(param_2,pvVar14,0x800);
              pvVar14 = (void *)((long)pvVar14 + 0x800);
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
            lVar32 = *param_2;
            uVar15 = 0x400;
          }
          (**(code **)(lVar32 + 0x20))(param_2,pvVar14,uVar15);
          cVar10 = '\x02';
        }
      }
      else {
        if (*(char *)((long)param_2 + 0xc) != '\0') {
          local_868 = CONCAT71(local_868._1_7_,2);
          (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
        }
        if ((int)param_2[1] == 0) {
          lVar32 = uVar22 + 0x21c40;
          lVar26 = 0;
          __s2 = (void *)(uVar22 + 0x21840);
          __s2_00 = pvVar14;
LAB_035c1944:
          (**(code **)(*param_2 + 0x20))(param_2,&local_868,0x800);
          uVar18 = 0xfffffffffffffff8;
          pauVar21 = (undefined1 (*) [16])local_858;
          do {
            uVar18 = uVar18 + 0x10;
            auVar34 = NEON_rev16(*pauVar21,1);
            auVar33 = NEON_rev16(pauVar21[-1],1);
            *(long *)(pauVar21[-1] + 8) = auVar33._8_8_;
            *(long *)pauVar21[-1] = auVar33._0_8_;
            *(long *)(*pauVar21 + 8) = auVar34._8_8_;
            *(long *)*pauVar21 = auVar34._0_8_;
            pauVar21 = pauVar21 + 2;
          } while (uVar18 < 0x3f8);
          iVar13 = memcmp(&local_868,__s2_00,0x800);
          if (iVar13 == 0) goto code_r0x035c1998;
          memcpy(__s2_00,&local_868,0x800);
          lVar26 = (long)__s2_00 + 0x800;
          uVar27 = lVar32 - lVar26 >> 1;
          (**(code **)(*param_2 + 0x20))(param_2,lVar26);
          uVar18 = 0;
          if ((uVar27 & 0xfffffffffffffff8) != 0) {
            lVar32 = 0x840;
            do {
              uVar18 = uVar18 + 8;
              auVar33 = NEON_rev16(*(undefined1 (*) [16])(uVar22 + lVar32),1);
              ((undefined8 *)(uVar22 + lVar32))[1] = auVar33._8_8_;
              *(undefined8 *)(uVar22 + lVar32) = auVar33._0_8_;
              lVar32 = lVar32 + 0x10;
            } while (uVar18 < (uVar27 & 0xfffffffffffffff8));
          }
          if (uVar18 < uVar27) {
            uVar19 = uVar18;
            if ((uVar27 & 1) != 0) {
              uVar6 = *(ushort *)(lVar26 + uVar18 * 2);
              *(ushort *)(lVar26 + uVar18 * 2) = uVar6 >> 8 | uVar6 << 8;
              uVar19 = uVar18 + 1;
            }
            if (uVar27 != uVar18 + 1) {
              lVar32 = 0;
              do {
                lVar26 = uVar22 + uVar19 * 2 + lVar32 * 2;
                lVar32 = lVar32 + 2;
                *(ushort *)(lVar26 + 0x840) =
                     *(ushort *)(lVar26 + 0x840) >> 8 | *(ushort *)(lVar26 + 0x840) << 8;
                *(ushort *)(lVar26 + 0x842) =
                     *(ushort *)(lVar26 + 0x842) >> 8 | *(ushort *)(lVar26 + 0x842) << 8;
              } while (uVar27 - uVar19 != lVar32);
            }
          }
          cVar10 = '\x01';
          goto LAB_035c1c54;
        }
        if ((int)param_2[1] == 2) {
          (**(code **)(*param_2 + 0x20))(param_2,pvVar14,0x21c00);
          cVar10 = '\x02';
        }
        else {
          lVar32 = uVar22 + 0x50;
          lVar26 = 0;
          do {
            uVar22 = 0xfffffffffffffff8;
            lVar20 = 0;
            do {
              uVar22 = uVar22 + 0x10;
              auVar33 = NEON_rev16(*(undefined1 (*) [16])((long)pvVar14 + lVar20),1);
              *(long *)((long)local_858 + lVar20 + -8) = auVar33._8_8_;
              *(long *)(auStack_86c + lVar20 + 4) = auVar33._0_8_;
              auVar33 = NEON_rev16(*(undefined1 (*) [16])(lVar32 + lVar20),1);
              *(long *)((long)local_858 + lVar20 + 8) = auVar33._8_8_;
              *(long *)((long)local_858 + lVar20) = auVar33._0_8_;
              lVar20 = lVar20 + 0x20;
            } while (uVar22 < 0x3f8);
            (**(code **)(*param_2 + 0x20))(param_2,&local_868,0x800);
            lVar26 = lVar26 + 1;
            pvVar14 = (void *)((long)pvVar14 + 0x800);
            lVar32 = lVar32 + 0x800;
          } while (lVar26 != 0x43);
          lVar32 = 0;
          uVar22 = 0xfffffffffffffff8;
          do {
            uVar22 = uVar22 + 8;
            auVar33 = NEON_rev16(*(undefined1 (*) [16])((long)pvVar14 + lVar32),1);
            *(long *)((long)local_858 + lVar32 + -8) = auVar33._8_8_;
            *(long *)(auStack_86c + lVar32 + 4) = auVar33._0_8_;
            lVar32 = lVar32 + 0x10;
          } while (uVar22 < 0x1f8);
          (**(code **)(*param_2 + 0x20))(param_2,&local_868,0x400);
          cVar10 = '\x02';
        }
      }
      goto LAB_035c1c54;
    }
    nn::os::LockMutex(pMVar1);
    FUN_035c7980(&local_868,pMVar1,uVar22,(char)lVar32);
    uVar22 = local_868;
    nn::os::UnlockMutex(pMVar1);
    param_1[uVar24 * 0x17 + 0x1d] = uVar22;
    plVar29 = (long *)param_1[uVar24 * 0x17 + 0x1e];
    param_1[uVar24 * 0x17 + 0x1e] = lStack_860;
    if (plVar29 != (long *)0x0) {
      plVar2 = plVar29 + 1;
      do {
        lVar32 = *plVar2;
        cVar10 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *plVar2 = lVar32 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar32 = param_1[uVar24 * 0x17 + 0x1d] + 0x40;
    if ((int)param_2[2] == 0xff) {
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_868 = CONCAT71(local_868._1_7_,2);
        (**(code **)(*param_2 + 0x20))(param_2,&local_868,1);
      }
      (**(code **)(*param_2 + 0x20))(param_2,lVar32,0x21c00);
    }
    else {
      FUN_035c6820(param_2,lVar32);
    }
    plVar29 = (long *)param_1[0xc3];
    param_1[0xc2] = 0;
    param_1[0xc3] = 0;
    if (plVar29 != (long *)0x0) {
      plVar2 = plVar29 + 1;
      do {
        lVar32 = *plVar2;
        cVar10 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *plVar2 = lVar32 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar29 = (long *)param_1[9];
    param_1[8] = 0;
    param_1[9] = 0;
    if (plVar29 != (long *)0x0) {
      plVar2 = plVar29 + 1;
      do {
        lVar32 = *plVar2;
        cVar10 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *plVar2 = lVar32 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar22 = *puVar28;
    nn::os::LockMutex(pMVar1);
    puVar28 = (ulong *)param_1[0x143];
    while (puVar8 = puVar28, puVar8 != (ulong *)(param_1 + 0x145)) {
      puVar28 = (ulong *)puVar8[3];
      if (uVar22 < *puVar8) {
        FUN_035c7720(pMVar1,*puVar8,puVar8[1]);
      }
    }
    nn::os::UnlockMutex(pMVar1);
    goto LAB_035c1d44;
  }
  if (iVar13 != 0) goto LAB_035c1da8;
  goto LAB_035c1d7c;
LAB_035bfba8:
  iVar12 = nn::os::TimedWaitConditionVariable(param_1 + 0xd6,pMVar1,1000000000);
  if (iVar12 != 1) goto LAB_035bfb84;
  goto LAB_035bfbc0;
LAB_035bfb84:
  nn::os::UnlockMutex(pMVar1);
  goto LAB_035bfb8c;
code_r0x035c1998:
  lVar26 = lVar26 + 0x400;
  uVar22 = uVar22 + 0x800;
  __s2_00 = (void *)((long)pvVar14 + lVar26 * 2);
  if (lVar26 == 0x10c00) goto code_r0x035c19ac;
  goto LAB_035c1944;
code_r0x035c19ac:
  (**(code **)(*param_2 + 0x20))(param_2,&local_868,0x400);
  uVar22 = 0xfffffffffffffff8;
  pauVar21 = (undefined1 (*) [16])&local_868;
  do {
    uVar22 = uVar22 + 8;
    auVar33 = NEON_rev16(*pauVar21,1);
    *(long *)(*pauVar21 + 8) = auVar33._8_8_;
    *(long *)*pauVar21 = auVar33._0_8_;
    pauVar21 = pauVar21 + 1;
  } while (uVar22 < 0x1f8);
  iVar13 = memcmp(&local_868,__s2,0x400);
  cVar10 = iVar13 != 0;
  memcpy(__s2,&local_868,0x400);
LAB_035c1c54:
  if (cVar10 == '\x01') {
    plVar29 = (long *)param_1[0xc3];
    param_1[0xc2] = 0;
    param_1[0xc3] = 0;
    if (plVar29 != (long *)0x0) {
      plVar2 = plVar29 + 1;
      do {
        lVar32 = *plVar2;
        cVar10 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *plVar2 = lVar32 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar29 = (long *)param_1[9];
    param_1[8] = 0;
    param_1[9] = 0;
    if (plVar29 != (long *)0x0) {
      plVar2 = plVar29 + 1;
      do {
        lVar32 = *plVar2;
        cVar10 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *plVar2 = lVar32 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar22 = *puVar28;
    nn::os::LockMutex(pMVar1);
    puVar28 = (ulong *)param_1[0x143];
    while (puVar8 = puVar28, puVar8 != (ulong *)(param_1 + 0x145)) {
      puVar28 = (ulong *)puVar8[3];
      if (uVar22 < *puVar8) {
        FUN_035c7720(pMVar1,*puVar8,puVar8[1]);
      }
    }
    nn::os::UnlockMutex(pMVar1);
    param_1[0xc4] = 0;
  }
  else {
    param_1[0xc4] = 0x200000002;
  }
LAB_035c1d44:
  if (local_880 != (long *)0x0) {
    plVar29 = local_880 + 1;
    do {
      lVar32 = *plVar29;
      cVar10 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar9) {
        *plVar29 = lVar32 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*local_880 + 0x10))(local_880);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_035c1d7c:
  *(uint *)(param_1 + uVar24 * 0x17 + 0x20) = (uint)(cVar3 != '\0');
  *(undefined4 *)((long)param_1 + uVar24 * 0xb8 + 0x104) = 0;
  FUN_035c1dd0(param_1,lVar16);
LAB_035c1da8:
  return uVar11 & 1;
}

