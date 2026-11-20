
undefined8 FUN_03f2593c(long param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  float *pfVar7;
  char *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
LAB_03f25b14:
    uVar5 = 0;
  }
  else {
    fVar11 = *param_2;
    fVar13 = param_2[1];
    fVar12 = param_2[2];
    fVar14 = *(float *)(lVar6 + 0x104) +
             fVar13 * *(float *)(lVar6 + 0xfc) + fVar11 * *(float *)(lVar6 + 0xf8) +
             fVar12 * *(float *)(lVar6 + 0x100);
    fVar15 = *(float *)(lVar6 + 0x114) +
             fVar13 * *(float *)(lVar6 + 0x10c) + fVar11 * *(float *)(lVar6 + 0x108) +
             fVar12 * *(float *)(lVar6 + 0x110);
    fVar9 = *(float *)(lVar6 + 0x124) +
            fVar13 * *(float *)(lVar6 + 0x11c) + fVar11 * *(float *)(lVar6 + 0x118) +
            fVar12 * *(float *)(lVar6 + 0x120);
    if (*(char *)(lVar6 + 0xe0) != '\0') {
      fVar9 = 0.0;
    }
    fVar16 = fVar15 * fVar15 + fVar14 * fVar14 + fVar9 * fVar9;
    bVar3 = *(float *)(param_1 + 0x40) <= fVar16;
    if (*(char *)(lVar6 + 0xe8) == '\0') {
      if (bVar3) goto LAB_03f25b14;
      fVar10 = fVar9;
      fVar11 = fVar14;
    }
    else {
      if (bVar3) goto LAB_03f25b14;
      fVar10 = *(float *)(lVar6 + 0x184) +
               fVar13 * *(float *)(lVar6 + 0x17c) + fVar11 * *(float *)(lVar6 + 0x178) +
               fVar12 * *(float *)(lVar6 + 0x180);
      if (*(char *)(lVar6 + 0xe0) != '\0') {
        fVar10 = 0.0;
      }
      fVar11 = *(float *)(lVar6 + 0x164) +
               fVar13 * *(float *)(lVar6 + 0x15c) + fVar11 * *(float *)(lVar6 + 0x158) +
               fVar12 * *(float *)(lVar6 + 0x160);
    }
    iVar4 = FUN_006f0400(fVar10,fVar11);
    uVar5 = 0;
    uVar2 = (iVar4 + 0x40000000U & *(uint *)(param_1 + 0x48)) >>
            (ulong)(*(uint *)(param_1 + 0x4c) & 0x1f);
    lVar6 = *(long *)(param_1 + 0x38);
    uVar1 = uVar2;
    if (*(uint *)(param_1 + 0x30) <= uVar2) {
      uVar1 = 0;
    }
    pcVar8 = (char *)(lVar6 + (long)(int)uVar1 * 0x14);
    if (fVar16 < *(float *)(pcVar8 + 0x10)) {
      *(float *)(pcVar8 + 0x10) = fVar16;
      lVar6 = lVar6 + (long)(int)uVar1 * 0x14;
      *(float *)(lVar6 + 4) = fVar14;
      *(float *)(lVar6 + 8) = fVar15;
      *(float *)(lVar6 + 0xc) = fVar9;
      if (*pcVar8 == '\0') {
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      }
      uVar5 = 1;
      *pcVar8 = '\x01';
      if (*(long *)(param_1 + 0x60) != 0) {
        if (*(uint *)(param_1 + 0x58) <= uVar2) {
          uVar2 = 0;
        }
        pfVar7 = (float *)(*(long *)(param_1 + 0x60) + (long)(int)uVar2 * 0xc);
        *pfVar7 = *param_2;
        pfVar7[1] = param_2[1];
        pfVar7[2] = param_2[2];
      }
    }
  }
  return uVar5;
}

