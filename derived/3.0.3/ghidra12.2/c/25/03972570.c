
void FUN_03972570(long param_1,uint param_2,long *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  
  (**(code **)(*(long *)(param_1 + 8) + 0x18))((long *)(param_1 + 8));
  FUN_039726a0(param_1 + 0x80,*(undefined8 *)(param_1 + 0x10),param_3);
  piVar1 = (int *)(param_1 + 0x1c);
  do {
  } while (*piVar1 == 1);
  do {
    do {
    } while (*piVar1 != 0);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  if (0 < (int)param_2) {
    lVar7 = *(long *)PTR_DAT_04bb2698;
    if (lVar7 == 0) {
      pvVar6 = malloc((ulong)param_2 << 3);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar2 = (undefined8 *)(lVar7 + 8);
        if (lVar5 != 0) {
          puVar2 = (undefined8 *)(lVar5 + 0xa8);
        }
        param_3 = (long *)*puVar2;
        if (param_3 == (long *)0x0) goto LAB_03972654;
      }
      pvVar6 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(ulong)param_2 << 3,8);
    }
    if (pvVar6 != (void *)0x0) {
      *(uint *)(param_1 + 0xb0) = param_2;
      *(void **)(param_1 + 0xb8) = pvVar6;
    }
  }
LAB_03972654:
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0x74) = 1;
  DataMemoryBarrier(2,3);
  do {
    do {
    } while (*piVar1 != 1);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}

