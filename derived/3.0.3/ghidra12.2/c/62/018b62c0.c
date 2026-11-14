
undefined8 FUN_018b62c0(undefined8 param_1,undefined4 *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *local_60;
  int local_58;
  int iStack_54;
  undefined8 local_50;
  float local_48;
  undefined8 local_18;
  
  local_48 = 0.0;
  local_50 = 0;
  lVar5 = FUN_018b64d0(*(undefined8 *)PTR_DAT_04bb47e0,1,*param_2);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x98) + 0xf0))();
  fVar9 = *pfVar6;
  pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 200) + 0xf0))((long *)(lVar5 + 200));
  puVar3 = PTR_DAT_04bb4008;
  fVar10 = *pfVar6;
  uVar7 = FUN_01a12b00(*(undefined8 *)PTR_DAT_04bb4008,*param_2);
  if (((uVar7 & 1) != 0) && (uVar7 = FUN_01a1c7b0(&local_50,*param_2,0), (uVar7 & 1) != 0)) {
    fVar8 = (float)FUN_015cb8d4(&local_50,1);
    local_50._0_4_ = (float)local_50 + 0.0;
    local_48 = fVar10 + local_48;
    local_50 = CONCAT44(fVar9 + fVar8,(float)local_50);
    if (*(long *)(PTR_DAT_04bbec30 + 8) != 0) {
      local_58 = (int)((float)(int)(float)local_50 / 10.0) - (uint)((float)local_50 < 0.0);
      uVar1 = local_58 - *(int *)(PTR_DAT_04bbec38 + 0x10);
      if (local_58 < *(int *)(PTR_DAT_04bbec38 + 0x10) ||
          *(int *)(PTR_DAT_04bbec38 + 0x20) < local_58) {
        return 0;
      }
      iStack_54 = (int)((float)(int)local_48 / 10.0) - (uint)(local_48 < 0.0);
      uVar2 = iStack_54 - *(int *)(PTR_DAT_04bbec38 + 0x14);
      if (iStack_54 < *(int *)(PTR_DAT_04bbec38 + 0x14) ||
          *(int *)(PTR_DAT_04bbec38 + 0x24) < iStack_54) {
        return 0;
      }
      lVar5 = (long)(int)(uVar1 + *(uint *)PTR_DAT_04bbec30 * uVar2);
      if (*(uint *)(PTR_DAT_04bbec30 + 4) <= uVar2 || *(uint *)PTR_DAT_04bbec30 <= uVar1) {
        lVar5 = 0;
      }
      if (*(char *)(*(long *)(PTR_DAT_04bbec30 + 8) + lVar5 * 8 + 4) == '\0') {
        local_60 = PTR_DAT_04bb2018 + 0x10;
        local_18 = 0x400000004;
        uVar7 = FUN_0189fe80(&local_60,&local_18,1,1);
        if (((uVar7 & 1) == 0) &&
           ((uVar7 = FUN_01a12390(*(undefined8 *)puVar3,5,*param_2), (uVar7 & 1) == 0 ||
            (iVar4 = FUN_01317b90(&local_50,0), 0 < iVar4)))) {
          *(undefined4 *)(param_3 + 0x18) = 0;
          *(undefined8 *)(param_3 + 8) = local_50;
          *(float *)(param_3 + 0x10) = local_48;
          return 1;
        }
      }
    }
  }
  return 0;
}

