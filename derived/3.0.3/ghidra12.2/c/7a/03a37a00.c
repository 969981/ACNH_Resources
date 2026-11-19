
void FUN_03a37a00(long param_1,uint param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  long *plVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  puVar1 = (undefined1 *)(param_1 + 0x14a8);
  *(char *)(param_1 + 0x268) = *(char *)(param_1 + 0x268) + '\x01';
  iVar2 = *(int *)(param_1 + 600);
  if (iVar2 != 0) {
    lVar6 = *(long *)(param_1 + 0x260);
    iVar7 = 0;
    do {
      bVar3 = *(byte *)(param_1 + 0x269);
      if (bVar3 < 2) {
LAB_03a37a30:
        uVar10 = 0;
      }
      else {
        plVar11 = (long *)(lVar6 + (long)iVar7 * 0x238);
        iVar12 = (int)*(char *)((long)plVar11 + 0x231);
        if (iVar12 == -1) goto LAB_03a37a30;
        uVar4 = 0;
        if (bVar3 != 0) {
          uVar4 = (uint)*(byte *)(param_1 + 0x268) / (uint)bVar3;
        }
        if ((uint)*(byte *)(param_1 + 0x268) - uVar4 * bVar3 == iVar12) {
          uVar10 = 2;
        }
        else {
          uVar10 = 1;
          if (*plVar11 == 0) {
            uVar10 = 2;
          }
        }
      }
      *(undefined1 *)(lVar6 + (long)iVar7 * 0x238 + 0x230) = uVar10;
      iVar7 = iVar7 + 1;
    } while (iVar2 != iVar7);
  }
  bVar3 = *(byte *)(param_1 + 0x14c1);
  if ((param_2 & 1) == 0) {
    if (((bVar3 & 1) == 0) &&
       (((param_3 == 0 || ((*(byte *)(param_3 + 0x1c) & 1) == 0)) ||
        ((*(uint *)(param_3 + 0x20) >> 1 & 1) == 0)))) goto LAB_03a37be4;
    uVar13 = *(undefined4 *)(param_1 + 0x1498);
    *(byte *)(param_1 + 0x14c1) = bVar3 & 0xfe;
    uVar14 = *(undefined4 *)(param_1 + 0x149c);
    uVar15 = *(undefined4 *)(param_1 + 0x14a0);
    uVar16 = *(undefined4 *)(param_1 + 0x14a4);
    uVar17 = *(undefined4 *)(param_1 + 0x14ac);
    uVar18 = *(undefined4 *)(param_1 + 0x14b4);
    uVar9 = *(undefined4 *)(param_1 + 0x1490);
    uVar8 = *(undefined4 *)(param_1 + 0x1494);
    uVar10 = *puVar1;
    uVar5 = *(undefined4 *)(param_1 + 0x14b0);
    if (((param_3 != 0) && ((*(byte *)(param_3 + 0x1c) & 1) != 0)) &&
       ((*(uint *)(param_3 + 0x20) >> 1 & 1) != 0)) {
      uVar4 = *(uint *)(param_3 + 0x18);
      if (*(uint *)(param_3 + 8) <= uVar4) {
        uVar4 = 0;
      }
      uVar19 = *(undefined4 *)(*(long *)(param_3 + 0x10) + (long)(int)uVar4 * 0x588 + 0x48);
      *(byte *)(param_1 + 0x14c1) = bVar3 | 1;
      *(undefined4 *)(param_1 + 0xe30) = uVar19;
    }
  }
  else if ((bVar3 & 1) == 0) {
    uVar9 = 2;
    uVar13 = *(undefined4 *)(param_1 + 0xc58);
    *(byte *)(param_1 + 0x14c1) = bVar3 | 1;
    uVar8 = 6;
    uVar14 = *(undefined4 *)(param_1 + 0xc78);
    *(undefined4 *)(param_1 + 0x1490) = *(undefined4 *)(param_1 + 0xc18);
    uVar15 = *(undefined4 *)(param_1 + 0xc98);
    *(undefined4 *)(param_1 + 0x1498) = uVar13;
    uVar16 = *(undefined4 *)(param_1 + 0xcb8);
    *(undefined4 *)(param_1 + 0x149c) = uVar14;
    *(undefined4 *)(param_1 + 0x14a0) = uVar15;
    *(undefined4 *)(param_1 + 0x14a4) = uVar16;
    *(undefined4 *)(param_1 + 0x1494) = *(undefined4 *)(param_1 + 0xc38);
    uVar17 = *(undefined4 *)(param_1 + 0xcf8);
    uVar18 = *(undefined4 *)(param_1 + 0xe18);
    uVar10 = *(undefined1 *)(param_1 + 0xcd8);
    *(undefined4 *)(param_1 + 0x14ac) = uVar17;
    *(undefined4 *)(param_1 + 0x14b4) = uVar18;
    *puVar1 = uVar10;
    uVar5 = *(undefined4 *)(param_1 + 0xdf8);
    *(undefined4 *)(param_1 + 0x14b0) = uVar5;
  }
  else {
    uVar13 = *(undefined4 *)(param_1 + 0x1498);
    uVar8 = 6;
    uVar9 = 2;
    uVar14 = *(undefined4 *)(param_1 + 0x149c);
    uVar15 = *(undefined4 *)(param_1 + 0x14a0);
    uVar16 = *(undefined4 *)(param_1 + 0x14a4);
    uVar17 = *(undefined4 *)(param_1 + 0x14ac);
    uVar18 = *(undefined4 *)(param_1 + 0x14b4);
    uVar10 = *puVar1;
    uVar5 = *(undefined4 *)(param_1 + 0x14b0);
  }
  *(undefined4 *)(param_1 + 0xc18) = uVar9;
  *(undefined4 *)(param_1 + 0xc38) = uVar8;
  *(undefined4 *)(param_1 + 0xc58) = uVar13;
  *(undefined4 *)(param_1 + 0xc78) = uVar14;
  *(undefined4 *)(param_1 + 0xc98) = uVar15;
  *(undefined4 *)(param_1 + 0xcb8) = uVar16;
  *(undefined1 *)(param_1 + 0xcd8) = uVar10;
  *(undefined4 *)(param_1 + 0xcf8) = uVar17;
  *(undefined4 *)(param_1 + 0xdf8) = uVar5;
  *(undefined4 *)(param_1 + 0xe18) = uVar18;
LAB_03a37be4:
  if (*(char *)(*(long *)(param_1 + 8) + 0x950) == '\0') {
    *(bool *)(param_1 + 0xec9) = *(char *)(*(long *)(param_1 + 8) + 0x1040) != '\0';
    return;
  }
  *(undefined1 *)(param_1 + 0xec9) = 0;
  return;
}

