
void FUN_018995f0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  float *pfVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined *local_40;
  undefined *puStack_38;
  
  fVar7 = 0.0;
  if (*(long *)(param_1 + 0x408) == 0) {
    fVar8 = 0.0;
  }
  else {
    pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x408) + 200) + 0xf0))();
    fVar8 = *pfVar3;
    if (*(long *)(param_1 + 0x408) != 0) {
      pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x408) + 0xf8) + 0xf0))();
      fVar7 = *pfVar3;
    }
  }
  uVar5 = *(uint *)(param_1 + 1000);
  *(undefined4 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  fVar6 = fVar8;
  if (fVar8 <= fVar7) {
    fVar6 = fVar7;
  }
  uVar1 = *(uint *)(param_1 + 0x3dc) ^ *(uint *)(param_1 + 0x3dc) << 0xb;
  uVar1 = uVar1 >> 8 ^ uVar5 >> 0x13 ^ uVar1 ^ uVar5;
  *(uint *)(param_1 + 1000) = uVar1;
  *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x3e0);
  uVar2 = *(undefined4 *)(param_1 + 0x3e4);
  *(uint *)(param_1 + 0x3e4) = uVar5;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  uVar5 = (uint)((fVar8 + (fVar6 - fVar8) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0)) * 30.0);
  *(byte *)(param_1 + 0x43c) = (byte)(uVar5 >> 0x1f);
  *(uint *)(param_1 + 0x438) = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x434) = uVar5 & (int)uVar5 >> 0x1f;
  if (*(int *)(param_1 + 0x3a8) == 0x25c) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    puStack_38 = &DAT_04066ff3;
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x60) != 0) {
        FUN_0073d870(*(long *)(lVar4 + 0x60),&local_40,10,0,0);
        lVar4 = *(long *)(param_1 + 0x48);
        if (lVar4 == 0) goto LAB_01899750;
      }
      if ((*(long *)(lVar4 + 0x60) != 0) && (*(long *)(*(long *)(lVar4 + 0x60) + 0x1138) != 0)) {
        FUN_03850760(0);
      }
    }
  }
  else {
    FUN_0188a148(param_1,10,0);
  }
LAB_01899750:
  *(undefined4 *)(param_1 + 0x410) = 0;
  return;
}

