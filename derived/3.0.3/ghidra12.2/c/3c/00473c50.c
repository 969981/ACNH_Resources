
int FUN_00473c50(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  undefined8 ******ppppppuVar5;
  int iVar6;
  undefined8 ******ppppppuVar7;
  undefined8 ******ppppppuVar8;
  int iVar9;
  undefined8 ******ppppppuVar10;
  long lVar11;
  undefined8 ******local_10;
  undefined8 ******local_8;
  
  ppppppuVar7 = &local_10;
  if ((undefined8 ******)param_1[3] == (undefined8 ******)0x0) {
    return 0;
  }
  iVar1 = 1;
  ppppppuVar3 = (undefined8 ******)param_1[3];
  do {
    local_8 = (undefined8 ******)0x0;
    if (ppppppuVar3 == (undefined8 ******)0x0) {
      uVar2 = 0;
      ppppppuVar4 = &local_8;
    }
    else {
      if (iVar1 < 1) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar2 = 0;
      ppppppuVar4 = &local_8;
      do {
        iVar9 = 0;
        ppppppuVar10 = ppppppuVar3;
        do {
          ppppppuVar10 = (undefined8 ******)*ppppppuVar10;
          iVar9 = iVar9 + 1;
          if (iVar1 <= iVar9) break;
        } while (ppppppuVar10 != (undefined8 ******)0x0);
        iVar6 = iVar1;
        if (ppppppuVar10 == (undefined8 ******)0x0) {
          ppppppuVar10 = (undefined8 ******)0x0;
LAB_00473d20:
          do {
            ppppppuVar5 = ppppppuVar3;
            *ppppppuVar4 = ppppppuVar5;
            iVar9 = iVar9 + -1;
            ppppppuVar3 = (undefined8 ******)*ppppppuVar5;
            ppppppuVar4 = ppppppuVar5;
          } while (0 < iVar9);
        }
        else {
          ppppppuVar5 = ppppppuVar4;
          do {
            if (ppppppuVar10[1] < ppppppuVar3[1]) {
              ppppppuVar8 = (undefined8 ******)*ppppppuVar10;
              iVar6 = iVar6 + -1;
              *ppppppuVar5 = ppppppuVar10;
              ppppppuVar4 = ppppppuVar3;
              ppppppuVar5 = ppppppuVar10;
            }
            else {
              ppppppuVar4 = (undefined8 ******)*ppppppuVar3;
              iVar9 = iVar9 + -1;
              *ppppppuVar5 = ppppppuVar3;
              ppppppuVar8 = ppppppuVar10;
              ppppppuVar5 = ppppppuVar3;
            }
            ppppppuVar10 = ppppppuVar8;
            ppppppuVar3 = ppppppuVar4;
          } while (((ppppppuVar10 != (undefined8 ******)0x0) && (0 < iVar9)) && (0 < iVar6));
          if (0 < iVar9) {
            ppppppuVar4 = ppppppuVar5;
            goto LAB_00473d20;
          }
        }
        uVar2 = uVar2 + 1;
        ppppppuVar4 = ppppppuVar5;
        for (ppppppuVar3 = ppppppuVar10; (0 < iVar6 && (ppppppuVar3 != (undefined8 ******)0x0));
            ppppppuVar3 = (undefined8 ******)*ppppppuVar3) {
          iVar6 = iVar6 + -1;
          *ppppppuVar4 = ppppppuVar3;
          ppppppuVar4 = ppppppuVar3;
        }
      } while (ppppppuVar3 != (undefined8 ******)0x0);
    }
    *ppppppuVar4 = (undefined8 *****)0x0;
    iVar1 = iVar1 << 1;
    ppppppuVar3 = local_8;
  } while (1 < uVar2);
  param_1[3] = local_8;
  ppppppuVar10 = (undefined8 ******)param_1[8];
  ppppppuVar3 = (undefined8 ******)*param_1;
  ppppppuVar4 = ppppppuVar3;
  if (ppppppuVar10 < (undefined8 ******)param_1[9]) {
    do {
      ppppppuVar3 = ppppppuVar10;
      *ppppppuVar3 = ppppppuVar4;
      ppppppuVar4 = ppppppuVar3;
      ppppppuVar10 = (undefined8 ******)((long)ppppppuVar3 + param_1[1]);
    } while ((undefined8 ******)((long)ppppppuVar3 + param_1[1]) < (undefined8 ******)param_1[9]);
  }
  *param_1 = ppppppuVar3;
  param_1[8] = 0;
  param_1[9] = 0;
  ppppppuVar4 = (undefined8 ******)0x0;
  if (ppppppuVar3 != (undefined8 ******)0x0) {
    iVar1 = 1;
    do {
      local_8 = (undefined8 ******)0x0;
      if (ppppppuVar3 == (undefined8 ******)0x0) {
        uVar2 = 0;
        ppppppuVar4 = &local_8;
      }
      else {
        if (iVar1 < 1) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar2 = 0;
        ppppppuVar4 = &local_8;
        do {
          iVar9 = 0;
          ppppppuVar10 = ppppppuVar3;
          do {
            ppppppuVar10 = (undefined8 ******)*ppppppuVar10;
            iVar9 = iVar9 + 1;
            if (iVar1 <= iVar9) break;
          } while (ppppppuVar10 != (undefined8 ******)0x0);
          iVar6 = iVar1;
          if (ppppppuVar10 == (undefined8 ******)0x0) {
            ppppppuVar10 = (undefined8 ******)0x0;
LAB_00473e98:
            do {
              ppppppuVar5 = ppppppuVar3;
              *ppppppuVar4 = ppppppuVar5;
              iVar9 = iVar9 + -1;
              ppppppuVar3 = (undefined8 ******)*ppppppuVar5;
              ppppppuVar4 = ppppppuVar5;
            } while (0 < iVar9);
          }
          else {
            ppppppuVar5 = ppppppuVar4;
            do {
              if (ppppppuVar10 < ppppppuVar3) {
                ppppppuVar8 = (undefined8 ******)*ppppppuVar10;
                iVar6 = iVar6 + -1;
                *ppppppuVar5 = ppppppuVar10;
                ppppppuVar4 = ppppppuVar3;
                ppppppuVar5 = ppppppuVar10;
              }
              else {
                ppppppuVar4 = (undefined8 ******)*ppppppuVar3;
                iVar9 = iVar9 + -1;
                *ppppppuVar5 = ppppppuVar3;
                ppppppuVar8 = ppppppuVar10;
                ppppppuVar5 = ppppppuVar3;
              }
              ppppppuVar10 = ppppppuVar8;
              ppppppuVar3 = ppppppuVar4;
            } while (((ppppppuVar10 != (undefined8 ******)0x0) && (0 < iVar9)) && (0 < iVar6));
            if (0 < iVar9) {
              ppppppuVar4 = ppppppuVar5;
              goto LAB_00473e98;
            }
          }
          uVar2 = uVar2 + 1;
          ppppppuVar4 = ppppppuVar5;
          for (ppppppuVar3 = ppppppuVar10; (0 < iVar6 && (ppppppuVar3 != (undefined8 ******)0x0));
              ppppppuVar3 = (undefined8 ******)*ppppppuVar3) {
            iVar6 = iVar6 + -1;
            *ppppppuVar4 = ppppppuVar3;
            ppppppuVar4 = ppppppuVar3;
          }
        } while (ppppppuVar3 != (undefined8 ******)0x0);
      }
      *ppppppuVar4 = (undefined8 *****)0x0;
      iVar1 = iVar1 << 1;
      ppppppuVar4 = local_8;
      ppppppuVar3 = local_8;
    } while (1 < uVar2);
  }
  local_8 = (undefined8 ******)param_1[3];
  iVar1 = 0;
  *param_1 = ppppppuVar4;
  local_10 = ppppppuVar4;
  if (local_8 != (undefined8 ******)0x0) {
    ppppppuVar3 = local_8;
    ppppppuVar10 = &local_8;
    do {
      while( true ) {
        ppppppuVar8 = ppppppuVar3;
        ppppppuVar5 = (undefined8 ******)ppppppuVar8[2];
        lVar11 = param_1[1] * (long)ppppppuVar8[3];
        ppppppuVar3 = (undefined8 ******)((long)ppppppuVar5 + lVar11);
        if (ppppppuVar5 == ppppppuVar4 && 0 < lVar11) {
          do {
            ppppppuVar4 = (undefined8 ******)*ppppppuVar4;
            ppppppuVar5 = (undefined8 ******)((long)ppppppuVar5 + param_1[1]);
          } while (ppppppuVar5 == ppppppuVar4 && ppppppuVar5 < ppppppuVar3);
        }
        if (ppppppuVar5 == ppppppuVar3) break;
        ppppppuVar10 = ppppppuVar7;
        if ((ppppppuVar4 != (undefined8 ******)0x0) && (ppppppuVar4 < ppppppuVar3)) {
          do {
            ppppppuVar4 = (undefined8 ******)*ppppppuVar4;
          } while ((ppppppuVar4 != (undefined8 ******)0x0 && ppppppuVar4 <= ppppppuVar3) &&
                   (ppppppuVar4 == (undefined8 ******)0x0 || ppppppuVar3 != ppppppuVar4));
        }
        do {
          ppppppuVar7 = ppppppuVar10;
          ppppppuVar10 = (undefined8 ******)*ppppppuVar7;
        } while ((undefined8 ******)*ppppppuVar7 != ppppppuVar4);
        ppppppuVar3 = (undefined8 ******)*ppppppuVar8;
        ppppppuVar10 = ppppppuVar8;
        if ((undefined8 ******)*ppppppuVar8 == (undefined8 ******)0x0) goto LAB_00473fc8;
      }
      *ppppppuVar10 = *ppppppuVar8;
      *ppppppuVar8 = (undefined8 *****)param_1[4];
      param_1[4] = ppppppuVar8;
      ppppppuVar3 = (undefined8 ******)*ppppppuVar10;
      iVar1 = iVar1 + 1;
      *ppppppuVar7 = ppppppuVar4;
    } while (ppppppuVar3 != (undefined8 ******)0x0);
  }
LAB_00473fc8:
  *param_1 = local_10;
  param_1[2] = 0;
  param_1[3] = local_8;
  return iVar1;
}

