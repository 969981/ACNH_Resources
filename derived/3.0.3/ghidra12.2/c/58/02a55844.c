
void FUN_02a55844(long *param_1,byte param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  (**(code **)(*param_1 + 0x18))();
  uVar2 = FUN_006bd550(param_1[1],0);
  lVar3 = *(long *)PTR_DAT_04bb26a8;
  plVar1 = (long *)(lVar3 + 0xb3b78);
  nn::os::LockMutex((MutexType *)(lVar3 + 0xb3b58));
  if (*(int *)(lVar3 + 0xb3b88) < *(int *)(lVar3 + 0xb3ba0)) {
    puVar4 = *(undefined8 **)(lVar3 + 0xb3b90);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar3 + 0xb3b90) = *puVar4;
    }
    *(byte *)((long)puVar4 + 2) = param_2 & 1;
    plVar6 = puVar4 + 2;
    *plVar6 = 0;
    *(undefined2 *)puVar4 = 1;
    *(undefined4 *)((long)puVar4 + 4) = uVar2;
    *(undefined4 *)(puVar4 + 1) = 0;
    puVar4[3] = 0;
    lVar5 = *plVar1;
    *plVar1 = (long)plVar6;
    puVar4[3] = plVar1;
    *plVar6 = lVar5;
    if (lVar5 != 0) {
      *(long **)(lVar5 + 8) = plVar6;
    }
    *(int *)(lVar3 + 0xb3b88) = *(int *)(lVar3 + 0xb3b88) + 1;
  }
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0xb3b58));
  return;
}

