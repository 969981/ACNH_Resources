
void FUN_035c6a10(MutexType *param_1,uint *param_2)

{
  MutexType *pMVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined4 uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long *local_90;
  long local_88;
  long *local_80;
  long local_78;
  long *local_70;
  long local_68;
  
  nn::os::LockMutex(param_1);
  do {
    lVar16 = *(long *)(param_1 + 0x68);
    if (lVar16 != *(long *)(param_1 + 0x70)) {
      lVar20 = *(long *)(param_1 + 0x40);
      pMVar1 = param_1 + 0x50;
      *(long *)(param_1 + 0x40) = lVar20 + 1;
      uVar9 = *param_2;
      if (lVar16 == 0) goto LAB_035c6d08;
      uVar13 = *(ulong *)(param_2 + 4);
      lVar16 = lVar16 * 0x70;
      lVar24 = -*(long *)(param_1 + 0x60);
      puVar18 = (ulong *)(*(long *)(param_1 + 0x60) + 0x18);
      goto LAB_035c6ab0;
    }
    nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0x30),param_1);
  } while (param_1[0x48] == (MutexType)0x0);
  goto LAB_035c6f54;
LAB_035c6ab0:
  uVar19 = *puVar18;
  if (((uVar19 < uVar13) || ((uVar19 <= uVar13 && ((uint)(byte)puVar18[-2] < (uVar9 & 0xff))))) ||
     ((uVar19 <= uVar13 && ((uint)(byte)puVar18[-2] <= (uVar9 & 0xff))))) goto LAB_035c6aa0;
  lStack_b8 = *(long *)(param_2 + 4);
  plVar21 = *(long **)(param_2 + 0xe);
  local_c0 = (undefined4)*(undefined8 *)(param_2 + 2);
  uStack_bc = (undefined4)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
  lVar16 = *(long *)(param_2 + 6);
  local_a8 = *(long *)(param_2 + 8);
  local_a0 = *(long *)(param_2 + 10);
  lVar6 = *(long *)(param_2 + 0xc);
  if (plVar21 != (long *)0x0) {
    plVar7 = plVar21 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar11) {
        *plVar7 = *plVar7 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  lVar2 = *(long *)(param_2 + 0x10);
  plVar7 = *(long **)(param_2 + 0x12);
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar11) {
        *plVar8 = *plVar8 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  lVar17 = *(long *)(param_2 + 0x14);
  plVar8 = *(long **)(param_2 + 0x16);
  if (plVar8 != (long *)0x0) {
    plVar15 = plVar8 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar11) {
        *plVar15 = *plVar15 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  lVar22 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(param_1 + 0x60);
  uVar13 = *(ulong *)(param_1 + 0x68);
  local_c8 = uVar9;
  local_b0 = lVar16;
  local_98 = lVar6;
  local_90 = plVar21;
  local_88 = lVar2;
  local_80 = plVar7;
  local_78 = lVar17;
  local_70 = plVar8;
  local_68 = lVar22;
  if (uVar13 != *(ulong *)(param_1 + 0x70)) {
LAB_035c6bc4:
    lVar24 = -lVar3 - lVar24 >> 4;
    uVar19 = lVar24 * 0x6db6db6db6db6db7;
    if (uVar13 == uVar19) {
      uVar13 = *(ulong *)(param_1 + 0x70);
      if (uVar13 <= uVar19) {
        uVar13 = uVar13 + (uVar13 >> 1);
        if (uVar13 <= uVar19 + 1) {
          uVar13 = uVar19 + 1;
        }
        if (uVar13 < 5) {
          uVar13 = 4;
        }
        iVar12 = FUN_035c5b00(pMVar1,uVar13);
        if (iVar12 != 0) goto LAB_035c6c30;
        uVar19 = *(ulong *)(param_1 + 0x68);
      }
      local_98 = 0;
      local_90 = (long *)0x0;
      plVar15 = (long *)(*(long *)(param_1 + 0x60) + uVar19 * 0x70);
      *plVar15 = lVar20;
      *(uint *)(plVar15 + 1) = uVar9;
      plVar15[2] = CONCAT44(uStack_bc,local_c0);
      plVar15[3] = lStack_b8;
      plVar15[8] = (long)plVar21;
      plVar15[9] = lVar2;
      plVar15[10] = (long)plVar7;
      plVar15[0xb] = lVar17;
      plVar15[0xc] = (long)plVar8;
      plVar15[0xd] = lVar22;
      local_78 = 0;
      local_70 = (long *)0x0;
      plVar15[4] = lVar16;
      plVar15[5] = local_a8;
      plVar15[6] = local_a0;
      plVar15[7] = lVar6;
      *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
      local_88 = 0;
      local_80 = (long *)0x0;
    }
    else {
      uVar19 = uVar19 + 1;
      puVar14 = (undefined8 *)(*(long *)(param_1 + 0x60) + uVar13 * 0x70);
      *puVar14 = puVar14[-0xe];
      *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar14 + -0xd);
      puVar14[2] = puVar14[-0xc];
      puVar14[3] = puVar14[-0xb];
      puVar14[4] = puVar14[-10];
      puVar14[5] = puVar14[-9];
      puVar14[6] = puVar14[-8];
      puVar14[7] = puVar14[-7];
      uVar5 = puVar14[-6];
      puVar14[-7] = 0;
      puVar14[-6] = 0;
      puVar14[8] = uVar5;
      puVar14[9] = puVar14[-5];
      uVar5 = puVar14[-4];
      puVar14[-5] = 0;
      puVar14[-4] = 0;
      puVar14[10] = uVar5;
      puVar14[0xb] = puVar14[-3];
      uVar5 = puVar14[-2];
      puVar14[-3] = 0;
      puVar14[-2] = 0;
      puVar14[0xc] = uVar5;
      puVar14[0xd] = puVar14[-1];
      uVar13 = *(ulong *)(param_1 + 0x68);
      if (uVar19 < uVar13) {
        lVar16 = -1;
        do {
          puVar14 = (undefined8 *)(*(long *)(param_1 + 0x60) + (uVar13 + lVar16) * 0x70);
          *puVar14 = puVar14[-0xe];
          FUN_035c66f0(puVar14 + 1,puVar14 + -0xd);
          uVar13 = *(ulong *)(param_1 + 0x68);
          uVar19 = uVar19 + 1;
          lVar16 = lVar16 + -1;
        } while (uVar19 < uVar13);
      }
      plVar21 = (long *)(*(long *)(param_1 + 0x60) + lVar24 * 0x10);
      *plVar21 = lVar20;
      FUN_035c66f0(plVar21 + 1,&local_c8);
      *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
      if (local_70 != (long *)0x0) {
        plVar21 = local_70 + 1;
        do {
          lVar16 = *plVar21;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar11) {
            *plVar21 = lVar16 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    if (local_80 != (long *)0x0) {
      plVar21 = local_80 + 1;
      do {
        lVar16 = *plVar21;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar11) {
          *plVar21 = lVar16 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_90 == (long *)0x0) goto LAB_035c6f4c;
    plVar21 = local_90 + 1;
    do {
      lVar16 = *plVar21;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar11) {
        *plVar21 = lVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar16 != 0) goto LAB_035c6f4c;
    (**(code **)(*local_90 + 0x10))(local_90);
    goto LAB_035c6f48;
  }
  uVar19 = uVar13 + (uVar13 >> 1);
  if (uVar19 <= uVar13 + 1) {
    uVar19 = uVar13 + 1;
  }
  if (uVar19 < 5) {
    uVar19 = 4;
  }
  iVar12 = FUN_035c5b00(pMVar1,uVar19);
  if (iVar12 == 0) {
    uVar13 = *(ulong *)(param_1 + 0x68);
    goto LAB_035c6bc4;
  }
LAB_035c6c30:
  if (plVar8 != (long *)0x0) {
    plVar21 = plVar8 + 1;
    do {
      lVar16 = *plVar21;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar11) {
        *plVar21 = lVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_80 != (long *)0x0) {
    plVar21 = local_80 + 1;
    do {
      lVar16 = *plVar21;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar11) {
        *plVar21 = lVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*local_80 + 0x10))(local_80);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_90 != (long *)0x0) {
    plVar21 = local_90 + 1;
    do {
      lVar16 = *plVar21;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar11) {
        *plVar21 = lVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*local_90 + 0x10))(local_90);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  goto LAB_035c6f4c;
LAB_035c6aa0:
  lVar24 = lVar24 + -0x70;
  lVar16 = lVar16 + -0x70;
  puVar18 = puVar18 + 0xe;
  if (lVar16 == 0) goto LAB_035c6d08;
  goto LAB_035c6ab0;
LAB_035c6d08:
  uStack_cc = (undefined4)*(undefined8 *)(param_2 + 2);
  local_c8 = (uint)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
  lVar16 = *(long *)(param_2 + 6);
  lVar6 = *(long *)(param_2 + 8);
  plVar21 = *(long **)(param_2 + 0xe);
  lVar24 = *(long *)(param_2 + 10);
  lVar2 = *(long *)(param_2 + 0xc);
  uStack_c4 = (undefined4)*(undefined8 *)(param_2 + 4);
  local_c0 = (undefined4)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  if (plVar21 != (long *)0x0) {
    plVar7 = plVar21 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar11) {
        *plVar7 = *plVar7 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  plVar7 = *(long **)(param_2 + 0x12);
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar11) {
        *plVar8 = *plVar8 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  uVar4 = *(undefined8 *)(param_2 + 0x14);
  plVar8 = *(long **)(param_2 + 0x16);
  if (plVar8 != (long *)0x0) {
    plVar15 = plVar8 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar11) {
        *plVar15 = *plVar15 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  uVar19 = *(ulong *)(param_1 + 0x68);
  uVar13 = *(ulong *)(param_1 + 0x70);
  uVar23 = *(undefined8 *)(param_2 + 0x18);
  if (uVar19 < uVar13) {
LAB_035c6df0:
    lVar17 = *(long *)(param_1 + 0x60);
    plVar15 = (long *)(lVar17 + uVar19 * 0x70);
    plVar15[2] = CONCAT44(local_c8,uStack_cc);
    plVar15[3] = CONCAT44(local_c0,uStack_c4);
    *plVar15 = lVar20;
    *(uint *)(plVar15 + 1) = uVar9;
    plVar15[8] = (long)plVar21;
    plVar15[4] = lVar16;
    plVar15[5] = lVar6;
    plVar15[6] = lVar24;
    plVar15[7] = lVar2;
    if (plVar21 != (long *)0x0) {
      plVar15 = plVar21 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar11) {
          *plVar15 = *plVar15 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    lVar16 = lVar17 + uVar19 * 0x70;
    *(undefined8 *)(lVar16 + 0x48) = uVar5;
    *(long **)(lVar16 + 0x50) = plVar7;
    if (plVar7 != (long *)0x0) {
      plVar15 = plVar7 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar11) {
          *plVar15 = *plVar15 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    lVar16 = lVar17 + uVar19 * 0x70;
    *(undefined8 *)(lVar16 + 0x58) = uVar4;
    *(long **)(lVar16 + 0x60) = plVar8;
    if (plVar8 != (long *)0x0) {
      plVar15 = plVar8 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar11) {
          *plVar15 = *plVar15 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    *(undefined8 *)(lVar17 + uVar19 * 0x70 + 0x68) = uVar23;
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  }
  else {
    uVar13 = uVar13 + (uVar13 >> 1);
    if (uVar13 <= uVar19 + 1) {
      uVar13 = uVar19 + 1;
    }
    if (uVar13 < 5) {
      uVar13 = 4;
    }
    iVar12 = FUN_035c5b00(pMVar1,uVar13);
    if (iVar12 == 0) {
      uVar19 = *(ulong *)(param_1 + 0x68);
      goto LAB_035c6df0;
    }
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  if (plVar8 != (long *)0x0) {
    plVar15 = plVar8 + 1;
    do {
      lVar16 = *plVar15;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar11) {
        *plVar15 = lVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 1;
    do {
      lVar16 = *plVar8;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar11) {
        *plVar8 = lVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar21 != (long *)0x0) {
    plVar7 = plVar21 + 1;
    do {
      lVar16 = *plVar7;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar11) {
        *plVar7 = lVar16 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
LAB_035c6f48:
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_035c6f4c:
  nn::os::BroadcastConditionVariable((ConditionVariableType *)(param_1 + 0x28));
LAB_035c6f54:
  nn::os::UnlockMutex(param_1);
  return;
}

