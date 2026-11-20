
undefined8
FUN_03efb62c(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,undefined4 *param_8,undefined4 *param_9,int *param_10)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined1 auStack_9c [12];
  float local_38;
  float fStack_34;
  
  local_38 = param_1;
  fStack_34 = param_2;
  fVar5 = tanf(param_1 * 0.5);
  fVar6 = tanf(param_2 * 0.5);
  fVar11 = -fVar5;
  if (0.0 <= fVar5) {
    fVar11 = fVar5;
  }
  if (1e+07 < fVar11) {
LAB_03efb6d4:
    *param_8 = 0x40490fdb;
    *param_9 = 0x40490fdb;
    return 0;
  }
  fVar11 = -fVar6;
  if (0.0 <= fVar6) {
    fVar11 = fVar6;
  }
  if (1e+07 < fVar11) goto LAB_03efb6d4;
  fVar7 = tanf(param_4 * 0.5);
  fVar8 = tanf(param_5 * 0.5);
  fVar9 = tanf(param_6 * 0.5);
  fVar10 = tanf(param_7 * 0.5);
  fVar11 = -fVar9;
  if (0.0 <= fVar9) {
    fVar11 = fVar9;
  }
  if (1e+07 < fVar11) {
    return 0;
  }
  fVar11 = -fVar10;
  if (0.0 <= fVar10) {
    fVar11 = fVar10;
  }
  if (1e+07 < fVar11) {
    return 0;
  }
  fVar11 = -fVar7;
  if (0.0 <= fVar7) {
    fVar11 = fVar7;
  }
  if (1e+07 < fVar11) {
    return 0;
  }
  fVar11 = -fVar8;
  if (0.0 <= fVar8) {
    fVar11 = fVar8;
  }
  if (1e+07 < fVar11) {
    return 0;
  }
  FUN_03ef4a78(auStack_9c,&local_38,PTR_DAT_04bb4bd0,PTR_DAT_04bb3ea0,PTR_DAT_04bb4bc8);
  fVar11 = fVar10 - fVar9;
  fVar13 = fVar8 - fVar7;
  if ((fVar13 - fVar11 < -1.1920929e-07) || (1.1920929e-07 < fVar13 - fVar11)) {
    if (fVar13 <= fVar11) {
      fVar13 = fVar13 * 0.5;
      local_a4 = 0;
      uVar2 = FUN_03efbd10(fVar5,fVar6,fVar9 + fVar13,fVar10 - fVar13,fVar7,fVar8,&local_a4,0);
      if ((uVar2 & 1) == 0) {
        local_a4 = 0;
        fVar7 = (fVar7 + fVar8) * 0.5;
        fVar11 = (float)FUN_03efba10(fVar5,fVar6,fVar9 + fVar13,fVar7,fVar13,&local_a4,auStack_9c);
        local_ac = 0;
        fVar5 = (float)FUN_03efba10(fVar5,fVar6,fVar10 - fVar13,fVar7,fVar13,&local_ac,auStack_9c);
        if (fVar5 <= fVar11) {
          if ((fVar5 + param_3 < fVar11) || (*param_10 != 6)) goto LAB_03efb9f0;
          iVar3 = 6;
          puVar4 = &local_a4;
        }
        else {
          iVar3 = 6;
          puVar4 = &local_a4;
          if ((fVar5 <= fVar11 + param_3) && (*param_10 == 5)) {
LAB_03efb9f0:
            iVar3 = 5;
            puVar4 = &local_ac;
          }
        }
        local_a4._0_4_ = *(undefined4 *)puVar4;
        local_a4._4_4_ = *(undefined4 *)((long)puVar4 + 4);
        goto LAB_03efb9fc;
      }
    }
    else {
      fVar11 = fVar11 * 0.5;
      local_a4 = 0;
      uVar2 = FUN_03efbd10(fVar5,fVar6,fVar9,fVar10,fVar7 + fVar11,fVar8 - fVar11,&local_a4,1);
      if ((uVar2 & 1) == 0) {
        local_a4 = 0;
        fVar9 = (fVar9 + fVar10) * 0.5;
        fVar7 = (float)FUN_03efba10(fVar5,fVar6,fVar9,fVar7 + fVar11,fVar11,&local_a4,auStack_9c);
        local_ac = 0;
        fVar11 = (float)FUN_03efba10(fVar5,fVar6,fVar9,fVar8 - fVar11,fVar11,&local_ac,auStack_9c);
        puVar4 = &local_a4;
        puVar1 = &local_a4;
        if (fVar11 <= fVar7) {
          puVar4 = &local_ac;
          puVar1 = &local_ac;
        }
        uVar12 = *(undefined4 *)((long)puVar1 + 4);
        iVar3 = 4;
        if (fVar11 <= fVar7) {
          iVar3 = 3;
        }
        *param_8 = *(undefined4 *)puVar4;
        *param_9 = uVar12;
        goto LAB_03efba04;
      }
    }
    iVar3 = 2;
  }
  else {
    local_a4 = 0;
    FUN_03efba10(fVar5,fVar6,(fVar9 + fVar10) * 0.5,(fVar7 + fVar8) * 0.5,fVar11 * 0.5,&local_a4,
                 auStack_9c);
    iVar3 = 1;
  }
LAB_03efb9fc:
  *param_8 = (undefined4)local_a4;
  *param_9 = local_a4._4_4_;
LAB_03efba04:
  *param_10 = iVar3;
  return 1;
}

