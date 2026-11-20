
void FUN_03f41cf0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_04ba9120;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = param_1 + 2;
  param_1[3] = param_1 + 2;
  *(undefined8 *)((long)param_1 + 0x24) = 0xffffffff;
  param_1[6] = 0;
  param_1[10] = 0;
  puVar4 = param_1 + 7;
  *puVar4 = &PTR_FUN_04b64428;
  param_1[8] = param_2;
  param_1[9] = 0;
  if (param_2 == 0) {
    if (DAT_05ae7600 == 0) goto LAB_03f41dcc;
    param_2 = FUN_038cb610(DAT_05ae7600,puVar4);
    param_1[8] = param_2;
    if (param_2 == 0) goto LAB_03f41dcc;
  }
  if ((*(uint *)(param_2 + 0xd0) & 1) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_2 + 0x90;
    nn::os::LockMutex((MutexType *)(param_2 + 0xb0));
  }
  plVar3 = (long *)(param_2 + 0x70);
  lVar2 = *plVar3;
  plVar1 = (long *)((long)*(int *)(param_2 + 0x84) + (long)puVar4);
  *plVar3 = (long)plVar1;
  *plVar1 = lVar2;
  plVar1[1] = (long)plVar3;
  if (lVar2 != 0) {
    *(long **)(lVar2 + 8) = plVar1;
  }
  *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
  if (lVar5 != 0) {
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
  }
LAB_03f41dcc:
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[7] = &PTR_FUN_04b651b0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x48;
  return;
}

