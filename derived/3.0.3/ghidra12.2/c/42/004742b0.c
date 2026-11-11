
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_004742b0(long *param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  ulong uVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  int iVar12;
  int iVar13;
  undefined8 *******pppppppuVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******local_58;
  
  plVar16 = (long *)param_1[4];
  cVar2 = '\x02';
  if (param_3 != '\x01') {
    cVar2 = param_3;
  }
  for (; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
    plVar3 = plVar16;
    if (plVar16[1] != 0) {
      plVar3 = (long *)plVar16[1];
    }
    lVar4 = plVar16[2] - (long)plVar3;
    if (lVar4 != 0) {
      FUN_00439d40(param_2,param_4,0,plVar3,lVar4);
    }
    lVar6 = param_1[1];
    lVar8 = lVar6 * plVar16[3];
    lVar4 = (param_1[5] - lVar4) - lVar8;
    if (lVar4 != 0) {
      FUN_00439d40(param_2,param_4,0,plVar16[2] + lVar8,lVar4);
      lVar6 = param_1[1];
      lVar8 = lVar6 * plVar16[3];
    }
    if (0 < lVar8) {
      uVar15 = plVar16[2];
      uVar1 = uVar15 + lVar8;
      do {
        FUN_00439d40(param_2,param_4,cVar2,uVar15,(long)(int)lVar6);
        lVar6 = param_1[1];
        uVar15 = uVar15 + lVar6;
      } while (uVar15 < uVar1);
    }
  }
  if ((param_1[3] != 0) || (*param_1 != 0)) {
    lVar4 = FUN_004733d0();
    param_1[3] = lVar4;
    pppppppuVar9 = (undefined8 *******)param_1[8];
    pppppppuVar17 = (undefined8 *******)*param_1;
    pppppppuVar14 = pppppppuVar17;
    if (pppppppuVar9 < (undefined8 *******)param_1[9]) {
      do {
        pppppppuVar17 = pppppppuVar9;
        *pppppppuVar17 = pppppppuVar14;
        pppppppuVar9 = (undefined8 *******)((long)pppppppuVar17 + param_1[1]);
        pppppppuVar14 = pppppppuVar17;
      } while ((undefined8 *******)((long)pppppppuVar17 + param_1[1]) <
               (undefined8 *******)param_1[9]);
    }
    *param_1 = (long)pppppppuVar17;
    param_1[8] = 0;
    param_1[9] = 0;
    pppppppuVar9 = (undefined8 *******)0x0;
    if (pppppppuVar17 != (undefined8 *******)0x0) {
      iVar5 = 1;
      do {
        local_58 = (undefined8 *******)0x0;
        if (pppppppuVar17 == (undefined8 *******)0x0) {
          uVar7 = 0;
          pppppppuVar9 = &local_58;
        }
        else {
          if (iVar5 < 1) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar7 = 0;
          pppppppuVar9 = &local_58;
          do {
            iVar12 = 0;
            pppppppuVar14 = pppppppuVar17;
            do {
              pppppppuVar14 = (undefined8 *******)*pppppppuVar14;
              iVar12 = iVar12 + 1;
              if (iVar5 <= iVar12) break;
            } while (pppppppuVar14 != (undefined8 *******)0x0);
            iVar13 = iVar5;
            if (pppppppuVar14 == (undefined8 *******)0x0) {
              pppppppuVar14 = (undefined8 *******)0x0;
LAB_004744bc:
              do {
                pppppppuVar10 = pppppppuVar17;
                *pppppppuVar9 = pppppppuVar10;
                iVar12 = iVar12 + -1;
                pppppppuVar9 = pppppppuVar10;
                pppppppuVar17 = (undefined8 *******)*pppppppuVar10;
              } while (0 < iVar12);
            }
            else {
              pppppppuVar10 = pppppppuVar9;
              do {
                if (pppppppuVar14 < pppppppuVar17) {
                  pppppppuVar11 = (undefined8 *******)*pppppppuVar14;
                  iVar13 = iVar13 + -1;
                  *pppppppuVar10 = pppppppuVar14;
                  pppppppuVar9 = pppppppuVar17;
                  pppppppuVar10 = pppppppuVar14;
                }
                else {
                  pppppppuVar9 = (undefined8 *******)*pppppppuVar17;
                  iVar12 = iVar12 + -1;
                  *pppppppuVar10 = pppppppuVar17;
                  pppppppuVar11 = pppppppuVar14;
                  pppppppuVar10 = pppppppuVar17;
                }
                pppppppuVar14 = pppppppuVar11;
                pppppppuVar17 = pppppppuVar9;
              } while (((pppppppuVar14 != (undefined8 *******)0x0) && (0 < iVar12)) && (0 < iVar13))
              ;
              if (0 < iVar12) {
                pppppppuVar9 = pppppppuVar10;
                goto LAB_004744bc;
              }
            }
            uVar7 = uVar7 + 1;
            pppppppuVar9 = pppppppuVar10;
            for (pppppppuVar17 = pppppppuVar14;
                (0 < iVar13 && (pppppppuVar17 != (undefined8 *******)0x0));
                pppppppuVar17 = (undefined8 *******)*pppppppuVar17) {
              iVar13 = iVar13 + -1;
              *pppppppuVar9 = pppppppuVar17;
              pppppppuVar9 = pppppppuVar17;
            }
          } while (pppppppuVar17 != (undefined8 *******)0x0);
        }
        *pppppppuVar9 = (undefined8 ******)0x0;
        iVar5 = iVar5 << 1;
        pppppppuVar9 = local_58;
        pppppppuVar17 = local_58;
      } while (1 < uVar7);
    }
    plVar16 = (long *)param_1[3];
    *param_1 = (long)pppppppuVar9;
    for (; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
      plVar3 = plVar16;
      if (plVar16[1] != 0) {
        plVar3 = (long *)plVar16[1];
      }
      lVar4 = plVar16[2] - (long)plVar3;
      if (lVar4 != 0) {
        FUN_00439d40(param_2,param_4,0,plVar3,lVar4);
      }
      lVar6 = param_1[1];
      lVar8 = lVar6 * plVar16[3];
      lVar4 = (param_1[5] - lVar4) - lVar8;
      if (lVar4 != 0) {
        FUN_00439d40(param_2,param_4,0,plVar16[2] + lVar8,lVar4);
        lVar6 = param_1[1];
        lVar8 = lVar6 * plVar16[3];
      }
      if (0 < lVar8) {
        pppppppuVar14 = (undefined8 *******)plVar16[2];
        pppppppuVar17 = (undefined8 *******)((long)pppppppuVar14 + lVar8);
        do {
          while (pppppppuVar14 == pppppppuVar9) {
            FUN_00439d40(param_2,param_4,cVar2,pppppppuVar14,(long)(int)lVar6);
            pppppppuVar9 = (undefined8 *******)*pppppppuVar9;
            lVar6 = param_1[1];
            pppppppuVar14 = (undefined8 *******)((long)pppppppuVar14 + lVar6);
            if (pppppppuVar17 <= pppppppuVar14) goto LAB_0047460c;
          }
          FUN_00439d40(param_2,param_4,param_3,pppppppuVar14,(long)(int)lVar6);
          lVar6 = param_1[1];
          pppppppuVar14 = (undefined8 *******)((long)pppppppuVar14 + lVar6);
        } while (pppppppuVar14 < pppppppuVar17);
      }
LAB_0047460c:
    }
  }
  return 0;
}

