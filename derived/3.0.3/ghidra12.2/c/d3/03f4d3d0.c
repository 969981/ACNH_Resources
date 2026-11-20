
void FUN_03f4d3d0(long *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 *puVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  
  if (*(int *)(param_1[1] + 0x14) == 1) {
    *(int *)(*param_1 + 0x34e0bc) =
         *(int *)(*param_1 + 0x34e0bc) + *(int *)((long)param_1 + 0x24) * 0x800;
  }
  uVar10 = (ulong)*(byte *)(*param_1 + 0x3472d) & 3;
  if ((int)uVar10 != 3) {
    iVar3 = *(int *)(&DAT_04130c00 + uVar10 * 4);
    uVar5 = iVar3 * 8;
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = *(int *)((long)param_1 + 0x24) / (int)uVar5;
    }
    if (0 < (int)uVar6) {
      uVar7 = *(byte *)(*param_1 + 0x3472d) >> 2 & 7;
      iVar4 = 1 << (ulong)uVar7;
      uVar12 = 0;
      uVar14 = 0;
      bVar8 = true;
      do {
        puVar9 = (undefined1 *)
                 FUN_03f89ae0(*param_1 + 0x20660,iVar3,uVar14 & iVar4 - 1U,uVar14 >> (ulong)uVar7,
                              uVar5,iVar4,uVar12);
        lVar1 = *param_1 + 0x34780;
        if (bVar8) {
          puVar13 = puVar9;
          uVar11 = uVar5;
        }
        else {
          puVar13 = puVar9 + 1;
          FUN_03ff9d90(lVar1,*puVar9);
          uVar11 = uVar5 - 1;
        }
        bVar8 = (uVar11 & 1) == 0;
        for (uVar2 = uVar11 & 0xfffffffe; uVar2 != 0; uVar2 = uVar2 - 2) {
          FUN_03ff9b90(lVar1,*puVar13);
          FUN_03ff9d90(lVar1,puVar13[1]);
          puVar13 = puVar13 + 2;
        }
        if ((uVar11 & 1) != 0) {
          FUN_03ff9b90(lVar1,*puVar13);
        }
        uVar14 = uVar14 + 1;
        uVar12 = uVar12 ^ 1;
      } while (uVar14 != uVar6);
    }
  }
  return;
}

