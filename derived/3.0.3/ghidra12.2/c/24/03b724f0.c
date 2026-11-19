
void FUN_03b724f0(float param_1,float param_2,float param_3,float param_4,long param_5,long param_6,
                 float *param_7,float *param_8,undefined8 *param_9,uint param_10)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_110;
  ulong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulong local_e8;
  float fStack_e0;
  float local_dc;
  undefined4 local_d8;
  float local_d4;
  float fStack_d0;
  float local_cc;
  undefined8 local_c8;
  float local_b4;
  float fStack_b0;
  undefined4 local_ac;
  
  fVar8 = 0.0;
  if (param_3 <= 0.0) {
    fVar8 = param_3;
  }
  fVar9 = *param_8;
  local_dc = param_8[1];
  local_100 = 0x3ecccccd3ecccccd;
  uStack_f8 = 0x3f8000003f19999a;
  fVar7 = 0.0;
  if (param_1 <= 0.0) {
    fVar7 = param_1;
  }
  lVar1 = *(long *)(param_5 + 0x108) + 0x1c;
  uVar5 = *(undefined8 *)(param_6 + 8);
  local_d8 = 0;
  fVar12 = fVar8;
  if (fVar8 <= param_1) {
    fVar12 = fVar7;
  }
  fVar7 = *param_7;
  local_d4 = param_7[1];
  local_c8 = 0;
  *(undefined8 **)(param_6 + 8) = &local_f0;
  puVar2 = PTR_DAT_04bd0c50;
  local_d4 = -(local_dc * 0.5) - local_d4;
  fStack_e0 = fVar9 * 0.0;
  local_e8 = (ulong)(uint)(fVar7 + fVar9 * 0.5) << 0x20;
  local_cc = local_dc * 0.0;
  local_f0 = CONCAT44(local_cc,fVar9);
  fStack_d0 = fStack_e0;
  (**(code **)(**(long **)PTR_DAT_04bd0c50 + 0x20))
            (*(long **)PTR_DAT_04bd0c50,*(undefined8 *)(param_6 + 0x20),&local_f0,lVar1,lVar1);
  (**(code **)(**(long **)puVar2 + 0x30))
            (*(long **)puVar2,*(undefined8 *)(param_6 + 0x20),*(undefined8 *)(param_6 + 8),
             &local_100,&local_100);
  iVar4 = (int)fVar8;
  *(undefined8 *)(param_6 + 8) = uVar5;
  if (fVar8 == (float)(int)fVar8) {
    iVar4 = iVar4 + 1;
  }
  if (iVar4 < 0) {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + -1;
      if (iVar6 * -0x33333333 + 0x19999999U < 0x33333333) {
        fVar7 = *param_7;
        local_e8 = local_e8 & 0xffffffff00000000;
        local_108 = local_108 & 0xffffffff00000000;
        fVar9 = -(param_8[1] * ((float)iVar6 / fVar8)) - param_7[1];
        local_f0 = CONCAT44(fVar9,fVar7);
        fVar10 = -(param_7[1] + ((float)iVar6 / fVar8) * param_8[1] + 0.0);
        local_110 = CONCAT44(fVar10,fVar7 + 4.0);
        FUN_038c5944(param_6,&local_f0,&local_110,&local_100,&local_100);
        local_e8 = local_e8 & 0xffffffff00000000;
        local_108 = local_108 & 0xffffffff00000000;
        fVar7 = fVar7 + *param_8 + -4.0;
        local_f0 = CONCAT44(fVar9,fVar7);
        local_110 = CONCAT44(fVar10,fVar7 + 4.0);
        FUN_038c5944(param_6,&local_f0,&local_110,&local_100,&local_100);
      }
    } while (iVar4 < iVar6);
  }
  puVar2 = PTR_DAT_04bd0c50;
  if ((param_10 & 1) == 0) {
    if (fVar12 <= fVar8) goto LAB_03b727ec;
    uVar5 = *(undefined8 *)(param_6 + 8);
    if (param_4 < fVar12) {
      plVar3 = *(long **)PTR_DAT_04bd0c50;
      fVar7 = param_8[1];
      fVar10 = *param_7;
      fVar11 = param_7[1];
      local_110 = 0x3f800000;
      local_108 = 0x3f80000000000000;
      local_d8 = 0;
      local_c8 = 0;
      fVar9 = *param_8 + -2.0;
      *(undefined8 **)(param_6 + 8) = &local_f0;
      local_dc = ((param_4 - fVar12) / param_4) * fVar7;
      fStack_e0 = fVar9 * 0.0;
      local_d4 = -(local_dc * 0.5) - (fVar11 + (fVar12 / fVar8) * fVar7);
      local_e8 = (ulong)(uint)(fVar10 + 1.0 + fVar9 * 0.5) << 0x20;
      local_cc = local_dc * 0.0;
      local_f0 = CONCAT44(local_cc,fVar9);
      fStack_d0 = fStack_e0;
      (**(code **)(*plVar3 + 0x20))
                (plVar3,*(undefined8 *)(param_6 + 0x20),&local_f0,&local_110,&local_110);
      *(undefined8 *)(param_6 + 8) = uVar5;
      fVar12 = param_4;
    }
    fStack_d0 = *param_8;
    fVar7 = param_8[1];
    fVar9 = *param_7;
    fVar10 = param_7[1];
    plVar3 = *(long **)puVar2;
    *(undefined8 **)(param_6 + 8) = &local_f0;
    fStack_d0 = fStack_d0 + -2.0;
    fVar9 = fVar9 + 1.0 + fStack_d0 * 0.5;
    local_dc = fVar7 * (1.0 - fVar12 / fVar8);
    local_d4 = -(local_dc * 0.5) - ((fVar7 - local_dc) + fVar10);
    local_cc = local_dc * 0.0;
    local_f0 = CONCAT44(local_cc,fStack_d0);
  }
  else {
    if (0.0 <= fVar12) goto LAB_03b727ec;
    uVar5 = *(undefined8 *)(param_6 + 8);
    plVar3 = *(long **)PTR_DAT_04bd0c50;
    local_dc = (fVar12 / fVar8) * param_8[1];
    fStack_d0 = *param_8 + -2.0;
    fVar7 = *param_7;
    local_d4 = param_7[1];
    *(undefined8 **)(param_6 + 8) = &local_f0;
    local_d4 = -(local_dc * 0.5) - local_d4;
    fVar9 = fVar7 + 1.0 + fStack_d0 * 0.5;
    local_cc = local_dc * 0.0;
    local_f0 = CONCAT44(local_cc,fStack_d0);
  }
  fStack_d0 = fStack_d0 * 0.0;
  local_c8 = 0;
  local_d8 = 0;
  local_e8 = (ulong)(uint)fVar9 << 0x20;
  fStack_e0 = fStack_d0;
  (**(code **)(*plVar3 + 0x20))(plVar3,*(undefined8 *)(param_6 + 0x20),&local_f0,param_9,param_9);
  *(undefined8 *)(param_6 + 8) = uVar5;
