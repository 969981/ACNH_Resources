
/* WARNING: Removing unreachable block (ram,0x02280804) */
/* WARNING: Removing unreachable block (ram,0x02280768) */
/* WARNING: Removing unreachable block (ram,0x0228089c) */

float FUN_022806a8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float local_9c;
  undefined4 uStack_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  float fStack_88;
  float local_84;
  undefined4 uStack_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float fStack_70;
  undefined8 local_6c;
  float local_64;
  
  puVar1 = PTR_DAT_04bb2200;
  fVar7 = *(float *)(param_1 + 0x324);
  fVar4 = *(float *)(param_1 + 0x2dc);
  uVar5 = *(undefined4 *)(param_1 + 0x2e0);
  fVar6 = *(float *)(param_1 + 0x2e4);
  fVar3 = SQRT(*(float *)(param_1 + 0x328) * *(float *)(param_1 + 0x328) + fVar7 * fVar7 +
               *(float *)(param_1 + 0x32c) * *(float *)(param_1 + 0x32c));
  if (0.0 < fVar3) {
    fVar7 = fVar7 * (0.1 / fVar3);
  }
  local_6c = 0;
  local_78 = fVar4 + -10.0;
  fVar3 = 0.0;
  local_64 = 0.0;
  local_74 = uVar5;
  fStack_70 = fVar6;
  if ((*(long *)PTR_DAT_04bb2200 == 0) ||
     (lVar2 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar2 == 0)) {
    local_6c._4_4_ = 0.0;
    local_6c._0_4_ = 0.0;
  }
  else {
    local_84 = 0.0;
    local_6c._4_4_ = 0.0;
    local_6c._0_4_ = 0.0;
    lVar2 = *(long *)(lVar2 + 0x118);
    if (lVar2 != 0) {
      FUN_015bca00(lVar2,&local_6c,&local_78,0,1,1);
      fVar3 = local_64;
    }
  }
  if ((((float)local_6c == 0.0) && (local_6c._4_4_ == 0.0)) && (fVar3 == 0.0)) {
    lVar2 = *(long *)puVar1;
    local_6c = 0;
    local_7c = fVar6 + 10.0;
    local_64 = 0.0;
    fVar3 = 0.0;
    local_84 = fVar4;
    uStack_80 = uVar5;
    if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x50), lVar2 == 0)) {
      local_6c._4_4_ = 0.0;
      local_6c._0_4_ = 0.0;
    }
    else {
      local_90 = 0.0;
      local_6c._4_4_ = 0.0;
      local_6c._0_4_ = 0.0;
      lVar2 = *(long *)(lVar2 + 0x118);
      if (lVar2 != 0) {
        FUN_015bca00(lVar2,&local_6c,&local_84,0,1,1);
        fVar3 = local_64;
        if ((float)local_6c != 0.0) goto LAB_0228092c;
      }
    }
    if ((local_6c._4_4_ == 0.0) && (fVar3 == 0.0)) {
      local_90 = fVar4 + 10.0;
      lVar2 = *(long *)puVar1;
      local_6c = 0;
      local_64 = 0.0;
      local_8c = uVar5;
      fStack_88 = fVar6;
      if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x50), lVar2 == 0)) {
        local_6c._4_4_ = 0.0;
        local_6c._0_4_ = 0.0;
      }
      else {
        local_9c = 0.0;
        local_6c._4_4_ = 0.0;
        local_6c._0_4_ = 0.0;
        lVar2 = *(long *)(lVar2 + 0x118);
        if (lVar2 != 0) {
          FUN_015bca00(lVar2,&local_6c,&local_90,0,1,1);
          if ((float)local_6c != 0.0) goto LAB_0228092c;
        }
      }
      if ((local_6c._4_4_ == 0.0) && (local_64 == 0.0)) {
        local_94 = fVar6 + -10.0;
        local_9c = fVar4;
        uStack_98 = uVar5;
        FUN_015bc998(&local_6c,&local_9c,0);
        if (((float)local_6c == 0.0) && ((local_6c._4_4_ == 0.0 && (local_64 == 0.0)))) {
          return fVar4;
        }
        return fVar7 + fVar4 + (float)local_6c;
      }
    }
  }
LAB_0228092c:
  return fVar7 + fVar4 + (float)local_6c;
}

