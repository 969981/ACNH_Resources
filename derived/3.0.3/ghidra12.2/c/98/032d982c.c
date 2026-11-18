
void FUN_032d982c(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  void *__ptr;
  long lVar3;
  long lVar4;
  
  *(undefined **)(param_1 + 0x288) = PTR_DAT_04bb24a8 + 0x10;
  FUN_038bbe20(param_1 + 0x288);
  lVar3 = *(long *)(param_1 + 0x290);
  *(undefined ***)(param_1 + 0x288) = &PTR_FUN_04b64428;
  if (lVar3 == 0) {
LAB_032d98dc:
    *(undefined8 *)(param_1 + 0x290) = 1;
  }
  else if (lVar3 != 1) {
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + param_1 + 0x288);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
    goto LAB_032d98dc;
  }
  puVar1 = (undefined8 *)(param_1 + 0x260);
  FUN_032d9b50(*(undefined8 *)PTR_DAT_04bc9298,puVar1);
  plVar2 = *(long **)(param_1 + 0x260);
  if (plVar2 != (long *)0x0) {
    lVar3 = *(long *)(param_1 + 0x270);
    lVar4 = *(long *)(param_1 + 0x268);
    *(undefined8 *)(param_1 + 0x270) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    if ((undefined8 *)*plVar2 == puVar1) {
      *plVar2 = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar3;
    }
  }
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *puVar1 = 0;
  FUN_038e1a84(param_1 + 0x220);
  __ptr = *(void **)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x218) = 0;
  if (__ptr != (void *)0x0) {
    if (*(long **)((long)__ptr + 0x38) != (long *)0x0) {
      (**(code **)(**(long **)((long)__ptr + 0x38) + 8))();
    }
    if (*(long **)((long)__ptr + 8) != (long *)0x0) {
      (**(code **)(**(long **)((long)__ptr + 8) + 8))();
    }
    if (DAT_05ae7600 == 0) {
      free(__ptr);
      plVar2 = *(long **)(param_1 + 0x68);
      goto joined_r0x032d99a8;
    }
    plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
    }
  }
  plVar2 = *(long **)(param_1 + 0x68);
joined_r0x032d99a8:
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

