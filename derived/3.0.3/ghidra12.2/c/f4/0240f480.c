
void FUN_0240f480(long param_1)

{
  long lVar1;
  byte bVar2;
  short sVar3;
  bool bVar4;
  float *pfVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  byte local_68 [4];
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_44 [4];
  
  local_68[0] = *(byte *)(param_1 + 0x1ee8);
  local_5c = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
  local_58 = 0x3dcccccd;
  local_54 = 0;
  local_64 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  if (7 < local_68[0]) {
    local_68[0] = 0xff;
  }
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),local_68,*(undefined4 *)(param_1 + 0x230),1);
  iVar8 = *(int *)(param_1 + 0x190a);
  sVar3 = *(short *)(param_1 + 0x190e);
  iVar9 = *(int *)(param_1 + 0x1910);
  pfVar5 = (float *)(**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
  *pfVar5 = (float)iVar8 * 0.001;
  pfVar5[1] = (float)(int)sVar3 * 0.25;
  pfVar5[2] = (float)iVar9 * 0.001;
  lVar1 = *(long *)(param_1 + 0x68) + 0x278;
  lVar6 = FUN_0251e98c(1);
  pfVar5 = (float *)(**(code **)(*(long *)(lVar6 + 0x2a0) + 0xf0))(lVar6 + 0x2a0);
  fVar10 = *pfVar5;
  FUN_01261e40(fVar10 * 0.75,&DAT_0524c908,lVar1,0,0);
  FUN_01261e40(fVar10 * 0.75,PTR_DAT_04bbcd38,lVar1,0,1);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
  bVar2 = *(byte *)(param_1 + 0x1ee8);
  uVar7 = (uint)bVar2;
  bVar4 = 7 < uVar7;
  if (bVar4) {
    uVar7 = 0xff;
  }
  local_44[0] = (undefined1)uVar7;
  lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar7 * 0x740;
  if (bVar4) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(short *)(param_1 + 0x18e1) == DAT_04c487d4) {
    *(undefined4 *)(lVar1 + 0x424) = 3;
    FUN_01393458(lVar1 + 0x4c8);
  }
  else {
    *(undefined4 *)(lVar1 + 0x424) = 4;
  }
  if (bVar2 < 8) {
    FUN_02582d8c(local_44,1);
  }
  return;
}

