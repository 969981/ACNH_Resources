
void FUN_0351f400(long param_1,int param_2,long *param_3)

{
  uint *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined *local_70;
  char *pcStack_68;
  
  uVar3 = *(uint *)(param_3 + 8);
  uVar10 = uVar3 - 1;
  if (uVar10 < 2) {
    puVar1 = (uint *)(param_1 + 0x1c178);
    if (DAT_05767c50 == param_2) {
      uVar8 = 0;
      uVar10 = uVar3;
    }
    else if (DAT_05767c68 == param_2) {
      uVar8 = 1;
      uVar10 = uVar3 + 1;
    }
    else if (DAT_05767c80 == param_2) {
      uVar8 = 2;
      uVar10 = uVar3 + 2;
    }
    else if (DAT_05767c98 == param_2) {
      uVar8 = 3;
      uVar10 = uVar3 + 3;
    }
    else if (DAT_05767cb0 == param_2) {
      uVar8 = 4;
      uVar10 = uVar3 + 4;
    }
    else if (DAT_05767cc8 == param_2) {
      uVar8 = 5;
      uVar10 = uVar3 + 5;
    }
    else if (DAT_05767ce0 == param_2) {
      uVar8 = 6;
      uVar10 = uVar3 + 6;
    }
    else if (DAT_05767cf8 == param_2) {
      uVar8 = 7;
      uVar10 = uVar3 + 7;
    }
    else if (DAT_05767d10 == param_2) {
      uVar8 = 8;
      uVar10 = uVar3 + 8;
    }
    else if (DAT_05767d28 == param_2) {
      uVar8 = 9;
      uVar10 = uVar3 + 9;
    }
    else if (DAT_05767d40 == param_2) {
      uVar8 = 10;
      uVar10 = uVar3 + 10;
    }
    else if (DAT_05767d58 == param_2) {
      uVar8 = 0xb;
      uVar10 = uVar3 + 0xb;
    }
    else {
      uVar8 = 0xffffffff;
    }
    lVar11 = *(long *)(param_1 + 0x1c180);
    if (lVar11 != 0) {
      uVar3 = uVar8;
      if (*puVar1 <= uVar8) {
        uVar3 = 0;
      }
      if (*(char *)param_3[1] != '\0') {
        (**(code **)(*param_3 + 0x18))(param_3);
        pcStack_68 = (char *)param_3[1];
        local_70 = PTR_DAT_04bb2020 + 0x10;
        if ((*pcStack_68 != '\0') || (*(short *)PTR_DAT_04bb37e0 != -2)) {
          iVar9 = 0;
          iVar5 = 0;
          do {
            if ((*(int *)(param_1 + 0x228 + (long)iVar5 * 0x1a8 + 0x1a0) == 0) &&
               (lVar7 = param_1 + 0x228 + (long)iVar5 * 0x1a8,
               (*(byte *)(lVar7 + 0x18) >> 1 & 1) == 0)) {
              FUN_03412d40(lVar7,&local_70,PTR_DAT_04bb37e0,0x11);
              if ((iVar9 != 1) &&
                 (piVar6 = (int *)(lVar11 + (long)(int)uVar3 * 0x18 + 0x10), *piVar6 + iVar9 != 0))
              {
                *piVar6 = -iVar9;
                *(undefined4 *)(lVar11 + (long)(int)uVar3 * 0x18 + 0x14) = 1;
              }
              break;
            }
            iVar5 = iVar5 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar5 != 0x10e);
        }
      }
      uVar3 = uVar8 + 1;
      if ((int)uVar3 < (int)uVar10) {
        lVar11 = *(long *)(param_1 + 0x1c180);
        if (*puVar1 <= uVar3) {
          uVar3 = 0;
        }
        if ((lVar11 != 0) && (*(char *)param_3[5] != '\0')) {
          (**(code **)(param_3[4] + 0x18))(param_3 + 4);
          pcStack_68 = (char *)param_3[5];
          local_70 = PTR_DAT_04bb2020 + 0x10;
          if ((*pcStack_68 != '\0') || (*(short *)PTR_DAT_04bb37e0 != -2)) {
            iVar9 = 0;
            iVar5 = 0;
            do {
              if ((*(int *)(param_1 + 0x228 + (long)iVar5 * 0x1a8 + 0x1a0) == 0) &&
                 (lVar7 = param_1 + 0x228 + (long)iVar5 * 0x1a8,
                 (*(byte *)(lVar7 + 0x18) >> 1 & 1) == 0)) {
                FUN_03412d40(lVar7,&local_70,PTR_DAT_04bb37e0,0x11);
                if ((iVar9 != 1) &&
                   (piVar6 = (int *)(lVar11 + (ulong)uVar3 * 0x18 + 0x10), *piVar6 + iVar9 != 0)) {
                  *piVar6 = -iVar9;
                  *(undefined4 *)(lVar11 + (ulong)uVar3 * 0x18 + 0x14) = 1;
                }
                break;
              }
              iVar5 = iVar5 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar5 != 0x10e);
          }
        }
        uVar12 = (ulong)(uVar8 + 2);
        if ((int)(uVar8 + 2) < (int)uVar10) {
          puVar2 = PTR_DAT_04bb2020 + 0x10;
          do {
            lVar11 = (long)(int)uVar12;
            lVar7 = *(long *)(param_1 + 0x1c180);
            if (*puVar1 <= uVar12) {
              lVar11 = 0;
            }
            if ((lVar7 != 0) && (*(char *)param_3[1] != '\0')) {
              (**(code **)(*param_3 + 0x18))(param_3);
              pcStack_68 = (char *)param_3[1];
              local_70 = puVar2;
              if ((*pcStack_68 != '\0') || (*(short *)PTR_DAT_04bb37e0 != -2)) {
                iVar9 = 0;
                iVar5 = 0;
                do {
                  if ((*(int *)(param_1 + 0x228 + (long)iVar5 * 0x1a8 + 0x1a0) == 0) &&
                     (lVar4 = param_1 + 0x228 + (long)iVar5 * 0x1a8,
                     (*(byte *)(lVar4 + 0x18) >> 1 & 1) == 0)) {
                    FUN_03412d40(lVar4,&local_70,PTR_DAT_04bb37e0,0x11);
                    if ((iVar9 != 1) &&
                       (piVar6 = (int *)(lVar7 + lVar11 * 0x18 + 0x10), *piVar6 + iVar9 != 0)) {
                      *piVar6 = -iVar9;
                      *(undefined4 *)(lVar7 + lVar11 * 0x18 + 0x14) = 1;
                    }
                    break;
                  }
                  iVar5 = iVar5 + 1;
                  iVar9 = iVar9 + -1;
                } while (iVar5 != 0x10e);
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar10 != (uint)uVar12);
        }
      }
    }
  }
  return;
}

