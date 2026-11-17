
/* WARNING: Removing unreachable block (ram,0x02a7ce54) */

ulong FUN_02a7ce18(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return 0;
  }
  if (((*(long *)(param_1 + 0xc0) != 0) &&
      (lVar8 = *(long *)(*(long *)(param_1 + 0xc0) + 0x80), lVar8 != 0)) &&
     (*(char *)(lVar8 + 0x48) != '\0')) {
    uVar6 = FUN_02ad806c(param_1 + 0xb8,9);
    return uVar6;
  }
  fVar10 = (float)*(int *)(param_2 + 0xc) * 10.0;
  fVar9 = (float)*(int *)(param_2 + 8) * 10.0;
  fVar12 = fVar9 + 2.5;
  fVar11 = fVar10 + 2.5;
  fVar9 = fVar9 + 10.0 + -2.5;
  fVar10 = fVar10 + 10.0 + -2.5;
  iVar2 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iVar3 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  iVar4 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  iVar5 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
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
  uVar7 = (uint)(*(int *)(param_1 + 0x38) < iVar1 || iVar2 < *(int *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x3c) < iVar4 || iVar3 < *(int *)(param_1 + 0x2c)) {
    uVar7 = 1;
  }
  return (ulong)(uVar7 ^ 1);
}

