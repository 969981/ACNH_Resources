
undefined8 FUN_003590a0(undefined8 *param_1,float *param_2,ulong *param_3,int param_4)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 *local_120;
  ulong uStack_118;
  ulong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulong local_f8;
  float local_f0;
  undefined8 local_ec;
  float local_e4;
  ulong local_e0;
  code *local_d8;
  ulong uStack_d0;
  undefined8 *local_c8;
  ulong local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  int local_84;
  
  uVar10 = *param_3;
  local_a0 = 0;
  local_a8 = *(undefined4 *)((long)param_1 + 0xc);
  uStack_a4 = *(undefined4 *)(param_1 + 2);
  fVar17 = *(float *)((long)param_1 + 0x3c);
  bVar2 = *(char *)((long)param_1 + 99) == '\0';
  uVar1 = uVar10 + (long)param_4 * 2;
  bVar3 = *(char *)(param_1 + 7) == '\0';
  local_b0 = 0;
  local_c8 = param_1;
  local_c0 = uVar10;
  local_b8 = uVar1;
  FUN_00352dc0(&local_e0,param_1[5],0);
  fVar13 = (float)FUN_00350128(param_1);
  *param_2 = 0.0;
  param_2[2] = 0.0;
  fVar16 = (float)NEON_fminnm(fVar13,0);
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  param_2[1] = fVar16;
  param_2[3] = fVar13;
  local_e0 = uVar10;
  (**(code **)(*(long *)param_1[0xb] + 0x40))((long *)param_1[0xb],&local_c8);
  pcVar9 = local_d8;
  if ((uStack_d0 & 1) != 0) {
    pcVar9 = *(code **)(local_d8 + *(long *)((long)&local_e0 + ((long)uStack_d0 >> 1)));
  }
  uVar4 = (*pcVar9)();
  if (uVar1 < local_e0) {
    uVar11 = 0;
    fVar13 = 0.0;
switchD_00359614_caseD_3:
    if (bVar2 || bVar3) {
LAB_00359198:
      iVar5 = (**(code **)(*(long *)param_1[5] + 0xb0))((long *)param_1[5],local_a0._4_4_,0);
      fVar13 = fVar13 + *(float *)((long)param_1 + 0xc) * (float)iVar5;
    }
LAB_003591c0:
    fVar16 = fVar13;
    if (*param_2 <= fVar13) {
      fVar16 = *param_2;
    }
    *param_2 = fVar16;
    if (fVar13 <= param_2[2]) {
      fVar13 = param_2[2];
    }
    param_2[2] = fVar13;
    *param_3 = local_e0;
    (**(code **)(*(long *)param_1[0xb] + 0x48))((long *)param_1[0xb],&local_c8);
    return uVar11;
  }
  fVar13 = 0.0;
  uVar11 = 0;
  local_84 = 0;
  uVar10 = 0;
