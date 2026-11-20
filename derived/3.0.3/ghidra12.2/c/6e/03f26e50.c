
undefined8 FUN_03f26e50(long param_1,uint param_2)

{
  uint *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = (uint *)(param_1 + 0xb0);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = *puVar1 | 0x10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar5 = nn::os::GetSystemTick();
  lVar7 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  if (lVar7 != 0) {
    lVar9 = *(long *)PTR_DAT_04bb29d0;
    lVar2 = lVar9;
    if (lVar9 < 0) {
      lVar2 = lVar9 + 1;
    }
    if ((int)param_2 < 0) {
      do {
        if ((*(uint *)(lVar7 + 0x120) & 1) == 0) {
          return 1;
        }
        nn::os::GetSystemTick();
        plVar6 = *(long **)(param_1 + 8);
        if ((int)plVar6[0x23] - *(int *)((long)plVar6 + 0x11c) < 1) {
          (**(code **)(*plVar6 + 0x18))(plVar6,0x73617665,1);
        }
        nn::os::ConvertToTimeSpan(lVar2 >> 1);
        nn::os::SleepThread();
        lVar7 = *(long *)(param_1 + 8);
      } while (lVar7 != 0);
    }
    else {
      do {
        if ((*(uint *)(lVar7 + 0x120) & 1) == 0) {
          return 1;
        }
        lVar7 = nn::os::GetSystemTick();
        lVar7 = lVar7 - *(long *)(param_1 + 0x18);
        if (lVar7 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
          lVar8 = 0;
          if (lVar9 != 0) {
            lVar8 = (lVar7 * 1000) / lVar9;
          }
        }
        else {
          lVar8 = 0;
          if (lVar9 != 0) {
            lVar8 = lVar7 / lVar9;
          }
          lVar8 = lVar8 * 1000;
        }
        if ((long)(ulong)param_2 < lVar8) {
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 & 0xffffffef;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          return 0;
        }
        plVar6 = *(long **)(param_1 + 8);
        if ((int)plVar6[0x23] - *(int *)((long)plVar6 + 0x11c) < 1) {
          (**(code **)(*plVar6 + 0x18))(plVar6,0x73617665,1);
        }
        nn::os::ConvertToTimeSpan(lVar2 >> 1);
        nn::os::SleepThread();
        lVar7 = *(long *)(param_1 + 8);
      } while (lVar7 != 0);
    }
  }
  return 1;
}

