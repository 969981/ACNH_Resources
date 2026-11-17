
void FUN_03126930(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  fVar14 = *(float *)(param_1 + 0x35c);
  plVar11 = *(long **)(param_1 + 0x330);
  fVar13 = 1.0;
  if (fVar14 <= 1.0) {
    fVar13 = fVar14;
  }
  fVar15 = 0.0;
  if (0.0 <= fVar14) {
    fVar15 = fVar13;
  }
  *(float *)(param_1 + 0x35c) = fVar15;
  puVar4 = PTR_DAT_04bc0cb8;
  if (plVar11 == (long *)0x0) {
    plVar11 = *(long **)(param_1 + 0x310);
    local_50 = PTR_DAT_04bc0cb8 + 0x10;
    local_48 = 8;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_50);
    puVar8 = (undefined8 *)(**(code **)(plVar11[3] + 0xa0))(plVar11[1]);
    local_58 = *(undefined4 *)(puVar8 + 1);
    if (*(char *)(param_1 + 0x368) == '\0') {
      fVar13 = *(float *)(param_1 + 0x354) +
               *(float *)(param_1 + 0x35c) * *(float *)(param_1 + 0x358);
      local_60._0_4_ = (undefined4)*puVar8;
      local_60 = CONCAT44(fVar13,(undefined4)local_60);
      if (*(char *)(param_1 + 0x369) == '\0') {
        local_60 = CONCAT44(fVar13 + (*(float *)(param_1 + 0x33c) / *(float *)(param_1 + 0x360)) *
                                     0.5,(undefined4)local_60);
      }
    }
    else {
      fVar13 = *(float *)(param_1 + 0x350) +
               *(float *)(param_1 + 0x35c) * *(float *)(param_1 + 0x358);
      local_60._4_4_ = (undefined4)((ulong)*puVar8 >> 0x20);
      local_60 = CONCAT44(local_60._4_4_,fVar13);
      if (*(char *)(param_1 + 0x369) == '\0') {
        local_60 = CONCAT44(local_60._4_4_,
                            fVar13 + (*(float *)(param_1 + 0x338) / *(float *)(param_1 + 0x360)) *
                                     0.5);
      }
    }
    plVar11 = *(long **)(param_1 + 0x310);
    local_50 = puVar4 + 0x10;
    local_48 = 8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_50);
    (**(code **)(plVar11[3] + 0x98))(plVar11[1],&local_60);
    lVar10 = *(long *)(param_1 + 0x390);
  }
  else {
    if (*(char *)(param_1 + 0x369) == '\0') {
      fVar15 = fVar15 + (1.0 / *(float *)(param_1 + 0x360)) * 0.5;
    }
    local_50 = PTR_DAT_04bc4f00 + 0x10;
    local_48 = 0x15;
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_50);
    (**(code **)(plVar11[3] + 0x168))(fVar15,plVar11[1]);
    plVar11 = *(long **)(param_1 + 0x330);
    local_50 = PTR_DAT_04bc4e68 + 0x10;
    local_48 = 9;
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_50);
    (**(code **)(plVar11[3] + 0x1d0))(plVar11[1]);
    lVar10 = *(long *)(param_1 + 0x390);
  }
  if (lVar10 != 0) {
    *(undefined4 *)(lVar10 + 0x40) = *(undefined4 *)(param_1 + 0x35c);
  }
  plVar11 = *(long **)(param_1 + 0x310);
  lVar12 = *(long *)PTR_DAT_04bb2230;
  local_50 = puVar4 + 0x10;
  local_48 = 0x29;
  (**(code **)(*plVar11 + 0x20))(plVar11,&local_50);
  (**(code **)(plVar11[3] + 0x2b0))(&local_50,plVar11[1]);
  uVar5 = (undefined4)local_50;
  uVar6 = local_50._4_4_;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar10 == 0) {
    iVar7 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar7 = (int)lVar10 + -1;
  }
  uVar9 = 1;
  if (iVar7 != 1) {
    uVar9 = 2;
  }
  uVar2 = 0;
  if (iVar7 != 0) {
    uVar2 = uVar9;
  }
  pbVar1 = (byte *)(lVar12 + 0x288);
  pbVar3 = pbVar1 + (ulong)uVar2 * 0x44;
  if (2 < uVar2) {
    pbVar3 = pbVar1;
  }
  *(undefined4 *)(pbVar3 + 0x38) = uVar5;
  *(undefined4 *)(pbVar3 + 0x3c) = uVar6;
  pbVar3[4] = pbVar3[4] | 0x20;
  pbVar3 = pbVar1 + (ulong)uVar2 * 0x44;
  if (2 < uVar2) {
    pbVar3 = pbVar1;
  }
  *pbVar3 = *pbVar3 | 0x20;
  return;
}

