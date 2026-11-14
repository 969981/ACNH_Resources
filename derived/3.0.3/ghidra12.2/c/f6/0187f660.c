
/* WARNING: Removing unreachable block (ram,0x0187f7dc) */
/* WARNING: Removing unreachable block (ram,0x0187f748) */
/* WARNING: Removing unreachable block (ram,0x0187f728) */
/* WARNING: Removing unreachable block (ram,0x0187f784) */
/* WARNING: Removing unreachable block (ram,0x0187f7a4) */
/* WARNING: Removing unreachable block (ram,0x0187f7fc) */

undefined8 FUN_0187f660(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_70 [3];
  undefined4 local_64;
  
  if (*(char *)(param_1 + 0x4a7) != '\0') {
    return 1;
  }
  lVar9 = *(long *)(param_1 + 0x300);
  FUN_02507c6c(local_70,7,1,1,0);
  puVar3 = PTR_DAT_04bb5038;
  bVar1 = (byte)local_70[0];
  if (7 < (byte)local_70[0]) {
LAB_0187f6bc:
    local_64 = 0;
    if (((DAT_04cfae30 != 0) && (*(long *)(DAT_04cfae30 + 0xa8) != 0)) &&
       (*(char *)(DAT_04cfae30 + 0x11c8) == '\0')) {
      FUN_0093b024(DAT_04cfae30 + 0x28,lVar9 + 0x278,&local_64);
    }
    local_70[0] = local_64;
    lVar9 = FUN_009807cc(DAT_04cfab78 + 8,local_64);
    if (((lVar9 == 0) ||
        (pcVar5 = (char *)FUN_009823a0(lVar9,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
        pcVar5 == (char *)0x0)) || (*pcVar5 == '\0')) {
LAB_0187f8d8:
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    return uVar6;
  }
  do {
    uVar7 = (ulong)bVar1;
    lVar2 = uVar7 * 0x8c;
    if ((&DAT_0548ed4c)[lVar2] != '\0') {
      puVar8 = &DAT_0548ed4c + lVar2;
      fVar10 = *(float *)((long)&DAT_0548ed58 + lVar2 + 4);
      fVar13 = *(float *)(lVar9 + 0x278) - fVar10;
      fVar12 = *(float *)((long)&DAT_0548ed60 + lVar2 + 4);
      fVar14 = *(float *)(lVar9 + 0x280) - fVar12;
      if (900.0 <= fVar14 * fVar14 + fVar13 * fVar13) goto LAB_0187f774;
LAB_0187f8c8:
      *(float *)(param_1 + 0x498) = fVar10;
      uVar11 = *(undefined4 *)(puVar8 + 0x14);
      *(float *)(param_1 + 0x4a0) = fVar12;
      *(undefined4 *)(param_1 + 0x49c) = uVar11;
      goto LAB_0187f8d8;
    }
LAB_0187f774:
    if ((&DAT_0548ed84)[lVar2] != '\0') {
      puVar8 = &DAT_0548ed84 + lVar2;
      fVar10 = *(float *)((long)&DAT_0548ed90 + lVar2 + 4);
      fVar13 = *(float *)(lVar9 + 0x278) - fVar10;
      fVar12 = *(float *)((long)&DAT_0548ed98 + lVar2 + 4);
      fVar14 = *(float *)(lVar9 + 0x280) - fVar12;
      if (fVar14 * fVar14 + fVar13 * fVar13 < 225.0) goto LAB_0187f8c8;
    }
    local_64 = 3;
    if ((&DAT_0548ed68)[lVar2] != '\0') {
      puVar8 = &DAT_0548ed68 + lVar2;
      fVar10 = *(float *)((long)&DAT_0548ed74 + lVar2 + 4);
      fVar13 = *(float *)(lVar9 + 0x278) - fVar10;
      fVar12 = *(float *)((long)&DAT_0548ed7c + lVar2 + 4);
      fVar14 = *(float *)(lVar9 + 0x280) - fVar12;
      if (fVar14 * fVar14 + fVar13 * fVar13 < 225.0) goto LAB_0187f8c8;
    }
    do {
      if (uVar7 == 7) goto LAB_0187f6bc;
      uVar7 = uVar7 + 1;
      uVar4 = FUN_02507924(local_70,puVar3 + uVar7);
    } while ((uVar4 & 1) == 0);
    bVar1 = puVar3[uVar7];
    if (7 < bVar1) goto LAB_0187f6bc;
    local_70[0] = CONCAT31(local_70[0]._1_3_,bVar1);
  } while( true );
}

