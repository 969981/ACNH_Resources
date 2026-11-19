
void FUN_03a3a0c4(long param_1,undefined8 param_2,uint param_3,long *param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined *local_f0;
  undefined8 uStack_e8;
  float local_e0;
  float fStack_dc;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined2 local_c4 [2];
  uint local_c0;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) <= param_3) {
    param_3 = 0;
  }
  plVar3 = (long *)(lVar2 + (long)(int)param_3 * 0x238);
  if ((char)plVar3[0x46] == '\x01') {
    FUN_038e4cec(local_c4);
    local_c4[0] = 0;
    local_c0 = local_c0 & 0xfffffffe;
    FUN_038e4d90(local_c4,param_2);
    (**(code **)(*param_4 + 0x38))(param_4,param_2);
    fVar6 = *(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc);
    fVar10 = *(float *)(param_4 + 2);
    fVar11 = *(float *)((long)param_4 + 0x14);
    fVar4 = *(float *)(param_5 + 0x10) - *(float *)(param_5 + 8);
    fVar5 = fVar6;
    if (1 < *(int *)(param_5 + 0x18) - 1U) {
      fVar5 = fVar4;
      fVar4 = fVar6;
    }
    fVar6 = *(float *)(param_4 + 1);
    fVar8 = *(float *)((long)param_4 + 0xc);
    fVar7 = *(float *)(param_4 + 3);
    fVar9 = *(float *)((long)param_4 + 0x1c);
    FUN_038e77e4(param_5,param_2,param_4);
    local_d8 = *(undefined4 *)PTR_DAT_04bd0ea8;
    local_d4 = 0x3f80000000000000;
    local_f0 = PTR_DAT_04bd0f08 + 0x10;
    uStack_e8 = 0;
    uVar1 = *(undefined8 *)
             (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28) + 8) + 0x18);
    local_e0 = (fVar5 / fVar6) * (fVar7 - fVar10);
    fStack_dc = (fVar4 / fVar8) * (fVar9 - fVar11);
    FUN_03907810(uVar1,param_2);
    FUN_03949e90(param_2,uVar1,lVar2 + (long)(int)param_3 * 0x238 + 8,&local_f0,PTR_DAT_04bbdc38,
                 PTR_DAT_04bb2f48);
  }
  else if (*plVar3 != 0) {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
    *plVar3 = 0;
  }
  return;
}

