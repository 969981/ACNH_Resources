
/* WARNING: Removing unreachable block (ram,0x02a7c43c) */
/* WARNING: Removing unreachable block (ram,0x02a7c330) */
/* WARNING: Removing unreachable block (ram,0x02a7c378) */
/* WARNING: Removing unreachable block (ram,0x02a7c3ec) */

byte FUN_02a7c2e0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  bool bVar6;
  ulong uVar7;
  char *pcVar8;
  uint uVar9;
  long lVar10;
  float fVar11;
  undefined **local_38;
  int local_30;
  int iStack_2c;
  uint local_28;
  uint uStack_24;
  
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 8) >> 1 & 1) == 0) {
    lVar10 = *(long *)(param_1 + 0xc0);
    if (lVar10 != 0) {
      local_38._0_4_ = 2;
      if ((*(long *)(lVar10 + 0xd8) != 0) && (*(char *)(*(long *)(lVar10 + 0xd8) + 0x48) != '\0')) {
        uVar7 = FUN_02ad8220(param_1 + 0xb8,&uStack_24,&local_28,param_2,2);
        if ((uVar7 & 1) != 0) {
          local_38 = (undefined **)CONCAT44(local_38._4_4_,2);
          lVar10 = *(long *)(*(long *)(param_1 + 0xc0) + 0xd8);
          if ((lVar10 != 0) && (*(char *)(lVar10 + 0x48) != '\0')) {
            bVar5 = 0;
            if ((uStack_24 < *(uint *)(lVar10 + 0x30)) && (local_28 < *(uint *)(lVar10 + 0x34))) {
              pcVar8 = (char *)(**(code **)(**(long **)(*(long *)(lVar10 + 0x90) +
                                                       (long)(int)(uStack_24 +
                                                                  *(uint *)(lVar10 + 0x30) *
                                                                  local_28) * 8) + 0xf0))();
              bVar5 = *pcVar8 != '\0';
            }
            goto LAB_02a7c510;
          }
        }
        goto LAB_02a7c4fc;
      }
      if ((*(long *)(lVar10 + 0x90) != 0) && (*(char *)(*(long *)(lVar10 + 0x90) + 0x48) != '\0')) {
        local_38 = &PTR_FUN_048f9730;
        fVar11 = (float)*(int *)(param_2 + 8) * 0.5;
        uVar9 = 0;
        if (fVar11 != (float)(int)fVar11) {
          uVar9 = (uint)(fVar11 < 0.0);
        }
        local_30 = (int)fVar11 - uVar9;
        fVar11 = (float)*(int *)(param_2 + 0xc) * 0.5;
        uVar9 = 0;
        if (fVar11 != (float)(int)fVar11) {
          uVar9 = (uint)(fVar11 < 0.0);
        }
        iStack_2c = (int)fVar11 - uVar9;
        bVar5 = FUN_02ad806c(param_1 + 0xb8,4,&local_38);
        goto LAB_02a7c510;
      }
    }
    bVar5 = 0;
    if ((*(int *)(param_2 + 8) < *(int *)(param_1 + 0xa0)) ||
       (*(int *)(param_1 + 0xb0) < *(int *)(param_2 + 8))) goto LAB_02a7c510;
    iVar2 = *(int *)(param_2 + 0xc);
    if (*(int *)(param_1 + 0xa4) <= iVar2) {
      iVar3 = *(int *)(param_1 + 0xb4);
      bVar4 = SBORROW4(iVar2,iVar3);
      iVar1 = iVar2 - iVar3;
      bVar6 = iVar2 == iVar3;
      goto LAB_02a7c50c;
    }
  }
  else if ((*(int *)(param_1 + 0x2f0) <= *(int *)(param_2 + 8) &&
            *(int *)(param_2 + 8) <= *(int *)(param_1 + 0x300)) &&
          (iVar2 = *(int *)(param_2 + 0xc), *(int *)(param_1 + 0x2f4) <= iVar2)) {
    iVar3 = *(int *)(param_1 + 0x304);
    bVar4 = SBORROW4(iVar2,iVar3);
    iVar1 = iVar2 - iVar3;
    bVar6 = iVar2 == iVar3;
LAB_02a7c50c:
    bVar5 = bVar6 || iVar1 < 0 != bVar4;
    goto LAB_02a7c510;
  }
LAB_02a7c4fc:
  bVar5 = 0;
LAB_02a7c510:
  return bVar5 & 1;
}

