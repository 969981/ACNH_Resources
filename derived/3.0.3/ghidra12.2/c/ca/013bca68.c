
void FUN_013bca68(long param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  float local_58;
  
  fVar6 = *(float *)(param_1 + 0x350);
  if (*(float *)(param_1 + 0x354) <= fVar6) {
    fVar6 = 0.0;
    *(undefined8 *)(param_1 + 0x350) = 0x4000000000000000;
  }
  local_60 = *(undefined8 *)param_2;
  local_58 = param_2[2];
  fVar7 = sinf(fVar6 * 180.0 * 0.017453292);
  fVar3 = local_58;
  fVar6 = (float)local_60;
  fVar10 = local_60._4_4_;
  fVar8 = (float)FUN_013bc8b0(param_1);
  fVar9 = *(float *)(param_1 + 0x36c);
  *(float *)(param_1 + 0x350) = *(float *)(param_1 + 0x350) + fVar8 * 0.01;
  if (2.0 < fVar9) {
    *(undefined4 *)(param_1 + 0x36c) = 0;
    uVar4 = nn::os::GetSystemTick();
    uVar1 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
    uVar4 = uVar1 ^ uVar1 * 0x800;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
    *(float *)(param_1 + 0x364) =
         ((float)((uVar4 >> 8 ^ uVar1 >> 0x13 ^ uVar4 ^ uVar1) >> 9 | 0x3f800000) + -1.0) * 0.005;
    fVar9 = *(float *)(param_1 + 0x36c);
  }
  if ((fVar9 == 0.0) && (fVar8 = (float)FUN_013bc8b0(param_1), fVar8 != 0.0)) {
    uVar4 = nn::os::GetSystemTick();
    uVar1 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
    *(undefined4 *)(param_1 + 0x380) = 0;
    uVar4 = uVar1 ^ uVar1 * 0x800;
    uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
    uVar1 = uVar2 ^ uVar2 * 0x800;
    uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
    uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
    uVar4 = uVar4 >> 8 ^ uVar2 >> 0x13 ^ uVar4 ^ uVar2;
    fVar9 = ((float)(uVar4 >> 9 | 0x3f800000) + -1.0) * 5.0 + -2.5;
    fVar8 = ((float)((uVar1 >> 8 ^ uVar4 >> 0x13 ^ uVar1 ^ uVar4) >> 9 | 0x3f800000) + -1.0) * 5.0 +
            -2.5;
    *(float *)(param_1 + 0x37c) = fVar9;
    *(float *)(param_1 + 900) = fVar8;
    fVar11 = param_2[1];
    fVar12 = param_2[2];
    *(float *)(param_1 + 0x370) = *param_2 + fVar9;
    *(float *)(param_1 + 0x378) = fVar12 + fVar8;
    *(float *)(param_1 + 0x374) = fVar11 + 0.0;
  }
  fVar11 = *(float *)(param_1 + 0x380);
  fVar12 = *(float *)(param_1 + 900);
  fVar9 = *(float *)(param_1 + 0x37c);
  fVar8 = sinf(*(float *)(param_1 + 0x36c) * 180.0 * 0.017453292);
  local_6c = *(undefined8 *)(param_1 + 0x388);
  local_64 = *(undefined4 *)(param_1 + 0x390);
  local_58 = fVar7 * 0.0 + fVar3 + fVar12 * fVar8;
  local_60 = CONCAT44(fVar7 + fVar10 + fVar11 * fVar8,fVar6 + fVar7 * 0.0 + fVar9 * fVar8);
  plVar5 = *(long **)(*(long *)(param_1 + 0x48) + 0x68);
  (**(code **)(*plVar5 + 0x150))(plVar5,&local_6c);
  fVar6 = *(float *)(param_1 + 0x364);
  fVar10 = (float)FUN_013bc8b0(param_1);
  *(float *)(param_1 + 0x36c) = *(float *)(param_1 + 0x36c) + fVar10 * fVar6 * 0.0005;
  plVar5 = *(long **)(*(long *)(param_1 + 0x48) + 0x68);
  (**(code **)(*plVar5 + 0x100))(plVar5,&local_60);
  return;
}

