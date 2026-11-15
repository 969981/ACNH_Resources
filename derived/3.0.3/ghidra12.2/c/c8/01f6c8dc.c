
void FUN_01f6c8dc(long *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  lVar2 = param_1[1];
  *(undefined4 *)(lVar2 + 0x13648) = 0x1e;
  uVar8 = *(undefined4 *)(lVar2 + 0x13684);
  uVar9 = *(undefined4 *)(lVar2 + 0x13688);
  uVar10 = *(undefined4 *)(lVar2 + 0x1368c);
  lVar3 = *(long *)PTR_DAT_04bb5c90;
  lVar4 = *(long *)(*(long *)(*param_1 + 8) + 0x68);
  fVar7 = *(float *)(lVar4 + 0x278);
  fVar6 = (float)*(int *)(lVar3 + 0x38) * 5.0 + 5.0;
  bVar1 = false;
  if (((float)*(int *)(lVar3 + 0x28) * 5.0 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar6)))
  {
    bVar1 = fVar7 < fVar6;
  }
  if ((!bVar1) || (fVar6 = *(float *)(lVar4 + 0x280), fVar6 < (float)*(int *)(lVar3 + 0x2c) * 5.0))
  {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)(fVar6 < (float)*(int *)(lVar3 + 0x3c) * 5.0 + 5.0);
  }
  FUN_02077fb0(*(undefined8 *)(lVar2 + 0x89b8));
  *(undefined4 *)(lVar2 + 0xa9f0) = uVar8;
  *(undefined4 *)(lVar2 + 0xa9f4) = uVar9;
  *(undefined4 *)(lVar2 + 0xa9f8) = uVar10;
  *(undefined8 *)(lVar2 + 0xaa04) = 0x3f000000;
  *(undefined8 *)(lVar2 + 0xaa0c) = 0xbf8000003c23d70a;
  *(undefined8 *)(lVar2 + 0xaa1c) = 0;
  *(undefined8 *)(lVar2 + 0xaa14) = 0xbf800000;
  *(undefined4 *)(lVar2 + 0xa9fc) = 0;
  *(uint *)(lVar2 + 0xaa00) = uVar5;
  *(undefined1 *)(lVar2 + 0xaa44) = 0;
  return;
}

