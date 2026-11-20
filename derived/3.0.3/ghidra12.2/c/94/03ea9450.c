
undefined8 FUN_03ea9450(undefined8 *param_1,uint *param_2,char *param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  short *psVar12;
  uint uVar13;
  int iVar14;
  
  puVar11 = (uint *)param_1[1];
  if ((puVar11 != (uint *)0x0) && ((char)*puVar11 == -0x3f)) {
    psVar12 = (short *)*param_1;
    sVar6 = *psVar12;
    uVar3 = *(uint *)(psVar12 + 2);
    uVar8 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    if (sVar6 == 0x5942) {
      uVar3 = uVar8 >> 0x10 | uVar8 << 0x10;
    }
    if (uVar3 != 0) {
      uVar7 = *puVar11 >> 8;
      uVar8 = uVar7 & 0xff00 | *puVar11 >> 0x18 | (uVar7 & 0xff) << 0x10;
      uVar13 = uVar7;
      if (sVar6 == 0x5942) {
        uVar13 = uVar8;
      }
      if (uVar13 != 0) {
        iVar14 = 0;
        if (sVar6 == 0x5942) {
          uVar7 = uVar8;
        }
        do {
          iVar10 = uVar13 + iVar14;
          iVar1 = iVar10;
          if (iVar10 < 0 != SCARRY4(uVar13,iVar14)) {
            iVar1 = iVar10 + 1;
          }
          uVar8 = iVar1 >> 1;
          puVar2 = puVar11 + (ulong)uVar8 * 2 + 1;
          if (uVar7 <= uVar8 || iVar10 < -1) {
            puVar2 = (uint *)0x0;
          }
          uVar4 = *puVar2;
          uVar5 = uVar4 & 0xffffff;
          if (sVar6 == 0x5942) {
            uVar5 = uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 | uVar4 >> 0x10 & 0xff;
          }
          uVar5 = *(uint *)((long)psVar12 + (ulong)uVar5 * 4 + (long)(int)uVar3 + 4);
          uVar9 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          if (sVar6 == 0x5942) {
            uVar5 = uVar9 >> 0x10 | uVar9 << 0x10;
          }
          iVar10 = strcmp(param_3,(char *)((long)psVar12 + (ulong)uVar5 + (long)(int)uVar3));
          if (iVar10 == 0) {
            *(char *)(param_2 + 1) = (char)(uVar4 >> 0x18);
            uVar3 = puVar2[1];
            uVar8 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
            if (sVar6 == 0x5942) {
              uVar3 = uVar8 >> 0x10 | uVar8 << 0x10;
            }
            *param_2 = uVar3;
            return 1;
          }
          if (iVar10 < 1) {
            uVar13 = uVar8;
          }
          else {
            iVar14 = uVar8 + 1;
          }
        } while (iVar14 < (int)uVar13);
      }
    }
  }
  return 0;
}

