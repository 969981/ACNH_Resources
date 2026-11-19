
void FUN_03896650(long *param_1,undefined8 param_2)

{
  bool bVar1;
  MutexType *pMVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  int *piVar9;
  code *pcVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar16;
  undefined8 *puVar15;
  undefined1 local_24 [4];
  
  uVar5 = nn::os::ConvertToTimeSpan(param_1[0x7b]);
  nn::os::TimedWaitLightEvent(param_1 + 0x79,uVar5);
  pMVar2 = (MutexType *)(param_1 + 0x66);
  nn::os::LockMutex(pMVar2);
  plVar12 = (long *)param_1[0x27];
  if (plVar12 != param_1 + 0x26) {
    plVar11 = plVar12 + -1;
    do {
      plVar13 = (long *)plVar12[1];
      if (*(char *)((long)plVar11 + 4) == '\0') {
        plVar14 = plVar13;
        if (*plVar12 != 0) {
          *(long **)(*plVar12 + 8) = plVar13;
          plVar14 = (long *)plVar12[1];
        }
        if (plVar14 != (long *)0x0) {
          *plVar14 = *plVar12;
        }
        *plVar12 = 0;
        plVar12[1] = 0;
        *(int *)(param_1 + 0x28) = (int)param_1[0x28] + -1;
        *plVar11 = param_1[0x29];
        param_1[0x29] = (long)plVar11;
      }
      else {
        *(char *)((long)plVar11 + 4) = *(char *)((long)plVar11 + 4) + -1;
      }
      plVar11 = plVar13 + -1;
      plVar12 = plVar13;
    } while (plVar11 != param_1 + 0x25);
  }
  nn::os::UnlockMutex(pMVar2);
  lVar8 = DAT_05ae6a60[6];
  if (*(int *)(lVar8 + 0x24) < 2) {
    if (*(int *)(lVar8 + 0x24) < 1) {
      bVar1 = false;
    }
    else {
      bVar1 = *(int *)(lVar8 + 0x24) < 2;
    }
  }
  else {
    bVar1 = true;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  if (((!bVar1) && ((long *)DAT_05ae6a60[0x13] != (long *)0x0)) &&
     (uVar6 = (**(code **)(*(long *)DAT_05ae6a60[0x13] + 0x70))(), (uVar6 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x03896840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)DAT_05ae6a60[6] + 0x20))();
    return;
  }
  if (**(int **)(param_1[0x22] + (long)(int)param_1[0x25] * 8) == 0) {
    nn::os::LockMutex(pMVar2);
    *(undefined1 *)((long)param_1 + 300) = 0;
    uVar3 = (int)param_1[0x25] + 1U & 1;
    uVar4 = -uVar3;
    if (-2 < (int)param_1[0x25]) {
      uVar4 = uVar3;
    }
    *(uint *)(param_1 + 0x25) = uVar4;
    nn::os::UnlockMutex(pMVar2);
    goto LAB_038968b4;
  }
  if ((int)param_1[0x28] != 0) goto LAB_038968b4;
  (**(code **)(*param_1 + 0x58))(param_1,*(undefined4 *)((long)param_1 + 0x3e4));
  if (*(uint *)(param_1 + 0x25) < *(uint *)(param_1 + 0x21)) {
    piVar9 = *(int **)(param_1[0x22] + (long)(int)*(uint *)(param_1 + 0x25) * 8);
    if (*piVar9 == 0) goto LAB_03896850;
LAB_038967e4:
    lVar8 = **(long **)(piVar9 + 2);
    if (bVar1) goto LAB_03896858;
LAB_03896860:
    local_24[0] = (**(code **)**(undefined8 **)(lVar8 + 8))
                            (*(undefined8 **)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
    pcVar10 = *(code **)(*param_1 + 0xa8);
    puVar7 = local_24;
  }
  else {
    piVar9 = (int *)0x0;
    if (iRam0000000000000000 != 0) goto LAB_038967e4;
LAB_03896850:
    lVar8 = 0;
    if (!bVar1) goto LAB_03896860;
LAB_03896858:
    if (*(char *)(lVar8 + 0x20) != '\0') goto LAB_03896860;
    pcVar10 = *(code **)(*param_1 + 0xa8);
    puVar7 = PTR_DAT_04bb2950;
  }
  (*pcVar10)(param_1,lVar8,puVar7);
  (**(code **)(*param_1 + 0x58))(param_1,(int)param_1[0x7c]);
LAB_038968b4:
  (**(code **)(*DAT_05ae6a60 + 0xf0))();
  if (!bVar1) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x6e));
    if ((int)param_1[0x4a] != 0) {
      puVar15 = (undefined8 *)param_1[0x4b];
      do {
        puVar16 = puVar15 + 1;
        (**(code **)**(undefined8 **)*puVar15)();
        puVar15 = puVar16;
      } while (puVar16 != (undefined8 *)(param_1[0x4b] + (long)(int)param_1[0x4a] * 8));
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x6e));
  }
  nn::os::ConvertToTimeSpan(param_1[0x74]);
  nn::os::SleepThread();
  return;
}

