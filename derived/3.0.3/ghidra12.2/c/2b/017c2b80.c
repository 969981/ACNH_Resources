
undefined2 FUN_017c2b80(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined2 *puVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  uint *puVar12;
  ulong uVar13;
  undefined *local_70;
  undefined *local_68;
  
  uVar13 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    uVar4 = *(uint *)(param_1 + 0x11c8);
    if ((int)uVar4 < 1) {
      uVar9 = 0;
      if (*(long *)(param_1 + 0x10b8) != 0) {
        puVar12 = *(uint **)(*(long *)(param_1 + 0x10b8) + 8);
        uVar9 = 0;
        if (puVar12 != (uint *)0x0) {
          uVar9 = (ulong)*puVar12;
        }
      }
      if (uVar9 <= uVar13) {
        return 0;
      }
      if (0 < (int)uVar4) goto LAB_017c2c24;
      if ((((*(long *)(param_1 + 0x10b8) != 0) &&
           (puVar12 = *(uint **)(*(long *)(param_1 + 0x10b8) + 8), puVar12 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0x10d0) <= uVar13 ||
           (*(char *)(*(long *)(param_1 + 0x10d8) + uVar13) != '\0')))) &&
         (((uVar13 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        puVar12 = (uint *)((ulong)(puVar12[1] * (int)uVar13 + (uint)(ushort)puVar12[2] * 8 + iVar8)
                          + (long)puVar12);
        if (puVar12 == (uint *)0x0) goto LAB_017c2be0;
        goto LAB_017c2c48;
      }
    }
    else {
      if (uVar4 <= uVar13) {
        return 0;
      }
LAB_017c2c24:
      if (uVar13 < uVar4) {
        uVar9 = uVar13 & 0xffffffff;
        if (*(uint *)(param_1 + 0x11b8) <= uVar13) {
          uVar9 = 0;
        }
        puVar12 = *(uint **)(*(long *)(param_1 + 0x11c0) + uVar9 * 8);
        if (puVar12 != (uint *)0x0) {
LAB_017c2c48:
          if (*puVar12 != 0) {
            cVar6 = DAT_05292fb0;
            do {
              if (cVar6 == '\0') {
                cVar6 = '\x01';
                DAT_05292fb0 = '\x01';
                DAT_05292fb4 = 0xffffffffffffffff;
                DAT_05292fbc = 0xffffffffffffffff;
                DAT_05292fc4 = 0xffffffff;
              }
              else {
                if (-1 < (int)DAT_05292fc4) {
                  puVar7 = (undefined *)((ulong)DAT_05292fc4 + (long)puVar12);
                  goto LAB_017c2d1c;
                }
                if (DAT_05292fc4 != 0xffffffff) break;
              }
              puVar10 = (uint *)(ulong)*puVar12;
              puVar7 = (undefined *)0x0;
              if ((*puVar12 == 0) || (puVar12 == puVar10)) goto LAB_017c2d1c;
              lVar2 = 0xc;
              if (*(char *)((long)puVar12 + (10 - (long)puVar10)) != '\0') {
                lVar2 = 0x1c;
              }
              lVar2 = (long)puVar12 + (lVar2 - (long)puVar10);
              if (lVar2 == 0) break;
              uVar9 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar10));
              DAT_05292fc4 = 0xfffffffe;
              puVar7 = (undefined *)0x0;
              if (uVar9 == 0) goto LAB_017c2d1c;
              puVar10 = (uint *)(lVar2 + 4);
              while (puVar10[-1] != 0x4b9c4229) {
                puVar10 = puVar10 + 2;
                uVar9 = uVar9 - 1;
                if (uVar9 == 0) {
                  puVar7 = (undefined *)0x0;
                  goto LAB_017c2d1c;
                }
              }
              DAT_05292fc4 = 0;
              if (*puVar10 != 0xffffffff) {
                DAT_05292fc4 = *puVar10;
              }
            } while (*puVar12 != 0);
          }
          puVar7 = (undefined *)0x0;
LAB_017c2d1c:
          local_68 = PTR_DAT_04c48410;
          if (puVar7 != (undefined *)0x0) {
            local_68 = puVar7;
          }
          local_70 = puVar1;
          (**(code **)(*param_2 + 0x18))(param_2);
          (**(code **)(*param_2 + 0x18))(param_2);
          puVar7 = (undefined *)param_2[1];
          (**(code **)(local_70 + 0x18))(&local_70);
          if (puVar7 == local_68) {
LAB_017c2e54:
            uVar4 = *puVar12;
            if (uVar4 == 0) {
              return 0;
            }
            cVar6 = DAT_05292fb0;
            while( true ) {
              if (cVar6 == '\0') {
                DAT_05292fb4 = 0xffffffffffffffff;
                DAT_05292fbc = 0xffffffffffffffff;
                cVar6 = '\x01';
                DAT_05292fc4 = 0xffffffff;
                uVar4 = *puVar12;
                DAT_05292fb0 = '\x01';
              }
              else {
                if (-1 < (int)DAT_05292fb4) {
                  puVar3 = (undefined2 *)((DAT_05292fb4 & 0xffffffff) + (long)puVar12);
                  if (puVar3 == (undefined2 *)0x0) {
                    return 0;
                  }
                  return *puVar3;
                }
                if ((int)DAT_05292fb4 != -1) {
                  return 0;
                }
              }
              puVar10 = (uint *)(ulong)uVar4;
              if (puVar10 == (uint *)0x0) {
                return 0;
              }
              if (puVar12 == puVar10) break;
              lVar2 = 0xc;
              if (*(char *)((long)puVar12 + (10 - (long)puVar10)) != '\0') {
                lVar2 = 0x1c;
              }
              lVar2 = (long)puVar12 + (lVar2 - (long)puVar10);
              if (lVar2 == 0) {
                return 0;
              }
              uVar13 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar10));
              DAT_05292fb4._4_4_ = (undefined4)(DAT_05292fb4 >> 0x20);
              DAT_05292fb4 = CONCAT44(DAT_05292fb4._4_4_,0xfffffffe);
              if (uVar13 == 0) {
                return 0;
              }
              piVar11 = (int *)(lVar2 + 4);
              while (piVar11[-1] != 0x607ccfce) {
                piVar11 = piVar11 + 2;
                uVar13 = uVar13 - 1;
                if (uVar13 == 0) {
                  return 0;
                }
              }
              iVar8 = 0;
              if (*piVar11 != -1) {
                iVar8 = *piVar11;
              }
              DAT_05292fb4 = CONCAT44(DAT_05292fb4._4_4_,iVar8);
              uVar4 = *puVar12;
              if (uVar4 == 0) {
                return 0;
              }
            }
            return 0;
          }
          uVar9 = 0;
          bVar5 = true;
          do {
            lVar2 = param_2[1] + 2 + uVar9;
            cVar6 = *(char *)(lVar2 + -2);
            if (cVar6 != local_68[uVar9]) break;
            if (cVar6 == '\0') {
              if (bVar5) goto LAB_017c2e54;
              break;
            }
            cVar6 = *(char *)(lVar2 + -1);
            if (cVar6 != local_68[uVar9 + 1]) break;
            if (cVar6 == '\0') goto LAB_017c2e54;
            cVar6 = *(char *)(param_2[1] + 2 + uVar9);
            if (cVar6 != local_68[uVar9 + 2]) break;
            if (cVar6 == '\0') goto LAB_017c2e54;
            bVar5 = uVar9 < 0x7fffe;
            uVar9 = uVar9 + 3;
          } while (uVar9 != 0x80001);
        }
      }
    }
LAB_017c2be0:
    uVar13 = uVar13 + 1;
  } while( true );
}

