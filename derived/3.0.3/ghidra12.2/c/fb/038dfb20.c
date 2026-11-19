
/* WARNING: Removing unreachable block (ram,0x038dfd24) */

void FUN_038dfb20(long param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  char cVar12;
  bool bVar13;
  long lVar14;
  char local_64 [4];
  
  *(undefined1 *)*param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  iVar5 = (**(code **)*param_3)(param_3,local_64,1);
  if (iVar5 != 0) {
    bVar13 = false;
    cVar12 = '\0';
    uVar11 = 0;
    do {
      if (cVar12 == '\0') {
LAB_038dfbf4:
        if (bVar13) {
          if (local_64[0] == '\"') {
            if ((int)uVar11 < 2) {
              return;
            }
            uVar9 = uVar11 - 1;
            lVar14 = *param_2;
            uVar7 = uVar9;
            if (*(uint *)(param_2 + 1) <= uVar9) {
              uVar7 = 0;
            }
            if (*(char *)(lVar14 + (ulong)uVar7) != '\\') {
              return;
            }
            if ((int)uVar9 <= (int)*(uint *)(param_2 + 1)) {
              uVar7 = *(int *)((long)param_2 + 0xc) - uVar11;
              if (uVar7 != 0 && (int)uVar11 <= *(int *)((long)param_2 + 0xc)) {
                uVar7 = 1;
              }
              if (0 < (int)uVar7) {
                memcpy((void *)(lVar14 + (ulong)uVar9),&DAT_040c7c06,(ulong)uVar7);
                iVar5 = (int)param_2[1];
                lVar2 = (ulong)uVar7 + (ulong)uVar9;
                iVar6 = (int)lVar2;
                if (iVar5 < iVar6) {
                  *(undefined1 *)(lVar14 + lVar2) = 0;
                  iVar5 = (int)param_2[1];
                }
                if (iVar5 < iVar6) {
                  *(int *)(param_2 + 1) = iVar6;
                  bVar13 = true;
                  cVar12 = '\0';
                  goto LAB_038dfb98;
                }
              }
            }
LAB_038dfca4:
            bVar13 = true;
            cVar12 = '\0';
          }
          else {
            lVar14 = (long)(int)param_2[1] + 1;
            iVar5 = (int)lVar14;
            if (iVar5 < *(int *)((long)param_2 + 0xc)) {
              *(char *)(*param_2 + (long)(int)param_2[1]) = local_64[0];
              *(undefined1 *)(*param_2 + lVar14) = 0;
              *(int *)(param_2 + 1) = iVar5;
            }
            bVar13 = true;
            uVar11 = uVar11 + 1;
            cVar12 = '\0';
          }
        }
        else {
          if ((uVar11 == 0) && (local_64[0] == '\"')) {
            uVar11 = 0;
            goto LAB_038dfca4;
          }
          (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
          pcVar10 = *(char **)(param_1 + 0x10);
          if (*pcVar10 == '\0') {
            uVar7 = *(uint *)(param_2 + 1);
LAB_038dfdc8:
            if (local_64[0] != '\0') {
              lVar14 = (long)(int)uVar7 + 1;
              uVar9 = (uint)lVar14;
              if ((int)uVar9 < *(int *)((long)param_2 + 0xc)) {
                *(char *)(*param_2 + (long)(int)uVar7) = local_64[0];
                *(undefined1 *)(*param_2 + lVar14) = 0;
                *(uint *)(param_2 + 1) = uVar9;
                uVar7 = uVar9;
              }
              if ((int)uVar11 < 0) {
                bVar13 = false;
                uVar11 = uVar11 + 1;
                cVar12 = '\0';
              }
              else {
                uVar9 = uVar11;
                if (uVar7 <= uVar11) {
                  uVar9 = 0;
                }
                if (*(char *)(*param_2 + (ulong)uVar9) == '#') {
                  if ((int)uVar11 < *(int *)((long)param_2 + 0xc)) {
                    *(undefined1 *)(*param_2 + (ulong)uVar11) = 0;
                    uVar7 = *(uint *)(param_2 + 1);
                    if ((int)uVar11 < (int)*(uint *)(param_2 + 1)) {
                      *(uint *)(param_2 + 1) = uVar11;
                      uVar7 = uVar11;
                    }
                  }
                  cVar12 = '\n';
                  uVar9 = uVar11 - 2;
                }
                else {
                  cVar12 = '\0';
                  uVar9 = uVar11 - 1;
                  uVar11 = uVar11 + 1;
                }
                if (1 < uVar11) {
                  lVar14 = *param_2;
                  uVar4 = uVar9;
                  if (uVar7 <= uVar9) {
                    uVar4 = 0;
                  }
                  if (*(char *)(lVar14 + (ulong)uVar4) == '/') {
                    uVar4 = uVar11 - 1;
                    if (uVar7 <= uVar4) {
                      uVar4 = 0;
                    }
                    if (*(char *)(lVar14 + (ulong)uVar4) == '*') {
                      if (((int)uVar9 < *(int *)((long)param_2 + 0xc)) &&
                         (*(undefined1 *)(lVar14 + (ulong)uVar9) = 0, (int)uVar9 < (int)param_2[1]))
                      {
                        *(uint *)(param_2 + 1) = uVar9;
                      }
                      bVar13 = false;
                      uVar11 = uVar9;
                      cVar12 = '*';
                    }
                    else {
                      bVar13 = false;
                      if (*(char *)(lVar14 + (ulong)uVar4) == '/') {
                        if (((int)uVar9 < *(int *)((long)param_2 + 0xc)) &&
                           (*(undefined1 *)(lVar14 + (ulong)uVar9) = 0, (int)uVar9 < (int)param_2[1]
                           )) {
                          *(uint *)(param_2 + 1) = uVar9;
                        }
                        bVar13 = false;
                        uVar11 = uVar9;
                        cVar12 = '\n';
                      }
                    }
                    goto LAB_038dfb98;
                  }
                }
                bVar13 = false;
              }
              goto LAB_038dfb98;
            }
          }
          else if (*pcVar10 == local_64[0]) {
            uVar7 = *(uint *)(param_2 + 1);
          }
          else {
            uVar8 = 0;
            do {
              if (pcVar10[uVar8 + 1] == '\0') {
                pcVar10 = (char *)0x0;
                goto LAB_038dfdb4;
              }
              if (pcVar10[uVar8 + 1] == local_64[0]) {
                pcVar10 = (char *)0x1;
                goto LAB_038dfdb4;
              }
              if (pcVar10[uVar8 + 2] == '\0') {
                pcVar10 = (char *)0x0;
                uVar8 = uVar8 + 1;
                goto LAB_038dfdb4;
              }
              if (pcVar10[uVar8 + 2] == local_64[0]) {
                uVar8 = uVar8 + 1;
                pcVar10 = (char *)0x1;
                goto LAB_038dfdb4;
              }
              if (uVar8 == 0x7fffe) {
                uVar8 = 0x80000;
                goto LAB_038dfdb4;
              }
              lVar14 = uVar8 + 3;
              uVar1 = uVar8 + 2;
              if (pcVar10[lVar14] == '\0') {
                pcVar10 = (char *)0x0;
                goto LAB_038dfdb0;
              }
              uVar8 = uVar8 + 3;
            } while (pcVar10[lVar14] != local_64[0]);
            pcVar10 = (char *)0x1;
LAB_038dfdb0:
            uVar8 = uVar1;
LAB_038dfdb4:
            uVar7 = *(uint *)(param_2 + 1);
            if (((uint)(uVar8 < 0x80000) & (uint)pcVar10) == 0) goto LAB_038dfdc8;
          }
          if (uVar7 != 0) {
            return;
          }
          bVar13 = false;
          cVar12 = '\0';
        }
      }
      else if (local_64[0] == cVar12) {
        if (cVar12 != '*') {
          pcVar10 = *(char **)(param_1 + 0x10);
          if (*(int *)(param_1 + 0x18) < 1) {
            pcVar10 = PTR_DAT_04bb2120;
          }
          local_64[0] = *pcVar10;
          goto LAB_038dfbf4;
        }
        cVar12 = '/';
      }
      else {
        cVar3 = '*';
        if (cVar12 != '/') {
          cVar3 = cVar12;
        }
        cVar12 = cVar3;
      }
LAB_038dfb98:
      iVar5 = (**(code **)*param_3)(param_3,local_64,1);
    } while (iVar5 != 0);
  }
  return;
}

