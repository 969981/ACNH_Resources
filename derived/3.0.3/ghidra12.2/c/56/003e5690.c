
void FUN_003e5690(long param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  
  plVar6 = *(long **)(param_1 + 0x10);
  plVar1 = (long *)(param_1 + 8);
  if (plVar6 == plVar1) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    plVar8 = plVar6;
    do {
      plVar8 = (long *)plVar8[1];
      iVar7 = iVar7 + 1;
    } while (plVar8 != plVar1);
  }
  lVar13 = 0;
  lVar12 = 0;
  lVar5 = 0;
  pcVar9 = (code *)0x0;
  lVar10 = 0;
  bVar4 = 1;
  plVar8 = plVar1;
  do {
    if (plVar8 == plVar6) {
      plVar8 = (long *)0x0;
      break;
    }
    plVar8 = (long *)*plVar8;
    plVar2 = plVar8 + 2;
    if (lVar10 == 0) {
      plVar11 = (long *)plVar8[3];
      if (plVar11 == plVar2) {
        lVar10 = 0;
      }
      else {
        do {
          plVar11 = (long *)plVar11[1];
        } while (plVar11 != plVar2);
        lVar13 = *plVar2;
        lVar10 = *(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 0x18);
        pcVar9 = *(code **)(lVar13 + 0x20);
        lVar5 = *(long *)(lVar13 + 0x28);
        lVar12 = *(long *)(lVar13 + 0x30);
        lVar13 = *(long *)(lVar13 + 0x38);
      }
    }
    iVar7 = iVar7 + -1;
    plVar11 = plVar8 + 3;
    do {
      plVar14 = (long *)*plVar11;
      if (plVar14 == plVar2) goto LAB_003e5700;
      plVar11 = plVar14 + 1;
    } while (((pcVar9 == (code *)plVar14[4] && lVar5 == plVar14[5]) && lVar12 == plVar14[6]) &&
             lVar13 == plVar14[7]);
    bVar4 = 0;
LAB_003e5700:
  } while (iVar7 != 0);
  bVar3 = (bool)(lVar10 != 0 & bVar4);
  if ((bVar3) && (pcVar9 != (code *)0x0)) {
    (*pcVar9)(plVar8,lVar10 - (long)plVar8);
    plVar6 = *(long **)(param_1 + 0x10);
  }
  if (plVar6 != plVar1) {
    if (bVar3) {
      do {
        plVar6 = (long *)*plVar1;
        *(undefined1 *)(plVar6 + 4) = 0;
        FUN_003e5980(plVar6);
        if (plVar6 != plVar1) {
          plVar8 = (long *)plVar6[1];
          lVar10 = *plVar8;
          *(long **)(*plVar6 + 8) = plVar8;
          *plVar8 = *plVar6;
          *(long **)(lVar10 + 8) = plVar6;
          *plVar6 = lVar10;
        }
      } while (*(long **)(param_1 + 0x10) != plVar1);
    }
    else {
      do {
        plVar6 = (long *)*plVar1;
        FUN_003e5980(plVar6);
        if (plVar6 != plVar1) {
          plVar8 = (long *)plVar6[1];
          lVar10 = *plVar8;
          *(long **)(*plVar6 + 8) = plVar8;
          *plVar8 = *plVar6;
          *(long **)(lVar10 + 8) = plVar6;
          *plVar6 = lVar10;
        }
      } while (*(long **)(param_1 + 0x10) != plVar1);
    }
  }
  return;
}

