
undefined8 FUN_0092547c(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar7 = DAT_04cf1b28;
  if ((DAT_0519d040 == 0) || ((*(ushort *)(DAT_0519d040 + 0x4b68) & 1) == 0)) {
    return 0;
  }
  iVar2 = *(int *)(DAT_0519d040 + 0x4b6c);
  iVar3 = *(int *)(DAT_0519d040 + 0x4b70);
  piVar6 = (int *)(**(code **)(*(long *)(DAT_04cf1b28 + 0x330) + 0xf0))(DAT_04cf1b28 + 0x330);
  iVar2 = *piVar6 + iVar2 * 0x20;
  iVar3 = piVar6[1] + iVar3 * 0x20;
  piVar6 = (int *)(**(code **)(*(long *)(lVar7 + 0x368) + 0xf0))(lVar7 + 0x368);
  iVar4 = *piVar6;
  lVar7 = (**(code **)(*(long *)(lVar7 + 0x368) + 0xf0))(lVar7 + 0x368);
  fVar9 = (float)iVar2 * 0.5;
  fVar10 = (float)iVar3 * 0.5;
  uVar8 = 0;
  if (fVar9 != (float)(int)fVar9) {
    uVar8 = (uint)(fVar9 < 0.0);
  }
  fVar11 = (float)(iVar2 + iVar4 + -1) * 0.5;
  iVar2 = (int)fVar9 - uVar8;
  fVar9 = (float)(iVar3 + *(int *)(lVar7 + 4) + -1) * 0.5;
  uVar8 = 0;
  if (fVar10 != (float)(int)fVar10) {
    uVar8 = (uint)(fVar10 < 0.0);
  }
  iVar3 = (int)fVar10 - uVar8;
  uVar8 = 0;
  if (fVar11 != (float)(int)fVar11) {
    uVar8 = (uint)(fVar11 < 0.0);
  }
  iVar4 = (int)fVar11 - uVar8;
  uVar8 = 0;
  if (fVar9 != (float)(int)fVar9) {
    uVar8 = (uint)(fVar9 < 0.0);
  }
  iVar5 = (int)fVar9 - uVar8;
  iVar1 = iVar2;
  if (iVar4 <= iVar2) {
    iVar1 = iVar4;
  }
  if (iVar2 <= iVar4) {
    iVar2 = iVar4;
  }
  iVar4 = iVar3;
  if (iVar5 <= iVar3) {
    iVar4 = iVar5;
  }
  if (iVar3 <= iVar5) {
    iVar3 = iVar5;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  *(int *)(param_1 + 0x14) = iVar4;
  *(int *)(param_1 + 0x20) = iVar2;
  *(int *)(param_1 + 0x24) = iVar3;
  return 1;
}

