
void FUN_02a0d6e0(long param_1,long *param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar1 = FUN_006bd550(param_2[1],0);
  nn::os::LockMutex((MutexType *)(param_1 + 0xc198));
  plVar4 = (long *)(param_1 + 0xf0);
  if (*(int *)(param_1 + 0x108) < *(int *)(param_1 + 0x10c)) {
    puVar3 = *(undefined8 **)(param_1 + 0xf8);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0xf8) = *puVar3;
    }
    puVar3[5] = plVar4;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(uint *)(puVar3 + 4) = uVar1;
    *(undefined4 *)((long)puVar3 + 0x24) = param_3;
    *puVar3 = &PTR_LAB_04a99680;
    puVar3[1] = 0;
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
    lVar2 = FUN_028c13b8(plVar4,*(undefined8 *)(param_1 + 0xf0));
    *(long *)(param_1 + 0xf0) = lVar2;
    *(undefined8 *)(lVar2 + 0x18) = 1;
  }
  else {
    lVar2 = *plVar4;
    while (lVar2 != 0) {
      if (uVar1 < *(uint *)(lVar2 + 0x20)) {
        plVar4 = (long *)(lVar2 + 8);
      }
      else {
        if (uVar1 <= *(uint *)(lVar2 + 0x20)) {
          *(undefined4 *)(lVar2 + 0x24) = param_3;
          break;
        }
        plVar4 = (long *)(lVar2 + 0x10);
      }
      lVar2 = *plVar4;
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xc198));
  return;
}

