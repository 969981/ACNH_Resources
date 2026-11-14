
void FUN_01c7082c(undefined8 *param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *__ptr;
  void *__ptr_00;
  undefined1 uStack_31;
  
  *param_1 = &PTR_FUN_04a43060;
  lVar4 = DAT_05351250;
  if (DAT_05351248 != param_1) goto LAB_01c70988;
  DAT_05351248 = (undefined8 *)0x0;
  FUN_03ebae78(DAT_05351250);
  if (*(char *)(lVar4 + 0x290) != '\0') {
    (*(code *)**(undefined8 **)(lVar4 + 0x1b0))(lVar4 + 0x1b0);
    *(undefined1 *)(lVar4 + 0x290) = 0;
  }
  if (*(char *)(lVar4 + 0x198) != '\0') {
    FUN_0092ae80(lVar4 + 0x148);
    *(undefined1 *)(lVar4 + 0x198) = 0;
  }
  __ptr = *(undefined8 **)(lVar4 + 0x138);
  *(undefined8 *)(lVar4 + 0x138) = 0;
  if (__ptr == (undefined8 *)0x0) {
LAB_01c7092c:
    cVar1 = *(char *)(lVar4 + 0x110);
  }
  else {
    __ptr_00 = (void *)*__ptr;
    *__ptr = 0;
    if (__ptr_00 != (void *)0x0) {
      FUN_027c10a4((long)__ptr_00 + 0x56954);
      FUN_027c10a4((long)__ptr_00 + 0x568f0);
      if (DAT_05ae7600 == 0) {
        free(__ptr_00);
      }
      else {
        plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr_00);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,__ptr_00);
        }
      }
    }
    if (DAT_05ae7600 != 0) {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
      goto LAB_01c7092c;
    }
    free(__ptr);
    cVar1 = *(char *)(lVar4 + 0x110);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(lVar4 + 0x110) = 0;
  }
  if (*(uint *)(lVar4 + 0xb0) != 0xffffffff) {
    (*(code *)(&PTR_LAB_04a430c8)[*(uint *)(lVar4 + 0xb0)])(&uStack_31,lVar4 + 0x58);
  }
  lVar3 = *(long *)(lVar4 + 0x50);
  *(undefined4 *)(lVar4 + 0xb0) = 0xffffffff;
  *(long *)(lVar4 + 0x50) = 0;
  if (lVar3 != 0) {
    FUN_01c75194();
  }
  if (*(char *)(lVar4 + 0x49) != '\0') {
    *(undefined1 *)(lVar4 + 0x49) = 0;
  }
  DAT_05351250 = 0;
LAB_01c70988:
  lVar4 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar4 != 0) {
    if (lVar4 == 1) {
      return;
    }
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)param_1);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

