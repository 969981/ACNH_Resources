
undefined2 FUN_017c2790(long param_1,long *param_2)

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
  ulong uVar12;
  uint *puVar13;
  undefined *local_70;
  undefined *local_68;
  
  uVar12 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    uVar4 = *(uint *)(param_1 + 0x11c8);
    if ((int)uVar4 < 1) {
      uVar9 = 0;
      if (*(long *)(param_1 + 0x10b8) != 0) {
        puVar13 = *(uint **)(*(long *)(param_1 + 0x10b8) + 8);
        uVar9 = 0;
        if (puVar13 != (uint *)0x0) {
          uVar9 = (ulong)*puVar13;
        }
      }
      if (uVar9 <= uVar12) {
        return 0;
      }
      if (0 < (int)uVar4) goto LAB_017c2834;
      if ((((*(long *)(param_1 + 0x10b8) != 0) &&
           (puVar13 = *(uint **)(*(long *)(param_1 + 0x10b8) + 8), puVar13 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0x10d0) <= uVar12 ||
           (*(char *)(*(long *)(param_1 + 0x10d8) + uVar12) != '\0')))) &&
         (((uVar12 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        puVar13 = (uint *)((ulong)(puVar13[1] * (int)uVar12 + (uint)(ushort)puVar13[2] * 8 + iVar8)
                          + (long)puVar13);
        if (puVar13 == (uint *)0x0) goto LAB_017c27f0;
        goto LAB_017c2858;
      }
    }
    else {
      if (uVar4 <= uVar12) {
        return 0;
      }
LAB_017c2834:
      if (uVar12 < uVar4) {
        uVar9 = uVar12 & 0xffffffff;
        if (*(uint *)(param_1 + 0x11b8) <= uVar12) {
          uVar9 = 0;
        }
        puVar13 = *(uint **)(*(long *)(param_1 + 0x11c0) + uVar9 * 8);
        if (puVar13 != (uint *)0x0) {
LAB_017c2858:
          if (*puVar13 != 0) {
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
                  puVar7 = (undefined *)((ulong)DAT_05292fc4 + (long)puVar13);
                  goto LAB_017c292c;
                }
                if (DAT_05292fc4 != 0xffffffff) break;
              }
              puVar10 = (uint *)(ulong)*puVar13;
              puVar7 = (undefined *)0x0;
              if ((*puVar13 == 0) || (puVar13 == puVar10)) goto LAB_017c292c;
              lVar2 = 0xc;
              if (*(char *)((long)puVar13 + (10 - (long)puVar10)) != '\0') {
                lVar2 = 0x1c;
              }
              lVar2 = (long)puVar13 + (lVar2 - (long)puVar10);
              if (lVar2 == 0) break;
              uVar9 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar10));
              DAT_05292fc4 = 0xfffffffe;
              puVar7 = (undefined *)0x0;
              if (uVar9 == 0) goto LAB_017c292c;
              puVar10 = (uint *)(lVar2 + 4);
              while (puVar10[-1] != 0x4b9c4229) {
                puVar10 = puVar10 + 2;
                uVar9 = uVar9 - 1;
                if (uVar9 == 0) {
                  puVar7 = (undefined *)0x0;
                  goto LAB_017c292c;
                }
              }
              DAT_05292fc4 = 0;
              if (*puVar10 != 0xffffffff) {
                DAT_05292fc4 = *puVar10;
              }
            } while (*puVar13 != 0);
          }
          puVar7 = (undefined *)0x0;
LAB_017c292c:
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
LAB_017c2a64:
            if (*puVar13 == 0) {
              return 0;
            }
            cVar6 = DAT_05292fb0;
            while( true ) {
              if (cVar6 == '\0') {
                cVar6 = '\x01';
                DAT_05292fb0 = '\x01';
                DAT_05292fb4 = 0xffffffffffffffff;
                DAT_05292fbc = 0xffffffffffffffff;
                DAT_05292fc4 = 0xffffffff;
              }
              else {
                if (-1 < (int)DAT_05292fbc) {
                  puVar3 = (undefined2 *)((DAT_05292fbc & 0xffffffff) + (long)puVar13);
                  if (puVar3 == (undefined2 *)0x0) {
                    return 0;
                  }
                  return *puVar3;
                }
                if ((int)DAT_05292fbc != -1) {
                  return 0;
                }
              }
              puVar10 = (uint *)(ulong)*puVar13;
              if (*puVar13 == 0) {
                return 0;
              }
              if (puVar13 == puVar10) break;
              lVar2 = 0xc;
              if (*(char *)((long)puVar13 + (10 - (long)puVar10)) != '\0') {
                lVar2 = 0x1c;
              }
              lVar2 = (long)puVar13 + (lVar2 - (long)puVar10);
              if (lVar2 == 0) {
                return 0;
              }
              uVar12 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar10));
              DAT_05292fbc = CONCAT44(DAT_05292fbc._4_4_,0xfffffffe);
              if (uVar12 == 0) {
                return 0;
              }
              piVar11 = (int *)(lVar2 + 4);
              while (piVar11[-1] != 0x707e79ff) {
                piVar11 = piVar11 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) {
                  return 0;
                }
              }
              iVar8 = 0;
              if (*piVar11 != -1) {
                iVar8 = *piVar11;
              }
              DAT_05292fbc = CONCAT44(DAT_05292fbc._4_4_,iVar8);
              if (*puVar13 == 0) {
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
              if (bVar5) goto LAB_017c2a64;
              break;
            }
            cVar6 = *(char *)(lVar2 + -1);
            if (cVar6 != local_68[uVar9 + 1]) break;
            if (cVar6 == '\0') goto LAB_017c2a64;
            cVar6 = *(char *)(param_2[1] + 2 + uVar9);
            if (cVar6 != local_68[uVar9 + 2]) break;
            if (cVar6 == '\0') goto LAB_017c2a64;
            bVar5 = uVar9 < 0x7fffe;
            uVar9 = uVar9 + 3;
          } while (uVar9 != 0x80001);
        }
      }
    }
LAB_017c27f0:
    uVar12 = uVar12 + 1;
  } while( true );
}

