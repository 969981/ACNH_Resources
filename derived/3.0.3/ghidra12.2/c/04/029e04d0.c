
void FUN_029e04d0(long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  uint *puVar7;
  char *pcVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  
  plVar13 = *(long **)(param_2 + 8);
  if (((plVar13 != (long *)0x0) && (lVar12 = *plVar13, lVar12 != 0)) &&
     ((int)plVar13[1] == *(int *)(lVar12 + 0x10))) {
    lVar6 = *(long *)(*(long *)(lVar12 + 0x120) + 8);
    lVar10 = *(long *)(lVar6 + 0x38);
    if (DAT_05aebc00 != '\0') {
      lVar10 = lVar6 + 0x70;
    }
    pcVar8 = (char *)0x0;
    if (lVar10 != 0) {
      if ((*(byte *)(lVar10 + 0x11) >> 5 & 1) == 0) {
        pcVar8 = (char *)0x0;
        if (*(long *)(lVar10 + 8) != 0) {
          puVar7 = (uint *)(*(long *)(lVar10 + 8) + 0x24);
          pcVar8 = (char *)((ulong)*puVar7 + (long)puVar7);
        }
      }
      else {
        pcVar8 = "<NoSound>";
      }
    }
    lVar10 = 0;
    do {
      if (pcVar8[lVar10] == '\0') {
LAB_029e05a0:
        iVar9 = (int)lVar10;
joined_r0x029e05a4:
        if (((1 < iVar9) && (pcVar8[iVar9 - 2] == '_')) && (pcVar8[(ulong)(iVar9 - 2) + 1] == 'L'))
        {
          bVar5 = true;
          goto LAB_029e0650;
        }
        break;
      }
      if (pcVar8[lVar10 + 1] == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_029e05a0;
      }
      if (pcVar8[lVar10 + 2] == '\0') {
        iVar9 = (int)lVar10 + 2;
        goto joined_r0x029e05a4;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
    do {
      if (pcVar8[lVar10] == '\0') {
LAB_029e0614:
        iVar9 = (int)lVar10;
joined_r0x029e0618:
        if (iVar9 < 2) {
          return;
        }
        if (pcVar8[iVar9 - 2] != '_') {
          return;
        }
        if (pcVar8[(ulong)(iVar9 - 2) + 1] != 'R') {
          return;
        }
        bVar5 = false;
LAB_029e0650:
        if ((*(int *)(lVar12 + 0xc) < 3) && (*(long *)(lVar12 + 0x118) == 0)) {
          if (bVar5) {
            if (*(int *)(lVar12 + 0xc) < 3) {
              *(long *)(lVar12 + 0x118) = param_1 + 0x18;
              FUN_03b46430(lVar12);
            }
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x20);
          }
          else {
            if (*(int *)(lVar12 + 0xc) < 3) {
              *(long *)(lVar12 + 0x118) = param_1 + 0x16f0;
              FUN_03b46430(lVar12);
            }
            *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x20);
          }
          *(undefined1 *)(lVar12 + 0x1a4) = 1;
        }
        lVar12 = *plVar13;
        *(int *)(param_1 + 0x2de8) = (int)plVar13[1];
        *(long *)(param_1 + 0x2de0) = lVar12;
        if (*(long *)(param_2 + 0x10) == 0) {
          return;
        }
        cVar1 = *(char *)(param_1 + 0x9aa8) + '\x01';
        uVar4 = cVar1 * 0x29;
        *(byte *)(param_1 + 0x9aa8) =
             cVar1 + (((byte)(uVar4 >> 0xf) & 1) + (char)(uVar4 >> 0xc)) * -100;
        uVar11 = *(ulong *)PTR_DAT_04bb38c8 | (ulong)**(uint **)(param_2 + 0x10);
        uVar2 = uVar11 + 0x100000000;
        if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)**(uint **)(param_2 + 0x10)) {
          uVar2 = uVar11;
        }
        puVar3 = (ulong *)(param_1 + 0x9a90);
        if (!bVar5) {
          puVar3 = (ulong *)(param_1 + 0x9aa0);
        }
        *puVar3 = uVar2;
        return;
      }
      if (pcVar8[lVar10 + 1] == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_029e0614;
      }
      if (pcVar8[lVar10 + 2] == '\0') {
        iVar9 = (int)lVar10 + 2;
        goto joined_r0x029e0618;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
  }
  return;
}

