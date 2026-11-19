
void FUN_038ba610(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  void *__ptr;
  long lVar6;
  long lVar7;
  
  *param_1 = &PTR_LAB_04b63980;
  if (param_1[7] == 0) goto LAB_038ba730;
  FUN_038bdf90();
  __ptr = (void *)param_1[7];
  if (__ptr != (void *)0x0) {
    *(undefined **)((long)__ptr + 0x208) = PTR_DAT_04bb24a8 + 0x10;
    FUN_038bbe20((long)__ptr + 0x208);
    lVar6 = *(long *)((long)__ptr + 0x210);
    *(undefined ***)((long)__ptr + 0x208) = &PTR_FUN_04b64428;
    if (lVar6 == 0) {
LAB_038ba6e4:
      *(undefined8 *)((long)__ptr + 0x210) = 1;
    }
    else if (lVar6 != 1) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar2 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)__ptr + 0x208);
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
      goto LAB_038ba6e4;
    }
    FUN_038e1a84(__ptr);
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
  param_1[7] = 0;
LAB_038ba730:
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x18))();
    param_1[8] = 0;
  }
  if ((long *)param_1[9] != (long *)0x0) {
    (**(code **)(*(long *)param_1[9] + 0x20))();
  }
  param_1[3] = &PTR_LAB_04b63a08;
  puVar3 = (undefined8 *)param_1[5];
  while (puVar3 != param_1 + 4) {
    puVar1 = (undefined8 *)puVar3[1];
    lVar6 = puVar3[2];
    plVar5 = *(long **)(lVar6 + 0x28);
    plVar2 = (long *)(lVar6 + 0x20);
    lVar7 = *plVar2;
    puVar3 = puVar1;
    if ((plVar5 != (long *)0x0 || lVar7 != 0) && (lVar4 = *(long *)(lVar6 + 0x38), lVar4 != 0)) {
      *(undefined8 *)(lVar6 + 0x38) = 0;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar5;
        plVar5 = *(long **)(lVar6 + 0x28);
      }
      if (plVar5 != (long *)0x0) {
        *plVar5 = *plVar2;
      }
      *plVar2 = 0;
      *(undefined8 *)(lVar6 + 0x28) = 0;
      *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
    }
  }
  return;
}