LAB_00359264:
  do {
    uVar12 = local_e0;
    if (bVar2 || bVar3) {
      if (3.4028235e+38 <= fVar17 || uVar10 == 0) {
        if (0x1f < uVar4) {
          uVar8 = FUN_00358680(uVar4);
          if ((uVar8 & 1) != 0) {
            fVar16 = *(float *)(param_1 + 8);
            if (local_84 == 0) {
              fVar16 = -0.0;
            }
            if (*(char *)(param_1 + 7) == '\0') {
              iVar5 = (**(code **)(*(long *)param_1[5] + 0x80))((long *)param_1[5],uVar4);
              fVar14 = *(float *)((long)param_1 + 0xc) * (float)iVar5;
            }
            else {
              fVar14 = *(float *)(param_1 + 4);
            }
            iVar5 = (**(code **)(*(long *)param_1[5] + 0xb0))
                              ((long *)param_1[5],local_a0._4_4_,uVar4);
            fVar15 = *(float *)((long)param_1 + 0xc);
            iVar6 = (**(code **)(*(long *)param_1[5] + 0xb0))((long *)param_1[5],uVar4,0);
            fVar18 = *(float *)((long)param_1 + 0xc) * (float)iVar6;
            fVar16 = fVar13 + fVar16 + fVar14 + fVar15 * (float)iVar5 + fVar18;
            goto LAB_00359720;
          }
          goto switchD_00359614_caseD_1;
        }
      }
      else if (0x1f < uVar4) {
        uVar8 = FUN_00358680(uVar4);
        if ((uVar8 & 1) == 0) goto switchD_00359614_caseD_1;
        fVar16 = *(float *)(param_1 + 8);
        if (local_84 == 0) {
          fVar16 = -0.0;
        }
        if (*(char *)(param_1 + 7) == '\0') {
          iVar5 = (**(code **)(*(long *)param_1[5] + 0x80))((long *)param_1[5],uVar4);
          fVar14 = *(float *)((long)param_1 + 0xc) * (float)iVar5;
        }
        else {
          fVar14 = *(float *)(param_1 + 4);
        }
        iVar5 = (**(code **)(*(long *)param_1[5] + 0xb0))((long *)param_1[5],local_a0._4_4_,uVar4);
        fVar15 = *(float *)((long)param_1 + 0xc);
        iVar6 = (**(code **)(*(long *)param_1[5] + 0xb0))((long *)param_1[5],uVar4,0);
        fVar18 = *(float *)((long)param_1 + 0xc) * (float)iVar6;
        fVar16 = fVar13 + fVar16 + fVar14 + fVar15 * (float)iVar5 + fVar18;
        if (fVar16 + *(float *)(param_1 + 9) <= *(float *)((long)param_1 + 0x3c)) goto LAB_00359720;
        uVar11 = 1;
        uVar4 = 10;
        local_e0 = uVar10;
        if (uVar1 < uVar10) {
          goto LAB_00359198;
        }
      }
    }
    else if (3.4028235e+38 <= fVar17 || uVar10 == 0) {
      if (0x1f < uVar4) {
        uVar8 = FUN_00358680(uVar4);
        if ((uVar8 & 1) == 0) goto switchD_00359614_caseD_1;
        fVar16 = *(float *)(param_1 + 8);
        if (local_84 == 0) {
          fVar16 = -0.0;
        }
        if (*(char *)(param_1 + 7) == '\0') {
          iVar5 = (**(code **)(*(long *)param_1[5] + 0x80))((long *)param_1[5],uVar4);
          fVar14 = *(float *)((long)param_1 + 0xc) * (float)iVar5;
        }
        else {
          fVar14 = *(float *)(param_1 + 4);
        }
        fVar18 = 0.0;
        fVar16 = fVar13 + fVar16 + fVar14 + 0.0;
LAB_00359720:
        fVar13 = fVar16;
        if (*param_2 <= fVar16) {
          fVar13 = *param_2;
        }
        *param_2 = fVar13;
        fVar13 = fVar16;
        if (fVar16 <= param_2[2]) {
          fVar13 = param_2[2];
        }
        param_2[2] = fVar13;
        if (*(char *)((long)param_1 + 0x62) != '\0') {
          fVar14 = *(float *)(param_1 + 3);
          fVar13 = fVar14;
          if (param_2[1] <= fVar14) {
            fVar13 = param_2[1];
          }
          param_2[1] = fVar13;
          fVar15 = (float)(**(code **)(*(long *)param_1[0xb] + 0x28))((long *)param_1[0xb],param_1);
          fVar13 = fVar14 + fVar15;
          if (fVar14 + fVar15 <= param_2[3]) {
            fVar13 = param_2[3];
          }
          param_2[3] = fVar13;
        }
        fVar13 = fVar16 - fVar18;
        local_a0 = CONCAT44(uVar4,(undefined4)local_a0);
        goto LAB_00359794;
      }
    }
    else if (0x1f < uVar4) {
      uVar8 = FUN_00358680(uVar4);
      if ((uVar8 & 1) == 0) goto switchD_00359614_caseD_1;
      fVar16 = *(float *)(param_1 + 8);
      if (local_84 == 0) {
        fVar16 = -0.0;
      }
      if (*(char *)(param_1 + 7) == '\0') {
        iVar5 = (**(code **)(*(long *)param_1[5] + 0x80))((long *)param_1[5],uVar4);
        fVar14 = *(float *)((long)param_1 + 0xc) * (float)iVar5;
      }
      else {
        fVar14 = *(float *)(param_1 + 4);
      }
      fVar18 = 0.0;
      fVar16 = fVar13 + fVar16 + fVar14 + 0.0;
      if (fVar16 + *(float *)(param_1 + 9) <= *(float *)((long)param_1 + 0x3c)) goto LAB_00359720;
      uVar11 = 1;
      uVar4 = 10;
      local_e0 = uVar10;
      if (uVar1 < uVar10) {
        goto LAB_003591c0;
      }
    }
    if ((uVar4 == 10) && (*(char *)((long)param_1 + 0x61) == '\0')) {
      if (bVar2 || bVar3) {
        iVar5 = (**(code **)(*(long *)param_1[5] + 0xb0))((long *)param_1[5],local_a0._4_4_,0);
        fVar13 = fVar13 + *(float *)((long)param_1 + 0xc) * (float)iVar5;
      }
      local_a0 = 0;
    }
    local_ec = 0;
    local_e4 = 0.0;
    local_a0 = (CONCAT44(local_a0._4_4_,local_84) ^ 0xffffffff) & 0xffffffff00000001;
    *(float *)((long)param_1 + 0x14) = fVar13;
    local_f0 = fVar13;
    local_c0 = local_e0;
    if (((3.4028235e+38 <= fVar17) || (uVar4 == 10)) || (uVar10 == 0)) goto LAB_00359568;
    uStack_100 = CONCAT44(uStack_a4,local_a8);
    local_198 = 0;
    local_190 = 0;
    local_108 = local_b0;
    local_110 = local_b8;
    local_120 = &local_188;
    local_f8 = local_a0;
    local_138 = param_1[10];
    uStack_130 = param_1[0xb];
    local_128 = param_1[0xc];
    local_158 = param_1[6];
    uStack_150 = param_1[7];
    local_148 = param_1[8];
    uStack_140 = param_1[9];
    local_178 = param_1[2];
    uStack_170 = param_1[3];
    local_168 = param_1[4];
    uStack_160 = param_1[5];
    local_188 = *param_1;
    uStack_180 = param_1[1];
    uStack_118 = local_e0;
    (**(code **)(*(long *)param_1[0xb] + 0x20))((long *)param_1[0xb],&local_198,&local_120,uVar4);
    if ((float)local_190 - (float)local_198 <= 0.0) goto LAB_00359560;
    if (local_178._4_4_ - (float)local_b0 <= *(float *)((long)param_1 + 0x3c)) goto LAB_00359560;
    local_e0 = uVar10;
    thunk_FUN_0035008c(&local_188);
    uVar11 = 1;
    uVar4 = 10;
  } while (local_e0 <= uVar1);
  goto switchD_00359614_caseD_3;
