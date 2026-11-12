
bool FUN_00693e60(long param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char cVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  long lVar18;
  
  cVar14 = *param_2;
  pcVar12 = (char *)(param_1 + 0x102);
  if (cVar14 != '\0') {
LAB_00693e6c:
    pcVar11 = pcVar12;
    lVar9 = 0;
    pcVar13 = (char *)0x0;
    pcVar15 = param_2 + -1;
    do {
      pcVar16 = param_2 + lVar9;
      if (cVar14 == '*') {
        pcVar13 = pcVar16;
      }
      else if ((cVar14 == '.') || (cVar14 == '\0')) goto LAB_00693ea8;
      cVar14 = pcVar16[1];
      lVar9 = lVar9 + 1;
      pcVar15 = pcVar15 + 1;
    } while( true );
  }
LAB_00694018:
  return *pcVar12 == '\0';
LAB_00693ea8:
  lVar10 = 0;
  pcVar17 = pcVar11 + -1;
  cVar4 = *pcVar11;
  while ((cVar4 != '\0' && (cVar4 != '.'))) {
    lVar10 = lVar10 + 1;
    pcVar17 = pcVar17 + 1;
    cVar4 = pcVar11[lVar10];
  }
  pcVar2 = pcVar11 + lVar10;
  pcVar3 = param_2;
  if (cVar14 == '.') {
    pcVar3 = param_2 + 1;
  }
  pcVar12 = pcVar2;
  if (cVar4 == '.') {
    pcVar12 = pcVar2 + 1;
  }
  if (pcVar13 == (char *)0x0) {
    bVar5 = lVar9 == 0;
    bVar6 = lVar10 == 0;
    if ((lVar9 != 0) && (lVar10 != 0)) {
      lVar18 = 0;
      do {
        if (param_2[lVar18] != pcVar11[lVar18]) {
          return false;
        }
        bVar6 = lVar10 + -1 == lVar18;
        bVar5 = lVar9 + -1 == lVar18;
      } while ((!bVar5) && (bVar7 = lVar10 + -1 != lVar18, lVar18 = lVar18 + 1, bVar7));
    }
    if (!bVar5) {
      return false;
    }
    if (!bVar6) {
      return false;
    }
  }
  else {
    pcVar8 = pcVar11;
    if (param_2 < pcVar13) {
      if (lVar10 == 0) {
        return false;
      }
      lVar18 = 0;
      do {
        if (param_2[lVar18] != pcVar11[lVar18]) {
          return false;
        }
        lVar1 = lVar18 + 1;
      } while ((param_2 + lVar1 != pcVar13) &&
              (bVar5 = lVar10 + -1 != lVar18, lVar18 = lVar1, bVar5));
      if (param_2 + lVar1 != pcVar13) {
        return false;
      }
      pcVar8 = pcVar11 + lVar1;
    }
    if (pcVar13 < pcVar16) {
      if (pcVar2 != pcVar8) {
        do {
          pcVar16 = pcVar15;
          if (pcVar16[1] != pcVar17[1]) {
            return false;
          }
          if (pcVar16 == pcVar13) break;
          bVar5 = pcVar17 != pcVar8;
          pcVar17 = pcVar17 + -1;
          pcVar15 = pcVar16 + -1;
        } while (bVar5);
        if (pcVar16 == pcVar13) goto LAB_00694000;
      }
      return false;
    }
  }
LAB_00694000:
  param_2 = pcVar3 + lVar9;
  cVar14 = *param_2;
  if (cVar14 == '\0') goto code_r0x0069400c;
  goto LAB_00693e6c;
code_r0x0069400c:
  if (cVar4 == '.') {
    pcVar11 = pcVar11 + 1;
  }
  pcVar12 = pcVar11 + lVar10;
  goto LAB_00694018;
}

