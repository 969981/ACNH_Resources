
void FUN_0261a890(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_04a86f80;
  lVar5 = DAT_055588d0;
  if (DAT_055576c8 == param_1) {
    DAT_055576c8 = (undefined8 *)0x0;
    puVar2 = (undefined8 *)(DAT_055588d0 + 0xed68);
    puVar1 = (undefined8 *)(DAT_055588d0 + 0x1dac0);
    FUN_0261b7f0(DAT_055588d0 + 0xea6e8);
    FUN_0261b994(lVar5 + 0xea4e8);
    lVar4 = lVar5 + 0xdd7b0;
    do {
      lVar4 = *(long *)(lVar4 + 8);
    } while (lVar4 != lVar5 + 0xdd7b0);
    *puVar2 = &PTR_LAB_04a87050;
    *(undefined ***)(lVar5 + 0xed70) = &PTR_LAB_04a870a8;
    *puVar1 = &PTR_LAB_04a00068;
    *(undefined ***)(lVar5 + 0x1dac8) = &PTR_LAB_04a000c0;
    DAT_055588d0 = 0;
    *(undefined ***)(lVar5 + 0x10) = &PTR_LAB_04a86fc0;
    *(undefined ***)(lVar5 + 0x18) = &PTR_LAB_04a87018;
  }
  lVar5 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      return;
    }
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)param_1);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