LAB_00359560:
  thunk_FUN_0035008c(&local_188);
LAB_00359568:
  uVar7 = (**(code **)(*(long *)param_1[0xb] + 0x20))
                    ((long *)param_1[0xb],&local_f0,&local_c8,uVar4);
  fVar13 = param_2[3];
  if (((uVar4 == 10) && (*(char *)((long)param_1 + 0x62) != '\0')) &&
     (*(float *)(param_1 + 3) < fVar13)) {
    *(float *)(param_1 + 3) = fVar13;
    fVar13 = param_2[3];
  }
  local_e0 = local_c0;
  fVar16 = local_f0;
  if (*param_2 <= local_f0) {
    fVar16 = *param_2;
  }
  fVar14 = (float)local_ec;
  if (param_2[1] <= (float)local_ec) {
    fVar14 = param_2[1];
  }
  *param_2 = fVar16;
  param_2[1] = fVar14;
  fVar16 = local_ec._4_4_;
  if (local_ec._4_4_ <= param_2[2]) {
    fVar16 = param_2[2];
  }
  fVar14 = local_e4;
  if (local_e4 <= fVar13) {
    fVar14 = fVar13;
  }
  param_2[2] = fVar16;
  param_2[3] = fVar14;
  fVar13 = *(float *)((long)param_1 + 0x14);
  local_84 = 0;
  uVar12 = local_c0;
  switch(uVar7) {
  case 2:
LAB_00359794:
    local_84 = 1;
    uVar12 = local_e0;
    break;
  case 3:
    goto switchD_00359614_caseD_3;
  case 4:
    *param_3 = *param_3 + (long)param_4 * 2;
    return 0;
  }
switchD_00359614_caseD_1:
  if (3.4028235e+38 <= fVar17) {
    uVar12 = uVar10;
  }
  pcVar9 = local_d8;
  if ((uStack_d0 & 1) != 0) {
    pcVar9 = *(code **)(local_d8 + *(long *)((long)&local_e0 + ((long)uStack_d0 >> 1)));
  }
  uVar4 = (*pcVar9)();
  uVar10 = uVar12;
  if (uVar1 < local_e0) goto switchD_00359614_caseD_3;
  goto LAB_00359264;
}

