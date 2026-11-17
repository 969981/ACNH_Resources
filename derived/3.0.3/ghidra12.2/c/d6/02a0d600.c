
void FUN_02a0d600(long param_1,uint param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xc198));
  plVar3 = (long *)(param_1 + 0xf0);
  if (*(int *)(param_1 + 0x108) < *(int *)(param_1 + 0x10c)) {
    puVar2 = *(undefined8 **)(param_1 + 0xf8);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0xf8) = *puVar2;
    }
    puVar2[5] = plVar3;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(uint *)(puVar2 + 4) = param_2;
    *(undefined4 *)((long)puVar2 + 0x24) = param_3;
    *puVar2 = &PTR_LAB_04a99680;
    puVar2[1] = 0;
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
    lVar1 = FUN_028c13b8(plVar3,*(undefined8 *)(param_1 + 0xf0));
    *(long *)(param_1 + 0xf0) = lVar1;
    *(undefined8 *)(lVar1 + 0x18) = 1;
  }
  else {
    lVar1 = *plVar3;
    while (lVar1 != 0) {
      if (param_2 < *(uint *)(lVar1 + 0x20)) {
        plVar3 = (long *)(lVar1 + 8);
      }
      else {
        if (param_2 <= *(uint *)(lVar1 + 0x20)) {
          *(undefined4 *)(lVar1 + 0x24) = param_3;
          break;
        }
        plVar3 = (long *)(lVar1 + 0x10);
      }
      lVar1 = *plVar3;
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xc198));
  return;
}

