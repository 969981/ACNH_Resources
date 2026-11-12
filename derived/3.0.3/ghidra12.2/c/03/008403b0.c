
void FUN_008403b0(long *param_1,long *param_2,float *param_3,long *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  
  puVar2 = PTR_DAT_04bb3050;
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar3 = PTR_DAT_04bb60a0;
  lVar4 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar4;
  lVar4 = param_2[6];
  *param_1 = (long)(puVar3 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar4;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
  }
  plVar7 = param_1 + 7;
  *plVar7 = 0;
  param_1[6] = 0;
  param_1[0x17] = 0;
  plVar6 = param_1 + 0x11;
  *plVar6 = (long)(param_1 + 0x17);
  plVar5 = param_1 + 0xb;
  *plVar5 = (long)plVar6;
  param_1[8] = 0;
  param_1[9] = (long)plVar5;
  puVar3 = PTR_DAT_04bb31d0;
  param_1[10] = (long)plVar5;
  if (param_1 + 0x1d == (long *)0x0) {
    plVar5 = (long *)0x0;
    *param_1 = (long)&PTR_LAB_049199b0;
  }
  else {
    param_1[9] = (long)plVar6;
    param_1[8] = (long)(param_1 + 0x1d);
    param_1[0xb] = (long)(puVar2 + 0x10);
    *(undefined4 *)((long)param_1 + 0x3c) = 3;
    *param_1 = (long)&PTR_LAB_049199b0;
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = param_2[1];
    param_1[0xe] = 0;
    param_1[0xc] = lVar4;
    param_1[0xd] = 0;
    uVar1 = *(uint *)(param_2 + 6);
    param_1[0xb] = (long)(puVar3 + 0x10);
    param_1[0x10] = 0;
    *(uint *)(param_1 + 0xf) = uVar1;
    fVar8 = *param_3;
    *(uint *)(param_1 + 0xf) = uVar1 | 0x1000000;
    if ((uVar1 & 0x800) != 0) {
      fVar8 = fVar8 * 0.017453292;
    }
    *(float *)((long)param_1 + 0x7c) = fVar8;
    if ((uVar1 >> 7 & 1) == 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        param_1[0x10] = 0;
        fVar8 = *param_3;
      }
      else {
        fVar8 = *param_3;
        param_1[0x10] = 0;
        fVar8 = fVar8 * 0.017453292;
      }
      *(float *)(param_1 + 0x10) = fVar8;
    }
    param_1[0xb] = (long)&PTR_LAB_04919b30;
    *(uint *)(param_1 + 0xf) = uVar1 & 0xfeffffff;
    if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
      *(long **)(param_1[8] + (long)(int)param_1[7] * 8) = plVar5;
      *(int *)plVar7 = (int)*plVar7 + 1;
    }
  }
  (**(code **)(*plVar5 + 0x38))(plVar5,param_1);
  *(uint *)(plVar5 + 4) = *(uint *)(plVar5 + 4) & 0xfffffffc;
  if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
    plVar6 = (long *)param_1[9];
    if (plVar6 != (long *)0x0) {
      param_1[9] = *plVar6;
    }
    *plVar6 = (long)(puVar2 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = param_2[1];
    plVar6[3] = 0;
    plVar6[1] = lVar4;
    plVar6[2] = 0;
    uVar1 = *(uint *)(param_2 + 6);
    *plVar6 = (long)(puVar3 + 0x10);
    plVar6[5] = 0;
    *(uint *)(plVar6 + 4) = uVar1;
    fVar8 = *param_3;
    *(uint *)(plVar6 + 4) = uVar1 | 0x1000000;
    if ((uVar1 & 0x800) != 0) {
      fVar8 = fVar8 * 0.017453292;
    }
    *(float *)((long)plVar6 + 0x24) = fVar8;
    if ((uVar1 >> 7 & 1) == 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        plVar6[5] = 0;
        fVar8 = *param_3;
      }
      else {
        fVar8 = *param_3;
        plVar6[5] = 0;
        fVar8 = fVar8 * 0.017453292;
      }
      *(float *)(plVar6 + 5) = fVar8;
    }
    *plVar6 = (long)&PTR_LAB_04919b30;
    *(uint *)(plVar6 + 4) = uVar1 & 0xfeffffff;
    if ((int)*plVar7 < *(int *)((long)param_1 + 0x3c)) {
      *(long **)(param_1[8] + (long)(int)*plVar7 * 8) = plVar6;
      *(int *)plVar7 = (int)*plVar7 + 1;
    }
  }
  else {
    plVar6 = (long *)0x0;
  }
  (**(code **)(*plVar6 + 0x38))(plVar6,param_1);
  *(uint *)(plVar6 + 4) = *(uint *)(plVar6 + 4) & 0xfffffffc;
  if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
    plVar6 = (long *)param_1[9];
    if (plVar6 != (long *)0x0) {
      param_1[9] = *plVar6;
    }
    *plVar6 = (long)(puVar2 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = param_2[1];
    plVar6[3] = 0;
    plVar6[1] = lVar4;
    plVar6[2] = 0;
    uVar1 = *(uint *)(param_2 + 6);
    *plVar6 = (long)(puVar3 + 0x10);
    plVar6[5] = 0;
    *(uint *)(plVar6 + 4) = uVar1;
    fVar8 = *param_3;
    *(uint *)(plVar6 + 4) = uVar1 | 0x1000000;
    if ((uVar1 & 0x800) != 0) {
      fVar8 = fVar8 * 0.017453292;
    }
    *(float *)((long)plVar6 + 0x24) = fVar8;
    if ((uVar1 >> 7 & 1) == 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        plVar6[5] = 0;
        fVar8 = *param_3;
      }
      else {
        fVar8 = *param_3;
        plVar6[5] = 0;
        fVar8 = fVar8 * 0.017453292;
      }
      *(float *)(plVar6 + 5) = fVar8;
    }
    *plVar6 = (long)&PTR_LAB_04919b30;
    *(uint *)(plVar6 + 4) = uVar1 & 0xfeffffff;
    if ((int)*plVar7 < *(int *)((long)param_1 + 0x3c)) {
      *(long **)(param_1[8] + (long)(int)*plVar7 * 8) = plVar6;
      *(int *)plVar7 = (int)*plVar7 + 1;
    }
  }
  else {
    plVar6 = (long *)0x0;
  }
  (**(code **)(*plVar6 + 0x38))(plVar6,param_1);
  *(uint *)(plVar6 + 4) = *(uint *)(plVar6 + 4) & 0xfffffffc;
  return;
}

