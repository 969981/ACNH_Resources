
void FUN_02a55754(undefined4 param_1,long *param_2,byte param_3,byte param_4)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  (**(code **)(*param_2 + 0x18))();
  uVar2 = FUN_006bd550(param_2[1],0);
  lVar3 = *(long *)PTR_DAT_04bb26a8;
  plVar1 = (long *)(lVar3 + 0xb3b78);
  nn::os::LockMutex((MutexType *)(lVar3 + 0xb3b58));
  if (*(int *)(lVar3 + 0xb3b88) < *(int *)(lVar3 + 0xb3ba0)) {
    puVar4 = *(undefined8 **)(lVar3 + 0xb3b90);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar3 + 0xb3b90) = *puVar4;
    }
    *(byte *)((long)puVar4 + 1) = param_3 & 1;
    *(undefined1 *)puVar4 = 0;
    *(byte *)((long)puVar4 + 2) = param_4 & 1;
    *(undefined4 *)((long)puVar4 + 4) = uVar2;
    *(undefined4 *)(puVar4 + 1) = param_1;
    plVar5 = puVar4 + 2;
    *plVar5 = 0;
    puVar4[3] = 0;
    lVar6 = *plVar1;
    *plVar1 = (long)plVar5;
    puVar4[3] = plVar1;
    *plVar5 = lVar6;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar5;
    }
    *(int *)(lVar3 + 0xb3b88) = *(int *)(lVar3 + 0xb3b88) + 1;
  }
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0xb3b58));
  return;
}

