
undefined8 FUN_01fa4014(long param_1,float *param_2,float *param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((4 < *(int *)(param_1 + 0x77b0) - 3U) &&
     ((*(int *)(param_1 + 0xaf88) != 1 ||
      (((*(int *)(*(long *)(param_1 + 8) + 0x750) == 0 && (*(int *)(param_1 + 0xaf8c) != 8)) &&
       (*(int *)(param_1 + 0x12040) < 1)))))) {
    fVar5 = param_3[2];
    fVar7 = 5.0;
    if ((param_4 & 1) == 0) {
      fVar7 = -5.0;
    }
    fVar7 = fVar7 + *param_3;
    uVar3 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
    uVar1 = *(ushort *)(param_1 + 0x188);
    if (((uint)uVar1 <= (uVar3 & 0xffff)) &&
       ((uVar3 & 0xffff) <= (((uint)uVar1 + (uint)*(ushort *)(param_1 + 0x194)) - 1 & 0xffff))) {
      uVar4 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
      uVar2 = *(ushort *)(param_1 + 0x18a);
      if (((uint)uVar2 <= (uVar4 & 0xffff)) &&
         (((uVar4 & 0xffff) <= (((uint)uVar2 + (uint)*(ushort *)(param_1 + 0x198)) - 1 & 0xffff) &&
          (uVar3 = (uVar3 - uVar1) + *(int *)(*(long *)(param_1 + 0x1c8) + 0x1c) * (uVar4 - uVar2),
          (*(uint *)(*(long *)(*(long *)(param_1 + 0x1c8) + 0x10) + (long)((int)uVar3 >> 5) * 4) >>
           (ulong)(uVar3 & 0x1f) & 1) != 0)))) {
        fVar6 = param_3[1];
        param_2[2] = fVar5;
        *param_2 = fVar7;
        param_2[1] = fVar6;
        return 1;
      }
    }
  }
  return 0;
}

