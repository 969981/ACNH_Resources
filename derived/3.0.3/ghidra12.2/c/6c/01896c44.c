
void FUN_01896c44(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  float *pfVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  
  lVar4 = *(long *)(param_1 + 0x408);
  fVar9 = 0.0;
  fVar6 = 0.0;
  if (lVar4 != 0) {
    pfVar3 = (float *)(**(code **)(*(long *)(lVar4 + 0x158) + 0xf0))(lVar4 + 0x158);
    fVar9 = *pfVar3;
    lVar4 = *(long *)(param_1 + 0x408);
    if (lVar4 == 0) {
      fVar6 = 0.0;
    }
    else {
      pfVar3 = (float *)(**(code **)(*(long *)(lVar4 + 0x188) + 0xf0))(lVar4 + 0x188);
      fVar6 = *pfVar3;
    }
  }
  uVar5 = *(uint *)(param_1 + 1000);
  *(undefined4 *)(param_1 + 0x430) = 0;
  fVar7 = fVar9;
  if (fVar9 <= fVar6) {
    fVar7 = fVar6;
  }
  uVar1 = *(uint *)(param_1 + 0x3dc) ^ *(uint *)(param_1 + 0x3dc) << 0xb;
  uVar1 = uVar1 >> 8 ^ uVar5 >> 0x13 ^ uVar1 ^ uVar5;
  *(uint *)(param_1 + 1000) = uVar1;
  *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x3e0);
  uVar2 = *(undefined4 *)(param_1 + 0x3e4);
  *(uint *)(param_1 + 0x3e4) = uVar5;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  uVar5 = (uint)((fVar9 + (fVar7 - fVar9) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0)) * 30.0);
  *(byte *)(param_1 + 0x43c) = (byte)(uVar5 >> 0x1f);
  *(uint *)(param_1 + 0x438) = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x434) = uVar5 & (int)uVar5 >> 0x1f;
  FUN_0188a148(param_1,10,0);
  uVar8 = 0;
  if (*(char *)(param_1 + 0x422) != '\0') {
    uVar8 = 0x3dcccccd;
  }
  if (((*(long *)(param_1 + 0x48) != 0) &&
      (lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x60), lVar4 != 0)) &&
     (*(long *)(lVar4 + 0x1138) != 0)) {
    FUN_03850760(uVar8);
  }
  *(undefined4 *)(param_1 + 0x410) = 0;
  return;
}

