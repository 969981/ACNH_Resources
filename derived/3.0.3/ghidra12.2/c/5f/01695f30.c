
void FUN_01695f30(long *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long *__s;
  
  __s = param_1 + 1;
  *param_1 = (long)(PTR_DAT_04bbdd38 + 0x10);
  memset(__s,0,0x1000);
  iVar7 = DAT_05233984;
  iVar6 = DAT_05233980;
  uVar10 = DAT_05233974;
  uVar5 = DAT_05233970;
  if ((int)DAT_05233974 <= DAT_05233984) {
    if (DAT_05233980 < (int)DAT_05233970) {
      do {
        uVar10 = uVar10 + 2;
      } while ((int)uVar10 <= DAT_05233984);
    }
    else {
      uVar11 = DAT_05233974;
      do {
        uVar1 = uVar11 + 2;
        iVar3 = (uVar11 & 0x1fffffe) * 0x80;
        uVar12 = uVar5;
        if ((param_3 & 1) == 0) {
          do {
            if (((((int)uVar11 < (int)uVar10) || (iVar7 < (int)(uVar11 + 1))) ||
                ((int)uVar12 < (int)uVar5)) || (iVar6 < (int)(uVar12 + 1))) {
LAB_01696070:
              if (((int)uVar10 <= (int)uVar11) &&
                 (((int)uVar5 <= (int)uVar12 &&
                  (uVar8 = iVar3 + ((int)uVar12 >> 1), uVar8 >> 0xf == 0)))) {
                lVar4 = (ulong)(uVar8 >> 5) * 4;
                *(uint *)((long)__s + lVar4) =
                     *(uint *)((long)__s + lVar4) | 1 << (ulong)(uVar12 >> 1 & 0x1f);
              }
            }
            else {
              uVar8 = uVar11;
              uVar9 = uVar12;
              do {
                uVar2 = uVar9 + uVar8 * 0x200;
                if ((uVar2 >> 0x11 == 0) &&
                   ((*(uint *)(param_2 + 8 + (ulong)(uVar2 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1)
                    != 0)) goto LAB_01696070;
                if ((int)uVar9 < (int)(uVar12 + 1)) {
                  uVar9 = uVar9 + 1;
                }
                else {
                  uVar8 = uVar8 + 1;
                  uVar9 = uVar12;
                }
              } while ((uVar12 != uVar9) || (uVar1 != uVar8));
            }
            uVar12 = uVar12 + 2;
          } while ((int)uVar12 <= iVar6);
        }
        else {
          do {
            if (((((int)uVar10 <= (int)uVar11) && ((int)(uVar11 + 1) <= iVar7)) &&
                ((int)uVar5 <= (int)uVar12)) && ((int)(uVar12 + 1) <= iVar6)) {
              uVar8 = uVar11;
              uVar9 = uVar12;
              do {
                uVar2 = uVar9 + uVar8 * 0x200;
                if ((uVar2 >> 0x11 != 0) ||
                   ((*(uint *)(param_2 + 8 + (ulong)(uVar2 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1)
                    == 0)) goto LAB_016960b0;
                if ((int)uVar9 < (int)(uVar12 + 1)) {
                  uVar9 = uVar9 + 1;
                }
                else {
                  uVar8 = uVar8 + 1;
                  uVar9 = uVar12;
                }
              } while ((uVar12 != uVar9) || (uVar1 != uVar8));
              uVar8 = iVar3 + ((int)uVar12 >> 1);
              if (uVar8 >> 0xf == 0) {
                lVar4 = (ulong)(uVar8 >> 5) * 4;
                *(uint *)((long)__s + lVar4) =
                     *(uint *)((long)__s + lVar4) | 1 << (ulong)(uVar12 >> 1 & 0x1f);
              }
            }
LAB_016960b0:
            uVar12 = uVar12 + 2;
          } while ((int)uVar12 <= iVar6);
        }
        uVar11 = uVar1;
      } while ((int)uVar1 <= iVar7);
    }
  }
  return;
}

