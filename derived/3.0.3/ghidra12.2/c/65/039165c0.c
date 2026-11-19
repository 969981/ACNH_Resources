
void FUN_039165c0(long param_1)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  
  lVar9 = 0;
  lVar1 = param_1 + 0x2730;
  do {
    lVar10 = lVar1 + lVar9 * 0x60;
    puVar11 = (undefined8 *)(lVar10 + 0x10);
    if ((*(char *)*puVar11 != '\0') &&
       (lVar12 = *(long *)(param_1 + 8), *(int *)(lVar12 + 0x2d8) != 0)) {
      uVar13 = 0;
      plVar7 = (long *)(lVar10 + 8);
      do {
        uVar2 = uVar13;
        if (*(uint *)(lVar12 + 0x2c8) <= uVar13) {
          uVar2 = 0;
        }
        plVar8 = (long *)(*(long *)(lVar12 + 0x2d0) + (long)(int)uVar2 * 0x18);
        (**(code **)(*plVar8 + 0x18))(plVar8);
        (**(code **)(*plVar8 + 0x18))(plVar8);
        pcVar6 = (char *)plVar8[1];
        (**(code **)(*plVar7 + 0x18))(plVar7);
        pcVar4 = (char *)*puVar11;
        if (pcVar6 == pcVar4) {
LAB_0391671c:
          if (*(uint *)(lVar12 + 0x2c8) <= uVar13) {
            uVar13 = 0;
          }
          lVar10 = *(long *)(lVar12 + 0x2d0) + (long)(int)uVar13 * 0x18;
          goto LAB_03916738;
        }
        cVar3 = *(char *)plVar8[1];
        if (cVar3 == *pcVar4) {
          if (cVar3 == '\0') goto LAB_0391671c;
          lVar10 = 0x7fffe;
          pcVar6 = (char *)plVar8[1];
          while( true ) {
            if (pcVar6[1] != pcVar4[1]) break;
            if (pcVar6[1] == '\0') goto LAB_0391671c;
            if (pcVar6[2] != pcVar4[2]) break;
            if (pcVar6[2] == '\0') goto LAB_0391671c;
            if ((lVar10 == 0) || (cVar3 = pcVar6[3], cVar3 != pcVar4[3])) break;
            lVar10 = lVar10 + -3;
            pcVar4 = pcVar4 + 3;
            pcVar6 = pcVar6 + 3;
            if (cVar3 == '\0') goto LAB_0391671c;
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(lVar12 + 0x2d8));
    }
    lVar10 = 0;
LAB_03916738:
    lVar12 = lVar1 + lVar9 * 0x60;
    *(long *)(lVar12 + 0x18) = lVar10;
    if ((**(char **)(lVar12 + 0x28) != '\0') &&
       (lVar10 = *(long *)(param_1 + 8), *(int *)(lVar10 + 0x2f0) != 0)) {
      uVar13 = 0;
      do {
        uVar2 = uVar13;
        if (*(uint *)(lVar10 + 0x2e0) <= uVar13) {
          uVar2 = 0;
        }
        plVar7 = (long *)(*(long *)(lVar10 + 0x2e8) + (long)(int)uVar2 * 0x18);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        pcVar6 = (char *)plVar7[1];
        (**(code **)(*(long *)(lVar12 + 0x20) + 0x18))((long *)(lVar12 + 0x20));
        pcVar4 = *(char **)(lVar12 + 0x28);
        if (pcVar6 == pcVar4) {
LAB_0391684c:
          if (*(uint *)(lVar10 + 0x2e0) <= uVar13) {
            uVar13 = 0;
          }
          lVar10 = *(long *)(lVar10 + 0x2e8) + (long)(int)uVar13 * 0x18;
          goto LAB_03916604;
        }
        cVar3 = *(char *)plVar7[1];
        if (cVar3 == *pcVar4) {
          if (cVar3 == '\0') goto LAB_0391684c;
          lVar5 = 0x7fffe;
          pcVar6 = (char *)plVar7[1];
          while( true ) {
            if (pcVar6[1] != pcVar4[1]) break;
            if (pcVar6[1] == '\0') goto LAB_0391684c;
            if (pcVar6[2] != pcVar4[2]) break;
            if (pcVar6[2] == '\0') goto LAB_0391684c;
            if ((lVar5 == 0) || (cVar3 = pcVar6[3], cVar3 != pcVar4[3])) break;
            lVar5 = lVar5 + -3;
            pcVar4 = pcVar4 + 3;
            pcVar6 = pcVar6 + 3;
            if (cVar3 == '\0') goto LAB_0391684c;
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(lVar10 + 0x2f0));
    }
    lVar10 = 0;
LAB_03916604:
    lVar12 = lVar9 * 0x60;
    lVar9 = lVar9 + 1;
    *(long *)(lVar1 + lVar12 + 0x30) = lVar10;
    if (lVar9 == 8) {
      return;
    }
  } while( true );
}

