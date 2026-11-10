
/* WARNING: Removing unreachable block (ram,0x0028dc1c) */
/* WARNING: Removing unreachable block (ram,0x0028dbf0) */
/* WARNING: Removing unreachable block (ram,0x0028da8c) */

void FUN_0028d810(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  char cVar2;
  char *pcVar3;
  char cVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  uint uVar9;
  ulong uVar10;
  char cVar11;
  bool bVar12;
  long lVar13;
  ulong uVar14;
  undefined *local_78;
  undefined *local_70;
  char local_64 [4];
  
  puVar5 = PTR_DAT_04bcdcc8;
  cVar4 = *PTR_DAT_04bcdcc8;
  *DAT_04c60b18 = cVar4;
  iVar6 = (**(code **)*param_2)(param_2,local_64,1);
  if (iVar6 != 0) {
    bVar12 = false;
    cVar11 = '\0';
    uVar10 = 0;
    puVar1 = PTR_DAT_04bccec0 + 0x10;
    do {
      pcVar8 = DAT_04c60b18;
      if (cVar11 == '\0') {
LAB_0028d8ec:
        cVar11 = local_64[0];
        uVar9 = (uint)uVar10;
        if (bVar12) {
          if (local_64[0] == '\"') {
            if ((int)uVar9 < 2) {
              return;
            }
            uVar14 = (long)(int)uVar9 - 1;
            pcVar3 = puVar5;
            if ((int)uVar9 <= DAT_04c60b20) {
              pcVar3 = DAT_04c60b18 + (uVar14 & 0xffffffff);
            }
            if (*pcVar3 != '\\') {
              return;
            }
            local_70 = &DAT_040c7c06;
            local_78 = puVar1;
            (**(code **)(DAT_04c60b10 + 0x18))(&DAT_04c60b10);
            lVar13 = 0;
            do {
              if (DAT_04c60b18[lVar13] == cVar4) goto LAB_0028db78;
              if (DAT_04c60b18[lVar13 + 1] == cVar4) {
                lVar13 = lVar13 + 1;
                goto LAB_0028db78;
              }
              if (DAT_04c60b18[lVar13 + 2] == cVar4) {
                lVar13 = lVar13 + 2;
                goto LAB_0028db78;
              }
              lVar13 = lVar13 + 3;
            } while (lVar13 != 0x80001);
            lVar13 = 0;
LAB_0028db78:
            uVar9 = DAT_04c60b20 - uVar9;
            if (1 < DAT_04c60b20 - (int)uVar14) {
              uVar9 = 1;
            }
            if (0 < (int)uVar9) {
              (**(code **)(local_78 + 0x18))(&local_78);
              memcpy(pcVar8 + (int)uVar14,local_70,(ulong)uVar9);
              if ((int)lVar13 < (int)(uVar14 + (long)(int)uVar9)) {
                pcVar8[uVar14 + (long)(int)uVar9] = cVar4;
              }
            }
            bVar12 = true;
            cVar11 = '\0';
          }
          else {
            (**(code **)(DAT_04c60b10 + 0x18))(&DAT_04c60b10);
            lVar13 = 0;
            do {
              if (DAT_04c60b18[lVar13] == cVar4) {
LAB_0028daa8:
                iVar6 = (int)lVar13;
                if (iVar6 < DAT_04c60b20 + -1) goto LAB_0028dabc;
                goto LAB_0028dac8;
              }
              if (DAT_04c60b18[lVar13 + 1] == cVar4) {
                lVar13 = lVar13 + 1;
                goto LAB_0028daa8;
              }
              if (DAT_04c60b18[lVar13 + 2] == cVar4) {
                iVar6 = (int)lVar13 + 2;
                if (DAT_04c60b20 + -1 <= iVar6) goto LAB_0028dac8;
                goto LAB_0028dabc;
              }
              lVar13 = lVar13 + 3;
            } while (lVar13 != 0x80001);
            iVar6 = 0;
            if (0 < DAT_04c60b20 + -1) {
LAB_0028dabc:
              pcVar8 = DAT_04c60b18 + iVar6;
              *pcVar8 = cVar11;
              pcVar8[1] = cVar4;
            }
LAB_0028dac8:
            bVar12 = true;
            uVar10 = (ulong)(uVar9 + 1);
            cVar11 = '\0';
          }
        }
        else if ((uVar9 == 0) && (local_64[0] == '\"')) {
          bVar12 = true;
          uVar10 = 0;
          cVar11 = '\0';
        }
        else {
          (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
          cVar11 = local_64[0];
          pcVar8 = *(char **)(param_1 + 0x10);
          if (*pcVar8 == cVar4) {
LAB_0028dc38:
            if (local_64[0] != '\0') {
              (**(code **)(DAT_04c60b10 + 0x18))(&DAT_04c60b10);
              lVar13 = 0;
              do {
                if (DAT_04c60b18[lVar13] == cVar4) {
LAB_0028dcd8:
                  iVar6 = (int)lVar13;
                  if (iVar6 < DAT_04c60b20 + -1) goto LAB_0028dcec;
                  goto LAB_0028dcf8;
                }
                if (DAT_04c60b18[lVar13 + 1] == cVar4) {
                  lVar13 = lVar13 + 1;
                  goto LAB_0028dcd8;
                }
                if (DAT_04c60b18[lVar13 + 2] == cVar4) {
                  iVar6 = (int)lVar13 + 2;
                  if (DAT_04c60b20 + -1 <= iVar6) goto LAB_0028dcf8;
                  goto LAB_0028dcec;
                }
                lVar13 = lVar13 + 3;
              } while (lVar13 != 0x80001);
              iVar6 = 0;
              if (0 < DAT_04c60b20 + -1) {
LAB_0028dcec:
                pcVar8 = DAT_04c60b18 + iVar6;
                *pcVar8 = cVar11;
                pcVar8[1] = cVar4;
              }
LAB_0028dcf8:
              uVar14 = (ulong)(uVar9 + 1);
              if ((int)uVar9 < 0) {
                cVar11 = '\0';
              }
              else {
                pcVar8 = DAT_04c60b18 + uVar10;
                if (DAT_04c60b20 <= (int)uVar9) {
                  pcVar8 = puVar5;
                }
                if (*pcVar8 == '#') {
                  if ((int)uVar9 < DAT_04c60b20) {
                    DAT_04c60b18[uVar10] = cVar4;
                  }
                  else {
                    (**(code **)(DAT_04c60b10 + 0x18))();
                  }
                  cVar11 = '\n';
                  uVar14 = uVar10;
                }
                else {
                  cVar11 = '\0';
                  uVar9 = uVar9 + 1;
                }
                if (1 < uVar9) {
                  uVar9 = uVar9 - 2;
                  uVar10 = (ulong)uVar9;
                  pcVar8 = DAT_04c60b18 + uVar10;
                  pcVar3 = pcVar8;
                  if (DAT_04c60b20 <= (int)uVar9) {
                    pcVar3 = puVar5;
                  }
                  if (*pcVar3 == '/') {
                    pcVar3 = puVar5;
                    if ((int)uVar14 <= DAT_04c60b20) {
                      pcVar3 = DAT_04c60b18 + ((int)uVar14 - 1);
                    }
                    if (*pcVar3 == '*') {
                      if ((int)uVar9 < DAT_04c60b20) {
                        *pcVar8 = cVar4;
                      }
                      else {
                        (**(code **)(DAT_04c60b10 + 0x18))();
                      }
                      bVar12 = false;
                      cVar11 = '*';
                    }
                    else {
                      if (*pcVar3 != '/') goto LAB_0028ddf4;
                      if ((int)uVar9 < DAT_04c60b20) {
                        bVar12 = false;
                        *pcVar8 = cVar4;
                        cVar11 = '\n';
                      }
                      else {
                        (**(code **)(DAT_04c60b10 + 0x18))();
                        bVar12 = false;
                        cVar11 = '\n';
                      }
                    }
                    goto LAB_0028d898;
                  }
                }
              }
LAB_0028ddf4:
              bVar12 = false;
              uVar10 = uVar14;
              goto LAB_0028d898;
            }
          }
          else if (*pcVar8 != local_64[0]) {
            uVar14 = 0;
            do {
              uVar7 = uVar14;
              if (pcVar8[uVar7 + 1] == cVar4) goto LAB_0028dc38;
              if (pcVar8[uVar7 + 1] == local_64[0]) goto LAB_0028dcb4;
              if (pcVar8[uVar7 + 2] == cVar4) goto LAB_0028dc38;
              if (pcVar8[uVar7 + 2] == local_64[0]) goto LAB_0028dcb4;
              if ((uVar7 == 0x7fffe) || (pcVar8[uVar7 + 3] == cVar4)) goto LAB_0028dc38;
              uVar14 = uVar7 + 3;
            } while (pcVar8[uVar7 + 3] != local_64[0]);
            if (0x7fffd < uVar7) goto LAB_0028dc38;
          }
LAB_0028dcb4:
          if (*DAT_04c60b18 != cVar4) {
            return;
          }
          bVar12 = false;
          cVar11 = '\0';
        }
      }
      else if (local_64[0] == cVar11) {
        if (cVar11 != '*') {
          pcVar3 = *(char **)(param_1 + 0x10);
          if (*(int *)(param_1 + 0x18) < 1) {
            pcVar3 = puVar5;
          }
          local_64[0] = *pcVar3;
          goto LAB_0028d8ec;
        }
        cVar11 = '/';
      }
      else {
        cVar2 = '*';
        if (cVar11 != '/') {
          cVar2 = cVar11;
        }
        cVar11 = cVar2;
      }
LAB_0028d898:
      iVar6 = (**(code **)*param_2)(param_2,local_64,1);
    } while (iVar6 != 0);
  }
  return;
}

