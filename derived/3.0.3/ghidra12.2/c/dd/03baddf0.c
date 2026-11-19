
long FUN_03baddf0(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  
  if (*(long *)(param_1 + 0xa0) == 0) {
    if (*(long *)(param_1 + 0x10) == param_1 + 8) {
LAB_03badf18:
      lVar10 = 0;
    }
    else {
      lVar20 = (long)*(int *)(param_1 + 0x1c);
      lVar10 = *(long *)(param_1 + 0x10) - lVar20;
      while( true ) {
        plVar18 = (long *)(lVar10 + 8);
        (**(code **)(*plVar18 + 0x18))(plVar18);
        (**(code **)(*plVar18 + 0x18))(plVar18);
        lVar19 = *(long *)(lVar10 + 0x10);
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar11 = param_2[1];
        if (lVar19 == lVar11) break;
        uVar14 = 0;
        bVar8 = true;
        lVar19 = *(long *)(lVar10 + 0x10) + 2;
        do {
          lVar2 = lVar19 + uVar14;
          cVar5 = *(char *)(lVar2 + -2);
          if (cVar5 != *(char *)(lVar11 + uVar14)) break;
          if (cVar5 == '\0') {
            if (bVar8) {
              return lVar10;
            }
            break;
          }
          cVar5 = *(char *)(lVar2 + -1);
          if (cVar5 != *(char *)(lVar11 + uVar14 + 1)) break;
          if (cVar5 == '\0') goto LAB_03bae010;
          cVar5 = *(char *)(lVar19 + uVar14);
          if (cVar5 != *(char *)(lVar11 + uVar14 + 2)) break;
          if (cVar5 == '\0') goto LAB_03bae010;
          bVar8 = uVar14 < 0x7fffe;
          uVar14 = uVar14 + 3;
        } while (uVar14 != 0x80001);
        lVar10 = *(long *)(lVar10 + lVar20 + 8) - lVar20;
        if (lVar10 == (param_1 + 8) - lVar20) {
          return 0;
        }
      }
    }
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2);
    pbVar13 = (byte *)param_2[1];
    uVar9 = (uint)*pbVar13;
    if (*pbVar13 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0xffffffff;
      do {
        pbVar13 = pbVar13 + 1;
        uVar12 = crc32b(uVar12,uVar9,0x4c11db7);
        uVar9 = (uint)*pbVar13;
      } while (uVar9 != 0);
      uVar12 = ~uVar12;
    }
    uVar4 = *(uint *)(param_1 + 0x98);
    lVar10 = *(long *)(param_1 + 0xa0);
    uVar9 = uVar4;
    if ((int)uVar4 < 0) {
      uVar9 = uVar4 + 1;
    }
    uVar9 = (int)uVar9 >> 1;
    uVar3 = uVar9;
    if (uVar4 <= uVar9) {
      uVar3 = 0;
    }
    uVar17 = *(uint *)(lVar10 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4));
    if (uVar17 != uVar12) {
      uVar16 = 0;
      uVar15 = uVar4;
      do {
        uVar6 = uVar9;
        uVar7 = uVar16;
        uVar3 = uVar15;
        if (uVar17 < uVar12) {
          uVar6 = uVar15;
          uVar7 = uVar9;
          uVar3 = uVar16;
        }
        uVar16 = uVar7;
        uVar15 = uVar6;
        if (uVar3 == uVar9) goto LAB_03badf18;
        iVar1 = uVar16 + uVar15;
        if (iVar1 < 0 != SCARRY4(uVar16,uVar15)) {
          iVar1 = iVar1 + 1;
        }
        uVar9 = iVar1 >> 1;
        uVar3 = uVar9;
        if (uVar4 <= uVar9) {
          uVar3 = 0;
        }
        uVar17 = *(uint *)(lVar10 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 |
                                    (ulong)uVar3 << 4));
      } while (uVar17 != uVar12);
    }
    lVar10 = *(long *)(lVar10 + (long)(int)uVar3 * 0x10 + 8);
  }
LAB_03bae010:
  return lVar10;
}

