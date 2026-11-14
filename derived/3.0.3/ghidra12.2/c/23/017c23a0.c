
undefined2 FUN_017c23a0(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  int *piVar10;
  ulong uVar11;
  uint *puVar12;
  undefined *local_70;
  undefined *local_68;
  
  uVar11 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    uVar3 = *(uint *)(param_1 + 0x11c8);
    if ((int)uVar3 < 1) {
      uVar8 = 0;
      if (*(long *)(param_1 + 0x10b8) != 0) {
        puVar12 = *(uint **)(*(long *)(param_1 + 0x10b8) + 8);
        uVar8 = 0;
        if (puVar12 != (uint *)0x0) {
          uVar8 = (ulong)*puVar12;
        }
      }
      if (uVar8 <= uVar11) {
        return 0;
      }
      if (0 < (int)uVar3) goto LAB_017c2444;
      if ((((*(long *)(param_1 + 0x10b8) != 0) &&
           (puVar12 = *(uint **)(*(long *)(param_1 + 0x10b8) + 8), puVar12 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0x10d0) <= uVar11 ||
           (*(char *)(*(long *)(param_1 + 0x10d8) + uVar11) != '\0')))) &&
         (((uVar11 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
        iVar7 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          iVar7 = 0x1c;
        }
        puVar12 = (uint *)((ulong)(puVar12[1] * (int)uVar11 + (uint)(ushort)puVar12[2] * 8 + iVar7)
                          + (long)puVar12);
        if (puVar12 == (uint *)0x0) goto LAB_017c2400;
        goto LAB_017c2468;
      }
    }
    else {
      if (uVar3 <= uVar11) {
        return 0;
      }
LAB_017c2444:
      if (uVar11 < uVar3) {
        uVar8 = uVar11 & 0xffffffff;
        if (*(uint *)(param_1 + 0x11b8) <= uVar11) {
          uVar8 = 0;
        }
        puVar12 = *(uint **)(*(long *)(param_1 + 0x11c0) + uVar8 * 8);
        if (puVar12 != (uint *)0x0) {
LAB_017c2468:
          if (*puVar12 != 0) {
            cVar5 = DAT_05292fb0;
            do {
              if (cVar5 == '\0') {
                cVar5 = '\x01';
                DAT_05292fb0 = '\x01';
                DAT_05292fb4 = -1;
                DAT_05292fbc = 0xffffffffffffffff;
                DAT_05292fc4 = 0xffffffff;
              }
              else {
                if (-1 < (int)DAT_05292fc4) {
                  puVar6 = (undefined *)((ulong)DAT_05292fc4 + (long)puVar12);
                  goto LAB_017c253c;
                }
                if (DAT_05292fc4 != 0xffffffff) break;
              }
              puVar9 = (uint *)(ulong)*puVar12;
              puVar6 = (undefined *)0x0;
              if ((*puVar12 == 0) || (puVar12 == puVar9)) goto LAB_017c253c;
              lVar2 = 0xc;
              if (*(char *)((long)puVar12 + (10 - (long)puVar9)) != '\0') {
                lVar2 = 0x1c;
              }
              lVar2 = (long)puVar12 + (lVar2 - (long)puVar9);
              if (lVar2 == 0) break;
              uVar8 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar9));
              DAT_05292fc4 = 0xfffffffe;
              puVar6 = (undefined *)0x0;
              if (uVar8 == 0) goto LAB_017c253c;
              puVar9 = (uint *)(lVar2 + 4);
              while (puVar9[-1] != 0x4b9c4229) {
                puVar9 = puVar9 + 2;
                uVar8 = uVar8 - 1;
                if (uVar8 == 0) {
                  puVar6 = (undefined *)0x0;
                  goto LAB_017c253c;
                }
              }
              DAT_05292fc4 = 0;
              if (*puVar9 != 0xffffffff) {
                DAT_05292fc4 = *puVar9;
              }
            } while (*puVar12 != 0);
          }
          puVar6 = (undefined *)0x0;
LAB_017c253c:
          local_68 = PTR_DAT_04c48410;
          if (puVar6 != (undefined *)0x0) {
            local_68 = puVar6;
          }
          local_70 = puVar1;
          (**(code **)(*param_2 + 0x18))(param_2);
          (**(code **)(*param_2 + 0x18))(param_2);
          puVar6 = (undefined *)param_2[1];
          (**(code **)(local_70 + 0x18))(&local_70);
          if (puVar6 == local_68) {
LAB_017c2674:
            if (*puVar12 == 0) {
              return 0;
            }
            cVar5 = DAT_05292fb0;
            while( true ) {
              if (cVar5 == '\0') {
                cVar5 = '\x01';
                DAT_05292fb0 = '\x01';
                DAT_05292fb4 = -1;
                DAT_05292fbc = 0xffffffffffffffff;
                DAT_05292fc4 = 0xffffffff;
              }
              else {
                uVar11 = (ulong)DAT_05292fb4._4_4_;
                if (-1 < DAT_05292fb4) {
                  if ((undefined2 *)(uVar11 + (long)puVar12) == (undefined2 *)0x0) {
                    return 0;
                  }
                  return *(undefined2 *)(uVar11 + (long)puVar12);
                }
                if (DAT_05292fb4._4_4_ != 0xffffffff) {
                  return 0;
                }
              }
              puVar9 = (uint *)(ulong)*puVar12;
              if (*puVar12 == 0) {
                return 0;
              }
              if (puVar12 == puVar9) break;
              lVar2 = 0xc;
              if (*(char *)((long)puVar12 + (10 - (long)puVar9)) != '\0') {
                lVar2 = 0x1c;
              }
              lVar2 = (long)puVar12 + (lVar2 - (long)puVar9);
              if (lVar2 == 0) {
                return 0;
              }
              uVar11 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar9));
              DAT_05292fb4 = CONCAT44(0xfffffffe,(undefined4)DAT_05292fb4);
              if (uVar11 == 0) {
                return 0;
              }
              piVar10 = (int *)(lVar2 + 4);
              while (piVar10[-1] != -0x6e481cf5) {
                piVar10 = piVar10 + 2;
                uVar11 = uVar11 - 1;
                if (uVar11 == 0) {
                  return 0;
                }
              }
              iVar7 = 0;
              if (*piVar10 != -1) {
                iVar7 = *piVar10;
              }
              DAT_05292fb4 = CONCAT44(iVar7,(undefined4)DAT_05292fb4);
              if (*puVar12 == 0) {
                return 0;
              }
            }
            return 0;
          }
          uVar8 = 0;
          bVar4 = true;
          do {
            lVar2 = param_2[1] + 2 + uVar8;
            cVar5 = *(char *)(lVar2 + -2);
            if (cVar5 != local_68[uVar8]) break;
            if (cVar5 == '\0') {
              if (bVar4) goto LAB_017c2674;
              break;
            }
            cVar5 = *(char *)(lVar2 + -1);
            if (cVar5 != local_68[uVar8 + 1]) break;
            if (cVar5 == '\0') goto LAB_017c2674;
            cVar5 = *(char *)(param_2[1] + 2 + uVar8);
            if (cVar5 != local_68[uVar8 + 2]) break;
            if (cVar5 == '\0') goto LAB_017c2674;
            bVar4 = uVar8 < 0x7fffe;
            uVar8 = uVar8 + 3;
          } while (uVar8 != 0x80001);
        }
      }
    }
LAB_017c2400:
    uVar11 = uVar11 + 1;
  } while( true );
}

