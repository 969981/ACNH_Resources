
void FUN_032b018c(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  void *__ptr;
  long *plVar8;
  
  puVar4 = PTR_DAT_04bc8f70;
  plVar8 = (long *)(param_1 + 0x10);
  plVar7 = (long *)(param_1 + 8);
  if (*plVar8 != 0) {
    puVar2 = (undefined1 *)0x0;
    if (*(long *)(param_1 + 0x90) != 0) {
      puVar2 = &LAB_032b0484;
    }
    if ((puVar2 == (undefined1 *)0x0) || (FUN_032acf10(*(long *)(param_1 + 0x90),1), *plVar8 != 0))
    {
      plVar6 = *(long **)puVar4;
      lVar5 = *(long *)(param_1 + 0x18);
      lVar3 = *(long *)(param_1 + 0x20);
      *plVar8 = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      if ((long *)*plVar6 == plVar8) {
        *plVar6 = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar5;
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x10) = lVar3;
      }
    }
    (**(code **)(*plVar7 + 0x30))(plVar7);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  puVar2 = (undefined1 *)0x0;
  if (*(long *)(param_1 + 0x90) != 0) {
    puVar2 = &LAB_032b0484;
  }
  if (puVar2 != (undefined1 *)0x0) {
    FUN_032c6840(*(long *)(param_1 + 0x90) + 8);
    __ptr = *(void **)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
    if (__ptr != (void *)0x0) {
      puVar1 = (undefined8 *)((long)__ptr + 8);
      FUN_032c6840(puVar1);
      plVar6 = *(long **)((long)__ptr + 8);
      *(undefined8 *)((long)__ptr + 0x28) = 0;
      *(undefined8 *)((long)__ptr + 0x30) = 0;
      *(undefined8 *)((long)__ptr + 0x20) = 0;
      if (plVar6 != (long *)0x0) {
        lVar5 = *(long *)((long)__ptr + 0x10);
        lVar3 = *(long *)((long)__ptr + 0x18);
        *(undefined8 *)((long)__ptr + 0x18) = 0;
        *puVar1 = 0;
        *(undefined8 *)((long)__ptr + 0x10) = 0;
        if ((undefined8 *)*plVar6 == puVar1) {
          *plVar6 = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 8) = lVar5;
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x10) = lVar3;
        }
      }
      *(undefined8 *)((long)__ptr + 0x10) = 0;
      *(undefined8 *)((long)__ptr + 0x18) = 0;
      *puVar1 = 0;
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
        lVar5 = *plVar8;
        goto joined_r0x032b02cc;
      }
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
      }
    }
  }
  lVar5 = *plVar8;
joined_r0x032b02cc:
  if (lVar5 != 0) {
    plVar6 = *(long **)puVar4;
    lVar5 = *(long *)(param_1 + 0x18);
    lVar3 = *(long *)(param_1 + 0x20);
    *plVar8 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if ((long *)*plVar6 == plVar8) {
      *plVar6 = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = lVar5;
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x10) = lVar3;
    }
    (**(code **)(*plVar7 + 0x30))(plVar7);
  }
  FUN_032c6840(param_1 + 0x30);
  return;
}

