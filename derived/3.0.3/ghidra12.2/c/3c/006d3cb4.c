
void FUN_006d3cb4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar6 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x88);
  nn::os::LockMutex((MutexType *)(lVar6 + 0x370));
  if (*(int *)(lVar6 + 0x250) < *(int *)(lVar6 + 0x254)) {
    puVar5 = *(undefined8 **)(lVar6 + 0x260);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar6 + 0x260) = *puVar5;
    }
    *puVar5 = 0;
    if (*(int *)(lVar6 + 0x250) < *(int *)(lVar6 + 0x254)) {
      *(undefined8 **)(*(long *)(lVar6 + 600) + (long)*(int *)(lVar6 + 0x250) * 8) = puVar5;
      *(int *)(lVar6 + 0x250) = *(int *)(lVar6 + 0x250) + 1;
    }
  }
  else {
    puVar5 = (undefined8 *)0x0;
  }
  lVar1 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar4 = malloc(0x20);
  }
  else {
    plVar2 = *(long **)(lVar6 + 0x390);
    if (plVar2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar1 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x20,8);
  }
  *puVar4 = &PTR_LAB_048fa8a8;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_006d3dd0;
  puVar4[3] = 0;
  *puVar5 = puVar4;
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0x370));
  return;
}

