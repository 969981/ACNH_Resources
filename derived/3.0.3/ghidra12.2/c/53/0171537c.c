
void FUN_0171537c(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  char *pcStack_70;
  undefined4 local_68;
  
  puVar1 = PTR_DAT_04bb3050;
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar6 = PTR_DAT_04bb60a0;
  lVar2 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar2;
  lVar2 = param_2[6];
  *param_1 = (long)(puVar6 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar2;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  plVar5 = param_1 + 7;
  *plVar5 = 0;
  param_1[6] = 0;
  param_1[0x25] = 0;
  plVar4 = param_1 + 0x18;
  *plVar4 = (long)(param_1 + 0x25);
  plVar3 = param_1 + 0xb;
  *plVar3 = (long)plVar4;
  puVar6 = PTR_DAT_04bb2020;
  param_1[10] = (long)plVar3;
  param_1[8] = 0;
  param_1[9] = (long)plVar3;
  if (param_1 + 0x32 == (long *)0x0) {
    plVar3 = (long *)0x0;
    *param_1 = (long)&PTR_LAB_049bcfc8;
  }
  else {
    param_1[9] = (long)plVar4;
    param_1[8] = (long)(param_1 + 0x32);
    param_1[0xb] = (long)(puVar1 + 0x10);
    *(int *)((long)param_1 + 0x3c) = 3;
    *param_1 = (long)&PTR_LAB_049bcfc8;
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar2 = param_2[1];
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    local_68 = 0;
    param_1[0xc] = lVar2;
    lVar2 = param_2[6];
    param_1[0x10] = 0;
    param_1[0xb] = (long)&PTR_LAB_049bd2a8;
    *(int *)(param_1 + 0xf) = (int)lVar2;
    local_98 = puVar6 + 0x10;
    pcStack_90 = "mTrans";
    puStack_80 = &DAT_040bff0f;
    pcStack_70 = "Min=0.f, Max=90.f";
    local_88 = local_98;
    local_78 = local_98;
    FUN_006fdfc0(param_1 + 0x11,&local_98,PTR_DAT_04bb2150,plVar3);
    param_1[0xb] = (long)&PTR_LAB_049bd148;
    if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
      *(long **)(param_1[8] + (long)(int)param_1[7] * 8) = plVar3;
      *(int *)plVar5 = (int)*plVar5 + 1;
    }
    puVar6 = PTR_DAT_04bb2020;
  }
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  *(uint *)(plVar3 + 4) = *(uint *)(plVar3 + 4) & 0xfffffffc;
  if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
    plVar4 = (long *)param_1[9];
    if (plVar4 != (long *)0x0) {
      param_1[9] = *plVar4;
    }
    *plVar4 = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar2 = param_2[1];
    plVar4[2] = 0;
    plVar4[3] = 0;
    local_98 = puVar6 + 0x10;
    plVar4[1] = lVar2;
    lVar2 = param_2[6];
    plVar4[5] = 0;
    *plVar4 = (long)&PTR_LAB_049bd2a8;
    *(int *)(plVar4 + 4) = (int)lVar2;
    local_68 = 0;
    pcStack_90 = "mTrans";
    puStack_80 = &DAT_040bff0f;
    pcStack_70 = "Min=0.f, Max=90.f";
    local_88 = local_98;
    local_78 = local_98;
    FUN_006fdfc0(plVar4 + 6,&local_98,PTR_DAT_04bb2150,plVar4);
    *plVar4 = (long)&PTR_LAB_049bd148;
    if ((int)*plVar5 < *(int *)((long)param_1 + 0x3c)) {
      *(long **)(param_1[8] + (long)(int)*plVar5 * 8) = plVar4;
      *(int *)plVar5 = (int)*plVar5 + 1;
    }
  }
  else {
    plVar4 = (long *)0x0;
  }
  (**(code **)(*plVar4 + 0x38))(plVar4,param_1);
  *(uint *)(plVar4 + 4) = *(uint *)(plVar4 + 4) & 0xfffffffc;
  if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
    plVar4 = (long *)param_1[9];
    if (plVar4 != (long *)0x0) {
      param_1[9] = *plVar4;
    }
    *plVar4 = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar2 = param_2[1];
    plVar4[2] = 0;
    plVar4[3] = 0;
    local_98 = puVar6 + 0x10;
    plVar4[1] = lVar2;
    lVar2 = param_2[6];
    plVar4[5] = 0;
    *plVar4 = (long)&PTR_LAB_049bd2a8;
    *(int *)(plVar4 + 4) = (int)lVar2;
    local_68 = 0;
    pcStack_90 = "mTrans";
    puStack_80 = &DAT_040bff0f;
    pcStack_70 = "Min=0.f, Max=90.f";
    local_88 = local_98;
    local_78 = local_98;
    FUN_006fdfc0(plVar4 + 6,&local_98,PTR_DAT_04bb2150,plVar4);
    *plVar4 = (long)&PTR_LAB_049bd148;
    if ((int)*plVar5 < *(int *)((long)param_1 + 0x3c)) {
      *(long **)(param_1[8] + (long)(int)*plVar5 * 8) = plVar4;
      *(int *)plVar5 = (int)*plVar5 + 1;
    }
  }
  else {
    plVar4 = (long *)0x0;
  }
  (**(code **)(*plVar4 + 0x38))(plVar4,param_1);
  *(uint *)(plVar4 + 4) = *(uint *)(plVar4 + 4) & 0xfffffffc;
  return;
}

