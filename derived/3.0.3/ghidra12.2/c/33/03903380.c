
void FUN_03903380(undefined4 *param_1,long param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  
  puVar1 = (uint *)(param_2 + 0x10);
  puVar2 = param_1 + 2;
  lVar9 = *(long *)PTR_DAT_04bb29d0 / 1000000;
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
        lVar11 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar11 / 1000000);
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
  if ((*(ushort *)(param_2 + 0x148) & 1) != 0) {
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
          nn::os::ConvertToTimeSpan(lVar9);
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
    lVar11 = *(long *)(param_2 + 0x80);
    (**(code **)(*(long *)(param_1 + 2) + 0x18))(puVar2);
    uVar3 = *(uint *)(lVar11 + 0x38);
    if (uVar3 != 0) {
      puVar12 = *(undefined8 **)(lVar11 + 0x3c);
      uVar13 = 0;
      pcVar8 = *(char **)(param_1 + 4);
      puVar10 = puVar12;
      do {
        iVar6 = strcmp((char *)*puVar10,pcVar8);
        if (iVar6 == 0) goto LAB_03903854;
        uVar13 = uVar13 + 1;
        puVar10 = (undefined8 *)((long)puVar10 + 0xc);
      } while (uVar3 != uVar13);
    }
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
      if ((int)*puVar1 < 0) {
        lVar11 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar11 / 1000000);
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
          nn::os::ConvertToTimeSpan(lVar9);
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
    lVar11 = *(long *)(param_2 + 0x90);
    (**(code **)(*(long *)(param_1 + 2) + 0x18))(puVar2);
    uVar3 = *(uint *)(lVar11 + 0x38);
    if (uVar3 != 0) {
      puVar12 = *(undefined8 **)(lVar11 + 0x3c);
      uVar13 = 0;
      pcVar8 = *(char **)(param_1 + 4);
      puVar10 = puVar12;
      do {
        iVar6 = strcmp((char *)*puVar10,pcVar8);
        if (iVar6 == 0) goto LAB_03903854;
        uVar13 = uVar13 + 1;
        puVar10 = (undefined8 *)((long)puVar10 + 0xc);
      } while (uVar3 != uVar13);
    }
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
      if ((int)*puVar1 < 0) {
        lVar11 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar11 / 1000000);
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
          nn::os::ConvertToTimeSpan(lVar9);
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
    lVar11 = *(long *)(param_2 + 0xa0);
    (**(code **)(*(long *)(param_1 + 2) + 0x18))(puVar2);
    uVar3 = *(uint *)(lVar11 + 0x38);
    if (uVar3 != 0) {
      puVar12 = *(undefined8 **)(lVar11 + 0x3c);
      uVar13 = 0;
      pcVar8 = *(char **)(param_1 + 4);
      puVar10 = puVar12;
      do {
        iVar6 = strcmp((char *)*puVar10,pcVar8);
        if (iVar6 == 0) goto LAB_03903854;
        uVar13 = uVar13 + 1;
        puVar10 = (undefined8 *)((long)puVar10 + 0xc);
      } while (uVar3 != uVar13);
    }
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
      if ((int)*puVar1 < 0) {
        lVar11 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar11 / 1000000);
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
          nn::os::ConvertToTimeSpan(lVar9);
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
    lVar9 = *(long *)(param_2 + 0xb0);
    (**(code **)(*(long *)(param_1 + 2) + 0x18))(puVar2);
    uVar3 = *(uint *)(lVar9 + 0x38);
    if (uVar3 != 0) {
      puVar12 = *(undefined8 **)(lVar9 + 0x3c);
      uVar13 = 0;
      uVar7 = 0xffffffff;
      pcVar8 = *(char **)(param_1 + 4);
      puVar10 = puVar12;
      do {
        iVar6 = strcmp((char *)*puVar10,pcVar8);
        if (iVar6 == 0) goto LAB_03903854;
        uVar13 = uVar13 + 1;
        puVar10 = (undefined8 *)((long)puVar10 + 0xc);
      } while (uVar3 != uVar13);
      goto LAB_03903868;
    }
  }
  uVar7 = 0xffffffff;
LAB_03903868:
  *param_1 = uVar7;
  return;
LAB_03903854:
  uVar7 = *(undefined4 *)((long)puVar12 + uVar13 * 0xc + 8);
  goto LAB_03903868;
}

