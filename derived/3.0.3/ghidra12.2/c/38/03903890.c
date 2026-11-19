
void FUN_03903890(undefined1 *param_1,long param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  undefined1 uVar12;
  ulong uVar13;
  
  plVar11 = (long *)PTR_DAT_04bb29d0;
  puVar1 = (uint *)(param_2 + 0x10);
  puVar2 = param_1 + 8;
  lVar7 = *(long *)PTR_DAT_04bb29d0 / 1000000;
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar10 = *plVar11;
        do {
          nn::os::ConvertToTimeSpan(lVar10 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_2);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((*(ushort *)(param_2 + 0x148) & 1) == 0) {
    uVar12 = 0xff;
    goto LAB_03903a28;
  }
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      while ((int)*puVar1 < 0) {
        nn::os::ConvertToTimeSpan(lVar7);
        nn::os::SleepThread();
      }
    }
    else {
      FUN_03907b80(param_2);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar10 = *(long *)(param_2 + 0x80);
  if (lVar10 == 0) {
LAB_03903a10:
    uVar12 = 0xff;
  }
  else {
    (**(code **)(*(long *)(param_1 + 8) + 0x18))(puVar2);
    uVar13 = (ulong)*(uint *)(lVar10 + 0x44);
    if (*(uint *)(lVar10 + 0x44) == 0) goto LAB_03903a10;
    uVar12 = 0xff;
    puVar8 = (undefined4 *)(*(long *)(lVar10 + 0x48) + 8);
    pcVar9 = *(char **)(param_1 + 0x10);
    do {
      iVar6 = strcmp(*(char **)(puVar8 + -2),pcVar9);
      if (iVar6 == 0) {
        uVar12 = (undefined1)*puVar8;
        break;
      }
      puVar8 = puVar8 + 3;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  plVar11 = &DAT_05ae7888;
LAB_03903a28:
  *param_1 = uVar12;
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar10 = *plVar11;
        do {
          nn::os::ConvertToTimeSpan(lVar10 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_2);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((*(ushort *)(param_2 + 0x148) >> 1 & 1) != 0) {
    do {
      uVar3 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar3 | 0x80000000;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar3 & 0x7fffffff) != 0) {
      if ((int)uVar3 < 0) {
        while ((int)*puVar1 < 0) {
          nn::os::ConvertToTimeSpan(lVar7);
          nn::os::SleepThread();
        }
      }
      else {
        FUN_03907b80(param_2);
      }
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar10 = *(long *)(param_2 + 0x90);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(param_1 + 8) + 0x18))(puVar2);
      uVar13 = (ulong)*(uint *)(lVar10 + 0x44);
      if (*(uint *)(lVar10 + 0x44) != 0) {
        puVar8 = (undefined4 *)(*(long *)(lVar10 + 0x48) + 8);
        pcVar9 = *(char **)(param_1 + 0x10);
        do {
          iVar6 = strcmp(*(char **)(puVar8 + -2),pcVar9);
          if (iVar6 == 0) {
            uVar12 = (undefined1)*puVar8;
            goto LAB_03903b40;
          }
          puVar8 = puVar8 + 3;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
  }
  uVar12 = 0xff;
LAB_03903b40:
  param_1[1] = uVar12;
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar10 = *plVar11;
        do {
          nn::os::ConvertToTimeSpan(lVar10 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_2);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((*(ushort *)(param_2 + 0x148) >> 2 & 1) != 0) {
    do {
      uVar3 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar3 | 0x80000000;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar3 & 0x7fffffff) != 0) {
      if ((int)uVar3 < 0) {
        while ((int)*puVar1 < 0) {
          nn::os::ConvertToTimeSpan(lVar7);
          nn::os::SleepThread();
        }
      }
      else {
        FUN_03907b80(param_2);
      }
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar10 = *(long *)(param_2 + 0xa0);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(param_1 + 8) + 0x18))(puVar2);
      uVar13 = (ulong)*(uint *)(lVar10 + 0x44);
      if (*(uint *)(lVar10 + 0x44) != 0) {
        puVar8 = (undefined4 *)(*(long *)(lVar10 + 0x48) + 8);
        pcVar9 = *(char **)(param_1 + 0x10);
        do {
          iVar6 = strcmp(*(char **)(puVar8 + -2),pcVar9);
          if (iVar6 == 0) {
            uVar12 = (undefined1)*puVar8;
            goto LAB_03903c50;
          }
          puVar8 = puVar8 + 3;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
  }
  uVar12 = 0xff;
LAB_03903c50:
  param_1[2] = uVar12;
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar10 = *plVar11;
        do {
          nn::os::ConvertToTimeSpan(lVar10 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_2);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((*(ushort *)(param_2 + 0x148) >> 5 & 1) != 0) {
    do {
      uVar3 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar3 | 0x80000000;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar3 & 0x7fffffff) != 0) {
      if ((int)uVar3 < 0) {
        while ((int)*puVar1 < 0) {
          nn::os::ConvertToTimeSpan(lVar7);
          nn::os::SleepThread();
        }
      }
      else {
        FUN_03907b80(param_2);
      }
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar7 = *(long *)(param_2 + 0xb0);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(param_1 + 8) + 0x18))(puVar2);
      uVar13 = (ulong)*(uint *)(lVar7 + 0x44);
      if (*(uint *)(lVar7 + 0x44) != 0) {
        puVar8 = (undefined4 *)(*(long *)(lVar7 + 0x48) + 8);
        pcVar9 = *(char **)(param_1 + 0x10);
        do {
          iVar6 = strcmp(*(char **)(puVar8 + -2),pcVar9);
          if (iVar6 == 0) {
            uVar12 = (undefined1)*puVar8;
            goto LAB_03903d60;
          }
          puVar8 = puVar8 + 3;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
  }
  uVar12 = 0xff;
LAB_03903d60:
  param_1[3] = uVar12;
  return;
}

