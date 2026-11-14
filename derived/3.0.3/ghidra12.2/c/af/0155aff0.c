
void FUN_0155aff0(undefined8 *param_1,long param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  
  puVar13 = (uint *)*param_1;
  lVar14 = *(long *)(puVar13 + 2) + (long)(int)puVar13[6] * 0x580;
  if (*puVar13 <= puVar13[6]) {
    lVar14 = 0;
  }
  *(undefined4 *)(lVar14 + 0x548) = 2;
  fVar17 = (float)*(int *)(param_2 + 0x10) * 0.5;
  uVar15 = 0;
  if (fVar17 != (float)(int)fVar17) {
    uVar15 = (uint)(fVar17 < 0.0);
  }
  iVar3 = (int)fVar17 - uVar15;
  fVar17 = (float)*(int *)(param_2 + 0x14) * 0.5;
  uVar15 = 0;
  if (fVar17 != (float)(int)fVar17) {
    uVar15 = (uint)(fVar17 < 0.0);
  }
  iVar4 = (int)fVar17 - uVar15;
  fVar17 = (float)*(int *)(param_2 + 0x20) * 0.5;
  uVar15 = 0;
  if (fVar17 != (float)(int)fVar17) {
    uVar15 = (uint)(fVar17 < 0.0);
  }
  iVar5 = (int)fVar17 - uVar15;
  fVar17 = (float)*(int *)(param_2 + 0x24) * 0.5;
  uVar15 = 0;
  if (fVar17 != (float)(int)fVar17) {
    uVar15 = (uint)(fVar17 < 0.0);
  }
  iVar8 = (int)fVar17 - uVar15;
  iVar1 = iVar3;
  if (iVar5 <= iVar3) {
    iVar1 = iVar5;
  }
  if (iVar3 <= iVar5) {
    iVar3 = iVar5;
  }
  iVar5 = iVar4;
  if (iVar4 <= iVar8) {
    iVar5 = iVar8;
  }
  if (iVar8 <= iVar4) {
    iVar4 = iVar8;
  }
  if (iVar5 + 1 != iVar4) {
    iVar16 = DAT_0521b5b8;
    iVar10 = DAT_0521b5bc;
    iVar11 = DAT_0521b5c8;
    iVar12 = DAT_0521b5cc;
    iVar8 = iVar4;
    iVar9 = iVar1;
    do {
      if (((((iVar16 <= iVar9) && (iVar9 <= iVar11)) && (iVar10 <= iVar8)) &&
          ((iVar8 <= iVar12 && ((uint)(iVar9 - DAT_0521b5a0) < 0x70)))) &&
         ((uint)(iVar8 - DAT_0521b5a4) < 0x60)) {
        uVar15 = (iVar9 - DAT_0521b5a0) + (iVar8 - DAT_0521b5a4) * 0x70;
        lVar6 = (ulong)(uVar15 >> 5) * 4;
        *(uint *)(lVar14 + 8 + lVar6) = *(uint *)(lVar14 + 8 + lVar6) | 1 << (ulong)(uVar15 & 0x1f);
        iVar16 = DAT_0521b5b8;
        iVar10 = DAT_0521b5bc;
        iVar11 = DAT_0521b5c8;
        iVar12 = DAT_0521b5cc;
      }
      if (iVar9 < iVar3) {
        iVar9 = iVar9 + 1;
      }
      else {
        iVar8 = iVar8 + 1;
        iVar9 = iVar1;
      }
    } while ((iVar1 != iVar9) || (iVar5 + 1 != iVar8));
  }
  iVar9 = iVar4;
  iVar8 = iVar1;
  if (*(char *)(lVar14 + 0x550) != '\0') {
    iVar9 = *(int *)(lVar14 + 0x564);
    iVar8 = *(int *)(lVar14 + 0x560);
  }
  if (iVar1 <= iVar8) {
    iVar8 = iVar1;
  }
  if (iVar4 <= iVar9) {
    iVar9 = iVar4;
  }
  *(int *)(lVar14 + 0x560) = iVar8;
  *(int *)(lVar14 + 0x564) = iVar9;
  cVar2 = *(char *)(lVar14 + 0x568);
  *(undefined1 *)(lVar14 + 0x550) = 1;
  *(undefined1 *)(lVar14 + 0x568) = 1;
  bVar7 = cVar2 != '\0';
  iVar4 = iVar3;
  if (bVar7) {
    iVar4 = *(int *)(lVar14 + 0x578);
  }
  iVar1 = iVar5;
  if (bVar7) {
    iVar1 = *(int *)(lVar14 + 0x57c);
  }
  if (iVar4 <= iVar3) {
    iVar4 = iVar3;
  }
  if (iVar1 <= iVar5) {
    iVar1 = iVar5;
  }
  *(int *)(lVar14 + 0x578) = iVar4;
  *(int *)(lVar14 + 0x57c) = iVar1;
  return;
}

