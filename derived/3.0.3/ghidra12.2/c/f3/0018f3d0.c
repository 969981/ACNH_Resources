
undefined8 FUN_0018f3d0(long *param_1,long param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  char *pcVar13;
  long *plVar14;
  
  lVar10 = param_1[4];
  if (lVar10 == param_1[3]) {
    *(undefined1 *)((long)param_1 + 0x3c) = 1;
  }
  else {
    if (*(ulong *)(lVar10 + -0x10) != 0) {
      plVar14 = (long *)*param_1;
      if (*(char *)(lVar10 + -8) == '\0') {
        uVar8 = 0x2c;
        if ((*(ulong *)(lVar10 + -0x10) & 1) != 0) {
          uVar8 = 0x3a;
        }
        puVar6 = (undefined1 *)plVar14[3];
        puVar11 = (undefined1 *)plVar14[4];
        if (puVar11 < puVar6 + 1) {
          lVar9 = plVar14[2];
          if (lVar9 == 0) {
            if (*plVar14 == 0) {
              if (DAT_04c57ea0 == (code *)0x0) {
                puVar5 = malloc(0x18);
              }
              else {
                puVar5 = (undefined8 *)(*DAT_04c57ea0)(0x18);
              }
              puVar11 = (undefined1 *)plVar14[5];
              *puVar5 = DAT_04c57ea8;
              lVar9 = plVar14[2];
              puVar6 = (undefined1 *)plVar14[3];
              *plVar14 = (long)(puVar5 + 2);
              plVar14[1] = (long)(puVar5 + 2);
            }
            else {
              puVar11 = (undefined1 *)plVar14[5];
              lVar9 = 0;
            }
          }
          else {
            puVar11 = puVar11 + (((ulong)(puVar11 + (1 - lVar9)) >> 1) - lVar9);
          }
          if (puVar11 <= puVar6 + (1 - lVar9)) {
            puVar11 = puVar6 + (1 - lVar9);
          }
          FUN_0018f24c(plVar14,puVar11);
          puVar6 = (undefined1 *)plVar14[3];
        }
        plVar14[3] = (long)(puVar6 + 1);
      }
      else {
        puVar6 = (undefined1 *)plVar14[3];
        puVar11 = (undefined1 *)plVar14[4];
        if (puVar11 < puVar6 + 1) {
          lVar9 = plVar14[2];
          if (lVar9 == 0) {
            if (*plVar14 == 0) {
              if (DAT_04c57ea0 == (code *)0x0) {
                puVar5 = malloc(0x18);
              }
              else {
                puVar5 = (undefined8 *)(*DAT_04c57ea0)(0x18);
              }
              puVar11 = (undefined1 *)plVar14[5];
              *puVar5 = DAT_04c57ea8;
              lVar9 = plVar14[2];
              puVar6 = (undefined1 *)plVar14[3];
              *plVar14 = (long)(puVar5 + 2);
              plVar14[1] = (long)(puVar5 + 2);
            }
            else {
              puVar11 = (undefined1 *)plVar14[5];
              lVar9 = 0;
            }
          }
          else {
            puVar11 = puVar11 + (((ulong)(puVar11 + (1 - lVar9)) >> 1) - lVar9);
          }
          if (puVar11 <= puVar6 + (1 - lVar9)) {
            puVar11 = puVar6 + (1 - lVar9);
          }
          FUN_0018f24c(plVar14,puVar11);
          puVar6 = (undefined1 *)plVar14[3];
        }
        plVar14[3] = (long)(puVar6 + 1);
        uVar8 = 0x2c;
      }
      *puVar6 = uVar8;
    }
    *(long *)(lVar10 + -0x10) = *(long *)(lVar10 + -0x10) + 1;
  }
  plVar14 = (long *)*param_1;
  uVar7 = (ulong)(param_3 * 6 + 2);
  puVar6 = (undefined1 *)plVar14[3];
  puVar11 = (undefined1 *)plVar14[4];
  if (puVar11 < puVar6 + uVar7) {
    lVar10 = plVar14[2];
    if (lVar10 == 0) {
      if (*plVar14 == 0) {
        if (*(code **)PTR_DAT_04bcba20 == (code *)0x0) {
          puVar5 = malloc(0x18);
        }
        else {
          puVar5 = (undefined8 *)(**(code **)PTR_DAT_04bcba20)(0x18);
        }
        puVar11 = (undefined1 *)plVar14[5];
        *puVar5 = *(undefined8 *)PTR_DAT_04bcba28;
        lVar10 = plVar14[2];
        puVar6 = (undefined1 *)plVar14[3];
        *plVar14 = (long)(puVar5 + 2);
        plVar14[1] = (long)(puVar5 + 2);
      }
      else {
        puVar11 = (undefined1 *)plVar14[5];
        lVar10 = 0;
      }
    }
    else {
      puVar11 = puVar11 + (((ulong)(puVar11 + (1 - lVar10)) >> 1) - lVar10);
    }
    if (puVar11 <= puVar6 + (uVar7 - lVar10)) {
      puVar11 = puVar6 + (uVar7 - lVar10);
    }
    FUN_0018f24c(plVar14,puVar11);
    puVar11 = *(undefined1 **)(*param_1 + 0x18);
    *(undefined1 **)(*param_1 + 0x18) = puVar11 + 1;
    *puVar11 = 0x22;
    puVar3 = PTR_s_uuuuuuuubtnufruuuuuuuuuuuuuuuuuu_04109166_0x10_04bcbe50;
    puVar4 = PTR_s_0123456789ABCDEFuuuuuuuubtnufruu_04bcbe58;
  }
  else {
    plVar14[3] = (long)(puVar6 + 1);
    *puVar6 = 0x22;
    puVar3 = PTR_s_uuuuuuuubtnufruuuuuuuuuuuuuuuuuu_04109166_0x10_04bcbe50;
    puVar4 = PTR_s_0123456789ABCDEFuuuuuuuubtnufruu_04bcbe58;
  }
  PTR_s_uuuuuuuubtnufruuuuuuuuuuuuuuuuuu_04109166_0x10_04bcbe50 = puVar3;
  PTR_s_0123456789ABCDEFuuuuuuuubtnufruu_04bcbe58 = puVar4;
  if (param_3 != 0) {
    uVar7 = 0;
    do {
      bVar1 = *(byte *)(param_2 + uVar7);
      pbVar12 = *(byte **)(*param_1 + 0x18);
      cVar2 = puVar3[bVar1];
      *(byte **)(*param_1 + 0x18) = pbVar12 + 1;
      if (cVar2 == '\0') {
        *pbVar12 = bVar1;
      }
      else {
        *pbVar12 = 0x5c;
        pcVar13 = *(char **)(*param_1 + 0x18);
        *(char **)(*param_1 + 0x18) = pcVar13 + 1;
        *pcVar13 = cVar2;
        if (cVar2 == 'u') {
          puVar11 = *(undefined1 **)(*param_1 + 0x18);
          *(undefined1 **)(*param_1 + 0x18) = puVar11 + 1;
          *puVar11 = 0x30;
          puVar11 = *(undefined1 **)(*param_1 + 0x18);
          *(undefined1 **)(*param_1 + 0x18) = puVar11 + 1;
          *puVar11 = 0x30;
          uVar8 = puVar4[bVar1 >> 4];
          puVar11 = *(undefined1 **)(*param_1 + 0x18);
          *(undefined1 **)(*param_1 + 0x18) = puVar11 + 1;
          *puVar11 = uVar8;
          puVar11 = *(undefined1 **)(*param_1 + 0x18);
          uVar8 = puVar4[(ulong)bVar1 & 0xf];
          *(undefined1 **)(*param_1 + 0x18) = puVar11 + 1;
          *puVar11 = uVar8;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_3);
  }
  puVar11 = *(undefined1 **)(*param_1 + 0x18);
  *(undefined1 **)(*param_1 + 0x18) = puVar11 + 1;
  *puVar11 = 0x22;
  return 1;
}

