
bool FUN_032d70a8(long *param_1,long param_2)

{
  ushort uVar1;
  bool bVar2;
  ushort uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_2 + 8);
  local_50 = PTR_DAT_04bc8e78 + 0x10;
  fVar5 = (float)FUN_032d8d10(param_1,&local_50);
  lVar4 = *param_1;
  if ((fVar5 <= *(float *)(lVar4 + 0x50)) ||
     (fVar5 = (*(float *)(lVar4 + 0x50) / fVar5) * 0.9999, fVar5 < 0.0)) {
    bVar2 = true;
  }
  else {
    fVar6 = *(float *)(lVar4 + 0xf8);
    fVar7 = *(float *)(lVar4 + 0xfc);
    fVar8 = fVar5 * fVar6;
    fVar9 = 16.0;
    if (16.0 <= fVar8) {
      fVar9 = fVar8;
    }
    fVar10 = 24.0;
    if (24.0 <= fVar5 * fVar7) {
      fVar10 = fVar5 * fVar7;
    }
    bVar2 = false;
    if ((fVar9 == fVar6) && (bVar2 = false, !NAN(fVar10) && !NAN(fVar7))) {
      bVar2 = fVar10 == fVar7;
    }
    if ((!bVar2) && (lVar4 = FUN_032cbf00(*(undefined8 *)(lVar4 + 0x18)), lVar4 != 0)) {
      *(undefined1 *)(lVar4 + 0xd2) = 0;
    }
    local_50 = (undefined *)CONCAT44(fVar10,fVar9);
    FUN_0038aa38(*param_1,&local_50);
    lVar4 = *param_1;
    fVar7 = *(float *)(lVar4 + 0x104);
    uVar1 = *(ushort *)(lVar4 + 0x114) >> 2 & 1;
    fVar5 = (fVar9 / fVar6) * fVar7;
    if (fVar7 != fVar5) {
      uVar1 = 1;
    }
    uVar3 = 4;
    if (uVar1 == 0) {
      uVar3 = 0;
    }
    *(ushort *)(lVar4 + 0x114) = uVar3 | *(ushort *)(lVar4 + 0x114) & 0xfffb;
    if (fVar7 != fVar5) {
      *(float *)(lVar4 + 0x104) = fVar5;
    }
    lVar4 = *param_1;
    fVar7 = *(float *)(lVar4 + 0x100);
    uVar1 = *(ushort *)(lVar4 + 0x114) >> 2 & 1;
    fVar5 = (fVar9 / fVar6) * fVar7;
    if (fVar7 != fVar5) {
      uVar1 = 1;
    }
    uVar3 = 4;
    if (uVar1 == 0) {
      uVar3 = 0;
    }
    *(ushort *)(lVar4 + 0x114) = uVar3 | *(ushort *)(lVar4 + 0x114) & 0xfffb;
    if (fVar7 != fVar5) {
      *(float *)(lVar4 + 0x100) = fVar5;
    }
    bVar2 = 16.0 <= fVar8;
  }
  return bVar2;
}

