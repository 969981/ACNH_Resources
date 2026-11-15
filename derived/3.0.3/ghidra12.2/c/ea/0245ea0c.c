
void FUN_0245ea0c(long param_1)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  fVar7 = 0.0;
  fVar3 = *(float *)(*(long *)(param_1 + 0x68) + 0x278);
  fVar4 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
  local_2c = (float)(int)((int)((float)(int)fVar3 / 5.0) - (uint)(fVar3 < 0.0)) * 5.0 + 2.5;
  local_24 = (float)(int)((int)((float)(int)fVar4 / 5.0) - (uint)(fVar4 < 0.0)) * 5.0 + 2.5;
  local_28 = FUN_016e026c(0,&local_2c,0,0);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_2c);
  lVar1 = FUN_0251e98c(1);
  pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0x360) + 0xf0))(lVar1 + 0x360);
  fVar4 = *pfVar2;
  fVar3 = -fVar4;
  if (0.0 <= fVar4) {
    fVar3 = fVar4;
  }
  fVar4 = fVar3;
  if (*(int *)(param_1 + 0x159c) == 2) {
    if (*(char *)(param_1 + 0x17ac) == '\0') {
      fVar4 = -fVar3;
      if ((*(uint *)(param_1 + 0xec8) & 1) != 0) {
        fVar4 = fVar3;
      }
    }
    else {
      fVar4 = -fVar3;
    }
  }
  lVar1 = *(long *)(param_1 + 0x68);
  local_34 = 0.0;
  local_30 = 0.0;
  if (lVar1 != 0) {
    pfVar2 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar1 + 0x2b4) >> 0x14) & 0xff0));
    fVar3 = (float)(*(uint *)(lVar1 + 0x2b4) & 0xffffff) * 5.9604645e-08;
    fVar5 = *pfVar2 + fVar3 * pfVar2[1];
    fVar3 = pfVar2[2] + fVar3 * pfVar2[3];
    fVar6 = fVar5 * 0.0;
    fVar7 = *(float *)(lVar1 + 0x278) + fVar6 * 0.0 + fVar3 * 0.0 + fVar4 * (fVar5 + 0.0);
    local_34 = *(float *)(lVar1 + 0x27c) +
               (fVar6 * 0.0 + 1.0) * 0.0 + fVar3 * 0.0 * 0.0 + fVar4 * fVar6;
    local_30 = *(float *)(lVar1 + 0x280) + (fVar3 * 0.0 * 0.0 - fVar5 * 0.0) + fVar4 * fVar3;
  }
  local_38 = fVar7;
  local_34 = (float)FUN_016e026c(0,&local_38,0,0);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_38);
  return;
}

