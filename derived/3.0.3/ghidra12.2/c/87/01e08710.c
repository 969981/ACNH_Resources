
void FUN_01e08710(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long *plVar8;
  char *pcVar9;
  void *pvVar10;
  void *pvVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined *local_390;
  char *local_388;
  undefined *local_380;
  char *local_378;
  undefined4 local_370;
  char local_36c [767];
  undefined1 local_6d;
  
  puVar3 = PTR_DAT_04bb2020;
  plVar12 = *(long **)(param_1 + 0xb8);
  if ((plVar12 != (long *)0x0) && (*(long *)(param_1 + 0xc0) != 0)) {
    local_388 = (char *)(param_2 + 0x8c);
    plVar1 = (long *)(param_2 + 0x70);
    local_390 = PTR_DAT_04bb2020 + 0x10;
    if ((plVar12[4] != 0) && (*local_388 != '\0')) {
      local_6d = 0;
      local_36c[0] = '\0';
      local_370 = 0x300;
      local_380 = &DAT_04a5caa8;
      local_378 = local_36c;
      if (local_36c != local_388) {
        lVar6 = 0;
        do {
          lVar5 = param_2 + lVar6;
          if (*(char *)(lVar5 + 0x8c) == '\0') {
LAB_01e087ec:
            iVar4 = (int)lVar6;
            if (0x2ff < iVar4) {
              iVar4 = 0x2ff;
            }
            goto LAB_01e087f8;
          }
          if (*(char *)(lVar5 + 0x8d) == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_01e087ec;
          }
          if (*(char *)(lVar5 + 0x8e) == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_01e087ec;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        iVar4 = 0;
LAB_01e087f8:
        memcpy(local_36c,local_388,(long)iVar4);
        local_36c[iVar4] = '\0';
      }
      (**(code **)(local_380 + 0x18))(&local_380);
      iVar4 = FUN_006bd550(local_378,0);
      plVar13 = (long *)plVar12[1];
      if (plVar13 != plVar12) {
        plVar14 = plVar13 + -0x110;
        do {
          if (((int)plVar13[-0x110] == iVar4) && (plVar14[1] == *plVar1)) {
            plVar8 = plVar14 + 2;
            (**(code **)(*plVar8 + 0x18))(plVar8);
            (**(code **)(*plVar8 + 0x18))(plVar8);
            pcVar9 = (char *)plVar14[3];
            (**(code **)(local_390 + 0x18))(&local_390);
            if (pcVar9 == local_388) {
LAB_01e0892c:
              lVar6 = plVar12[1];
              if ((int)plVar12[2] < 1) {
                lVar6 = 0;
              }
              plVar12 = (long *)0x0;
              if (lVar6 != 0) {
                plVar12 = (long *)(lVar6 + -0x880);
              }
              plVar8 = plVar12 + 0x110;
              if (plVar12 != plVar14 && plVar13 != plVar8) {
                if (*plVar13 != 0) {
                  *(long *)(*plVar13 + 8) = plVar13[1];
                }
                if ((long *)plVar13[1] != (long *)0x0) {
                  *(long *)plVar13[1] = *plVar13;
                }
                *plVar13 = 0;
                plVar13[1] = 0;
                lVar6 = *plVar8;
                *plVar8 = (long)plVar13;
                *plVar13 = lVar6;
                plVar13[1] = (long)plVar8;
                if (lVar6 != 0) {
                  *(long **)(lVar6 + 8) = plVar13;
                }
              }
              lVar6 = DAT_05ae7600;
              pvVar10 = *(void **)(param_2 + 0xfa8);
              if (pvVar10 == (void *)0x0) {
                if (DAT_05ae7600 == 0) {
                  pvVar10 = malloc(0x558);
                }
                else {
                  plVar12 = *(long **)(param_1 + 0x70);
                  if (plVar12 == (long *)0x0) {
                    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                    plVar12 = (long *)(lVar6 + 8);
                    if (lVar5 != 0) {
                      plVar12 = (long *)(lVar5 + 0xa8);
                    }
                    plVar12 = (long *)*plVar12;
                    if (plVar12 == (long *)0x0) {
                      pvVar10 = (void *)0x0;
                      goto LAB_01e08a04;
                    }
                  }
                  pvVar10 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,0x558,8);
                }
LAB_01e08a04:
                *(undefined4 *)((long)pvVar10 + 0xb5) = 0;
                *(undefined8 *)((long)pvVar10 + 0xad) = 0;
                *(undefined8 *)((long)pvVar10 + 0xa5) = 0;
                *(undefined8 *)((long)pvVar10 + 0x9d) = 0;
                *(undefined8 *)((long)pvVar10 + 0x95) = 0;
                *(undefined8 *)((long)pvVar10 + 0x8d) = 0;
                *(undefined8 *)((long)pvVar10 + 0x85) = 0;
                *(undefined8 *)((long)pvVar10 + 0x7d) = 0;
                *(undefined8 *)((long)pvVar10 + 0x75) = 0;
                *(undefined8 *)((long)pvVar10 + 0x6d) = 0;
                *(undefined8 *)((long)pvVar10 + 0x65) = 0;
                *(undefined8 *)((long)pvVar10 + 0x5d) = 0;
                *(undefined8 *)((long)pvVar10 + 0x55) = 0;
                *(undefined8 *)((long)pvVar10 + 0x4d) = 0;
                *(undefined8 *)((long)pvVar10 + 0x45) = 0;
                *(undefined8 *)((long)pvVar10 + 0x3d) = 0;
                *(undefined8 *)((long)pvVar10 + 0x35) = 0;
                *(undefined8 *)((long)pvVar10 + 0x2d) = 0;
                memset((void *)((long)pvVar10 + 0x141),0,0x408);
              }
              memcpy(pvVar10,plVar14 + 0x65,0x558);
              *(void **)(param_2 + 0xfa8) = pvVar10;
              *(undefined2 *)(param_2 + 0xfb0) = 0x101;
              break;
            }
            cVar2 = *(char *)plVar14[3];
            if (cVar2 == *local_388) {
              if (cVar2 == '\0') goto LAB_01e0892c;
              lVar6 = 0x7fffe;
              pcVar9 = local_388;
              pcVar7 = (char *)plVar14[3];
              while( true ) {
                if (pcVar7[1] != pcVar9[1]) break;
                if (pcVar7[1] == '\0') goto LAB_01e0892c;
                if (pcVar7[2] != pcVar9[2]) break;
                if (pcVar7[2] == '\0') goto LAB_01e0892c;
                if ((lVar6 == 0) || (cVar2 = pcVar7[3], cVar2 != pcVar9[3])) break;
                lVar6 = lVar6 + -3;
                pcVar9 = pcVar9 + 3;
                pcVar7 = pcVar7 + 3;
                if (cVar2 == '\0') goto LAB_01e0892c;
              }
            }
          }
          plVar13 = (long *)plVar13[1];
          plVar14 = plVar13 + -0x110;
        } while (plVar14 != plVar12 + -0x110);
      }
    }
    local_378 = (char *)(param_2 + 0x68c);
    local_380 = puVar3 + 0x10;
    pvVar10 = (void *)FUN_01e08c50(*(undefined8 *)(param_1 + 0xc0),&local_380,plVar1);
    lVar6 = DAT_05ae7600;
    if (pvVar10 != (void *)0x0) {
      pvVar11 = *(void **)(param_2 + 0xfb8);
      if (pvVar11 == (void *)0x0) {
        if (DAT_05ae7600 == 0) {
          pvVar11 = malloc(0x19400);
        }
        else {
          plVar12 = *(long **)(param_1 + 0x68);
          if (plVar12 == (long *)0x0) {
            lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar12 = (long *)(lVar6 + 8);
            if (lVar5 != 0) {
              plVar12 = (long *)(lVar5 + 0xa8);
            }
            plVar12 = (long *)*plVar12;
          }
          pvVar11 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,0x19400,0x10);
        }
        memset(pvVar11,0,0x19400);
        *(undefined4 *)((long)pvVar11 + 0x30) = 1;
        *(undefined4 *)((long)pvVar11 + 0x38) = 0xffffffff;
      }
      memcpy(pvVar11,pvVar10,0x19400);
      *(void **)(param_2 + 0xfb8) = pvVar11;
      *(undefined2 *)(param_2 + 0xfc0) = 0x101;
    }
    local_378 = (char *)(param_2 + 0x98c);
    local_380 = puVar3 + 0x10;
    pvVar10 = (void *)FUN_01e08c50(*(undefined8 *)(param_1 + 0xc0),&local_380,plVar1);
    lVar6 = DAT_05ae7600;
    if (pvVar10 != (void *)0x0) {
      pvVar11 = *(void **)(param_2 + 0xfc8);
      if (pvVar11 == (void *)0x0) {
        if (DAT_05ae7600 == 0) {
          pvVar11 = malloc(0x19400);
        }
        else {
          plVar12 = *(long **)(param_1 + 0x68);
          if (plVar12 == (long *)0x0) {
            lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar12 = (long *)(lVar6 + 8);
            if (lVar5 != 0) {
              plVar12 = (long *)(lVar5 + 0xa8);
            }
            plVar12 = (long *)*plVar12;
          }
          pvVar11 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,0x19400,0x10);
        }
        memset(pvVar11,0,0x19400);
        *(undefined4 *)((long)pvVar11 + 0x30) = 1;
        *(undefined4 *)((long)pvVar11 + 0x38) = 0xffffffff;
      }
      memcpy(pvVar11,pvVar10,0x19400);
      *(void **)(param_2 + 0xfc8) = pvVar11;
      *(undefined2 *)(param_2 + 0xfd0) = 0x101;
    }
  }
  return;
}

