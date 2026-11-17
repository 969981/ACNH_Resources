
void FUN_02acfa04(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_04bb3050;
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar2 = PTR_DAT_04bb60a0;
  lVar3 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar3;
  lVar3 = param_2[6];
  *param_1 = (long)(puVar2 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar3;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  plVar5 = param_1 + 0x17;
  *plVar5 = (long)(param_1 + 0x23);
  param_1[6] = 0;
  param_1[7] = 0;
  plVar4 = param_1 + 0xb;
  param_1[0x23] = (long)(param_1 + 0x2f);
  param_1[8] = 0;
  param_1[9] = (long)plVar4;
  param_1[0x2f] = (long)(param_1 + 0x3b);
  puVar2 = PTR_DAT_04bb3380;
  param_1[0x3b] = 0;
  param_1[10] = (long)plVar4;
  param_1[0xb] = (long)plVar5;
  if (param_1 + 0x47 == (long *)0x0) {
    *param_1 = (long)&PTR_LAB_04a9efc8;
    plVar4 = (long *)0x0;
  }
  else {
    param_1[8] = (long)(param_1 + 0x47);
    param_1[9] = (long)plVar5;
    *(undefined4 *)((long)param_1 + 0x3c) = 5;
    *param_1 = (long)&PTR_LAB_04a9efc8;
    param_1[0xb] = (long)(puVar1 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = param_2[1];
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xc] = lVar3;
    lVar3 = param_2[6];
    param_1[0xb] = (long)&PTR_LAB_04a9f148;
    param_1[0x11] = (long)(puVar2 + 0x10);
    param_1[0x12] = (long)"mLightKind";
    param_1[0x10] = (long)(param_1 + 0x11);
    param_1[0x16] = 0;
    *(undefined4 *)(param_1 + 0x16) = 0;
    *(int *)(param_1 + 0xf) = (int)lVar3;
    param_1[0x15] = 8;
    param_1[0x13] = 0;
    param_1[0x14] = (long)plVar4;
    if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
      *(long **)(param_1[8] + (long)(int)param_1[7] * 8) = plVar4;
      *(int *)(param_1 + 7) = (int)param_1[7] + 1;
    }
  }
  (**(code **)(*plVar4 + 0x38))(plVar4,param_1);
  *(uint *)(plVar4 + 4) = *(uint *)(plVar4 + 4) & 0xfffffffc;
  if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
    plVar5 = (long *)param_1[9];
    if (plVar5 != (long *)0x0) {
      param_1[9] = *plVar5;
    }
    *plVar5 = (long)(puVar1 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = param_2[1];
    plVar5[3] = 0;
    plVar5[1] = lVar3;
    plVar5[2] = 0;
    lVar3 = param_2[6];
    plVar5[7] = (long)"mLightKind";
    plVar5[8] = 0;
    plVar5[0xb] = 0;
    *(undefined4 *)(plVar5 + 0xb) = 0;
    *plVar5 = (long)&PTR_LAB_04a9f148;
    *(int *)(plVar5 + 4) = (int)lVar3;
    plVar5[6] = (long)(puVar2 + 0x10);
    plVar5[5] = (long)(plVar5 + 6);
    plVar5[9] = (long)plVar5;
    plVar5[10] = 8;
    if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
      *(long **)(param_1[8] + (long)(int)param_1[7] * 8) = plVar5;
      *(int *)(param_1 + 7) = (int)param_1[7] + 1;
    }
  }
  else {
    plVar5 = (long *)0x0;
  }
  (**(code **)(*plVar5 + 0x38))(plVar5,param_1);
  *(uint *)(plVar5 + 4) = *(uint *)(plVar5 + 4) & 0xfffffffc;
  if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
    plVar5 = (long *)param_1[9];
    if (plVar5 != (long *)0x0) {
      param_1[9] = *plVar5;
    }
    *plVar5 = (long)(puVar1 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = param_2[1];
    plVar5[3] = 0;
    plVar5[1] = lVar3;
    plVar5[2] = 0;
    lVar3 = param_2[6];
    plVar5[7] = (long)"mLightKind";
    plVar5[8] = 0;
    plVar5[0xb] = 0;
    *(undefined4 *)(plVar5 + 0xb) = 0;
    *plVar5 = (long)&PTR_LAB_04a9f148;
    *(int *)(plVar5 + 4) = (int)lVar3;
    plVar5[6] = (long)(puVar2 + 0x10);
    plVar5[5] = (long)(plVar5 + 6);
    plVar5[9] = (long)plVar5;
    plVar5[10] = 8;
    if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
      *(long **)(param_1[8] + (long)(int)param_1[7] * 8) = plVar5;
      *(int *)(param_1 + 7) = (int)param_1[7] + 1;
    }
  }
  else {
    plVar5 = (long *)0x0;
  }
  (**(code **)(*plVar5 + 0x38))(plVar5,param_1);
  *(uint *)(plVar5 + 4) = *(uint *)(plVar5 + 4) & 0xfffffffc;
  if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
    plVar5 = (long *)param_1[9];
    if (plVar5 != (long *)0x0) {
      param_1[9] = *plVar5;
    }
    *plVar5 = (long)(puVar1 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = param_2[1];
    plVar5[3] = 0;
    plVar5[1] = lVar3;
    plVar5[2] = 0;
    lVar3 = param_2[6];
    plVar5[7] = (long)"mLightKind";
    plVar5[8] = 0;
    plVar5[0xb] = 0;
    *(undefined4 *)(plVar5 + 0xb) = 0;
    *plVar5 = (long)&PTR_LAB_04a9f148;
    *(int *)(plVar5 + 4) = (int)lVar3;
    plVar5[6] = (long)(puVar2 + 0x10);
    plVar5[5] = (long)(plVar5 + 6);
    plVar5[9] = (long)plVar5;
    plVar5[10] = 8;
    if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
      *(long **)(param_1[8] + (long)(int)param_1[7] * 8) = plVar5;
      *(int *)(param_1 + 7) = (int)param_1[7] + 1;
    }
  }
  else {
    plVar5 = (long *)0x0;
  }
  (**(code **)(*plVar5 + 0x38))(plVar5,param_1);
  *(uint *)(plVar5 + 4) = *(uint *)(plVar5 + 4) & 0xfffffffc;
  if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
    plVar5 = (long *)param_1[9];
    if (plVar5 != (long *)0x0) {
      param_1[9] = *plVar5;
    }
    *plVar5 = (long)(puVar1 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = param_2[1];
    plVar5[3] = 0;
    plVar5[1] = lVar3;
    plVar5[2] = 0;
    lVar3 = param_2[6];
    plVar5[7] = (long)"mLightKind";
    plVar5[8] = 0;
    plVar5[0xb] = 0;
    *(undefined4 *)(plVar5 + 0xb) = 0;
    *plVar5 = (long)&PTR_LAB_04a9f148;
    *(int *)(plVar5 + 4) = (int)lVar3;
    plVar5[6] = (long)(puVar2 + 0x10);
    plVar5[5] = (long)(plVar5 + 6);
    plVar5[9] = (long)plVar5;
    plVar5[10] = 8;
    if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
      *(long **)(param_1[8] + (long)(int)param_1[7] * 8) = plVar5;
      *(int *)(param_1 + 7) = (int)param_1[7] + 1;
    }
  }
  else {
    plVar5 = (long *)0x0;
  }
  (**(code **)(*plVar5 + 0x38))(plVar5,param_1);
  *(uint *)(plVar5 + 4) = *(uint *)(plVar5 + 4) & 0xfffffffc;
  return;
}

