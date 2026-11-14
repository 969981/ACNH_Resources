
void FUN_01c1d530(long param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  uint *puVar12;
  ulong uVar13;
  uint local_70;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined4 local_68;
  uint local_64;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  *param_2 = 0;
  lVar5 = *(long *)PTR_DAT_04bb46b0;
  if (lVar5 == 0) {
    return;
  }
  puVar6 = *(undefined8 **)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
    lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
    if (lVar5 == 0) {
      return;
    }
    lVar5 = lVar5 + 0x70;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar6[0x26] == (long *)0x0) {
      return;
    }
    lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
    if (lVar5 == 0) {
      return;
    }
  }
  if ((*(long **)(lVar5 + 0x1bf1b8) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x1bf1b8), puVar6 == (undefined8 *)0x0)) {
    local_70 = 0;
  }
  else {
    local_70 = (**(code **)*puVar6)();
  }
  uVar13 = 0;
  do {
    uVar7 = *(uint *)(param_1 + 0x1c8);
    if ((int)uVar7 < 1) {
      uVar8 = 0;
      if (*(long *)(param_1 + 0xb8) != 0) {
        puVar12 = *(uint **)(*(long *)(param_1 + 0xb8) + 8);
        uVar8 = 0;
        if (puVar12 != (uint *)0x0) {
          uVar8 = (ulong)*puVar12;
        }
      }
      if (uVar8 <= uVar13) {
LAB_01c1d9b8:
        if ((((local_70 & 1) != 0) && (*(long *)(lVar5 + 0x1bf1b8) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x1bf1b8) + 8), puVar6 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar6)();
        }
        return;
      }
      if (0 < (int)uVar7) goto LAB_01c1d654;
      if ((((*(long *)(param_1 + 0xb8) != 0) &&
           (puVar12 = *(uint **)(*(long *)(param_1 + 0xb8) + 8), puVar12 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0xd0) <= uVar13 ||
           (*(char *)(*(long *)(param_1 + 0xd8) + uVar13) != '\0')))) &&
         (((uVar13 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
        iVar11 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          iVar11 = 0x1c;
        }
        puVar12 = (uint *)((ulong)(puVar12[1] * (int)uVar13 + (uint)(ushort)puVar12[2] * 8 + iVar11)
                          + (long)puVar12);
        if (puVar12 == (uint *)0x0) goto LAB_01c1d610;
        goto LAB_01c1d678;
      }
    }
    else {
      if (uVar7 <= uVar13) goto LAB_01c1d9b8;
LAB_01c1d654:
      if (uVar13 < uVar7) {
        uVar8 = uVar13 & 0xffffffff;
        if (*(uint *)(param_1 + 0x1b8) <= uVar13) {
          uVar8 = 0;
        }
        puVar12 = *(uint **)(*(long *)(param_1 + 0x1c0) + uVar8 * 8);
        if (puVar12 != (uint *)0x0) {
LAB_01c1d678:
          uVar7 = *puVar12;
          if (uVar7 == 0 || puVar12 == (uint *)(ulong)uVar7) {
LAB_01c1d688:
            local_64 = 0;
          }
          else {
            puVar9 = (uint *)((long)puVar12 - (long)(ulong)uVar7);
            local_64 = 0;
            if (*puVar9 != 0) {
              uVar7 = puVar9[1];
              if ((uVar7 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                lVar2 = 0xc;
                if (*(char *)((long)puVar9 + 10) != '\0') {
                  lVar2 = 0x1c;
                }
                lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
                if (lVar2 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar12 - lVar2) / (ulong)uVar7);
                  }
                  if (*puVar9 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < DAT_0534b090) &&
                     (local_64 = (uint)*(ushort *)(DAT_0534b098 + (long)(int)uVar1 * 2),
                     local_64 < 10)) goto LAB_01c1d68c;
                }
              }
              goto LAB_01c1d688;
            }
          }
LAB_01c1d68c:
          if (local_64 == *param_3) {
            if (*puVar12 != 0) {
              cVar4 = DAT_0534b078;
              do {
                if (cVar4 == '\0') {
                  cVar4 = '\x01';
                  DAT_0534b078 = '\x01';
                  DAT_0534b07c = -1;
                  DAT_0534b084 = -1;
                  DAT_0534b08c = 0xffffffff;
                }
                else {
                  if (-1 < DAT_0534b084) {
                    if ((undefined2 *)((ulong)DAT_0534b084._4_4_ + (long)puVar12) !=
                        (undefined2 *)0x0) {
                      local_6c = *(undefined2 *)((ulong)DAT_0534b084._4_4_ + (long)puVar12);
                      goto LAB_01c1d858;
                    }
                    break;
                  }
                  if (DAT_0534b084._4_4_ != 0xffffffff) break;
                }
                puVar9 = (uint *)(ulong)*puVar12;
                local_6c = 0xfffe;
                if ((*puVar12 == 0) || (puVar12 == puVar9)) goto LAB_01c1d858;
                lVar2 = 0xc;
                if (*(char *)((long)puVar12 + (10 - (long)puVar9)) != '\0') {
                  lVar2 = 0x1c;
                }
                lVar2 = (long)puVar12 + (lVar2 - (long)puVar9);
                if (lVar2 == 0) break;
                uVar8 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar9));
                DAT_0534b084 = CONCAT44(0xfffffffe,(undefined4)DAT_0534b084);
                if (uVar8 == 0) break;
                piVar10 = (int *)(lVar2 + 4);
                while (piVar10[-1] != -0x489482c9) {
                  piVar10 = piVar10 + 2;
                  uVar8 = uVar8 - 1;
                  if (uVar8 == 0) goto LAB_01c1d854;
                }
                iVar11 = 0;
                if (*piVar10 != -1) {
                  iVar11 = *piVar10;
                }
                DAT_0534b084 = CONCAT44(iVar11,(undefined4)DAT_0534b084);
                if (*puVar12 == 0) break;
              } while( true );
            }
