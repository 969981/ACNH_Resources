
float FUN_03efba10(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float *param_6,float *param_7)

{
  float *pfVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  
  fVar7 = -(param_1 * param_4) + param_2 * param_3;
  fVar7 = fVar7 + fVar7;
  bVar5 = false;
  bVar6 = true;
  if (-1.1920929e-07 <= fVar7) {
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar7)) {
      bVar5 = fVar7 == 1.1920929e-07;
      bVar6 = 1.1920929e-07 <= fVar7;
    }
  }
  if (!bVar6 || bVar5) {
    param_1 = param_1 - param_3;
    param_2 = param_2 - param_4;
    fVar7 = SQRT(param_2 * param_2 + param_1 * param_1);
    bVar5 = false;
    bVar6 = true;
    if (-1.1920929e-07 <= fVar7) {
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar7)) {
        bVar5 = fVar7 == 1.1920929e-07;
        bVar6 = 1.1920929e-07 <= fVar7;
      }
    }
    if (!bVar6 || bVar5) {
      local_98 = atanf(param_3);
      local_98 = local_98 + local_98;
      local_94 = atanf(param_4);
      local_94 = local_94 + local_94;
    }
    else {
      fVar8 = (param_1 * param_5) / fVar7;
      fVar7 = (param_2 * param_5) / fVar7;
      local_98 = atanf(fVar8 + param_3);
      local_98 = local_98 + local_98;
      local_94 = atanf(fVar7 + param_4);
      local_94 = local_94 + local_94;
      param_4 = param_4 - fVar7;
      param_3 = param_3 - fVar8;
    }
  }
  else {
    fVar8 = ((param_4 * param_4 + param_3 * param_3) - param_5 * param_5) + -1.0;
    fVar9 = param_2 * param_2 + param_1 * param_1 + -1.0;
    fVar12 = (-(fVar9 * param_4) - -(fVar8 * param_2)) / fVar7 - param_3;
    fVar8 = (-(fVar8 * param_1) + param_3 * fVar9) / fVar7 - param_4;
    fVar13 = fVar8 * fVar8 + fVar12 * fVar12;
    fVar9 = fVar13 - param_5 * param_5;
    fVar7 = 0.0;
    if (0.0 <= fVar9) {
      fVar7 = fVar9;
    }
    fVar9 = fVar12 * SQRT(fVar7);
    fVar7 = fVar8 * SQRT(fVar7);
    local_98 = atanf(((fVar12 * param_5 - fVar7) * param_5) / fVar13 + param_3);
    local_98 = local_98 + local_98;
    local_94 = atanf(((fVar9 + param_5 * fVar8) * param_5) / fVar13 + param_4);
    local_94 = local_94 + local_94;
    param_4 = ((fVar8 * param_5 - fVar9) * param_5) / fVar13 + param_4;
    param_3 = ((fVar7 + param_5 * fVar12) * param_5) / fVar13 + param_3;
  }
  local_a0 = atanf(param_3);
  local_a0 = local_a0 + local_a0;
  local_9c = atanf(param_4);
  puVar4 = PTR_DAT_04bb4bd0;
  puVar3 = PTR_DAT_04bb4bc8;
  puVar2 = PTR_DAT_04bb3ea0;
  local_9c = local_9c + local_9c;
  FUN_03ef4a78(&local_ac,&local_98,PTR_DAT_04bb4bd0,PTR_DAT_04bb3ea0,PTR_DAT_04bb4bc8);
  FUN_03ef4a78(&local_b8,&local_a0,puVar4,puVar2,puVar3);
  fVar7 = *param_7;
  fVar9 = param_7[1];
  fVar12 = param_7[2];
  fVar10 = -(fVar12 * fStack_a8) + local_a4 * fVar9;
  fVar8 = -(fVar9 * local_ac) + fStack_a8 * fVar7;
  fVar13 = -(fVar7 * local_a4) + local_ac * fVar12;
  fVar8 = atan2f(SQRT(fVar13 * fVar13 + fVar10 * fVar10 + fVar8 * fVar8),
                 fVar9 * fStack_a8 + local_ac * fVar7 + local_a4 * fVar12);
  fVar7 = *param_7;
  fVar12 = param_7[1];
  fVar13 = param_7[2];
  fVar11 = -(fVar13 * fStack_b4) + local_b0 * fVar12;
  fVar9 = -(fVar12 * local_b8) + fStack_b4 * fVar7;
  fVar10 = -(fVar7 * local_b0) + local_b8 * fVar13;
  fVar9 = atan2f(SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar9 * fVar9),
                 fVar12 * fStack_b4 + local_b8 * fVar7 + local_b0 * fVar13);
  fVar7 = fVar8;
  pfVar1 = &local_94;
  if (fVar9 <= fVar8) {
    fVar7 = fVar9;
    pfVar1 = &local_9c;
  }
  fVar12 = *pfVar1;
  pfVar1 = &local_98;
  if (fVar9 <= fVar8) {
    pfVar1 = &local_a0;
  }
  *param_6 = *pfVar1;
  param_6[1] = fVar12;
  return fVar7;
}

