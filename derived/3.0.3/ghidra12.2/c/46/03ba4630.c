
long FUN_03ba4630(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  char *pcVar9;
  long lVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  char *pcVar17;
  long lVar18;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return 0;
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    if (*(long *)(param_1 + 0x28) == param_1 + 0x20) {
LAB_03ba4828:
      lVar7 = 0;
    }
    else {
      lVar18 = (long)*(int *)(param_1 + 0x34);
      lVar10 = *(long *)(param_1 + 0x28) - lVar18;
      do {
        plVar16 = (long *)(lVar10 + 8);
        (**(code **)(*plVar16 + 0x18))(plVar16);
        (**(code **)(*plVar16 + 0x18))(plVar16);
        pcVar17 = *(char **)(lVar10 + 0x10);
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar9 = (char *)param_2[1];
        if (pcVar17 == pcVar9) {
          return lVar10;
        }
        cVar4 = **(char **)(lVar10 + 0x10);
        if (cVar4 == *pcVar9) {
          if (cVar4 == '\0') {
            return lVar10;
          }
          lVar7 = 0x7fffe;
          pcVar17 = *(char **)(lVar10 + 0x10);
          while( true ) {
            if (pcVar17[1] != pcVar9[1]) break;
            if (pcVar17[1] == '\0') {
              return lVar10;
            }
            if (pcVar17[2] != pcVar9[2]) break;
            if (pcVar17[2] == '\0') {
              return lVar10;
            }
            if ((lVar7 == 0) || (cVar4 = pcVar17[3], cVar4 != pcVar9[3])) break;
            lVar7 = lVar7 + -3;
            pcVar9 = pcVar9 + 3;
            pcVar17 = pcVar17 + 3;
            if (cVar4 == '\0') {
              return lVar10;
            }
          }
        }
        lVar7 = 0;
        lVar10 = *(long *)(lVar10 + lVar18 + 8) - lVar18;
      } while (lVar10 != (param_1 + 0x20) - lVar18);
    }
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2);
    pbVar12 = (byte *)param_2[1];
    uVar8 = (uint)*pbVar12;
    if (*pbVar12 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0xffffffff;
      do {
        pbVar12 = pbVar12 + 1;
        uVar11 = crc32b(uVar11,uVar8,0x4c11db7);
        uVar8 = (uint)*pbVar12;
      } while (uVar8 != 0);
      uVar11 = ~uVar11;
    }
    uVar3 = *(uint *)(param_1 + 0x48);
    lVar10 = *(long *)(param_1 + 0x50);
    uVar8 = uVar3;
    if ((int)uVar3 < 0) {
      uVar8 = uVar3 + 1;
    }
    uVar8 = (int)uVar8 >> 1;
    uVar2 = uVar8;
    if (uVar3 <= uVar8) {
      uVar2 = 0;
    }
    uVar15 = *(uint *)(lVar10 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4));
    if (uVar15 != uVar11) {
      uVar14 = 0;
      uVar13 = uVar3;
      do {
        uVar5 = uVar8;
        uVar6 = uVar14;
        uVar2 = uVar13;
        if (uVar15 < uVar11) {
          uVar5 = uVar13;
          uVar6 = uVar8;
          uVar2 = uVar14;
        }
        uVar14 = uVar6;
        uVar13 = uVar5;
        if (uVar2 == uVar8) goto LAB_03ba4828;
        iVar1 = uVar14 + uVar13;
        if (iVar1 < 0 != SCARRY4(uVar14,uVar13)) {
          iVar1 = iVar1 + 1;
        }
        uVar8 = iVar1 >> 1;
        uVar2 = uVar8;
        if (uVar3 <= uVar8) {
          uVar2 = 0;
        }
        uVar15 = *(uint *)(lVar10 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 |
                                    (ulong)uVar2 << 4));
      } while (uVar15 != uVar11);
    }
    lVar7 = *(long *)(lVar10 + (long)(int)uVar2 * 0x10 + 8);
  }
  return lVar7;
}

