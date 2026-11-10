
void FUN_00321830(float param_1,long param_2,undefined4 param_3,uint param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  bool bVar12;
  
  if (*(long *)(param_2 + 0x170) != 0) {
    iVar2 = *(int *)(param_2 + 0x178) + -1;
    if ((0 < *(int *)(param_2 + 0x178)) && (*(int *)(param_2 + 0x178) = iVar2, iVar2 == 0)) {
      FUN_00321590(param_2);
      *(undefined8 *)(param_2 + 0x170) = 0;
      *(undefined4 *)(param_2 + 0x178) = 0;
    }
  }
  if (*(char *)(param_2 + 0x1a) != '\0') {
    *(undefined4 *)(param_2 + 0x1b8) = 0;
    *(undefined4 *)(param_2 + 0x240) = 0;
    *(undefined8 *)(param_2 + 0x44) = 0;
    *(undefined8 *)(param_2 + 0x1a8) = 0;
    *(undefined8 *)(param_2 + 0x1b0) = 0;
    *(float *)(param_2 + 0x54) = param_1;
    *(float *)(param_2 + 0x58) = *(float *)(param_2 + 0x58) + param_1;
    *(undefined8 *)(param_2 + 0x198) = 0;
    *(undefined8 *)(param_2 + 0x1a0) = 0;
    *(undefined8 *)(param_2 + 0x188) = 0;
    *(undefined8 *)(param_2 + 400) = 0;
    *(undefined8 *)(param_2 + 0x1c0) = 0;
    *(undefined8 *)(param_2 + 0x1c8) = 0;
    if (*(long *)(param_2 + 0x160) != 0) {
      bVar12 = false;
      lVar7 = *(long *)(param_2 + 0x160);
      do {
        lVar8 = *(long *)(lVar7 + 0x80);
        if (((*(char *)(param_2 + 0x1e) == '\0') ||
            (*(int *)(lVar7 + 0x28) != 0 || *(int *)(param_2 + 0x26c) != 0)) ||
           (*(float *)(lVar7 + 0x44) <= 0.0)) {
          iVar2 = FUN_00321ca4(param_2,lVar7,param_3,param_4 & 1,param_5,param_6);
          lVar6 = *(long *)(lVar7 + 0x240);
          *(char *)(lVar7 + 5) = (char)iVar2;
          *(undefined1 *)(lVar7 + 4) = 0;
          if (0 < *(int *)(lVar6 + 0x88)) {
            lVar11 = 0;
            do {
              pcVar10 = *(char **)(lVar7 + lVar11 * 8 + 0x4d8);
              if (pcVar10 != (char *)0x0) {
                do {
                  while( true ) {
                    pcVar9 = *(char **)(pcVar10 + 0x80);
                    iVar3 = FUN_00321ca4(param_2,pcVar10,param_3,param_4 & 1,param_5,param_6);
                    pcVar10[5] = (char)iVar2;
                    if (iVar3 == 0) break;
                    if (*pcVar10 == '\0') {
                      lVar6 = *(long *)(pcVar10 + 0x88);
                      if ((lVar6 != 0) && (*(long *)(pcVar10 + 0x80) != 0)) {
                        *(long *)(lVar6 + 0x80) = *(long *)(pcVar10 + 0x80);
                        goto LAB_003219dc;
                      }
                      if (*(char **)(param_2 + 0x160) == pcVar10) {
                        *(undefined8 *)(param_2 + 0x160) = *(undefined8 *)(pcVar10 + 0x80);
                        lVar6 = *(long *)(pcVar10 + 0x80);
                        if (lVar6 != 0) goto LAB_00321b70;
                        *(undefined8 *)(param_2 + 0x168) = 0;
                      }
                      else if (*(char **)(param_2 + 0x168) == pcVar10) {
                        *(long *)(param_2 + 0x168) = lVar6;
                        lVar6 = *(long *)(pcVar10 + 0x88);
                        if (lVar6 != 0) goto LAB_00321b3c;
                        *(undefined8 *)(param_2 + 0x160) = 0;
                      }
                    }
                    else {
                      lVar6 = *(long *)(pcVar10 + 0x88);
                      if ((lVar6 == 0) || (*(long *)(pcVar10 + 0x80) == 0)) {
                        lVar1 = *(long *)(pcVar10 + 0x5e0) + (long)*(int *)(pcVar10 + 0x20) * 8;
                        if (*(char **)(lVar1 + 0x4d8) == pcVar10) {
                          *(undefined8 *)(lVar1 + 0x4d8) = *(undefined8 *)(pcVar10 + 0x80);
                          lVar6 = *(long *)(pcVar10 + 0x80);
                          if (lVar6 == 0) {
                            *(undefined8 *)(lVar1 + 0x558) = 0;
                          }
                          else {
LAB_00321b70:
                            *(undefined8 *)(lVar6 + 0x88) = *(undefined8 *)(pcVar10 + 0x88);
                          }
                        }
                        else if (*(char **)(lVar1 + 0x558) == pcVar10) {
                          *(long *)(lVar1 + 0x558) = lVar6;
                          lVar6 = *(long *)(pcVar10 + 0x88);
                          if (lVar6 == 0) {
                            *(undefined8 *)(lVar1 + 0x4d8) = 0;
                          }
                          else {
LAB_00321b3c:
                            *(undefined8 *)(lVar6 + 0x80) = *(undefined8 *)(pcVar10 + 0x80);
                          }
                        }
                      }
                      else {
                        *(long *)(lVar6 + 0x80) = *(long *)(pcVar10 + 0x80);
LAB_003219dc:
                        *(undefined8 *)(*(long *)(pcVar10 + 0x80) + 0x88) =
                             *(undefined8 *)(pcVar10 + 0x88);
                      }
                    }
                    (**(code **)**(undefined8 **)(*(long *)(param_2 + 0x280) + 0x128))();
                    FUN_0031df0c(pcVar10,*(undefined8 *)(param_2 + 0x10),1);
                    FUN_0031d9ac(pcVar10);
                    plVar4 = *(long **)(*(long *)(param_2 + 0x280) + 0x110);
                    (**(code **)(*plVar4 + 0x18))(plVar4,pcVar10);
                    (**(code **)(**(long **)(*(long *)(param_2 + 0x280) + 0x128) + 8))();
                    bVar12 = (bool)(pcVar10[0x68c] != '\0' | bVar12);
                    pcVar10 = pcVar9;
                    if (pcVar9 == (char *)0x0) goto LAB_003219b0;
                  }
                  *(undefined1 *)(lVar7 + 4) = 1;
                  bVar12 = (bool)(pcVar10[0x68c] != '\0' | bVar12);
                  pcVar10 = pcVar9;
                } while (pcVar9 != (char *)0x0);
LAB_003219b0:
                lVar6 = *(long *)(lVar7 + 0x240);
              }
              lVar11 = lVar11 + 1;
            } while (lVar11 < *(int *)(lVar6 + 0x88));
          }
          if ((iVar2 != 0) && (*(char *)(lVar7 + 4) == '\0')) goto LAB_00321ba4;
        }
        else {
          *(float *)(lVar7 + 0x44) = *(float *)(lVar7 + 0x44) + param_1;
          *(int *)(param_2 + 0x18c) = *(int *)(param_2 + 0x18c) + 1;
          if (((*(char *)(param_2 + 0x1e) == '\0') || (-1 < *(int *)(param_2 + 0x270))) &&
             (uVar5 = FUN_0031e208(lVar7), (uVar5 & 1) != 0)) {
LAB_00321ba4:
            FUN_0032254c(param_2,lVar7);
            (**(code **)**(undefined8 **)(*(long *)(param_2 + 0x280) + 0x128))();
            FUN_0031df0c(lVar7,*(undefined8 *)(param_2 + 0x10),1);
            FUN_0031d9ac(lVar7);
            plVar4 = *(long **)(*(long *)(param_2 + 0x280) + 0x110);
            (**(code **)(*plVar4 + 0x18))(plVar4,lVar7);
            (**(code **)(**(long **)(*(long *)(param_2 + 0x280) + 0x128) + 8))();
          }
        }
        bVar12 = (bool)(*(char *)(lVar7 + 0x68c) != '\0' | bVar12);
        lVar7 = lVar8;
      } while (lVar8 != 0);
      if (bVar12) {
        *(undefined1 *)(param_2 + 0x274) = 1;
      }
    }
    if (((*(char *)(param_2 + 0x1e) != '\0') && (0.0 < param_1)) && (0 < *(int *)(param_2 + 0x26c)))
    {
      if (0 < *(int *)(param_2 + 0x268)) {
        lVar7 = 0;
        lVar8 = 0x50;
        do {
          lVar7 = lVar7 + 1;
          *(undefined8 *)(*(long *)(param_2 + 0x260) + lVar8) = 0;
          lVar8 = lVar8 + 0x60;
        } while (lVar7 < *(int *)(param_2 + 0x268));
      }
      *(undefined4 *)(param_2 + 0x26c) = 0;
    }
  }
  return;
}

