
void FUN_03d49f5c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  undefined *local_40;
  undefined4 local_38;
  
  plVar2 = *(long **)(param_1 + 0x14c0);
  puVar1 = PTR_DAT_04bc0cb8 + 0x10;
  local_68 = 5.60519e-44;
  local_70 = puVar1;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_70);
  (**(code **)(plVar2[3] + 0x2a0))(&local_70,plVar2[1]);
  plVar2 = *(long **)(param_1 + 0x14c0);
  local_80 = 0x7f7fffff7f7fffff;
  local_78 = 0xff7fffffff7fffff;
  local_38 = 0x12;
  local_40 = puVar1;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_40);
  (**(code **)(plVar2[3] + 0x140))(&local_80,plVar2[1]);
  fVar8 = fStack_64 +
          local_80._4_4_ * local_70._4_4_ + (float)local_80 * (float)local_70 + local_68 * 0.0;
  fVar7 = fStack_64 +
          local_80._4_4_ * local_70._4_4_ + (float)local_78 * (float)local_70 + local_68 * 0.0;
  fVar9 = fStack_54 + local_80._4_4_ * fStack_5c + (float)local_80 * local_60 + local_58 * 0.0;
  fVar4 = fStack_54 + local_80._4_4_ * fStack_5c + (float)local_78 * local_60 + local_58 * 0.0;
  fVar5 = fStack_64 +
          local_78._4_4_ * local_70._4_4_ + (float)local_80 * (float)local_70 + local_68 * 0.0;
  fVar3 = fStack_54 + local_78._4_4_ * fStack_5c + (float)local_80 * local_60 + local_58 * 0.0;
  fStack_64 = fStack_64 +
              local_78._4_4_ * local_70._4_4_ + (float)local_78 * (float)local_70 + local_68 * 0.0;
  fStack_54 = fStack_54 + local_78._4_4_ * fStack_5c + (float)local_78 * local_60 + local_58 * 0.0;
  fVar6 = fVar7;
  if (fVar7 <= fVar8) {
    fVar6 = fVar8;
    fVar8 = fVar7;
  }
  fVar7 = fVar4;
  if (fVar4 <= fVar9) {
    fVar7 = fVar9;
    fVar9 = fVar4;
  }
  fVar4 = fVar5;
  if (fVar8 <= fVar5) {
    fVar4 = fVar8;
  }
  fVar8 = fVar3;
  if (fVar9 <= fVar3) {
    fVar8 = fVar9;
  }
  if (fVar5 <= fVar6) {
    fVar5 = fVar6;
  }
  if (fVar3 <= fVar7) {
    fVar3 = fVar7;
  }
  fVar9 = fStack_64;
  if (fVar4 <= fStack_64) {
    fVar9 = fVar4;
  }
  fVar6 = fStack_54;
  if (fVar8 <= fStack_54) {
    fVar6 = fVar8;
  }
  if (fStack_64 <= fVar5) {
    fStack_64 = fVar5;
  }
  if (fStack_54 <= fVar3) {
    fStack_54 = fVar3;
  }
  *(float *)(param_1 + 0x14a8) = fStack_64 - fVar9;
  *(float *)(param_1 + 0x14ac) = fStack_54 - fVar6;
  *(float *)(param_1 + 0x14a0) = (fVar9 + fStack_64) * 0.5;
  *(float *)(param_1 + 0x14a4) = (fVar6 + fStack_54) * 0.5;
  return;
}

