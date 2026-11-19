
void FUN_03ae0af0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *__ptr;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  puVar3 = (undefined8 *)param_1[4];
  *param_1 = &PTR_FUN_04b71948;
  if (puVar3 != (undefined8 *)0x0) {
    if (1 < (int)*(uint *)(param_1 + 3)) {
      lVar5 = (ulong)*(uint *)(param_1 + 3) - 1;
      puVar4 = puVar3;
      do {
        puVar4 = puVar4 + 0x27;
        (**(code **)*puVar4)(puVar4);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    (**(code **)*puVar3)(puVar3);
    if (((*(byte *)(param_1 + 0xd) >> 4 & 1) != 0) &&
       (__ptr = (void *)param_1[4], __ptr != (void *)0x0)) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
        lVar5 = param_1[6];
        goto joined_r0x03ae0b9c;
      }
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
  }
  lVar5 = param_1[6];
joined_r0x03ae0b9c:
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + -8);
    if (*plVar1 != 0) {
      lVar6 = *plVar1 * 0x90;
      do {
        *(undefined ***)(lVar5 + -0x88 + lVar6) = &PTR_LAB_04b65ee0;
        FUN_0390d560();
        lVar6 = lVar6 + -0x90;
      } while (lVar6 != 0);
    }
    if (DAT_05ae7600 == 0) {
      free(plVar1);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,plVar1);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,plVar1);
      }
    }
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  return;
}

