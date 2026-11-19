
void FUN_038d92c4(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_04b64b78;
  plVar4 = *(long **)PTR_DAT_04bb28c8;
  if (plVar4 != (long *)0x0) {
    if (param_1[7] != 0) {
      param_1[7] = 0;
      if (param_1[4] != 0) {
        *(undefined8 *)(param_1[4] + 8) = param_1[5];
      }
      if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[5] = param_1[4];
      }
      param_1[4] = 0;
      param_1[5] = 0;
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    if ((undefined8 *)plVar4[7] == param_1) {
      lVar5 = plVar4[6];
      plVar4[7] = lVar5;
      puVar3 = *(undefined8 **)(lVar5 + 0x48);
      if (puVar3 != &DAT_0407ebb1) {
        iVar1 = 0;
        if (*(int *)(lVar5 + 0x50) < 1) {
          iVar1 = *(int *)(lVar5 + 0x50) + -1;
        }
        memset(puVar3,0,(long)iVar1);
        *(undefined1 *)((long)puVar3 + (long)iVar1) = 0;
      }
      lVar2 = *(long *)(lVar5 + 0x38);
      puVar3 = (undefined8 *)(lVar5 + 0x20);
      if (lVar2 != 0) {
        *(undefined8 *)(lVar5 + 0x38) = 0;
        if (*(long *)(lVar5 + 0x20) != 0) {
          *(undefined8 *)(*(long *)(lVar5 + 0x20) + 8) = *(undefined8 *)(lVar5 + 0x28);
        }
        if (*(undefined8 **)(lVar5 + 0x28) != (undefined8 *)0x0) {
          **(undefined8 **)(lVar5 + 0x28) = *puVar3;
        }
        *puVar3 = 0;
        *(undefined8 *)(lVar5 + 0x28) = 0;
        *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
      }
      *(long **)(lVar5 + 0x38) = plVar4;
      lVar2 = *plVar4;
      *plVar4 = (long)puVar3;
      *(long *)(lVar5 + 0x20) = lVar2;
      *(long **)(lVar5 + 0x28) = plVar4;
      if (lVar2 != 0) {
        *(undefined8 **)(lVar2 + 8) = puVar3;
      }
      *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
    }
  }
  lVar5 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      return;
    }
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar5 + 0x90;
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
    if (lVar2 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

