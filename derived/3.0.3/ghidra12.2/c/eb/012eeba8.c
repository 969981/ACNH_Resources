
/* WARNING: Removing unreachable block (ram,0x012eebec) */

undefined8 FUN_012eeba8(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *local_38;
  undefined *puStack_30;
  int local_28;
  int iStack_24;
  undefined *local_20;
  int local_18;
  int iStack_14;
  
  lVar10 = *(long *)(param_2 + 0x18);
  if ((lVar10 == 0) || (*(long *)PTR_DAT_04bb2200 == 0)) {
    return 0;
  }
  lVar11 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50);
  if (lVar11 == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x118);
    uVar9 = 0;
    if (lVar11 != 0) {
      local_38 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_30 = PTR_DAT_04bb2010 + 0x10;
      sVar3 = *(short *)(lVar10 + 4);
      sVar4 = *(short *)(lVar10 + 8);
      sVar5 = *(short *)(lVar10 + 6);
      sVar6 = *(short *)(lVar10 + 10);
      iVar7 = (int)sVar3;
      if (sVar4 <= sVar3) {
        iVar7 = (int)sVar4;
      }
      iVar8 = (int)sVar3;
      if (sVar3 <= sVar4) {
        iVar8 = (int)sVar4;
      }
      iVar1 = (int)sVar5;
      if (sVar5 <= sVar6) {
        iVar1 = (int)sVar6;
      }
      iVar2 = (int)sVar5;
      if (sVar6 <= sVar5) {
        iVar2 = (int)sVar6;
      }
      fVar14 = (float)iVar7 * 10.0 + 2.5;
      fVar15 = (float)iVar2 * 10.0 + 2.5;
      fVar12 = (float)iVar8 * 10.0 + 10.0 + -2.5;
      fVar13 = (float)iVar1 * 10.0 + 10.0 + -2.5;
      local_18 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
      iStack_14 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
      iVar7 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
      iVar8 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
      local_28 = local_18;
      if (iVar7 <= local_18) {
        local_28 = iVar7;
      }
      if (local_18 <= iVar7) {
        local_18 = iVar7;
      }
      iStack_24 = iStack_14;
      if (iVar8 <= iStack_14) {
        iStack_24 = iVar8;
      }
      if (iStack_14 <= iVar8) {
        iStack_14 = iVar8;
      }
      local_20 = puStack_30;
      FUN_015bc540(lVar11,&local_38,*(undefined1 *)(param_2 + 0x25));
      uVar9 = 1;
    }
  }
  return uVar9;
}

