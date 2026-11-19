
void FUN_039eb890(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *__ptr;
  long lVar5;
  
  *param_1 = &PTR_FUN_04b6baa0;
  puVar1 = PTR_DAT_04bb2698;
  lVar3 = param_1[0x72];
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + -8);
    if (*plVar4 != 0) {
      lVar5 = *plVar4 * 0xb8;
      do {
        *(undefined ***)(lVar3 + -0xb8 + lVar5) = &PTR_LAB_04b65ee0;
        FUN_0390d560();
        lVar5 = lVar5 + -0xb8;
      } while (lVar5 != 0);
    }
    lVar3 = *(long *)puVar1;
    if (lVar3 == 0) {
      free(plVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar3,plVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,plVar4);
      }
    }
    param_1[0x72] = 0;
    *(undefined4 *)(param_1 + 0x71) = 0;
  }
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    __ptr = (void *)(lVar3 + -0x10);
    if (*(long *)(lVar3 + -8) != 0) {
      lVar5 = *(long *)(lVar3 + -8) * 0x410;
      do {
        *(undefined ***)(lVar3 + -0x80 + lVar5) = &PTR_LAB_04b65ee0;
        FUN_0390d560();
        lVar5 = lVar5 + -0x410;
      } while (lVar5 != 0);
    }
    lVar3 = *(long *)puVar1;
    if (lVar3 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar3,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}

