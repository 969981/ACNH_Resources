
void FUN_038c2f90(long *param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  param_1[1] = 0;
  puVar2 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
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
      plVar1 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)param_1);
      *plVar5 = (long)plVar1;
      *plVar1 = lVar4;
      plVar1[1] = (long)plVar5;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar1;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar6 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
      }
    }
  }
  *param_1 = (long)&PTR_LAB_04b640c8;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar3 = *param_2;
  param_1[0x1b] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = lVar3;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((long)param_1 + 0xec) = 0;
  *(int *)(param_1 + 0x1e) = (int)param_2[1];
  *(undefined4 *)((long)param_1 + 0xf4) = 0x1000;
  FUN_038e18e4(param_1 + 0x1f);
  FUN_038e18e4(param_1 + 0x27);
  FUN_038e18e4(param_1 + 0x2f);
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x39] = (long)&LAB_038c30d8;
  param_1[0x3a] = 0;
  param_1[0x37] = (long)&PTR_LAB_04b641b8;
  param_1[0x38] = (long)param_1;
  param_1[0x3b] = (long)(param_1 + 0x37);
  *(undefined1 *)((long)param_1 + 0x1e1) = *(undefined1 *)((long)param_2 + 0xd);
                    /* WARNING: Could not recover jumptable at 0x038c30d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_04c61d18)(param_1[6],1);
  return;
}

