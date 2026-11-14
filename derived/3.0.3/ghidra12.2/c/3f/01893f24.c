
void FUN_01893f24(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  float *pfVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *local_40;
  undefined1 *puStack_38;
  
  lVar7 = *(long *)(param_1 + 0x400);
  if (lVar7 != 0) {
    pfVar3 = (float *)(**(code **)(*(long *)(lVar7 + 0xf0) + 0xf0))((long *)(lVar7 + 0xf0));
    fVar10 = *pfVar3;
    pfVar3 = (float *)(**(code **)(*(long *)(lVar7 + 0x120) + 0xf0))(lVar7 + 0x120);
    uVar1 = *(uint *)(param_1 + 1000);
    uVar6 = *(uint *)(param_1 + 0x3dc) ^ *(uint *)(param_1 + 0x3dc) << 0xb;
    fVar8 = *pfVar3;
    *(undefined4 *)(param_1 + 0x430) = 0;
    *(undefined4 *)(param_1 + 0x468) = 0;
    fVar9 = fVar10;
    if (fVar10 <= fVar8) {
      fVar9 = fVar8;
    }
    uVar6 = uVar6 >> 8 ^ uVar1 >> 0x13 ^ uVar6 ^ uVar1;
    *(uint *)(param_1 + 1000) = uVar6;
    *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x3e0);
    uVar2 = *(undefined4 *)(param_1 + 0x3e4);
    *(uint *)(param_1 + 0x3e4) = uVar1;
    *(undefined4 *)(param_1 + 0x3e0) = uVar2;
    uVar6 = (uint)((fVar10 + (fVar9 - fVar10) * ((float)(uVar6 >> 9 | 0x3f800000) + -1.0)) * 30.0);
    *(byte *)(param_1 + 0x43c) = (byte)(uVar6 >> 0x1f);
    *(uint *)(param_1 + 0x438) = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    *(uint *)(param_1 + 0x434) = uVar6 & (int)uVar6 >> 0x1f;
    if ((*(long *)PTR_DAT_04bb4008 != 0) &&
       (uVar4 = FUN_01a12390(*(long *)PTR_DAT_04bb4008,0,*(undefined4 *)(param_1 + 0x3a8)),
       (uVar4 & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x454) = 0;
      *(undefined8 *)(param_1 + 0x448) = 0;
      *(undefined4 *)(param_1 + 0x450) = 0x1e;
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    puStack_38 = &DAT_040ba9de;
    lVar7 = *(long *)(param_1 + 0x408);
    if (lVar7 == 0) {
      iVar5 = 0;
      lVar7 = *(long *)(param_1 + 0x48);
    }
    else {
      pfVar3 = (float *)(**(code **)(*(long *)(lVar7 + 0x1e8) + 0xf0))(lVar7 + 0x1e8);
      iVar5 = (int)*pfVar3;
      lVar7 = *(long *)(param_1 + 0x48);
    }
    if (lVar7 != 0) {
      if (*(long *)(lVar7 + 0x60) != 0) {
        FUN_0073d870(*(long *)(lVar7 + 0x60),&local_40,iVar5,0,0);
        lVar7 = *(long *)(param_1 + 0x48);
        if (lVar7 == 0) {
          return;
        }
      }
      if ((*(long *)(lVar7 + 0x60) != 0) && (*(long *)(*(long *)(lVar7 + 0x60) + 0x1138) != 0)) {
        FUN_03850760(0);
      }
    }
  }
  return;
}

