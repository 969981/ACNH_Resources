
void FUN_03324b60(long *param_1,uint param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((param_1[100] != 0) && (*(char *)(param_1[100] + 2000) == '\0')) {
    return;
  }
  lVar8 = param_1[0x62];
  if (lVar8 == 0) {
    bVar1 = false;
    if ((param_2 >> 0xd & 1) != 0) goto LAB_03324c20;
LAB_03324bac:
    if ((param_2 >> 0xe & 1) == 0) {
      bVar5 = (bool)(bVar1 ^ 1);
      bVar6 = bVar5;
      if ((param_2 & 4) == 0) {
        bVar6 = true;
      }
      if (bVar6) {
        if ((param_2 & 0x24) != 0x20) {
          bVar5 = true;
        }
        if (!bVar5) {
          uVar4 = *(uint *)(lVar8 + 0x1768);
          if (1 < (int)uVar4) {
            uVar12 = 0;
            piVar13 = (int *)(lVar8 + 0xe00);
            do {
              piVar2 = piVar13;
              if (299 < uVar12) {
                piVar2 = (int *)(lVar8 + 0xe00);
              }
              if (*(int *)(lVar8 + 0x5d8) < *piVar2) goto LAB_03324d1c;
              uVar12 = uVar12 + 1;
              piVar13 = piVar13 + 1;
            } while (uVar4 != uVar12);
            uVar12 = (ulong)uVar4;
LAB_03324d1c:
            uVar11 = (uint)uVar12;
            if ((int)uVar4 <= (int)uVar11) {
              uVar11 = 0;
            }
            goto LAB_03324d24;
          }
        }
      }
      else if ((param_2 >> 5 & 1) == 0) {
        uVar4 = *(uint *)(lVar8 + 0x1768);
        if (1 < (int)uVar4) {
          uVar12 = 0;
          piVar13 = (int *)(lVar8 + 0xe00);
          do {
            piVar2 = piVar13;
            if (299 < uVar12) {
              piVar2 = (int *)(lVar8 + 0xe00);
            }
            if (*(int *)(lVar8 + 0x5d8) < *piVar2) goto LAB_03324c08;
            uVar12 = uVar12 + 1;
            piVar13 = piVar13 + 1;
          } while (uVar4 != uVar12);
          uVar12 = (ulong)uVar4;
LAB_03324c08:
          uVar11 = uVar4 - 1;
          if (1 < (int)uVar12) {
            uVar11 = (int)uVar12 - 2;
          }
LAB_03324d24:
          puVar3 = (undefined4 *)(lVar8 + 0xe00) + uVar11;
          if (299 < uVar11) {
            puVar3 = (undefined4 *)(lVar8 + 0xe00);
          }
          *(undefined4 *)(lVar8 + 0x5d8) = *puVar3;
          FUN_033600f0(lVar8,1);
        }
      }
    }
    else if ((param_2 & 0x24) == 0) {
      pcVar10 = *(code **)(*param_1 + 0x78);
LAB_03324c4c:
      (*pcVar10)(param_1);
    }
  }
  else {
    bVar1 = *(char *)(lVar8 + 0x177c) != '\0' || *(long *)(lVar8 + 0xdf8) != 0;
    if ((param_2 >> 0xd & 1) == 0) goto LAB_03324bac;
LAB_03324c20:
    if ((param_2 & 0x4024) == 0) {
      pcVar10 = *(code **)(*param_1 + 0x70);
      goto LAB_03324c4c;
    }
  }
  if ((DAT_05355a60 != 0) && (lVar8 = *(long *)(DAT_05355a60 + 0x28), lVar8 != 0)) {
    if (*(long *)(lVar8 + 0x28) == lVar8 + 0x40) {
      bVar1 = true;
    }
    if ((!bVar1) &&
       ((lVar8 = param_1[1], lVar8 == 0 || (*(int *)(lVar8 + 0x648) <= *(int *)(lVar8 + 0x644))))) {
      if ((param_2 >> 2 & 1) == 0) {
        if ((param_2 & 0x6020) == 0x20) {
          uVar9 = 0xe;
          goto LAB_03324cb0;
        }
      }
      else if ((param_2 & 0x6020) == 0) {
        uVar9 = 0xd;
        if ((*(long *)PTR_DAT_04bc9298 != 0) && (DAT_0572cca8 != (long *)0x0)) {
          if (*(int *)(*(long *)(*(long *)PTR_DAT_04bc9298 + 0x210) + 0x60) == 10) {
            uVar9 = 0xd;
          }
          else {
            iVar7 = (**(code **)(*DAT_0572cca8 + 0x40))(DAT_0572cca8);
            lVar8 = param_1[1];
            uVar9 = 0xd;
            if (iVar7 - 3U < 2) {
              uVar9 = 0xe;
            }
          }
        }
LAB_03324cb0:
        FUN_032e4b30(lVar8,uVar9,0);
        return;
      }
    }
  }
  return;
}

