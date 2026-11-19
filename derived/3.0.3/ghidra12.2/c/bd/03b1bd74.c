
void FUN_03b1bd74(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  if (DAT_05ae7600 != 0) {
    lVar3 = FUN_038cb610(DAT_05ae7600,param_1);
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar3 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
      }
      plVar5 = (long *)(lVar3 + 0x70);
      lVar4 = *plVar5;
      plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)param_1);
      *plVar5 = (long)plVar2;
      *plVar2 = lVar4;
      plVar2[1] = (long)plVar5;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar2;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar6 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
      }
    }
  }
  param_1[0x13] = 0;
  *param_1 = (long)&PTR_FUN_04b73bb8;
  param_1[6] = 0;
  param_1[7] = (long)(param_1 + 7);
  param_1[8] = (long)(param_1 + 7);
  param_1[9] = (long)(param_1 + 9);
  param_1[10] = (long)(param_1 + 9);
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = (long)(param_1 + 0xe);
  param_1[0xf] = (long)(param_1 + 0xe);
  param_1[0x10] = (long)(param_1 + 0x10);
  param_1[0x11] = (long)(param_1 + 0x10);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xdd) = 0;
  *(undefined2 *)((long)param_1 + 0xe1) = 0;
  param_1[0x15] = (long)puVar1;
  param_1[0x16] = (long)&DAT_0419b684;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f490fdb;
  *(undefined1 *)((long)param_1 + 0xdc) = 0xff;
  *(undefined4 *)((long)param_1 + 0xe3) = 0x300ff01;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 8;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return;
}

