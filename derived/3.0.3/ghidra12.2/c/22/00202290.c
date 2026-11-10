
void FUN_00202290(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  if (param_1[2] != 0) {
    puVar3 = (undefined8 *)*param_1;
    param_1[2] = 0;
    plVar10 = param_1 + 1;
    lVar5 = *plVar10;
    *param_1 = (long)plVar10;
    *plVar10 = 0;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    puVar6 = (undefined8 *)puVar3[1];
    if (puVar6 != (undefined8 *)0x0) {
      puVar3 = puVar6;
    }
    if (puVar3 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)puVar3[2];
      if (puVar6 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar6;
        if (puVar4 == puVar3) {
          *puVar6 = 0;
          while (puVar4 = (undefined8 *)puVar6[1], (undefined8 *)puVar6[1] != (undefined8 *)0x0) {
            do {
              puVar6 = puVar4;
              puVar4 = (undefined8 *)*puVar6;
            } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
          }
        }
        else {
          puVar6[1] = 0;
          while (puVar4 != (undefined8 *)0x0) {
            do {
              puVar6 = puVar4;
              puVar4 = (undefined8 *)*puVar6;
            } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
            puVar4 = (undefined8 *)puVar6[1];
          }
        }
      }
      if (param_2 != param_3) {
        puVar4 = puVar3;
        do {
          puVar3 = puVar6;
          FUN_00189504(puVar4 + 4,param_2 + 4);
          FUN_0018d620(puVar4 + 9,param_2 + 9);
          plVar7 = (long *)*plVar10;
          plVar9 = plVar10;
          while (plVar7 != (long *)0x0) {
            while( true ) {
              plVar8 = plVar7;
              uVar2 = FUN_0018b4e0(puVar4 + 4,plVar8 + 4);
              if ((uVar2 & 1) != 0) break;
              plVar7 = (long *)plVar8[1];
              if ((long *)plVar8[1] == (long *)0x0) {
                plVar9 = plVar8 + 1;
                *puVar4 = 0;
                puVar4[1] = 0;
                puVar4[2] = plVar8;
                *plVar9 = (long)puVar4;
                lVar5 = *(long *)*param_1;
                goto joined_r0x00202468;
              }
            }
            plVar9 = plVar8;
            plVar7 = (long *)*plVar8;
          }
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = plVar9;
          *plVar9 = (long)puVar4;
          lVar5 = *(long *)*param_1;
joined_r0x00202468:
          if (lVar5 != 0) {
            *param_1 = lVar5;
            puVar4 = (undefined8 *)*plVar9;
          }
          FUN_03876250(param_1[1],puVar4);
          param_1[2] = param_1[2] + 1;
          if (puVar3 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)0x0;
          }
          else {
            puVar6 = (undefined8 *)puVar3[2];
            if (puVar6 != (undefined8 *)0x0) {
              puVar4 = (undefined8 *)*puVar6;
              if (puVar4 == puVar3) {
                *puVar6 = 0;
                while (puVar4 = (undefined8 *)puVar6[1],
                      (undefined8 *)puVar6[1] != (undefined8 *)0x0) {
                  do {
                    puVar6 = puVar4;
                    puVar4 = (undefined8 *)*puVar6;
                  } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
                }
              }
              else {
                puVar6[1] = 0;
                while (puVar4 != (undefined8 *)0x0) {
                  do {
                    puVar6 = puVar4;
                    puVar4 = (undefined8 *)*puVar6;
                  } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
                  puVar4 = (undefined8 *)puVar6[1];
                }
              }
            }
          }
          plVar9 = (long *)param_2[1];
          plVar7 = param_2;
          if ((long *)param_2[1] == (long *)0x0) {
            do {
              param_2 = (long *)plVar7[2];
              bVar1 = (long *)*param_2 != plVar7;
              plVar7 = param_2;
            } while (bVar1);
          }
          else {
            do {
              param_2 = plVar9;
              plVar9 = (long *)*param_2;
            } while ((long *)*param_2 != (long *)0x0);
          }
          if (puVar3 == (undefined8 *)0x0) break;
          puVar4 = puVar3;
        } while (param_2 != param_3);
      }
      FUN_00202558(param_1,puVar3);
      if (puVar6 == (undefined8 *)0x0) goto joined_r0x002024cc;
      puVar3 = (undefined8 *)puVar6[2];
      while (puVar4 = puVar3, puVar4 != (undefined8 *)0x0) {
        puVar6 = puVar4;
        puVar3 = (undefined8 *)puVar4[2];
      }
    }
    FUN_00202558(param_1,puVar6);
  }
joined_r0x002024cc:
  while (param_2 != param_3) {
    FUN_002025c0(param_1,param_2 + 4);
    plVar10 = (long *)param_2[1];
    plVar9 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar9[2];
        bVar1 = (long *)*param_2 != plVar9;
        plVar9 = param_2;
      } while (bVar1);
    }
    else {
      do {
        param_2 = plVar10;
        plVar10 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}

