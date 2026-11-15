
undefined8 FUN_022b5cac(float *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_58;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  lVar3 = FUN_0251e98c(1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x2d0) + 0xf0))(lVar3 + 0x2d0);
  fVar10 = *pfVar4;
  local_40 = 0;
  pfVar4 = (float *)(PTR_DAT_04bb2d00 + ((ulong)((uint)param_1[3] >> 0x14) & 0xff0));
  fVar6 = (float)((uint)param_1[3] & 0xffffff) * 5.9604645e-08;
  fVar7 = *pfVar4 + fVar6 * pfVar4[1];
  fVar6 = pfVar4[2] + fVar6 * pfVar4[3];
  fVar8 = fVar7 * 0.0;
  local_48 = 0x3f800000;
  fVar9 = 10.0;
  if (*(char *)(param_1 + 4) != '\0') {
    fVar9 = 9.9;
  }
  local_3c = *param_1 + fVar8 * 0.0 + fVar6 * 0.0 + fVar9 * (fVar7 + 0.0);
  local_50 = param_1[2] + (fVar6 * 0.0 * 0.0 - fVar7 * 0.0) + fVar9 * fVar6;
  local_38 = param_1[1] + (fVar8 * 0.0 + 1.0) * 0.0 + fVar6 * 0.0 * 0.0 + fVar9 * fVar8;
  local_58 = (undefined *)CONCAT44(local_38,local_3c);
  local_34 = local_50;
  lVar3 = FUN_0251e98c(1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x2a0) + 0xf0))(lVar3 + 0x2a0);
  local_44 = 0x60;
  local_4c = *pfVar4 * 0.9;
  iVar2 = FUN_016ed290(&local_58,0,0,0);
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = FUN_016f33f0(fVar10,param_1,&local_3c);
  if (*(char *)(param_1 + 4) == '\0') {
    iVar1 = -iVar2;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    if (iVar1 == 1) {
      uVar5 = FUN_016e9af4(fVar10,param_1,0,0);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      uVar5 = FUN_016e9af4(fVar10,&local_3c,0,0);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
LAB_022b5f94:
      local_50 = param_1[2];
      local_48 = 0x3f800000;
      local_58 = *(undefined **)param_1;
      local_40 = 0;
      lVar3 = FUN_0251e98c(1);
      pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x2a0) + 0xf0))(lVar3 + 0x2a0);
      local_44 = 0x77;
      local_4c = *pfVar4 * 0.9;
      iVar2 = FUN_016ed290(&local_58,0,0,0);
      if (iVar2 != 0) {
        return 0;
      }
      fVar7 = (float)FUN_016e026c(0,param_1,0,0);
      fVar6 = (float)FUN_016e026c(0,&local_3c,0,0);
      fVar7 = fVar7 - fVar6;
      fVar6 = -fVar7;
      if (0.0 <= fVar7) {
        fVar6 = fVar7;
      }
      fVar6 = fVar6 + -15.0;
      fVar7 = -fVar6;
      if (0.0 <= fVar6) {
        fVar7 = fVar6;
      }
      if (0.4 <= fVar7) {
        return 0;
      }
      return 1;
    }
  }
  else {
    local_58 = PTR_DAT_04bb2018 + 0x10;
    fVar6 = (local_3c + *param_1) * 0.5;
    fVar7 = (local_34 + param_1[2]) * 0.5;
    local_50 = (float)((int)((float)(int)fVar6 / 10.0) - (uint)(fVar6 < 0.0));
    local_4c = (float)((int)((float)(int)fVar7 / 10.0) - (uint)(fVar7 < 0.0));
    uVar5 = FUN_01317ff0(&local_58,3);
    if ((uVar5 & 1) != 0) {
      fVar7 = local_38 - param_1[1];
      fVar6 = -fVar7;
      if (0.0 <= fVar7) {
        fVar6 = fVar7;
      }
      if (fVar6 <= 30.0) {
        uVar5 = FUN_016e9c80(fVar10 * 0.9,param_1,0,0,0);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        uVar5 = FUN_016e9c80(fVar10 * 0.9,&local_3c,0,0,0);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        FUN_016e026c(0,param_1,0,0);
        FUN_016e026c(0,&local_3c,0,0);
        goto LAB_022b5f94;
      }
    }
  }
  return 0;
}

