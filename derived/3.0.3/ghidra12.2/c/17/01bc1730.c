
undefined8 * FUN_01bc1730(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  iVar1 = param_2[1];
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  lVar5 = DAT_05ae7600;
  if ((char)iVar1 == '\0') {
    if (DAT_05ae7600 == 0) {
      puVar4 = malloc(0x30);
    }
    else {
      plVar3 = DAT_0533a090;
      if (DAT_0533a090 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar3 = (long *)(lVar5 + 8);
        if (lVar2 != 0) {
          plVar3 = (long *)(lVar2 + 0xa8);
        }
        plVar3 = (long *)*plVar3;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x30,8);
    }
    *puVar4 = 0;
    puVar4[1] = 0;
    *(int *)(puVar4 + 2) = *param_2;
    puVar4[3] = puVar4 + 3;
    puVar4[4] = puVar4 + 3;
    puVar4[5] = 0x800000000;
    *(undefined1 *)(param_2 + 1) = 1;
    plVar6 = (long *)(param_1 + 0x48);
    lVar5 = *plVar6;
    plVar3 = (long *)((long)*(int *)(param_1 + 0x5c) + (long)puVar4);
    *plVar6 = (long)plVar3;
    *plVar3 = lVar5;
    plVar3[1] = (long)plVar6;
    if (lVar5 != 0) {
      *(long **)(lVar5 + 8) = plVar3;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  }
  else {
    lVar5 = param_1 + 0x48;
    do {
      lVar5 = *(long *)(lVar5 + 8);
      if (lVar5 == param_1 + 0x48) {
        lVar5 = 0;
        break;
      }
    } while (*(int *)(lVar5 + -(long)*(int *)(param_1 + 0x5c) + 0x10) != *param_2);
    puVar4 = (undefined8 *)0x0;
    if (lVar5 != 0) {
      puVar4 = (undefined8 *)(lVar5 + -(long)*(int *)(param_1 + 0x5c));
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return puVar4;
}

