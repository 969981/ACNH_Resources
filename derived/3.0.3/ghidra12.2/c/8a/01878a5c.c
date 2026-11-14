
uint FUN_01878a5c(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  byte local_38 [4];
  undefined4 local_34;
  undefined *local_30;
  uint local_28;
  uint uStack_24;
  
  local_30 = PTR_DAT_04bb2010 + 0x10;
  local_28 = (int)((float)(int)*(float *)(param_1 + 0x334) / 5.0) -
             (uint)(*(float *)(param_1 + 0x334) < 0.0);
  uStack_24 = (int)((float)(int)*(float *)(param_1 + 0x33c) / 5.0) -
              (uint)(*(float *)(param_1 + 0x33c) < 0.0);
  uVar4 = FUN_01a1ab90(&local_30);
  if (((uVar4 & 1) == 0) ||
     (iVar1 = uStack_24 - ((uStack_24 & 0x80000001) == 1),
     iVar2 = local_28 - ((local_28 & 0x80000001) == 1),
     fVar5 = *(float *)(param_1 + 0x334) -
             ((float)iVar2 * 5.0 + (float)(iVar2 + 1) * 5.0 + 5.0) * 0.5,
     fVar6 = *(float *)(param_1 + 0x33c) -
             ((float)iVar1 * 5.0 + (float)(iVar1 + 1) * 5.0 + 5.0) * 0.5,
     9.765625 <= fVar6 * fVar6 + fVar5 * fVar5)) {
    local_38[0] = *(byte *)(param_1 + 0x494) ^ 1;
    local_34 = *(undefined4 *)(param_1 + 0x4a8);
    uVar3 = (**(code **)(param_1 + 0x498))
                      (*(undefined4 *)(param_1 + 0x338),local_28,uStack_24,local_38);
    uVar3 = uVar3 ^ 1;
  }
  else {
    uVar3 = 1;
  }
  return uVar3 & 1;
}

