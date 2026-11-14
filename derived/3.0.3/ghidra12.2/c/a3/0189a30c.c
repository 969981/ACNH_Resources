
void FUN_0189a30c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(char *)(param_1 + 0x478) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x3dc);
    *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x3e0);
    uVar1 = uVar1 ^ uVar1 << 0xb;
    *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_1 + 0x3e4);
    uVar3 = *(uint *)(param_1 + 1000);
    uVar2 = uVar1 ^ uVar3;
    *(uint *)(param_1 + 0x3e4) = uVar3;
    uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar2;
    *(uint *)(param_1 + 1000) = uVar1;
    uVar6 = (ulong)(uVar2 >> 0x18);
    fVar8 = (float)(uVar1 & 0xffffff) * 5.9604645e-08;
    fVar7 = ((float)(&DAT_041997a0)[uVar6 * 4] + fVar8 * (float)(&DAT_041997a4)[uVar6 * 4]) * 10.0;
    fVar9 = *(float *)(param_1 + 0x334) +
            ((float)(&DAT_04199798)[uVar6 * 4] + fVar8 * (float)(&DAT_0419979c)[uVar6 * 4]) * 10.0;
    fVar8 = *(float *)(param_1 + 0x33c);
  }
  else {
    if ((DAT_052ac3b8 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052ac3b8);
      if (iVar5 != 0) {
        DAT_052ac3b4 = 0x80000000;
        __cxa_guard_release(&DAT_052ac3b8);
      }
    }
    uVar1 = DAT_052ac3b4;
    uVar6 = (ulong)DAT_052ac3b4;
    iVar5 = 0;
    if (DAT_052ac3b4 != 0) {
      uVar2 = *(uint *)(param_1 + 0x3dc) ^ *(uint *)(param_1 + 0x3dc) << 0xb;
      uVar4 = *(uint *)(param_1 + 1000);
      uVar3 = *(uint *)(param_1 + 0x3e0) ^ *(uint *)(param_1 + 0x3e0) << 0xb;
      *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x3e4);
      *(uint *)(param_1 + 0x3e0) = uVar4;
      uVar2 = uVar2 >> 8 ^ uVar4 >> 0x13 ^ uVar2 ^ uVar4;
      *(uint *)(param_1 + 0x3e4) = uVar2;
      uVar3 = uVar3 >> 8 ^ uVar2 >> 0x13 ^ uVar3 ^ uVar2;
      *(uint *)(param_1 + 1000) = uVar3;
      iVar5 = 0;
      if (uVar6 != 0) {
        iVar5 = (int)(CONCAT44(uVar2,uVar3) / uVar6);
      }
      iVar5 = uVar3 - iVar5 * uVar1;
    }
    uVar1 = iVar5 + (*(int *)(param_1 + 800) - (int)((float)uVar6 * 0.5));
    uVar6 = (ulong)(uVar1 >> 0x18);
    fVar7 = (float)(uVar1 & 0xffffff) * 5.9604645e-08;
    fVar8 = ((float)(&DAT_041997a0)[uVar6 * 4] + fVar7 * (float)(&DAT_041997a4)[uVar6 * 4]) * 10.0;
    fVar9 = *(float *)(param_1 + 0x334) +
            ((float)(&DAT_04199798)[uVar6 * 4] + fVar7 * (float)(&DAT_0419979c)[uVar6 * 4]) * 10.0;
    fVar7 = *(float *)(param_1 + 0x33c);
  }
  *(float *)(param_1 + 0x328) = fVar9;
  *(float *)(param_1 + 0x330) = fVar8 + fVar7;
  *(float *)(param_1 + 0x32c) = *(float *)(param_1 + 0x338) + 0.0;
  return;
}

