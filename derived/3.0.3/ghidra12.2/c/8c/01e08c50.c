
long * FUN_01e08c50(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  undefined1 *__src;
  long *plVar7;
  char *pcVar8;
  long *plVar9;
  long *plVar10;
  undefined *local_378;
  undefined1 *local_370;
  int local_368;
  undefined1 local_364 [767];
  undefined1 local_65;
  
  if (param_1[4] == 0) {
    return (long *)0x0;
  }
  if (*(char *)param_2[1] != '\0') {
    local_65 = 0;
    local_364[0] = 0;
    local_368 = 0x300;
    local_378 = &DAT_04a5caa8;
    local_370 = local_364;
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (undefined1 *)param_2[1];
    if (local_364 != __src) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar5 = 0;
      do {
        if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_01e08d34;
        lVar2 = param_2[1] + lVar5;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_01e08d34;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_01e08d34;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_01e08d34:
      iVar4 = (int)lVar5;
      if (local_368 <= (int)lVar5) {
        iVar4 = local_368 + -1;
      }
      memcpy(local_364,__src,(long)iVar4);
      local_364[iVar4] = 0;
    }
    (**(code **)(local_378 + 0x18))(&local_378);
    iVar4 = FUN_006bd550(local_370,0);
    plVar9 = (long *)param_1[1];
    if (plVar9 != param_1) {
      plVar10 = plVar9 + -0x32e6;
      do {
        if (((int)*plVar10 == iVar4) && (plVar10[1] == *param_3)) {
          plVar7 = plVar10 + 2;
          (**(code **)(*plVar7 + 0x18))(plVar7);
          (**(code **)(*plVar7 + 0x18))(plVar7);
          pcVar8 = (char *)plVar10[3];
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar6 = (char *)param_2[1];
          if (pcVar8 == pcVar6) {
LAB_01e08e80:
            lVar5 = param_1[1];
            if ((int)param_1[2] < 1) {
              lVar5 = 0;
            }
            plVar7 = (long *)0x0;
            if (lVar5 != 0) {
              plVar7 = (long *)(lVar5 + -0x19730);
            }
            plVar1 = plVar7 + 0x32e6;
            if (plVar7 != plVar10 && plVar9 != plVar1) {
              if (*plVar9 != 0) {
                *(long *)(*plVar9 + 8) = plVar9[1];
              }
              if ((long *)plVar9[1] != (long *)0x0) {
                *(long *)plVar9[1] = *plVar9;
              }
              *plVar9 = 0;
              plVar9[1] = 0;
              lVar5 = *plVar1;
              *plVar1 = (long)plVar9;
              *plVar9 = lVar5;
              plVar9[1] = (long)plVar1;
              if (lVar5 != 0) {
                *(long **)(lVar5 + 8) = plVar9;
              }
            }
            return plVar10 + 0x66;
          }
          cVar3 = *(char *)plVar10[3];
          if (cVar3 == *pcVar6) {
            if (cVar3 == '\0') goto LAB_01e08e80;
            lVar5 = 0x7fffe;
            pcVar8 = (char *)plVar10[3];
            while( true ) {
              if (pcVar8[1] != pcVar6[1]) break;
              if (pcVar8[1] == '\0') goto LAB_01e08e80;
              if (pcVar8[2] != pcVar6[2]) break;
              if (pcVar8[2] == '\0') goto LAB_01e08e80;
              if ((lVar5 == 0) || (cVar3 = pcVar8[3], cVar3 != pcVar6[3])) break;
              lVar5 = lVar5 + -3;
              pcVar6 = pcVar6 + 3;
              pcVar8 = pcVar8 + 3;
              if (cVar3 == '\0') goto LAB_01e08e80;
            }
          }
        }
        plVar9 = (long *)plVar9[1];
        plVar10 = plVar9 + -0x32e6;
      } while (plVar10 != param_1 + -0x32e6);
    }
  }
  return (long *)0x0;
}

