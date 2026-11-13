
void FUN_01230cdc(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  void *__ptr;
  undefined8 *__s;
  long lVar6;
  
  *param_1 = &PTR_FUN_04987fb0;
  puVar2 = DAT_05150358;
  if (DAT_05150350 == param_1) {
    DAT_05150350 = (undefined8 *)0x0;
    FUN_01249024(DAT_05150358 + 0x7b);
    FUN_012473c4(puVar2 + 0x40);
    __ptr = (void *)puVar2[0x3c];
    *puVar2 = &PTR_FUN_04987fd0;
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar4 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
        }
      }
      puVar2[0x3c] = 0;
      *(undefined4 *)(puVar2 + 0x3b) = 0;
    }
    *(undefined4 *)(puVar2 + 0x3f) = 0;
    *(undefined1 *)((long)puVar2 + 0x1fc) = 0;
    FUN_01244518(puVar2);
    *puVar2 = &PTR_LAB_04988028;
    FUN_01244518(puVar2);
    __s = (undefined8 *)puVar2[2];
    *puVar2 = &PTR_FUN_04b5e7f8;
    if (__s != &DAT_0407ebb1) {
      iVar1 = 0;
      if (*(int *)(puVar2 + 3) < 1) {
        iVar1 = *(int *)(puVar2 + 3) + -1;
      }
      memset(__s,0,(long)iVar1);
      *(undefined1 *)((long)__s + (long)iVar1) = 0;
    }
    (**(code **)(puVar2[1] + 0x18))(puVar2 + 1);
    uVar3 = FUN_006bd550(puVar2[2],0);
    *(undefined4 *)(puVar2 + 0x14) = uVar3;
    puVar2[0x17] = 0;
    DAT_05150358 = (undefined8 *)0x0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
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

