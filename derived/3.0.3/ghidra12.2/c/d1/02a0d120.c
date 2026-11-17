
void FUN_02a0d120(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar6 = param_2[1];
  (**(code **)(DAT_055f4338 + 0x18))(&DAT_055f4338);
  if (lVar6 == DAT_055f4340) {
LAB_02a0d1d0:
    piVar1 = (int *)(param_1 + 0x50);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    uVar5 = 0;
    bVar4 = true;
    do {
      if (*(char *)(param_2[1] + uVar5) != *(char *)(DAT_055f4340 + uVar5)) break;
      if (*(char *)(param_2[1] + uVar5) == '\0') {
        if (bVar4) goto LAB_02a0d1d0;
        break;
      }
      bVar4 = uVar5 < 0x80000;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x80001);
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = param_2[1];
    (**(code **)(DAT_055f4348 + 0x18))(&DAT_055f4348);
    if (lVar6 == DAT_055f4350) {
LAB_02a0d270:
      piVar1 = (int *)(param_1 + 0x58);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      uVar5 = 0;
      bVar4 = true;
      do {
        if (*(char *)(param_2[1] + uVar5) != *(char *)(DAT_055f4350 + uVar5)) break;
        if (*(char *)(param_2[1] + uVar5) == '\0') {
          if (bVar4) goto LAB_02a0d270;
          break;
        }
        bVar4 = uVar5 < 0x80000;
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0x80001);
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = param_2[1];
      (**(code **)(DAT_055f4358 + 0x18))(&DAT_055f4358);
      if (lVar6 == DAT_055f4360) {
LAB_02a0d310:
        piVar1 = (int *)(param_1 + 0x60);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      else {
        uVar5 = 0;
        bVar4 = true;
        do {
          if (*(char *)(param_2[1] + uVar5) != *(char *)(DAT_055f4360 + uVar5)) break;
          if (*(char *)(param_2[1] + uVar5) == '\0') {
            if (bVar4) goto LAB_02a0d310;
            break;
          }
          bVar4 = uVar5 < 0x80000;
          uVar5 = uVar5 + 1;
        } while (uVar5 != 0x80001);
        (**(code **)(*param_2 + 0x18))(param_2);
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar6 = param_2[1];
        (**(code **)(DAT_055f4368 + 0x18))(&DAT_055f4368);
        if (lVar6 == DAT_055f4370) {
LAB_02a0d3b0:
          piVar1 = (int *)(param_1 + 0x68);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        else {
          uVar5 = 0;
          bVar4 = true;
          do {
            if (*(char *)(param_2[1] + uVar5) != *(char *)(DAT_055f4370 + uVar5)) break;
            if (*(char *)(param_2[1] + uVar5) == '\0') {
              if (bVar4) goto LAB_02a0d3b0;
              break;
            }
            bVar4 = uVar5 < 0x80000;
            uVar5 = uVar5 + 1;
          } while (uVar5 != 0x80001);
          (**(code **)(*param_2 + 0x18))(param_2);
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar6 = param_2[1];
          (**(code **)(DAT_055f4378 + 0x18))(&DAT_055f4378);
          if (lVar6 == DAT_055f4380) {
LAB_02a0d450:
            piVar1 = (int *)(param_1 + 0x70);
            do {
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          else {
            uVar5 = 0;
            bVar4 = true;
            do {
              if (*(char *)(param_2[1] + uVar5) != *(char *)(DAT_055f4380 + uVar5)) break;
              if (*(char *)(param_2[1] + uVar5) == '\0') {
                if (bVar4) goto LAB_02a0d450;
                break;
              }
              bVar4 = uVar5 < 0x80000;
              uVar5 = uVar5 + 1;
            } while (uVar5 != 0x80001);
            (**(code **)(*param_2 + 0x18))(param_2);
            (**(code **)(*param_2 + 0x18))(param_2);
            lVar6 = param_2[1];
            (**(code **)(DAT_055f4388 + 0x18))(&DAT_055f4388);
            if (lVar6 == DAT_055f4390) {
LAB_02a0d4f0:
              piVar1 = (int *)(param_1 + 0x78);
              do {
                cVar2 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            else {
              uVar5 = 0;
              bVar4 = true;
              do {
                if (*(char *)(param_2[1] + uVar5) != *(char *)(DAT_055f4390 + uVar5)) break;
                if (*(char *)(param_2[1] + uVar5) == '\0') {
                  if (bVar4) goto LAB_02a0d4f0;
                  break;
                }
                bVar4 = uVar5 < 0x80000;
                uVar5 = uVar5 + 1;
              } while (uVar5 != 0x80001);
              (**(code **)(*param_2 + 0x18))(param_2);
              (**(code **)(*param_2 + 0x18))(param_2);
              pcVar7 = (char *)param_2[1];
              (**(code **)(DAT_055f4398 + 0x18))(&DAT_055f4398);
              if (pcVar7 != DAT_055f43a0) {
                pcVar7 = (char *)param_2[1];
                if (*pcVar7 != *DAT_055f43a0) {
LAB_02a0d5d4:
                  FUN_00710cb0(param_2,&DAT_055f43a8);
                  return;
                }
                if (*pcVar7 != '\0') {
                  lVar6 = 0;
                  do {
                    if (lVar6 == 0x80000) goto LAB_02a0d5d4;
                    if (pcVar7[lVar6 + 1] != DAT_055f43a0[lVar6 + 1]) goto LAB_02a0d5d4;
                    if (pcVar7[lVar6 + 1] == '\0') break;
                    lVar3 = lVar6 + 2;
                    if (pcVar7[lVar3] != DAT_055f43a0[lVar6 + 2]) goto LAB_02a0d5d4;
                    lVar6 = lVar6 + 2;
                  } while (pcVar7[lVar3] != '\0');
                }
              }
              piVar1 = (int *)(param_1 + 0x80);
              do {
                cVar2 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
          }
        }
      }
    }
  }
  return;
}

