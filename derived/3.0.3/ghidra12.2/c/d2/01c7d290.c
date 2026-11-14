
undefined8 * FUN_01c7d290(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar3 = malloc(0x1c8);
  }
  else {
    plVar1 = *(long **)(DAT_05354240 + 8);
    if (plVar1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar1 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar1 = (long *)(lVar2 + 0xa8);
      }
      plVar1 = (long *)*plVar1;
      if (plVar1 == (long *)0x0) {
        return (undefined8 *)0x0;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1,0x1c8,8);
  }
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar3 + 9) = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 10) = 0;
    *(undefined1 *)((long)puVar3 + 0x54) = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    memset(puVar3 + 0xb,0,0x131);
    *(undefined4 *)(puVar3 + 0x32) = 0;
    *(undefined1 *)((long)puVar3 + 0x194) = 0;
    *(undefined4 *)(puVar3 + 0x33) = 0;
    *(undefined1 *)((long)puVar3 + 0x19c) = 0;
    *(undefined1 *)(puVar3 + 0x36) = 1;
    puVar3[0x34] = 0;
    puVar3[0x35] = 0;
    puVar3[0x37] = 0;
    puVar3[0x38] = 0;
    nn::os::LockMutex((MutexType *)(param_1 + 0x98));
    plVar4 = (long *)(param_1 + 0x60);
    lVar5 = *plVar4;
    plVar1 = (long *)((long)*(int *)(param_1 + 0x74) + (long)puVar3);
    *plVar4 = (long)plVar1;
    *plVar1 = lVar5;
    plVar1[1] = (long)plVar4;
    if (lVar5 != 0) {
      *(long **)(lVar5 + 8) = plVar1;
    }
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x98));
  }
  return puVar3;
}

