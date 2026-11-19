
void FUN_03896930(long param_1,undefined4 *param_2,undefined1 *param_3)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  void *__ptr;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x330));
  puVar4 = *(undefined8 **)(param_1 + 0x148);
  plVar2 = (long *)(param_1 + 0x130);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x148) = *puVar4;
  }
  *(undefined4 *)puVar4 = 0;
  *(undefined1 *)((long)puVar4 + 4) = 0;
  plVar5 = puVar4 + 1;
  *plVar5 = 0;
  puVar4[2] = 0;
  lVar6 = *plVar2;
  *plVar2 = (long)plVar5;
  puVar4[2] = plVar2;
  *plVar5 = lVar6;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar5;
  }
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
  *(undefined4 *)puVar4 = *param_2;
  *(undefined1 *)((long)puVar4 + 4) = *(undefined1 *)(param_1 + 1000);
  if (*(uint *)(param_1 + 0x128) < *(uint *)(param_1 + 0x108)) {
    piVar7 = *(int **)(*(long *)(param_1 + 0x110) + (long)(int)*(uint *)(param_1 + 0x128) * 8);
  }
  else {
    piVar7 = (int *)0x0;
  }
  if (0 < *piVar7) {
    puVar4 = (undefined8 *)**(undefined8 **)(piVar7 + 2);
    *puVar4 = *(undefined8 *)(piVar7 + 4);
    *(undefined8 **)(piVar7 + 4) = puVar4;
    uVar1 = *piVar7 - 1;
    if (0 < *piVar7) {
      if (uVar1 == 0) {
        iVar3 = 0;
      }
      else {
        memmove(*(void **)(piVar7 + 2),(void *)((long)*(void **)(piVar7 + 2) + 8),(ulong)uVar1 << 3)
        ;
        iVar3 = *piVar7 + -1;
      }
      *piVar7 = iVar3;
    }
  }
  __ptr = *(void **)(param_2 + 2);
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
  }
  **(undefined1 **)(param_2 + 6) = *param_3;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x330));
  return;
}

