
void FUN_03d759c4(long param_1)

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
  float fVar10;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float fStack_68;
  float local_64;
  undefined *local_60;
  undefined4 local_58;
  
  fVar3 = *(float *)(param_1 + 0x2e0);
  plVar2 = *(long **)(param_1 + 0x288);
  fVar4 = 1.0;
  if (fVar3 <= 1.0) {
    fVar4 = fVar3;
  }
  fVar5 = 0.0;
  if (0.0 <= fVar3) {
    fVar5 = fVar4;
  }
  *(float *)(param_1 + 0x2e0) = fVar5;
  local_60 = PTR_DAT_04bc4f00 + 0x10;
  fVar4 = 1.0 - fVar5;
  if (*(int *)(param_1 + 0x2b0) != 1) {
    fVar4 = fVar5;
  }
  local_58 = 0x15;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_60);
  (**(code **)(plVar2[3] + 0x168))(fVar4,plVar2[1]);
  if ((*(ushort *)(param_1 + 0x2f8) >> 1 & 1) != 0) {
    FUN_03d75be4(param_1);
  }
  puVar1 = PTR_DAT_04bc0cb8;
  fVar4 = *(float *)(param_1 + 0x2c0);
  fVar3 = *(float *)(param_1 + 0x2b4);
  fVar5 = *(float *)(param_1 + 0x2c4);
  fVar6 = *(float *)(param_1 + 0x2b8);
  fVar7 = *(float *)(param_1 + 0x2c8);
  fVar8 = *(float *)(param_1 + 700);
  fVar9 = *(float *)(param_1 + 0x2e0);
  plVar2 = *(long **)(param_1 + 0x290);
  if (plVar2[1] == 0) {
    plVar2 = *(long **)(param_1 + 0x1d0);
  }
  local_60 = PTR_DAT_04bc0cb8 + 0x10;
  local_58 = 0x29;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_60);
  (**(code **)(plVar2[3] + 0x2b0))(&local_6c,plVar2[1]);
  local_60 = puVar1 + 0x10;
  plVar2 = *(long **)(param_1 + 0x298);
  local_58 = 0x2b;
  fVar10 = (fVar3 + (fVar4 - fVar3) * fVar9) - local_6c;
  fVar3 = (fVar6 + (fVar5 - fVar6) * fVar9) - fStack_68;
  fVar4 = (fVar8 + (fVar7 - fVar8) * fVar9) - local_64;
  local_78 = fVar10;
  local_74 = fVar3;
  local_70 = fVar4;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_60);
  (**(code **)(plVar2[3] + 0x2d0))(&local_84,plVar2[1]);
  if (0.0 < local_84) {
    local_78 = fVar10 / local_84;
  }
  if (0.0 < local_80) {
    local_74 = fVar3 / local_80;
  }
  if (0.0 < local_7c) {
    local_70 = fVar4 / local_7c;
  }
  plVar2 = *(long **)(param_1 + 0x298);
  local_60 = puVar1 + 0x10;
  local_58 = 8;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_60);
  (**(code **)(plVar2[3] + 0x98))(plVar2[1],&local_78);
  return;
}

