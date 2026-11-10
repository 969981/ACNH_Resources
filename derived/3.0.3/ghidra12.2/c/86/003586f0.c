
float FUN_003586f0(undefined8 *param_1,float *param_2,float *param_3,long param_4,int param_5)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  uVar3 = *(uint *)(param_1 + 10);
  fVar4 = 0.0;
  fVar5 = 0.0;
  if ((((uVar3 & 0x333) != 0) && ((uVar3 & 0x333) != 0x300)) && (param_4 != 0)) {
    local_90 = param_1[10];
    uStack_88 = param_1[0xb];
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar4 = 0.0;
    local_80 = param_1[0xc];
    local_b0 = param_1[6];
    uStack_a8 = param_1[7];
    local_a0 = param_1[8];
    uStack_98 = param_1[9];
    local_d0 = (undefined4)param_1[2];
    uStack_c4 = (undefined4)((ulong)param_1[3] >> 0x20);
    uStack_cc = 0;
    uStack_c8 = 0;
    local_c0 = param_1[4];
    uStack_b8 = param_1[5];
    local_e0 = *param_1;
    uStack_d8 = param_1[1];
    local_68 = param_4;
    iVar2 = param_5;
    do {
      local_78 = 0;
      local_70 = 0;
      FUN_00357530(&local_e0,&local_78,&local_68,iVar2);
      iVar2 = ((int)param_4 + param_5) - (int)local_68;
      fVar1 = (float)local_78;
      if (fVar5 <= (float)local_78) {
        fVar1 = fVar5;
      }
      fVar5 = fVar1;
      fVar1 = local_78._4_4_;
      if (fVar6 <= local_78._4_4_) {
        fVar1 = fVar6;
      }
      fVar6 = fVar1;
      fVar1 = (float)local_70;
      if ((float)local_70 <= fVar7) {
        fVar1 = fVar7;
      }
      fVar7 = fVar1;
      fVar1 = local_70._4_4_;
      if (local_70._4_4_ <= fVar4) {
        fVar1 = fVar4;
      }
      fVar4 = fVar1;
    } while (0 < iVar2);
    thunk_FUN_0035008c(&local_e0);
    fVar5 = fVar7 - fVar5;
    fVar4 = fVar4 - fVar6;
    uVar3 = *(uint *)(param_1 + 10);
  }
  fVar6 = fVar5;
  if ((uVar3 & 0x30) == 0x20) {
LAB_00358830:
    *param_2 = *param_2 - fVar6;
  }
  else if ((uVar3 & 0x30) == 0x10) {
    fVar6 = fVar5 * 0.5;
    if (*(char *)(param_1 + 0xc) != '\0') {
      fVar6 = (float)(int)(fVar5 * 0.5);
    }
    goto LAB_00358830;
  }
  fVar6 = fVar4;
  if ((*(uint *)(param_1 + 10) & 0x300) != 0x200) {
    if ((*(uint *)(param_1 + 10) & 0x300) != 0x100) goto LAB_00358878;
    fVar6 = fVar4 * 0.5;
    if (*(char *)(param_1 + 0xc) != '\0') {
      fVar6 = (float)(int)(fVar4 * 0.5);
    }
  }
  *param_3 = *param_3 - fVar6;
LAB_00358878:
  if (*(char *)((long)param_1 + 0x62) != '\0') {
    local_90 = param_1[10];
    uStack_88 = param_1[0xb];
    fVar6 = *param_3;
    local_80 = param_1[0xc];
    local_78 = 0;
    local_70 = 0;
    local_b0 = param_1[6];
    uStack_a8 = param_1[7];
    local_a0 = param_1[8];
    uStack_98 = param_1[9];
    local_d0 = (undefined4)param_1[2];
    uStack_c4 = (undefined4)((ulong)param_1[3] >> 0x20);
    uStack_cc = 0;
    uStack_c8 = 0;
    local_c0 = param_1[4];
    uStack_b8 = param_1[5];
    local_e0 = *param_1;
    uStack_d8 = param_1[1];
    local_68 = param_4;
    FUN_00357530(&local_e0,&local_78,&local_68,param_5);
    fVar7 = local_70._4_4_ - local_78._4_4_;
    thunk_FUN_0035008c(&local_e0);
    fVar4 = (float)(**(code **)(*(long *)param_1[0xb] + 0x28))((long *)param_1[0xb],param_1);
    *param_3 = fVar6 + (fVar7 - fVar4);
  }
  if ((*(uint *)(param_1 + 10) & 3) == 2) {
    local_90 = param_1[10];
    uStack_88 = param_1[0xb];
    local_80 = param_1[0xc];
    local_70 = 0;
    local_78 = 0;
    local_b0 = param_1[6];
    uStack_a8 = param_1[7];
    local_a0 = param_1[8];
    uStack_98 = param_1[9];
    local_d0 = (undefined4)param_1[2];
    uStack_c4 = (undefined4)((ulong)param_1[3] >> 0x20);
    uStack_cc = 0;
    uStack_c8 = 0;
    local_c0 = param_1[4];
    uStack_b8 = param_1[5];
    local_e0 = *param_1;
    uStack_d8 = param_1[1];
    local_68 = param_4;
    FUN_00357530(&local_e0,&local_78,&local_68,param_5);
    fVar4 = (float)local_70 - (float)local_78;
    thunk_FUN_0035008c(&local_e0);
    *(float *)((long)param_1 + 0x14) = (fVar5 - fVar4) + *param_2;
    uVar3 = *(uint *)(param_1 + 10);
    fVar4 = *param_3;
  }
  else if ((*(uint *)(param_1 + 10) & 3) == 1) {
    local_90 = param_1[10];
    uStack_88 = param_1[0xb];
    local_80 = param_1[0xc];
    local_70 = 0;
    local_78 = 0;
    local_b0 = param_1[6];
    uStack_a8 = param_1[7];
    local_a0 = param_1[8];
    uStack_98 = param_1[9];
    local_d0 = (undefined4)param_1[2];
    uStack_c4 = (undefined4)((ulong)param_1[3] >> 0x20);
    uStack_cc = 0;
    uStack_c8 = 0;
    local_c0 = param_1[4];
    uStack_b8 = param_1[5];
    local_e0 = *param_1;
    uStack_d8 = param_1[1];
    local_68 = param_4;
    FUN_00357530(&local_e0,&local_78,&local_68,param_5);
    fVar6 = (float)local_70 - (float)local_78;
    thunk_FUN_0035008c(&local_e0);
    fVar6 = fVar6 * 0.5;
    fVar4 = fVar5 * 0.5;
    if (*(char *)(param_1 + 0xc) != '\0') {
      fVar4 = (float)(int)(fVar5 * 0.5);
    }
    if (*(char *)(param_1 + 0xc) != '\0') {
      fVar6 = (float)(int)fVar6;
    }
    *(float *)((long)param_1 + 0x14) = *param_2 + (fVar4 - fVar6);
    uVar3 = *(uint *)(param_1 + 10);
    fVar4 = *param_3;
  }
  else {
    *(float *)((long)param_1 + 0x14) = *param_2;
    uVar3 = *(uint *)(param_1 + 10);
    fVar4 = *param_3;
  }
  if (((uVar3 ^ 0xffffffff) & 0x300) != 0) {
    fVar6 = (float)FUN_00350160(param_1);
    fVar4 = fVar4 + fVar6;
  }
  *(float *)(param_1 + 3) = fVar4;
  return fVar5;
}

