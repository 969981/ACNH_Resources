
void FUN_0394b240(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar9 = 2;
  if ((param_4 & 1) == 0) {
    uVar9 = 0;
  }
  lVar6 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x368) + 8);
  lVar10 = *(long *)(lVar6 + 0x28);
  if (*(uint *)(lVar6 + 0x20) <= uVar9) {
    uVar9 = 0;
  }
  lVar6 = lVar10 + (ulong)uVar9 * 0x150;
  FUN_03907810(lVar6,param_1);
  puVar1 = (uint *)(lVar6 + 0x14);
  if ((param_4 & 1) == 0) {
    local_60 = 0xbf36c8b43fb374bc;
    uStack_58 = 0x3fdc6a7fbeb020c5;
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
          lVar8 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar8 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar6);
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
  }
  else {
    local_60 = 0xbf5020c53fcc49ba;
    uStack_58 = 0x400126e9bec83127;
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
          lVar8 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar8 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar6);
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
  }
  lVar7 = lVar10 + (ulong)uVar9 * 0x150;
  lVar8 = 0x210;
  if (*(uint *)(lVar7 + 0x30) < 0x17) {
    lVar8 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar7 + 0x38) + lVar8);
  if (iVar2 != -1) {
    (*DAT_04c62af0)(*(undefined8 *)(param_1 + 0xb8),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar2,0x10,&local_60);
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
        lVar8 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar6);
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
  lVar10 = lVar10 + (ulong)uVar9 * 0x150;
  FUN_0390d290(param_3,param_1,
               *(long *)(lVar10 + 0x68) + (ulong)(1 < *(uint *)(lVar10 + 0x60)) * 0x18,0xffffffff,0)
  ;
  FUN_0394a420(param_1,lVar6,param_2);
  return;
}

