
void FUN_004733d0(undefined8 *****param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  int iVar5;
  int iVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****local_8;
  
  if (param_1 != (undefined8 *****)0x0) {
    iVar1 = 1;
    do {
      local_8 = (undefined8 *****)0x0;
      if (param_1 == (undefined8 *****)0x0) {
        uVar2 = 0;
        pppppuVar3 = &local_8;
      }
      else {
        if (iVar1 < 1) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar2 = 0;
        pppppuVar3 = &local_8;
LAB_004733f4:
        do {
          iVar5 = 0;
          uVar2 = uVar2 + 1;
          pppppuVar8 = param_1;
          do {
            pppppuVar8 = (undefined8 *****)*pppppuVar8;
            iVar5 = iVar5 + 1;
          } while (pppppuVar8 != (undefined8 *****)0x0 && iVar5 < iVar1);
          iVar6 = iVar1;
          if (pppppuVar8 == (undefined8 *****)0x0) {
LAB_00473490:
            pppppuVar7 = pppppuVar3;
            do {
              pppppuVar3 = param_1;
              *pppppuVar7 = pppppuVar3;
              iVar5 = iVar5 + -1;
              pppppuVar7 = pppppuVar3;
              param_1 = (undefined8 *****)*pppppuVar3;
            } while (0 < iVar5);
          }
          else {
            do {
              if (pppppuVar8[1] < param_1[1]) {
                pppppuVar4 = (undefined8 *****)*pppppuVar8;
                iVar6 = iVar6 + -1;
                *pppppuVar3 = pppppuVar8;
                pppppuVar7 = param_1;
                pppppuVar3 = pppppuVar8;
                pppppuVar8 = pppppuVar4;
              }
              else {
                pppppuVar7 = (undefined8 *****)*param_1;
                iVar5 = iVar5 + -1;
                *pppppuVar3 = param_1;
                pppppuVar3 = param_1;
              }
              param_1 = pppppuVar7;
            } while (((pppppuVar8 != (undefined8 *****)0x0) && (0 < iVar5)) && (0 < iVar6));
            if (0 < iVar5) goto LAB_00473490;
          }
          param_1 = pppppuVar8;
          if (param_1 == (undefined8 *****)0x0) break;
          pppppuVar8 = pppppuVar3;
          if (0 < iVar6) {
            do {
              pppppuVar3 = param_1;
              iVar6 = iVar6 + -1;
              *pppppuVar8 = pppppuVar3;
              param_1 = (undefined8 *****)*pppppuVar3;
              pppppuVar8 = pppppuVar3;
            } while ((param_1 != (undefined8 *****)0x0 && iVar6 != 0) &&
                     (param_1 == (undefined8 *****)0x0 || -1 < iVar6));
            if (param_1 == (undefined8 *****)0x0) break;
            goto LAB_004733f4;
          }
        } while (param_1 != (undefined8 *****)0x0);
      }
      *pppppuVar3 = (undefined8 ****)0x0;
      iVar1 = iVar1 << 1;
      param_1 = local_8;
    } while (1 < uVar2);
  }
  return;
}

