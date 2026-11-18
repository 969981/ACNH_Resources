
ulong FUN_03363390(ulong param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  short sVar4;
  long lVar5;
  ushort *puVar6;
  long lVar7;
  undefined2 *puVar8;
  short *psVar9;
  int iVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  
  uVar2 = (uint)param_1;
  if ((uVar2 & 0xffff) == 0x3000) {
    return 0x3000;
  }
  if ((uVar2 - 0x61 & 0xffff) < 0x1a) {
    return (ulong)(uVar2 - 0x20);
  }
  if ((uVar2 - 0x41 & 0xffff) < 0x1a) {
    return (ulong)(uVar2 + 0x20);
  }
  if (((((uVar2 & 0xffff) == 0x30f4) && (DAT_05355a60 != 0)) &&
      (lVar5 = *(long *)(*(long *)(DAT_05355a60 + 0x20) + 0x6e0), lVar5 != 0)) &&
     ((lVar5 = *(long *)(lVar5 + 8), lVar5 != 0 && (*(int *)(lVar5 + 0x308) - 0xeU < 3)))) {
    if (*(int *)(lVar5 + 0x1be8) == 1) {
      FUN_0336679c(*(undefined8 *)PTR_DAT_04bb4fb0,9,0);
      return 0x30a6;
    }
    if (*(int *)(lVar5 + 0x1be8) == 0) {
      FUN_0336679c(*(undefined8 *)PTR_DAT_04bb4fb0,9,0);
      return 0x3046;
    }
  }
  puVar8 = &DAT_0418e1f4;
  for (puVar6 = &DAT_0418e1f8; (uint)puVar6[-2] != (uVar2 & 0xffff); puVar6 = puVar6 + 4) {
    if ((uint)puVar6[-1] == (uVar2 & 0xffff)) {
      puVar6 = puVar6 + -1;
      goto LAB_03363514;
    }
    if ((uint)*puVar6 == (uVar2 & 0xffff)) {
      iVar10 = 0;
      goto LAB_0336351c;
    }
    if (*puVar6 == 0) {
      puVar6 = &DAT_0418e26e;
      puVar8 = &DAT_0418e26a;
      goto LAB_033634d0;
    }
    if ((uint)puVar6[1] == (uVar2 & 0xffff)) {
      puVar6 = puVar6 + 1;
      goto LAB_03363514;
    }
  }
  puVar6 = puVar6 + -2;
LAB_03363514:
  iVar10 = 0;
  puVar8 = &DAT_0418e1f4;
  goto LAB_0336351c;
LAB_033634d0:
  if ((uint)puVar6[-2] == (uVar2 & 0xffff)) goto LAB_03363634;
  if ((uint)puVar6[-1] == (uVar2 & 0xffff)) {
    puVar6 = puVar6 + -1;
    goto LAB_0336369c;
  }
  if ((uint)*puVar6 == (uVar2 & 0xffff)) {
    iVar10 = 1;
    goto LAB_0336351c;
  }
  if (*puVar6 == 0) {
    puVar6 = &DAT_0418e2e4;
    puVar8 = &DAT_0418e2e0;
    goto LAB_0336365c;
  }
  if ((uint)puVar6[1] == (uVar2 & 0xffff)) {
    puVar6 = puVar6 + 1;
    goto LAB_0336369c;
  }
  puVar6 = puVar6 + 4;
  goto LAB_033634d0;
LAB_03363634:
  puVar6 = puVar6 + -2;
LAB_0336369c:
  iVar10 = 1;
  puVar8 = &DAT_0418e26a;
  goto LAB_0336351c;
LAB_0336365c:
  if ((uint)puVar6[-2] == (uVar2 & 0xffff)) goto LAB_033636cc;
  if ((uint)puVar6[-1] == (uVar2 & 0xffff)) {
    puVar6 = puVar6 + -1;
    goto LAB_03363734;
  }
  if ((uint)*puVar6 == (uVar2 & 0xffff)) {
    iVar10 = 2;
    goto LAB_0336351c;
  }
  if (*puVar6 == 0) {
    puVar6 = &DAT_0418e35a;
    puVar8 = &DAT_0418e356;
    goto LAB_033636f4;
  }
  if ((uint)puVar6[1] == (uVar2 & 0xffff)) {
    puVar6 = puVar6 + 1;
    goto LAB_03363734;
  }
  puVar6 = puVar6 + 4;
  goto LAB_0336365c;
LAB_033636cc:
  puVar6 = puVar6 + -2;
LAB_03363734:
  iVar10 = 2;
  puVar8 = &DAT_0418e2e0;
  goto LAB_0336351c;
LAB_033636f4:
  if ((uint)puVar6[-2] == (uVar2 & 0xffff)) goto LAB_03363744;
  if ((uint)puVar6[-1] == (uVar2 & 0xffff)) {
    puVar6 = puVar6 + -1;
    goto LAB_03363760;
  }
  if ((uint)*puVar6 == (uVar2 & 0xffff)) {
    iVar10 = 3;
    goto LAB_0336351c;
  }
  if (*puVar6 == 0) {
    return param_1;
  }
  if ((uint)puVar6[1] == (uVar2 & 0xffff)) {
    puVar6 = puVar6 + 1;
    goto LAB_03363760;
  }
  puVar6 = puVar6 + 4;
  goto LAB_033636f4;
LAB_03363744:
  puVar6 = puVar6 + -2;
LAB_03363760:
  iVar10 = 3;
  puVar8 = &DAT_0418e356;
LAB_0336351c:
  lVar5 = ((long)puVar6 - (long)puVar8) * 0x80000000 >> 0x20;
  puVar12 = (&PTR_DAT_04b205d8)[iVar10 + 1U & 3];
  sVar4 = *(short *)(puVar12 + (long)(int)((ulong)((long)puVar6 - (long)puVar8) >> 1) * 2);
  if (sVar4 == 0x3000) {
    puVar12 = (&PTR_DAT_04b205d8)[iVar10 + 2U & 3];
    sVar4 = *(short *)(puVar12 + lVar5 * 2);
    if (sVar4 == 0x3000) {
      puVar12 = (&PTR_DAT_04b205d8)[iVar10 - 1U & 3];
      sVar4 = *(short *)(puVar12 + lVar5 * 2);
      if (sVar4 == 0x3000) {
        return param_1;
      }
    }
  }
  lVar13 = 9;
  psVar9 = &DAT_0418e1f4;
  while( true ) {
    if (((*psVar9 == sVar4) || (psVar9[1] == sVar4)) || (psVar9[2] == sVar4)) goto LAB_033635c4;
    if (psVar9[2] == 0) break;
    if (psVar9[3] == sVar4) goto LAB_033635c4;
    psVar9 = psVar9 + 4;
  }
  lVar13 = 8;
LAB_033635c4:
  lVar11 = *(long *)PTR_DAT_04bb4fb0;
  uVar3 = FUN_03368ef0(DAT_05734ea0,0);
  lVar7 = *(long *)(lVar11 + 8);
  if (lVar7 != 0) {
    lVar1 = 0;
    if (*(char *)(lVar7 + 0x38) != '\0') {
      lVar1 = lVar7 + 8;
    }
    FUN_03366350(lVar11,lVar1,*(undefined8 *)(PTR_s_Decide_Erase_04bc9780 + lVar13 * 8 + 0x3f0),1,
                 uVar3,0);
  }
  return (ulong)*(ushort *)(puVar12 + lVar5 * 2);
}

