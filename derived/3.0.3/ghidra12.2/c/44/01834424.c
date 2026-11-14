
ulong FUN_01834424(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;
  byte local_34 [4];
  undefined4 local_30;
  float local_2c;
  undefined4 uStack_28;
  float local_24;
  
  local_2c = 4.2039e-45;
  iVar5 = *(int *)(PTR_DAT_04bb2e10 + 8);
  iVar3 = *(int *)(PTR_DAT_04bb2e10 + 0xc);
  if (*(int *)(param_1 + 0x580) == 0) {
    local_30 = 0;
    uVar2 = *(uint *)(param_1 + 0x3f4);
    uVar1 = *(uint *)(param_1 + 1000) ^ *(uint *)(param_1 + 1000) << 0xb;
    uVar7 = *(uint *)(param_1 + 0x3ec) ^ *(uint *)(param_1 + 0x3ec) << 0xb;
    *(uint *)(param_1 + 0x3ec) = uVar2;
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    uVar7 = uVar7 >> 8 ^ uVar1 >> 0x13 ^ uVar7 ^ uVar1;
    *(uint *)(param_1 + 0x3f4) = uVar7;
    uVar9 = *(undefined4 *)(param_1 + 0x3f0);
    *(uint *)(param_1 + 0x3f0) = uVar1;
    *(undefined4 *)(param_1 + 1000) = uVar9;
    local_34[0] = *(byte *)(param_1 + 0x494) ^ 1;
    local_2c = (float)(*(int *)(param_1 + 0x550) + iVar5) * 10.0 + 5.0 +
               ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) * 4.0 + -2.0;
    local_24 = (float)(*(int *)(param_1 + 0x554) + iVar3) * 10.0 + 5.0 +
               ((float)(uVar7 >> 9 | 0x3f800000) + -1.0) * 4.0 + -2.0;
    iVar5 = FUN_01a1e110(&local_2c,*(long *)(param_1 + 0x300) + 0x278,PTR_FUN_04bbe748,local_34);
    if (iVar5 == 1) {
      *(ulong *)(param_1 + 0x328) = CONCAT44(uStack_28,local_2c);
      *(float *)(param_1 + 0x330) = local_24;
      uVar9 = FUN_015cb8d4(param_1 + 0x328,1);
      *(undefined4 *)(param_1 + 0x32c) = uVar9;
    }
    return (ulong)(iVar5 == 1);
  }
  uVar1 = *(int *)(param_1 + 0x580) + 1;
  fVar8 = SQRT((float)uVar1);
  uVar7 = (uint)fVar8;
  if (fVar8 != (float)(int)fVar8) {
    uVar7 = uVar7 + 1;
  }
  uVar2 = uVar7 & 0xfffffffe;
  uVar4 = uVar7 >> 1;
  iVar5 = (uVar7 | 1) * (uVar7 | 1) - uVar1;
  if (uVar7 < 2) {
    uVar2 = 1;
  }
  iVar3 = 0;
  if (uVar2 != 0) {
    iVar3 = iVar5 / (int)uVar2;
  }
  iVar3 = iVar5 - iVar3 * uVar2;
  uVar1 = iVar3 - uVar4;
  if ((int)(uVar2 * 4) <= iVar5) {
    uVar1 = 0;
  }
  if (iVar5 < (int)(uVar2 * 3)) {
    uVar1 = -uVar4;
  }
  if (iVar5 < (int)(uVar2 * 2)) {
    uVar1 = uVar4 - iVar3;
  }
  if (iVar5 < (int)uVar2) {
    uVar1 = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x018344f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)(&UNK_018344fc + (ulong)DAT_041772c3 * 4))(uVar1);
  return uVar6;
}

