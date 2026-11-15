
void FUN_02193780(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  byte *pbVar3;
  int *piVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  float fVar15;
  float fVar16;
  
  iVar9 = *(int *)(param_1 + 0x10);
  if (iVar9 == 0) {
    return;
  }
  lVar8 = *(long *)(param_1 + 8);
  if ((*(byte *)(*(long *)(lVar8 + 0x3b8) + 0xad5a) >> 2 & 1) != 0) {
    return;
  }
  iVar11 = *(int *)(param_1 + 0x1b30);
  if (iVar11 < 1) {
    uVar12 = *(uint *)(param_1 + 0x3658);
    puVar14 = &DAT_053fd568;
    if ((-1 < (int)uVar12) && ((int)uVar12 < iVar9)) {
      plVar10 = (long *)(param_1 + 0x18);
      goto LAB_021937fc;
    }
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x365c);
    puVar14 = &DAT_053fd568;
    if ((-1 < (int)uVar12) && ((int)uVar12 < iVar11)) {
      plVar10 = (long *)(param_1 + 0x1b38);
LAB_021937fc:
      puVar14 = *(undefined4 **)(*plVar10 + (ulong)uVar12 * 8);
    }
  }
  if (*(char *)(puVar14 + 0x16) != '\0') {
    if ((*(byte *)(param_1 + 0x366c) & 1) == 0) {
      if (iVar11 < 1) {
        uVar12 = *(uint *)(param_1 + 0x3658);
        puVar13 = &DAT_053fd568;
        if ((-1 < (int)uVar12) && ((int)uVar12 < iVar9)) {
          plVar10 = (long *)(param_1 + 0x18);
          goto LAB_02193890;
        }
      }
      else {
        uVar12 = *(uint *)(param_1 + 0x365c);
        puVar13 = &DAT_053fd568;
        if ((-1 < (int)uVar12) && ((int)uVar12 < iVar11)) {
          plVar10 = (long *)(param_1 + 0x1b38);
LAB_02193890:
          puVar13 = *(undefined4 **)(*plVar10 + (ulong)uVar12 * 8);
        }
      }
      fVar15 = *(float *)(*(long *)(lVar8 + 0x68) + 0x278) - (float)puVar13[10];
      fVar16 = *(float *)(*(long *)(lVar8 + 0x68) + 0x280) - (float)puVar13[0xc];
      if ((float)puVar13[0x60] + 5.0 + (float)puVar13[0xd] < SQRT(fVar16 * fVar16 + fVar15 * fVar15)
         ) {
        FUN_02193d74(param_1,0);
      }
    }
    else {
      *(int *)(param_1 + 0x3668) = *(int *)(param_1 + 0x3668) + 1;
      if (*(char *)(*(long *)(lVar8 + 0x3b8) + 0x7878) != '\0') {
        FUN_02192850(param_1,0,1);
      }
    }
  }
  if (((puVar14[0x18] != 0) && ((*(byte *)(param_1 + 0x366c) >> 1 & 1) != 0)) &&
     (*(char *)(*(long *)(*(long *)(param_1 + 8) + 0x3b8) + 0x7878) != '\0')) {
    FUN_02192850(param_1,0,0);
  }
  iVar9 = *(int *)(param_1 + 0x1b30);
  if (iVar9 < 1) {
    uVar12 = *(uint *)(param_1 + 0x3658);
    puVar13 = &DAT_053fd568;
    if ((-1 < (int)uVar12) && ((int)uVar12 < *(int *)(param_1 + 0x10))) {
      plVar10 = (long *)(param_1 + 0x18);
      goto LAB_0219396c;
    }
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x365c);
    puVar13 = &DAT_053fd568;
    if ((-1 < (int)uVar12) && ((int)uVar12 < iVar9)) {
      plVar10 = (long *)(param_1 + 0x1b38);
LAB_0219396c:
      puVar13 = *(undefined4 **)(*plVar10 + (ulong)uVar12 * 8);
    }
  }
  if (*(undefined8 **)(puVar13 + 6) == (undefined8 *)0x0) {
    if ((int)puVar13[0x1b] < 0) {
      if ((*(byte *)(param_1 + 0x366c) & 1) == 0) {
        if (*(char *)(*(long *)(*(long *)(param_1 + 8) + 0x3b8) + 0x7878) != '\0') {
LAB_021939f8:
          pbVar3 = (byte *)(param_1 + 0x366c);
          if ((*pbVar3 >> 2 & 1) == 0) {
            *pbVar3 = *pbVar3 | 4;
            if (*(undefined8 **)(puVar14 + 8) != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)(puVar14 + 8))();
            }
          }
          iVar9 = *(int *)(param_1 + 0x1b30);
          if (iVar9 < 1) {
            iVar9 = *(int *)(param_1 + 0x3650);
            if (iVar9 == 0) {
              if (*(int *)(param_1 + 0x3658) == *(int *)(param_1 + 0x10) + -1) goto LAB_02193c64;
              iVar11 = *(int *)(param_1 + 0x10);
              uVar12 = *(uint *)(param_1 + 0x3658);
              if (uVar12 == iVar11 - 1U) goto LAB_02193d04;
              *pbVar3 = *pbVar3 & 0xfb;
            }
            else {
              iVar11 = *(int *)(param_1 + 0x10);
              *pbVar3 = *pbVar3 & 0xfb;
              uVar12 = *(uint *)(param_1 + 0x3658);
            }
            puVar14 = &DAT_053fd568;
            if ((-1 < (int)uVar12) && ((int)uVar12 < iVar11)) {
              puVar14 = *(undefined4 **)(*(long *)(param_1 + 0x18) + (ulong)uVar12 * 8);
            }
            if (puVar14[0x19] == 0) {
              *(uint *)(param_1 + 0x3658) = uVar12 + 1;
            }
            else {
              if ((int)uVar12 < iVar11) {
                lVar8 = (long)(int)uVar12;
                puVar2 = PTR_DAT_04bbc1a0 + 0x10;
                do {
                  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x18) + lVar8 * 8);
                  lVar8 = lVar8 + 1;
                  puVar7[0xf] = puVar2;
                  *puVar7 = *(undefined8 *)(param_1 + 0x20);
                  *(undefined8 **)(param_1 + 0x20) = puVar7;
                } while (lVar8 < (int)(uVar12 + 1));
              }
              if ((-1 < (int)uVar12) && (iVar9 = *(int *)(param_1 + 0x10), (int)uVar12 < iVar9)) {
                uVar1 = uVar12 + 1;
                uVar5 = iVar9 - uVar1;
                if (uVar5 != 0 && (int)uVar1 <= iVar9) {
                  memmove((void *)(*(long *)(param_1 + 0x18) + (ulong)uVar12 * 8),
                          (void *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 8),
                          -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3);
                  iVar9 = *(int *)(param_1 + 0x10);
                }
                *(int *)(param_1 + 0x10) = iVar9 + -1;
              }
              iVar9 = *(int *)(param_1 + 0x3650);
            }
            if ((iVar9 == 1) && (*(int *)(param_1 + 0x3658) == *(int *)(param_1 + 0x10))) {
              *(undefined4 *)(param_1 + 0x3658) = 0;
            }
          }
          else {
            iVar11 = *(int *)(param_1 + 0x3654);
            if (iVar11 == 0) {
              if (*(uint *)(param_1 + 0x365c) == iVar9 - 1U) {
                lVar8 = 0;
                puVar2 = PTR_DAT_04bbc1a0 + 0x10;
                do {
                  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x1b38) + lVar8 * 8);
                  lVar8 = lVar8 + 1;
                  puVar7[0xf] = puVar2;
                  *puVar7 = *(undefined8 *)(param_1 + 0x1b40);
                  *(undefined8 **)(param_1 + 0x1b40) = puVar7;
                } while (lVar8 < *(int *)(param_1 + 0x1b30));
                *(undefined4 *)(param_1 + 0x1b30) = 0;
                *(undefined4 *)(param_1 + 0x365c) = 0;
                *(undefined4 *)(param_1 + 0x3664) = 0;
              }
              else {
                uVar12 = *(uint *)(param_1 + 0x365c);
                if (uVar12 != iVar9 - 1U) {
                  *pbVar3 = *pbVar3 & 0xfb;
                  goto LAB_02193a48;
                }
              }
            }
            else {
              *pbVar3 = *pbVar3 & 0xfb;
              uVar12 = *(uint *)(param_1 + 0x365c);
LAB_02193a48:
              puVar14 = &DAT_053fd568;
              if ((-1 < (int)uVar12) && ((int)uVar12 < iVar9)) {
                puVar14 = *(undefined4 **)(*(long *)(param_1 + 0x1b38) + (ulong)uVar12 * 8);
              }
              if (puVar14[0x19] == 0) {
                *(uint *)(param_1 + 0x365c) = uVar12 + 1;
              }
              else {
                if ((int)uVar12 < iVar9) {
                  lVar8 = (long)(int)uVar12;
                  puVar2 = PTR_DAT_04bbc1a0 + 0x10;
                  do {
                    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x1b38) + lVar8 * 8);
                    lVar8 = lVar8 + 1;
                    puVar7[0xf] = puVar2;
                    *puVar7 = *(undefined8 *)(param_1 + 0x1b40);
                    *(undefined8 **)(param_1 + 0x1b40) = puVar7;
                  } while (lVar8 < (int)(uVar12 + 1));
                }
                if ((-1 < (int)uVar12) && (iVar9 = *(int *)(param_1 + 0x1b30), (int)uVar12 < iVar9))
                {
                  uVar1 = uVar12 + 1;
                  uVar5 = iVar9 - uVar1;
                  if (uVar5 != 0 && (int)uVar1 <= iVar9) {
                    memmove((void *)(*(long *)(param_1 + 0x1b38) + (ulong)uVar12 * 8),
                            (void *)(*(long *)(param_1 + 0x1b38) + (ulong)uVar1 * 8),
                            -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3);
                    iVar9 = *(int *)(param_1 + 0x1b30);
                  }
                  *(int *)(param_1 + 0x1b30) = iVar9 + -1;
                }
                iVar11 = *(int *)(param_1 + 0x3654);
              }
              if ((iVar11 == 1) && (*(int *)(param_1 + 0x365c) == *(int *)(param_1 + 0x10))) {
                *(undefined4 *)(param_1 + 0x365c) = 0;
              }
            }
          }
