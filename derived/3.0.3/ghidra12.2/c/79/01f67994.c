
void FUN_01f67994(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_44;
  
  local_44 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x230);
  FUN_02207f70(&local_44,*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,
               (undefined4 *)(param_1 + 0x13684));
  uVar7 = *(undefined4 *)(param_1 + 0x13684);
  uVar8 = *(undefined4 *)(param_1 + 0x13688);
  uVar9 = *(undefined4 *)(param_1 + 0x1368c);
  lVar2 = *(long *)PTR_DAT_04bb5c90;
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  fVar6 = *(float *)(lVar3 + 0x278);
  fVar5 = (float)*(int *)(lVar2 + 0x38) * 5.0 + 5.0;
  bVar1 = false;
  if (((float)*(int *)(lVar2 + 0x28) * 5.0 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5)))
  {
    bVar1 = fVar6 < fVar5;
  }
  if ((!bVar1) || (fVar5 = *(float *)(lVar3 + 0x280), fVar5 < (float)*(int *)(lVar2 + 0x2c) * 5.0))
  {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)(fVar5 < (float)*(int *)(lVar2 + 0x3c) * 5.0 + 5.0);
  }
  FUN_02077fb0(*(undefined8 *)(param_1 + 0x89b8));
  *(undefined4 *)(param_1 + 0xa9f0) = uVar7;
  *(undefined4 *)(param_1 + 0xa9f4) = uVar8;
  *(undefined4 *)(param_1 + 0xa9f8) = uVar9;
  *(undefined8 *)(param_1 + 0xaa04) = 0x3f000000;
  *(undefined8 *)(param_1 + 0xaa0c) = 0xbf8000003c23d70a;
  *(undefined8 *)(param_1 + 0xaa1c) = 0;
  *(undefined8 *)(param_1 + 0xaa14) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xa9fc) = 0;
  *(uint *)(param_1 + 0xaa00) = uVar4;
  *(undefined1 *)(param_1 + 0xaa44) = 0;
  return;
}

