
void FUN_01c761d8(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *__ptr;
  long lVar6;
  undefined1 uStack_21;
  
  *param_1 = &PTR_FUN_04a43268;
  puVar2 = DAT_053512e0;
  if (DAT_053512d8 == param_1) {
    DAT_053512d8 = (undefined8 *)0x0;
    if (*(char *)((long)DAT_053512e0 + 0x421) != '\0') {
      *(undefined1 *)((long)DAT_053512e0 + 0x421) = 0;
    }
    if (*(char *)(puVar2 + 0x83) != '\0') {
      if (*(char *)((long)puVar2 + 0x411) != '\0') {
        *(undefined1 *)((long)puVar2 + 0x411) = 0;
      }
      *(undefined1 *)(puVar2 + 0x83) = 0;
    }
    if (*(char *)(puVar2 + 0x7e) != '\0') {
      FUN_01c79754(puVar2 + 0x51);
      *(undefined1 *)(puVar2 + 0x7e) = 0;
    }
    if (*(char *)(puVar2 + 0x4f) != '\0') {
      FUN_03f45838(puVar2 + 0x4b);
      plVar4 = (long *)puVar2[0x4e];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
        iVar1 = *(int *)((long)puVar2 + 0x264) + -1;
        if (((*(int *)((long)puVar2 + 0x264) < 1) ||
            (*(int *)((long)puVar2 + 0x264) = iVar1, iVar1 == 0)) && (puVar2[0x4d] != 0)) {
          FUN_03f44508();
          puVar2[0x4d] = 0;
        }
        (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      *(undefined1 *)(puVar2 + 0x4f) = 0;
    }
    if (*(char *)(puVar2 + 0x44) != '\0') {
      if (*(char *)(puVar2 + 0x16) != '\0') {
        if (*(uint *)(puVar2 + 0x15) != 0xffffffff) {
          (*(code *)(&PTR_FUN_04a434e0)[*(uint *)(puVar2 + 0x15)])(&uStack_21,puVar2 + 0xd);
        }
        *(undefined1 *)(puVar2 + 0x16) = 0;
        *(undefined4 *)(puVar2 + 0x15) = 0xffffffff;
      }
      if (*(char *)((long)puVar2 + 0xbc) != '\0') {
        *(undefined1 *)((long)puVar2 + 0xbc) = 0;
      }
      if (*(char *)(puVar2 + 0x3e) != '\0') {
        *(undefined1 *)(puVar2 + 0x3e) = 0;
      }
      if (*(char *)((long)puVar2 + 0x204) != '\0') {
        *(undefined1 *)((long)puVar2 + 0x204) = 0;
      }
      if (*(char *)((long)puVar2 + 0x1fc) != '\0') {
        *(undefined1 *)((long)puVar2 + 0x1fc) = 0;
      }
      *(undefined1 *)(puVar2 + 0x44) = 0;
    }
    FUN_038e1a84(puVar2 + 5);
    __ptr = (undefined8 *)*puVar2;
    *puVar2 = 0;
    if (__ptr != (undefined8 *)0x0) {
      plVar4 = (long *)*__ptr;
      FUN_01c789bc(__ptr);
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
        }
      }
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
    DAT_053512e0 = (undefined8 *)0x0;
  }
  lVar5 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      return;
    }
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)param_1);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

