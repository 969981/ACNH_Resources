
void FUN_015bbd5c(long param_1)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_88;
  undefined **local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined *puStack_30;
  char *local_28;
  
  *(long *)(param_1 + 0xc40) = param_1;
  *(undefined1 **)(param_1 + 0xc48) = &LAB_015ca64c;
  lVar3 = *(long *)(param_1 + 0xc30);
  *(undefined8 *)(param_1 + 0xc50) = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x280) + 8);
  if (lVar2 == 0) {
    *(undefined8 *)(lVar3 + 0xb8) = 0;
LAB_015bbe14:
    uVar5 = 0;
  }
  else {
    pfVar1 = (float *)(**(code **)(*(long *)(lVar2 + 0x4e8) + 0xf0))(lVar2 + 0x4e8);
    fVar4 = *pfVar1;
    *(float *)(lVar3 + 0xb8) = fVar4;
    fVar6 = pfVar1[1];
    *(float *)(lVar3 + 0xbc) = fVar6;
    if ((fVar4 == 0.0) && (fVar6 == 0.0)) goto LAB_015bbe1c;
    fVar7 = SQRT(fVar6 * fVar6 + fVar4 * fVar4);
    if (0.0 < fVar7) {
      fVar7 = 1.0 / fVar7;
      *(float *)(lVar3 + 0xb8) = fVar4 * fVar7;
      *(float *)(lVar3 + 0xbc) = fVar6 * fVar7;
    }
    if (*(char *)(*(long *)PTR_DAT_04bb30a0 + 0x653dc) == '\0') goto LAB_015bbe14;
    uVar5 = *(undefined4 *)(*(long *)PTR_DAT_04bb30a0 + 0x653c0);
  }
  *(undefined4 *)(lVar3 + 0xc0) = uVar5;
LAB_015bbe1c:
  local_48 = *(undefined8 *)(param_1 + 0xc30);
  local_50 = param_1 + 0xc38;
  local_70 = PTR_DAT_04bb5070 + 0x10;
  local_60 = 0;
  uStack_40 = 0;
  local_88 = 0;
  local_68 = 1;
  local_66 = 1;
  puStack_30 = PTR_DAT_04bb2020 + 0x10;
  local_38 = 0;
  local_28 = "WaveSimulation::CalcParam";
  local_58 = (*(undefined8 **)PTR_DAT_04bb49a8)[1];
  local_80 = &local_70;
  uStack_78 = 0;
  FUN_03f45184(**(undefined8 **)PTR_DAT_04bb49a8,&local_88);
  return;
}

