
void FUN_00474000(long *param_1,code *param_2,undefined4 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 ******ppppppuVar5;
  undefined8 ******ppppppuVar6;
  undefined8 ******ppppppuVar7;
  int iVar8;
  int iVar9;
  undefined8 ******ppppppuVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 ******ppppppuVar13;
  undefined8 ******local_58;
  
  plVar12 = (long *)param_1[4];
  if (plVar12 != (long *)0x0) {
    lVar2 = param_1[1];
    do {
      if (0 < plVar12[3] * lVar2) {
        uVar11 = plVar12[2];
        uVar1 = uVar11 + plVar12[3] * lVar2;
        do {
          (*param_2)(uVar11,lVar2,0,param_3,param_4);
          lVar2 = param_1[1];
          uVar11 = uVar11 + lVar2;
        } while (uVar11 < uVar1);
      }
      plVar12 = (long *)*plVar12;
    } while (plVar12 != (long *)0x0);
  }
  if ((param_1[3] != 0) || (*param_1 != 0)) {
    lVar2 = FUN_004733d0();
    param_1[3] = lVar2;
    ppppppuVar5 = (undefined8 ******)param_1[8];
    ppppppuVar13 = (undefined8 ******)*param_1;
    ppppppuVar10 = ppppppuVar13;
    if (ppppppuVar5 < (undefined8 ******)param_1[9]) {
      do {
        ppppppuVar13 = ppppppuVar5;
        *ppppppuVar13 = ppppppuVar10;
        ppppppuVar5 = (undefined8 ******)((long)ppppppuVar13 + param_1[1]);
        ppppppuVar10 = ppppppuVar13;
      } while ((undefined8 ******)((long)ppppppuVar13 + param_1[1]) < (undefined8 ******)param_1[9])
      ;
    }
    *param_1 = (long)ppppppuVar13;
    param_1[8] = 0;
    param_1[9] = 0;
    ppppppuVar5 = (undefined8 ******)0x0;
    if (ppppppuVar13 != (undefined8 ******)0x0) {
      iVar3 = 1;
      do {
        local_58 = (undefined8 ******)0x0;
        if (ppppppuVar13 == (undefined8 ******)0x0) {
          uVar4 = 0;
          ppppppuVar5 = &local_58;
        }
        else {
          if (iVar3 < 1) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar4 = 0;
          ppppppuVar5 = &local_58;
          do {
            iVar8 = 0;
            ppppppuVar10 = ppppppuVar13;
            do {
              ppppppuVar10 = (undefined8 ******)*ppppppuVar10;
              iVar8 = iVar8 + 1;
              if (iVar3 <= iVar8) break;
            } while (ppppppuVar10 != (undefined8 ******)0x0);
            iVar9 = iVar3;
            if (ppppppuVar10 == (undefined8 ******)0x0) {
              ppppppuVar10 = (undefined8 ******)0x0;
LAB_00474198:
              do {
                ppppppuVar6 = ppppppuVar13;
                *ppppppuVar5 = ppppppuVar6;
                iVar8 = iVar8 + -1;
                ppppppuVar5 = ppppppuVar6;
                ppppppuVar13 = (undefined8 ******)*ppppppuVar6;
              } while (0 < iVar8);
            }
            else {
              ppppppuVar6 = ppppppuVar5;
              do {
                if (ppppppuVar10 < ppppppuVar13) {
                  ppppppuVar7 = (undefined8 ******)*ppppppuVar10;
                  iVar9 = iVar9 + -1;
                  *ppppppuVar6 = ppppppuVar10;
                  ppppppuVar5 = ppppppuVar13;
                  ppppppuVar6 = ppppppuVar10;
                }
                else {
                  ppppppuVar5 = (undefined8 ******)*ppppppuVar13;
                  iVar8 = iVar8 + -1;
                  *ppppppuVar6 = ppppppuVar13;
                  ppppppuVar7 = ppppppuVar10;
                  ppppppuVar6 = ppppppuVar13;
                }
                ppppppuVar10 = ppppppuVar7;
                ppppppuVar13 = ppppppuVar5;
              } while (((ppppppuVar10 != (undefined8 ******)0x0) && (0 < iVar8)) && (0 < iVar9));
              if (0 < iVar8) {
                ppppppuVar5 = ppppppuVar6;
                goto LAB_00474198;
              }
            }
            uVar4 = uVar4 + 1;
            ppppppuVar5 = ppppppuVar6;
            for (ppppppuVar13 = ppppppuVar10;
                (0 < iVar9 && (ppppppuVar13 != (undefined8 ******)0x0));
                ppppppuVar13 = (undefined8 ******)*ppppppuVar13) {
              iVar9 = iVar9 + -1;
              *ppppppuVar5 = ppppppuVar13;
              ppppppuVar5 = ppppppuVar13;
            }
          } while (ppppppuVar13 != (undefined8 ******)0x0);
        }
        *ppppppuVar5 = (undefined8 *****)0x0;
        iVar3 = iVar3 << 1;
        ppppppuVar5 = local_58;
        ppppppuVar13 = local_58;
      } while (1 < uVar4);
    }
    plVar12 = (long *)param_1[3];
    *param_1 = (long)ppppppuVar5;
    if (plVar12 != (long *)0x0) {
      lVar2 = param_1[1];
      do {
        if (0 < lVar2 * plVar12[3]) {
          ppppppuVar10 = (undefined8 ******)plVar12[2];
          ppppppuVar13 = (undefined8 ******)((long)ppppppuVar10 + lVar2 * plVar12[3]);
          do {
            while (ppppppuVar10 != ppppppuVar5) {
              (*param_2)(ppppppuVar10,lVar2,1,param_3,param_4);
              lVar2 = param_1[1];
              ppppppuVar10 = (undefined8 ******)((long)ppppppuVar10 + lVar2);
              if (ppppppuVar13 <= ppppppuVar10) goto LAB_00474284;
            }
            (*param_2)(ppppppuVar10,lVar2,0,param_3,param_4);
            ppppppuVar5 = (undefined8 ******)*ppppppuVar5;
            lVar2 = param_1[1];
            ppppppuVar10 = (undefined8 ******)((long)ppppppuVar10 + lVar2);
          } while (ppppppuVar10 < ppppppuVar13);
        }
LAB_00474284:
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
  return;
}

