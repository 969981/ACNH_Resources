
bool FUN_03be8040(uint *param_1,uint *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar13 = DAT_04c4bf50;
  uVar2 = *param_1;
  uVar12 = (ulong)uVar2;
  if (uVar2 == *param_2) {
    uVar3 = param_1[1];
    uVar11 = (ulong)uVar3;
    if (uVar3 == param_2[1]) {
      uVar4 = param_1[2];
      if (uVar4 == param_2[2]) {
        if (uVar2 != 0) {
          uVar14 = *(ulong *)PTR_DAT_04bb38c0;
          puVar9 = *(uint **)(param_2 + 4);
          puVar10 = *(uint **)(param_1 + 4);
          do {
            pcVar7 = (char *)(uVar13 | *puVar10);
            pcVar1 = pcVar7 + 0x100000000;
            if (uVar14 <= *puVar10) {
              pcVar1 = pcVar7;
            }
            pcVar8 = (char *)(uVar13 | *puVar9);
            pcVar7 = pcVar8 + 0x100000000;
            if (uVar14 <= *puVar9) {
              pcVar7 = pcVar8;
            }
            iVar6 = strcmp(pcVar1,pcVar7);
            if (iVar6 != 0) {
              return false;
            }
            uVar12 = uVar12 - 1;
            puVar9 = puVar9 + 3;
            puVar10 = puVar10 + 3;
          } while (uVar12 != 0);
        }
        uVar12 = DAT_04c4bf50;
        if (uVar3 != 0) {
          uVar13 = *(ulong *)PTR_DAT_04bb38c0;
          puVar9 = *(uint **)(param_2 + 6);
          puVar10 = *(uint **)(param_1 + 6);
          do {
            pcVar7 = (char *)(uVar12 | *puVar10);
            pcVar1 = pcVar7 + 0x100000000;
            if (uVar13 <= *puVar10) {
              pcVar1 = pcVar7;
            }
            pcVar8 = (char *)(uVar12 | *puVar9);
            pcVar7 = pcVar8 + 0x100000000;
            if (uVar13 <= *puVar9) {
              pcVar7 = pcVar8;
            }
            iVar6 = strcmp(pcVar1,pcVar7);
            if (iVar6 != 0) {
              return false;
            }
            uVar11 = uVar11 - 1;
            puVar9 = puVar9 + 3;
            puVar10 = puVar10 + 3;
          } while (uVar11 != 0);
        }
        uVar12 = DAT_04c4bf50;
        if (uVar4 == 0) {
          return true;
        }
        uVar13 = 0;
        bVar5 = false;
        uVar11 = *(ulong *)PTR_DAT_04bb38c0;
        puVar9 = *(uint **)(param_2 + 8);
        puVar10 = *(uint **)(param_1 + 8);
        while( true ) {
          pcVar7 = (char *)(uVar12 | *puVar10);
          pcVar1 = pcVar7 + 0x100000000;
          if (uVar11 <= *puVar10) {
            pcVar1 = pcVar7;
          }
          pcVar8 = (char *)(uVar12 | *puVar9);
          pcVar7 = pcVar8 + 0x100000000;
          if (uVar11 <= *puVar9) {
            pcVar7 = pcVar8;
          }
          iVar6 = strcmp(pcVar1,pcVar7);
          if (iVar6 != 0) break;
          uVar13 = uVar13 + 1;
          bVar5 = uVar4 <= uVar13;
          puVar9 = puVar9 + 3;
          puVar10 = puVar10 + 3;
          if (uVar4 == uVar13) {
            return bVar5;
          }
        }
        return bVar5;
      }
    }
  }
  return false;
}

