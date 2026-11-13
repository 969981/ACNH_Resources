
/* WARNING: Removing unreachable block (ram,0x01377328) */
/* WARNING: Removing unreachable block (ram,0x01377338) */

byte FUN_013772ec(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) == 0) {
    return 0;
  }
  lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xb0);
  if (lVar4 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(lVar4 + 0x18);
  fVar8 = (float)*(int *)(param_1 + 8) * 0.5;
  uVar5 = 0;
  if (fVar8 != (float)(int)fVar8) {
    uVar5 = (uint)(fVar8 < 0.0);
  }
  fVar9 = (float)*(int *)(param_1 + 0xc) * 0.5;
  uVar7 = 0;
  if (fVar9 != (float)(int)fVar9) {
    uVar7 = (uint)(fVar9 < 0.0);
  }
  uVar2 = ((int)fVar8 - uVar5) - *(int *)(lVar4 + 0x28);
  uVar3 = ((int)fVar9 - uVar7) - *(int *)(lVar4 + 0x2c);
  if ((uVar2 < uVar1 && uVar3 <= *(uint *)(lVar4 + 0x1c)) &&
      (uVar1 <= uVar2 || *(uint *)(lVar4 + 0x1c) != uVar3)) {
    uVar2 = uVar2 + uVar3 * uVar1;
    lVar6 = *(long *)(lVar4 + 0x38);
  }
  else {
    if (*(char *)(lVar4 + 0x88) == '\0') {
      return 0;
    }
    uVar5 = ((int)fVar8 - uVar5) - *(int *)(lVar4 + 0x98);
    uVar1 = ((int)fVar9 - uVar7) - *(int *)(lVar4 + 0x9c);
    if (*(uint *)(lVar4 + 0xa0) <= uVar5 || *(uint *)(lVar4 + 0xa4) <= uVar1) {
      return 0;
    }
    uVar2 = uVar5 + *(uint *)(lVar4 + 0xa0) * uVar1 + *(int *)(lVar4 + 0x8c);
    lVar6 = *(long *)(lVar4 + 0x38);
  }
  if (lVar6 == 0) {
    return 0;
  }
  if (*(uint *)(lVar4 + 0x30) <= uVar2) {
    uVar2 = 0;
  }
  return *(byte *)(lVar6 + (long)(int)uVar2 * 0x68 + 0xd) & 1;
}