LAB_03b727ec:
  if ((param_4 < 0.0) && (fVar8 <= param_4)) {
    local_108 = local_108 & 0xffffffff00000000;
    local_ac = 0;
    local_f0 = 0x3f800000;
    local_e8 = 0x3f80000000000000;
    fVar7 = param_7[1] + (param_4 / fVar8) * param_8[1];
    local_b4 = *param_7 + *param_8 + -1.0;
    fStack_b0 = -(fVar7 + (*param_8 + -1.0) * 0.0);
    local_110 = CONCAT44(-(fVar7 + 0.0),*param_7 + 1.0);
    FUN_038c5944(param_6,&local_110,&local_b4,&local_f0,&local_f0);
  }
  if (param_2 != -3.4028235e+38) {
    local_f0 = *param_9;
    local_e8 = param_9[1];
    fVar7 = 0.0;
    if (param_2 <= 0.0) {
      fVar7 = param_2;
    }
    local_108 = local_108 & 0xffffffff00000000;
    fVar9 = fVar8;
    if (fVar8 <= param_2) {
      fVar9 = fVar7;
    }
    local_ac = 0;
    fVar8 = param_7[1] + (fVar9 / fVar8) * param_8[1];
    local_b4 = *param_7 + *param_8 + -1.0;
    local_110 = CONCAT44(-(fVar8 + 0.0),*param_7 + 1.0);
    fStack_b0 = -(fVar8 + (*param_8 + -1.0) * 0.0);
    FUN_038c5944(param_6,&local_110,&local_b4,&local_f0,&local_f0);
  }
  return;
}

