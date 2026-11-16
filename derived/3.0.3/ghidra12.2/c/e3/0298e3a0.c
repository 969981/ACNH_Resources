
void FUN_0298e3a0(long param_1,long param_2)

{
  char *pcVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_2 + 8);
  if ((((plVar7 != (long *)0x0) && (lVar6 = *plVar7, lVar6 != 0)) &&
      ((int)plVar7[1] == *(int *)(lVar6 + 0x10))) &&
     ((*(long *)(param_2 + 0x20) != 0 &&
      (puVar2 = *(uint **)(*(long *)(param_2 + 0x20) + 0x30), puVar2 != (uint *)0x0)))) {
    uVar3 = (ulong)*puVar2;
    lVar4 = 0;
    pcVar5 = (char *)(*(ulong *)PTR_DAT_04bb38c8 | uVar3);
    pcVar1 = pcVar5 + 0x100000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= uVar3) {
      pcVar1 = pcVar5;
    }
    do {
      if (pcVar1[lVar4] == '\0') {
LAB_0298e458:
        if (((3 < (int)lVar4) && (uVar3 = (ulong)((int)lVar4 - 4), pcVar1[uVar3] == 'H')) &&
           ((pcVar1[uVar3 + 1] == 'i' && ((pcVar1[uVar3 + 2] == 'f' && (pcVar1[uVar3 + 3] == 'i'))))
           )) {
          param_1 = param_1 + 0xb8;
          goto LAB_0298e6f4;
        }
        break;
      }
      if (pcVar1[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0298e458;
      }
      if (pcVar1[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0298e458;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
    do {
      if (pcVar1[lVar4] == '\0') {
LAB_0298e4e8:
        if (((((4 < (int)lVar4) && (uVar3 = (ulong)((int)lVar4 - 5), pcVar1[uVar3] == 'R')) &&
             (pcVar1[uVar3 + 1] == 'e')) &&
            ((pcVar1[uVar3 + 2] == 't' && (pcVar1[uVar3 + 3] == 'r')))) &&
           (pcVar1[uVar3 + 4] == 'o')) {
          lVar4 = 0x17a0;
          goto LAB_0298e6f0;
        }
        break;
      }
      if (pcVar1[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0298e4e8;
      }
      if (pcVar1[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0298e4e8;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
    do {
      if (pcVar1[lVar4] == '\0') {
LAB_0298e578:
        if (((4 < (int)lVar4) && (uVar3 = (ulong)((int)lVar4 - 5), pcVar1[uVar3] == 'C')) &&
           ((pcVar1[uVar3 + 1] == 'h' &&
            (((pcVar1[uVar3 + 2] == 'e' && (pcVar1[uVar3 + 3] == 'a')) && (pcVar1[uVar3 + 4] == 'p')
             ))))) {
          lVar4 = 0x2e88;
          goto LAB_0298e6f0;
        }
        break;
      }
      if (pcVar1[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0298e578;
      }
      if (pcVar1[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0298e578;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
    do {
      if (pcVar1[lVar4] == '\0') {
LAB_0298e608:
        if ((((4 < (int)lVar4) && (uVar3 = (ulong)((int)lVar4 - 5), pcVar1[uVar3] == 'P')) &&
            ((pcVar1[uVar3 + 1] == 'h' && ((pcVar1[uVar3 + 2] == 'o' && (pcVar1[uVar3 + 3] == 'n')))
             ))) && (pcVar1[uVar3 + 4] == 'o')) goto LAB_0298e6ec;
        break;
      }
      if (pcVar1[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0298e608;
      }
      if (pcVar1[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0298e608;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    if (((((*pcVar1 == 'B') && (pcVar1[1] == 'G')) && (pcVar1[2] == 'M')) &&
        ((pcVar1[3] == '_' && (pcVar1[4] == 'M')))) &&
       ((((pcVar1[5] == 'u' && ((pcVar1[6] == 's' && (pcVar1[7] == 'i')))) && (pcVar1[8] == 'c')) &&
        (((pcVar1[9] == 'B' && (pcVar1[10] == 'o')) && (pcVar1[0xb] == 'x')))))) {
      lVar4 = 0x5c58;
    }
    else {
LAB_0298e6ec:
      lVar4 = 0x4570;
    }
LAB_0298e6f0:
    param_1 = param_1 + lVar4;
LAB_0298e6f4:
    if ((*(int *)(lVar6 + 0xc) < 3) && (*(long *)(lVar6 + 0x118) == 0)) {
      if (*(int *)(lVar6 + 0xc) < 3) {
        *(long *)(lVar6 + 0x118) = param_1 + 0x10;
        FUN_03b46430(lVar6);
      }
      *(undefined1 *)(lVar6 + 0x1a4) = 1;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x20);
    }
    lVar6 = *plVar7;
    *(int *)(param_1 + 0x16e0) = (int)plVar7[1];
    *(long *)(param_1 + 0x16d8) = lVar6;
  }
  return;
}

