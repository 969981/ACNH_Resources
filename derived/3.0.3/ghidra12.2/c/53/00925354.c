
bool FUN_00925354(float *param_1)

{
  bool bVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_60 = 0;
  local_70 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_68 = PTR_DAT_04bb2010 + 0x10;
  local_28 = 0;
  local_50 = 0;
  local_58 = puStack_68;
  local_48 = local_70;
  puStack_40 = puStack_68;
  local_30 = puStack_68;
  uVar2 = FUN_00925138(&local_48,&local_70);
  if ((uVar2 & 1) != 0) {
    fVar4 = (float)(int)local_28 * 5.0 + 5.0;
    fVar3 = *param_1;
    bVar1 = false;
    if (((float)(int)local_38 * 5.0 <= fVar3) && (bVar1 = false, !NAN(fVar3) && !NAN(fVar4))) {
      bVar1 = fVar3 < fVar4;
    }
    if (bVar1) {
      fVar5 = param_1[2];
      fVar4 = (float)local_28._4_4_ * 5.0 + 5.0;
      bVar1 = false;
      if (((float)local_38._4_4_ * 5.0 <= fVar5) && (bVar1 = false, !NAN(fVar5) && !NAN(fVar4))) {
        bVar1 = fVar5 < fVar4;
      }
      if (bVar1) {
        return true;
      }
    }
    fVar4 = (float)(int)local_50 * 5.0 + 5.0;
    bVar1 = false;
    if (((float)(int)local_60 * 5.0 <= fVar3) && (bVar1 = false, !NAN(fVar3) && !NAN(fVar4))) {
      bVar1 = fVar3 < fVar4;
    }
    if (bVar1) {
      if ((float)local_60._4_4_ * 5.0 <= param_1[2]) {
        return param_1[2] < (float)local_50._4_4_ * 5.0 + 5.0;
      }
    }
  }
  return false;
}

