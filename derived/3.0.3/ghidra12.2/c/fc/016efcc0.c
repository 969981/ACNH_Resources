
bool FUN_016efcc0(float param_1,float *param_2,ulong param_3)

{
  float *pfVar1;
  uint *puVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  float fVar7;
  float local_6c;
  float fStack_68;
  float local_64;
  
  uVar5 = FUN_0245bbd8();
  puVar3 = PTR_DAT_04bb2d00;
  if ((uVar5 & 1) != 0) {
    return true;
  }
  if (DAT_04c487d4 != -1) {
    local_6c = 0.0;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar2 & 1) != 0) && ((param_3 & 1) != 0)) {
      fVar7 = (float)FUN_016e026c(0,param_2,0,0);
      puVar3 = PTR_DAT_04bb2d00;
      if (20.0 < fVar7) {
        return true;
      }
      fVar7 = -param_1;
      if (0.0 <= param_1) {
        fVar7 = param_1;
      }
      if (fVar7 < 1.1920929e-07) {
        return false;
      }
      uVar6 = 0;
      bVar4 = true;
      while( true ) {
        pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240234 * uVar6 >> 0x18) * 0x10);
        fVar7 = (float)(DAT_05240234 * uVar6 & 0xffffff) * 5.9604645e-08;
        fStack_68 = param_1 * 0.0 + param_2[1];
        local_6c = (*pfVar1 + fVar7 * pfVar1[1]) * param_1 + *param_2;
        local_64 = (pfVar1[2] + fVar7 * pfVar1[3]) * param_1 + param_2[2];
        uVar5 = FUN_0245bbd8(&local_6c);
        if ((uVar5 & 1) != 0) {
          return bVar4;
        }
        fVar7 = (float)FUN_016e026c(0,&local_6c,0,0);
        if (20.0 < fVar7) break;
        bVar4 = uVar6 < 0xf;
        uVar6 = uVar6 + 1;
        if (uVar6 == 0x10) {
          return bVar4;
        }
      }
      return bVar4;
    }
  }
  fVar7 = -param_1;
  if (0.0 <= param_1) {
    fVar7 = param_1;
  }
  if (fVar7 < 1.1920929e-07) {
    return false;
  }
  uVar6 = 0;
  bVar4 = true;
  do {
    pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240234 * uVar6 >> 0x18) * 0x10);
    fVar7 = (float)(DAT_05240234 * uVar6 & 0xffffff) * 5.9604645e-08;
    fStack_68 = param_1 * 0.0 + param_2[1];
    local_6c = (*pfVar1 + fVar7 * pfVar1[1]) * param_1 + *param_2;
    local_64 = (pfVar1[2] + fVar7 * pfVar1[3]) * param_1 + param_2[2];
    uVar5 = FUN_0245bbd8(&local_6c);
    if ((uVar5 & 1) != 0) {
      return bVar4;
    }
    bVar4 = uVar6 < 0xf;
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0x10);
  return bVar4;
}