LAB_02193d04:
          FUN_02192850(param_1,0,0);
          if ((*pbVar3 & 3) != 0) {
            return;
          }
          goto LAB_02193d20;
        }
      }
      else if ((-1 < (int)puVar13[0x17]) && ((int)puVar13[0x17] <= *(int *)(param_1 + 0x3668)))
      goto LAB_021939f8;
    }
    else {
      piVar4 = (int *)(param_1 + 0x3664);
      if (iVar9 < 1) {
        piVar4 = (int *)(param_1 + 0x3660);
      }
      if ((int)puVar13[0x1b] <= *piVar4) goto LAB_021939f8;
    }
  }
  else {
    uVar6 = (**(code **)**(undefined8 **)(puVar13 + 6))();
    if ((uVar6 & 1) != 0) goto LAB_021939f8;
  }
LAB_02193c64:
  if ((*(byte *)(param_1 + 0x366c) & 3) != 0) {
    return;
  }
  puVar7 = *(undefined8 **)(puVar14 + 4);
  if (puVar7 != (undefined8 *)0x0) {
    puVar14 = (undefined4 *)(param_1 + 0x3664);
    if (*(int *)(param_1 + 0x1b30) < 1) {
      puVar14 = (undefined4 *)(param_1 + 0x3660);
    }
    (**(code **)*puVar7)(puVar7,*puVar14);
  }
LAB_02193d20:
  if (*(int *)(param_1 + 0x3660) != 0x7fffffff) {
    iVar9 = *(int *)(param_1 + 0x3664);
    if (*(int *)(param_1 + 0x1b30) < 1) {
      iVar9 = *(int *)(param_1 + 0x3660);
    }
    if (*(int *)(param_1 + 0x1b30) < 1) {
      *(int *)(param_1 + 0x3660) = iVar9 + 1;
    }
    else {
      *(int *)(param_1 + 0x3664) = iVar9 + 1;
    }
  }
  return;
}

