
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006729f0(float param_1,long *param_2,uint *param_3,undefined4 *param_4)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar1 = (**(code **)(*param_2 + 0x48))();
  fVar2 = *(float *)((long)param_2 + 0x1c);
  uVar10 = CONCAT44(fVar2,fVar2);
  uVar7 = NEON_frecpe(uVar10,4);
  uVar5 = NEON_scvtf(CONCAT44(iVar1 + -1,iVar1 + -1),4);
  uVar9 = NEON_frecps(uVar10,uVar7,4);
  fVar6 = (float)uVar7 * (float)uVar9;
  fVar8 = (float)((ulong)uVar7 >> 0x20) * (float)((ulong)uVar9 >> 0x20);
  uVar10 = NEON_frecps(uVar10,CONCAT44(fVar8,fVar6),4);
  uVar4 = CONCAT44(fVar8 * (float)((ulong)uVar10 >> 0x20) * param_1 * (float)((ulong)uVar5 >> 0x20),
                   fVar6 * (float)uVar10 * param_1 * (float)uVar5) &
          CONCAT44(-(uint)(0.0 < fVar2),-(uint)(0.0 < fVar2));
  fVar2 = (float)FUN_004373b0();
  *param_3 = (int)fVar2;
  if (iVar1 - 2U < (uint)(int)fVar2) {
    *param_3 = iVar1 - 2U;
    uVar3 = 0x3f800000;
  }
  else {
    fVar6 = (float)uVar4 - fVar2;
    fVar2 = (float)(uVar4 >> 0x20) - fVar2;
    uVar10 = NEON_fmax(DAT_0413f310,
                       _DAT_0413f320 ^
                       (_DAT_0413f320 ^ CONCAT44(fVar2,fVar6)) &
                       CONCAT44(-(uint)(fVar2 < (float)(_DAT_0413f320 >> 0x20)),
                                -(uint)(fVar6 < (float)_DAT_0413f320)),4);
    uVar3 = (undefined4)uVar10;
  }
  *param_4 = uVar3;
  return;
}

