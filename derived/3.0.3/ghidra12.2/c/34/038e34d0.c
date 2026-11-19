
void FUN_038e34d0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_04b65428;
  nn::os::LockMutex((MutexType *)(param_1 + 8));
  puVar6 = (undefined8 *)param_1[2];
  puVar2 = param_1 + 1;
  if (puVar6 != puVar2) {
    do {
      (**(code **)(*(long *)puVar6[2] + 0x38))((long *)puVar6[2],0);
      puVar6 = (undefined8 *)puVar6[1];
    } while (puVar6 != puVar2);
    puVar6 = (undefined8 *)param_1[2];
    if (puVar6 != puVar2) {
      lVar4 = *(long *)PTR_DAT_04bb29d0;
      do {
        bVar3 = true;
        puVar5 = puVar6;
        do {
          plVar1 = puVar5 + 1;
          bVar3 = (bool)(bVar3 & *(int *)(puVar5[2] + 0xcc) - 3U < 2);
          puVar5 = (undefined8 *)*plVar1;
        } while ((undefined8 *)*plVar1 != puVar2);
        if (bVar3) goto LAB_038e35b0;
        nn::os::ConvertToTimeSpan(lVar4 / 100000);
        nn::os::SleepThread();
        puVar6 = (undefined8 *)param_1[2];
      } while (puVar6 != puVar2);
    }
  }
LAB_038e35cc:
  *(undefined8 *)PTR_DAT_04bb3350 = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 8));
  nn::os::FreeTlsSlot(*(undefined4 *)(param_1 + 0xd));
  FUN_038e1a84(param_1 + 4);
  return;
LAB_038e35b0:
  do {
    (**(code **)(*(long *)puVar6[2] + 0x40))();
    puVar6 = (undefined8 *)puVar6[1];
  } while (puVar6 != puVar2);
  goto LAB_038e35cc;
}

