
void FUN_01910e8c(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  if (DAT_05ae7600 != 0) {
    lVar2 = FUN_038cb610(DAT_05ae7600,param_1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar2 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
      }
      plVar4 = (long *)(lVar2 + 0x70);
      lVar3 = *plVar4;
      plVar5 = (long *)((long)*(int *)(lVar2 + 0x84) + (long)param_1);
      *plVar4 = (long)plVar5;
      *plVar5 = lVar3;
      plVar5[1] = (long)plVar4;
      if (lVar3 != 0) {
        *(long **)(lVar3 + 8) = plVar5;
      }
      *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + 1;
      if (lVar6 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
      }
    }
  }
  plVar5 = param_1 + 4;
  *plVar5 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar2 = param_2[1];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = lVar2;
  lVar2 = param_2[6];
  *plVar5 = (long)&DAT_04b7e798;
  param_1[9] = 0;
  *(int *)(param_1 + 8) = (int)lVar2;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,plVar5);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = (long)&PTR_LAB_049d8a40;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1[4] = (long)&PTR_LAB_049d8b10;
  param_1[0x10] = (long)&PTR_FUN_049d8c70;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}

