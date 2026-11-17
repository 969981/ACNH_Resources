
/* WARNING: Removing unreachable block (ram,0x02a7c64c) */
/* WARNING: Removing unreachable block (ram,0x02a7c700) */

byte FUN_02a7c60c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  undefined **local_20;
  int local_18;
  int iStack_14;
  
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 8) >> 1 & 1) == 0) {
    if (((*(long *)(param_1 + 0xc0) != 0) &&
        (lVar8 = *(long *)(*(long *)(param_1 + 0xc0) + 0xa0), lVar8 != 0)) &&
       (*(char *)(lVar8 + 0x48) != '\0')) {
      local_20 = &PTR_FUN_048f9730;
      fVar9 = (float)*(int *)(param_2 + 8) * 0.5;
      uVar7 = 0;
      if (fVar9 != (float)(int)fVar9) {
        uVar7 = (uint)(fVar9 < 0.0);
      }
      local_18 = (int)fVar9 - uVar7;
      fVar9 = (float)*(int *)(param_2 + 0xc) * 0.5;
      uVar7 = 0;
      if (fVar9 != (float)(int)fVar9) {
        uVar7 = (uint)(fVar9 < 0.0);
      }
      iStack_14 = (int)fVar9 - uVar7;
      bVar6 = FUN_02ad806c(param_1 + 0xb8,6,&local_20);
      goto LAB_02a7c77c;
    }
    bVar6 = 0;
    if ((*(int *)(param_2 + 8) < *(int *)(param_1 + 0x28)) ||
       (*(int *)(param_1 + 0x38) < *(int *)(param_2 + 8))) goto LAB_02a7c77c;
    iVar2 = *(int *)(param_2 + 0xc);
    if (*(int *)(param_1 + 0x2c) <= iVar2) {
      iVar3 = *(int *)(param_1 + 0x3c);
      bVar4 = SBORROW4(iVar2,iVar3);
      iVar1 = iVar2 - iVar3;
      bVar5 = iVar2 == iVar3;
      goto LAB_02a7c778;
    }
  }
  else if ((*(int *)(param_1 + 0x360) <= *(int *)(param_2 + 8) &&
            *(int *)(param_2 + 8) <= *(int *)(param_1 + 0x370)) &&
          (iVar2 = *(int *)(param_2 + 0xc), *(int *)(param_1 + 0x364) <= iVar2)) {
    iVar3 = *(int *)(param_1 + 0x374);
    bVar4 = SBORROW4(iVar2,iVar3);
    iVar1 = iVar2 - iVar3;
    bVar5 = iVar2 == iVar3;
LAB_02a7c778:
    bVar6 = bVar5 || iVar1 < 0 != bVar4;
    goto LAB_02a7c77c;
  }
  bVar6 = 0;
LAB_02a7c77c:
  return bVar6 & 1;
}

