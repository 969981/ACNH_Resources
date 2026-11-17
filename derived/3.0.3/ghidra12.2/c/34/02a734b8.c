
/* WARNING: Removing unreachable block (ram,0x02a734d4) */
/* WARNING: Removing unreachable block (ram,0x02a734e4) */

void FUN_02a734b8(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar8 = *(long *)(DAT_0519d040 + 0x1f8);
  if (lVar8 == 0) {
    return;
  }
  fVar10 = (float)*(int *)(lVar8 + 0x24) * 0.5;
  fVar9 = (float)*(int *)(lVar8 + 0x20) * 0.5;
  uVar7 = 0;
  if (fVar9 != (float)(int)fVar9) {
    uVar7 = (uint)(fVar9 < 0.0);
  }
  iVar2 = (int)fVar9 - uVar7;
  fVar11 = (float)*(int *)(lVar8 + 0x30) * 0.5;
  fVar9 = (float)*(int *)(lVar8 + 0x34) * 0.5;
  uVar7 = 0;
  if (fVar10 != (float)(int)fVar10) {
    uVar7 = (uint)(fVar10 < 0.0);
  }
  iVar3 = (int)fVar10 - uVar7;
  uVar7 = 0;
  if (fVar11 != (float)(int)fVar11) {
    uVar7 = (uint)(fVar11 < 0.0);
  }
  iVar4 = (int)fVar11 - uVar7;
  uVar7 = 0;
  if (fVar9 != (float)(int)fVar9) {
    uVar7 = (uint)(fVar9 < 0.0);
  }
  iVar5 = (int)fVar9 - uVar7;
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
  iVar2 = (iVar2 - iVar1) + 1;
  iVar3 = (iVar3 - iVar4) + 1;
  *(int *)(param_1 + 8) = iVar2;
  *(int *)(param_1 + 0xc) = iVar3;
  if ((*(long *)PTR_DAT_04bb2720 == 0) ||
     (lVar8 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar8 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar8 + 0xd0);
  }
  FUN_03856c54(param_1 + 0x10,iVar3 * iVar2,uVar6);
  return;
}