LAB_01c1d854:
            local_6c = 0xfffe;
LAB_01c1d858:
            lVar2 = *(long *)(lVar5 + 0x1bf198);
            lVar3 = *(long *)(lVar5 + 0x1bf1a0);
            local_6a = 0;
            local_68 = 0;
            FUN_0277d4ac(&local_6c);
            uVar8 = FUN_027bf130(lVar3 + lVar2,&local_6c);
            if ((uVar8 & 1) != 0) {
              if (*puVar12 == 0) {
LAB_01c1d96c:
                uVar7 = 0;
              }
              else {
                cVar4 = DAT_0534b078;
                do {
                  if (cVar4 == '\0') {
                    cVar4 = '\x01';
                    DAT_0534b078 = '\x01';
                    DAT_0534b07c = -1;
                    DAT_0534b084 = -1;
                    DAT_0534b08c = 0xffffffff;
                  }
                  else {
                    if (-1 < DAT_0534b07c) {
                      if ((ushort *)((ulong)DAT_0534b07c._4_4_ + (long)puVar12) == (ushort *)0x0)
                      goto LAB_01c1d96c;
                      uVar7 = (uint)*(ushort *)((ulong)DAT_0534b07c._4_4_ + (long)puVar12);
                      goto LAB_01c1d970;
                    }
                    if (DAT_0534b07c._4_4_ != 0xffffffff) goto LAB_01c1d96c;
                  }
                  puVar9 = (uint *)(ulong)*puVar12;
                  uVar7 = 0;
                  if ((*puVar12 == 0) || (puVar12 == puVar9)) goto LAB_01c1d970;
                  lVar2 = 0xc;
                  if (*(char *)((long)puVar12 + (10 - (long)puVar9)) != '\0') {
                    lVar2 = 0x1c;
                  }
                  lVar2 = (long)puVar12 + (lVar2 - (long)puVar9);
                  if (lVar2 == 0) goto LAB_01c1d96c;
                  uVar8 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar9));
                  DAT_0534b07c = CONCAT44(0xfffffffe,(undefined4)DAT_0534b07c);
                  uVar7 = 0;
                  if (uVar8 == 0) goto LAB_01c1d970;
                  piVar10 = (int *)(lVar2 + 4);
                  while (piVar10[-1] != -0x2112f64) {
                    piVar10 = piVar10 + 2;
                    uVar8 = uVar8 - 1;
                    if (uVar8 == 0) {
                      uVar7 = 0;
                      goto LAB_01c1d970;
                    }
                  }
                  iVar11 = 0;
                  if (*piVar10 != -1) {
                    iVar11 = *piVar10;
                  }
                  DAT_0534b07c = CONCAT44(iVar11,(undefined4)DAT_0534b07c);
                } while (*puVar12 != 0);
                uVar7 = 0;
              }
LAB_01c1d970:
              if (((uVar7 < 0x40) && (DAT_05292338 != 0)) &&
                 (*(char *)(DAT_05292338 + (ulong)uVar7 * 0x10 + 0x50c) != '\0')) {
                *(byte *)((long)param_2 + (ulong)(uVar7 >> 3)) =
                     *(byte *)((long)param_2 + (ulong)(uVar7 >> 3)) |
                     (byte)(1 << (ulong)(uVar7 & 7));
              }
            }
          }
        }
      }
    }
LAB_01c1d610:
    uVar13 = uVar13 + 1;
  } while( true );
}

