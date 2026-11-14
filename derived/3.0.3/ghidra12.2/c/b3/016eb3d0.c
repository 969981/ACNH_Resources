
bool FUN_016eb3d0(float param_1,float *param_2,ulong param_3)

{
  float *pfVar1;
  undefined *puVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  
  puVar2 = PTR_DAT_04bb27c8;
  local_50 = 0.0;
  if ((param_3 & 1) == 0) {
    FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,param_2,&local_50);
  }
  else {
    FUN_0093b024(*(long *)PTR_DAT_04bb27c8 + 0x28,param_2);
  }
  if ((local_50 != 4.06377e-44) && (local_50 != 5.60519e-45)) {
    return false;
  }
  fVar5 = -param_1;
  if (0.0 <= param_1) {
    fVar5 = param_1;
  }
  if (fVar5 < 1.1920929e-07) {
    return true;
  }
  local_44 = 0;
  fVar5 = param_1 * 0.0;
  local_48 = param_2[2] + param_1;
  local_50 = fVar5 + *param_2;
  local_4c = fVar5 + param_2[1];
  if ((param_3 & 1) == 0) {
    FUN_0093a950(*(long *)puVar2 + 0x28,&local_50,&local_44);
    puVar3 = PTR_DAT_04bb2d00;
    if ((local_44 != 4) && (local_44 != 0x1d)) {
      return false;
    }
    local_44 = 0;
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(DAT_05240230 >> 0x14) & 0xff0));
    fVar4 = (float)(DAT_05240230 & 0xffffff) * 5.9604645e-08;
    local_4c = fVar5 + param_2[1];
    local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
    local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
    FUN_0093a950(*(long *)puVar2 + 0x28,&local_50,&local_44);
    if ((local_44 != 0x1d) && (local_44 != 4)) {
      return false;
    }
    local_44 = 0;
    pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240230 >> 0x17 & 0xff) * 0x10);
    fVar4 = (float)((DAT_05240230 & 0x7fffff) << 1) * 5.9604645e-08;
    local_4c = fVar5 + param_2[1];
    local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
    local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
    FUN_0093a950(*(long *)puVar2 + 0x28,&local_50,&local_44);
    if ((local_44 != 0x1d) && (local_44 != 4)) {
      return false;
    }
    local_44 = 0;
    pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240230 * 3 >> 0x18) * 0x10);
    fVar4 = (float)(DAT_05240230 * 3 & 0xffffff) * 5.9604645e-08;
    local_4c = fVar5 + param_2[1];
    local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
    local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
    FUN_0093a950(*(long *)puVar2 + 0x28,&local_50,&local_44);
    if ((local_44 != 0x1d) && (local_44 != 4)) {
      return false;
    }
    local_44 = 0;
    pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240230 >> 0x16 & 0xff) * 0x10);
    fVar4 = (float)((DAT_05240230 & 0x3fffff) << 2) * 5.9604645e-08;
    local_4c = fVar5 + param_2[1];
    local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
    local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
    FUN_0093a950(*(long *)puVar2 + 0x28,&local_50,&local_44);
    if ((local_44 != 0x1d) && (local_44 != 4)) {
      return false;
    }
    local_44 = 0;
    pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240230 * 5 >> 0x18) * 0x10);
    fVar4 = (float)(DAT_05240230 * 5 & 0xffffff) * 5.9604645e-08;
    local_4c = fVar5 + param_2[1];
    local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
    local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
    FUN_0093a950(*(long *)puVar2 + 0x28,&local_50,&local_44);
    if ((local_44 != 0x1d) && (local_44 != 4)) {
      return false;
    }
    local_44 = 0;
    pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240230 * 3 >> 0x17 & 0xff) * 0x10);
    fVar4 = (float)(DAT_05240230 * 6 & 0xfffffe) * 5.9604645e-08;
    local_4c = fVar5 + param_2[1];
    local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
    local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
    FUN_0093a950(*(long *)puVar2 + 0x28,&local_50,&local_44);
    if ((local_44 != 0x1d) && (local_44 != 4)) {
      return false;
    }
    local_44 = 0;
    pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240230 * 7 >> 0x18) * 0x10);
    fVar4 = (float)(DAT_05240230 * 7 & 0xffffff) * 5.9604645e-08;
    local_4c = fVar5 + param_2[1];
    local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
    local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
    FUN_0093a950(*(long *)puVar2 + 0x28,&local_50,&local_44);
  }
  else {
    FUN_0093b024();
    puVar3 = PTR_DAT_04bb2d00;
    if ((local_44 != 0x1d) && (local_44 != 4)) {
      return false;
    }
    local_44 = 0;
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(DAT_05240230 >> 0x14) & 0xff0));
    fVar4 = (float)(DAT_05240230 & 0xffffff) * 5.9604645e-08;
    local_4c = fVar5 + param_2[1];
    local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
    local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
    FUN_0093b024(*(long *)puVar2 + 0x28,&local_50,&local_44);
    if ((local_44 != 0x1d) && (local_44 != 4)) {
      return false;
    }
    local_44 = 0;
    pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240230 >> 0x17 & 0xff) * 0x10);
    fVar4 = (float)((DAT_05240230 & 0x7fffff) << 1) * 5.9604645e-08;
    local_4c = fVar5 + param_2[1];
    local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
    local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
    FUN_0093b024(*(long *)puVar2 + 0x28,&local_50,&local_44);
    if ((local_44 != 0x1d) && (local_44 != 4)) {
      return false;
    }
    local_44 = 0;
    pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240230 * 3 >> 0x18) * 0x10);
    fVar4 = (float)(DAT_05240230 * 3 & 0xffffff) * 5.9604645e-08;
    local_4c = fVar5 + param_2[1];
    local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
    local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
    FUN_0093b024(*(long *)puVar2 + 0x28,&local_50,&local_44);
    if ((local_44 != 0x1d) && (local_44 != 4)) {
      return false;
    }
    local_44 = 0;
    pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240230 >> 0x16 & 0xff) * 0x10);
    fVar4 = (float)((DAT_05240230 & 0x3fffff) << 2) * 5.9604645e-08;
    local_4c = fVar5 + param_2[1];
    local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
    local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
    FUN_0093b024(*(long *)puVar2 + 0x28,&local_50,&local_44);
    if ((local_44 != 0x1d) && (local_44 != 4)) {
      return false;
    }
    local_44 = 0;
    pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240230 * 5 >> 0x18) * 0x10);
    fVar4 = (float)(DAT_05240230 * 5 & 0xffffff) * 5.9604645e-08;
    local_4c = fVar5 + param_2[1];
    local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
    local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
    FUN_0093b024(*(long *)puVar2 + 0x28,&local_50,&local_44);
    if ((local_44 != 0x1d) && (local_44 != 4)) {
      return false;
    }
    local_44 = 0;
    pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240230 * 3 >> 0x17 & 0xff) * 0x10);
    fVar4 = (float)(DAT_05240230 * 6 & 0xfffffe) * 5.9604645e-08;
    local_4c = fVar5 + param_2[1];
    local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
    local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
    FUN_0093b024(*(long *)puVar2 + 0x28,&local_50,&local_44);
    if ((local_44 != 0x1d) && (local_44 != 4)) {
      return false;
    }
    local_44 = 0;
    pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240230 * 7 >> 0x18) * 0x10);
    fVar4 = (float)(DAT_05240230 * 7 & 0xffffff) * 5.9604645e-08;
    local_4c = fVar5 + param_2[1];
    local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
    local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
    FUN_0093b024(*(long *)puVar2 + 0x28,&local_50,&local_44);
  }
  return local_44 == 0x1d || local_44 == 4;
}

