
void FUN_03955fe0(undefined4 param_1,long *param_2,uint param_3,long param_4,long param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  
  uVar4 = (**(code **)(*param_2 + 0x20))();
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (param_4 == 0) {
    if (param_5 == 0) goto LAB_03956464;
    uVar2 = *(uint *)(param_5 + 8);
    if ((0xffff < uVar2) && (param_2[1] != 0)) {
      plVar7 = (long *)0x0;
      uVar13 = 0;
      lVar10 = param_5 + ((ulong)uVar2 & 0xffff) * 4;
      do {
        if ((long *)param_2[1] != (long *)0x0) {
          plVar5 = (long *)param_2[1];
          if (plVar7 != (long *)0x0) {
            plVar5 = plVar7;
          }
          plVar9 = plVar5;
          do {
            uVar4 = (**(code **)(*plVar9 + 0x40))(plVar9,lVar10);
            if ((uVar4 & 1) != 0) {
              FUN_03956720(param_1,plVar9,param_3 & 1,0,lVar10,param_2);
              plVar7 = plVar9;
              goto LAB_03956264;
            }
            plVar8 = plVar9 + 4;
            plVar9 = (long *)param_2[1];
            if ((long *)*plVar8 != (long *)0x0) {
              plVar9 = (long *)*plVar8;
            }
          } while (plVar9 != plVar5);
        }
LAB_03956264:
        uVar13 = uVar13 + 1;
        lVar10 = lVar10 + 8;
      } while (uVar2 >> 0x10 != uVar13);
LAB_039562e8:
      if (param_4 != 0) goto LAB_039562f0;
      if (param_5 == 0) goto LAB_03956464;
    }
    uVar2 = *(uint *)(param_5 + 4);
    if (0xffff < uVar2) {
      uVar13 = 0;
      param_5 = param_5 + ((ulong)uVar2 & 0xffff) * 4;
      do {
        for (plVar7 = (long *)param_2[3]; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[6]) {
          uVar4 = (**(code **)(*plVar7 + 0x30))(plVar7,param_5);
          if ((uVar4 & 1) != 0) {
            FUN_03955fe0(param_1,plVar7,param_3 & 1,0,param_5);
            break;
          }
        }
        uVar13 = uVar13 + 1;
        param_5 = param_5 + 0xc;
      } while (uVar2 >> 0x10 != uVar13);
    }
  }
  else {
    uVar2 = *(uint *)(param_4 + 8);
    if (0xffff < uVar2) {
      uVar13 = 0;
      lVar10 = param_4 + ((ulong)uVar2 & 0xffff) * 4;
      plVar7 = (long *)0x0;
LAB_0395607c:
      plVar5 = (long *)0x0;
      if ((long *)param_2[1] != (long *)0x0) {
        plVar9 = (long *)param_2[1];
        if (plVar7 != (long *)0x0) {
          plVar9 = plVar7;
        }
        plVar8 = plVar9;
        do {
          uVar4 = (**(code **)(*plVar8 + 0x40))(plVar8,lVar10);
          if ((uVar4 & 1) != 0) {
            if (param_5 != 0) {
              uVar3 = *(uint *)(param_5 + 8);
              if (0xffff < uVar3) {
                uVar6 = uVar3 >> 0x10;
                lVar11 = param_5 + ((ulong)uVar3 & 0xffff) * 4;
                lVar12 = lVar11;
                goto LAB_039561b0;
              }
            }
            lVar11 = 0;
            goto LAB_039561e0;
          }
          plVar1 = plVar8 + 4;
          plVar5 = (long *)param_2[1];
          plVar8 = plVar5;
          if ((long *)*plVar1 != (long *)0x0) {
            plVar8 = (long *)*plVar1;
          }
        } while (plVar8 != plVar9);
      }
      if (param_5 != 0) {
        uVar3 = *(uint *)(param_5 + 8);
        if ((0xffff < uVar3) && (plVar5 != (long *)0x0)) {
          plVar5 = (long *)0x0;
          uVar6 = 0;
          lVar11 = param_5 + ((ulong)uVar3 & 0xffff) * 4;
          do {
            if ((long *)param_2[1] != (long *)0x0) {
              plVar9 = (long *)param_2[1];
              if (plVar5 != (long *)0x0) {
                plVar9 = plVar5;
              }
              plVar8 = plVar9;
              do {
                uVar4 = (**(code **)(*plVar8 + 0x40))(plVar8,lVar11);
                if ((uVar4 & 1) != 0) {
                  FUN_03956720(param_1,plVar8,param_3 & 1,0,lVar11,param_2);
                  plVar5 = plVar8;
                  goto LAB_039560f8;
                }
                plVar1 = plVar8 + 4;
                plVar8 = (long *)param_2[1];
                if ((long *)*plVar1 != (long *)0x0) {
                  plVar8 = (long *)*plVar1;
                }
              } while (plVar8 != plVar9);
            }
LAB_039560f8:
            uVar6 = uVar6 + 1;
            lVar11 = lVar11 + 8;
          } while (uVar3 >> 0x10 != uVar6);
        }
      }
      plVar8 = plVar7;
      goto LAB_03956068;
    }
LAB_039562f0:
    uVar2 = *(uint *)(param_4 + 4);
    if (0xffff < uVar2) {
      uVar13 = 0;
      param_4 = param_4 + ((ulong)uVar2 & 0xffff) * 4;
LAB_03956340:
      for (plVar7 = (long *)param_2[3]; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[6]) {
        uVar4 = (**(code **)(*plVar7 + 0x30))(plVar7,param_4);
        if ((uVar4 & 1) != 0) {
          if (param_5 != 0) {
            uVar3 = *(uint *)(param_5 + 4);
            if (0xffff < uVar3) {
              uVar6 = uVar3 >> 0x10;
              lVar10 = param_5 + ((ulong)uVar3 & 0xffff) * 4;
              lVar11 = lVar10;
              goto LAB_03956420;
            }
          }
          lVar10 = 0;
          goto LAB_03956314;
        }
      }
      if (param_5 != 0) {
        uVar3 = *(uint *)(param_5 + 4);
        if (0xffff < uVar3) {
          uVar6 = 0;
          lVar10 = param_5 + ((ulong)uVar3 & 0xffff) * 4;
          do {
            for (plVar7 = (long *)param_2[3]; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[6]) {
              uVar4 = (**(code **)(*plVar7 + 0x30))(plVar7,lVar10);
              if ((uVar4 & 1) != 0) {
                FUN_03955fe0(param_1,plVar7,param_3 & 1,0,lVar10);
                break;
              }
            }
            uVar6 = uVar6 + 1;
            lVar10 = lVar10 + 0xc;
          } while (uVar3 >> 0x10 != uVar6);
        }
      }
      goto LAB_03956330;
    }
  }
LAB_03956464:
                    /* WARNING: Could not recover jumptable at 0x03956490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(param_2);
  return;
  while( true ) {
    lVar11 = lVar11 + 8;
    lVar12 = lVar12 + 8;
    uVar6 = uVar6 - 1;
    if (uVar6 == 0) break;
LAB_039561b0:
    uVar4 = (**(code **)(*plVar8 + 0x40))(plVar8,lVar12);
    if ((uVar4 & 1) != 0) goto LAB_039561e0;
  }
  lVar11 = 0;
LAB_039561e0:
  FUN_03956720(param_1,plVar8,param_3 & 1,lVar10,lVar11,param_2);
LAB_03956068:
  uVar13 = uVar13 + 1;
  lVar10 = lVar10 + 8;
  plVar7 = plVar8;
  if (uVar2 >> 0x10 == uVar13) goto LAB_039562e8;
  goto LAB_0395607c;
  while( true ) {
    lVar10 = lVar10 + 0xc;
    lVar11 = lVar11 + 0xc;
    uVar6 = uVar6 - 1;
    if (uVar6 == 0) break;
LAB_03956420:
    uVar4 = (**(code **)(*plVar7 + 0x30))(plVar7,lVar11);
    if ((uVar4 & 1) != 0) goto LAB_03956314;
  }
  lVar10 = 0;
LAB_03956314:
  FUN_03955fe0(param_1,plVar7,param_3 & 1,param_4,lVar10);
LAB_03956330:
  uVar13 = uVar13 + 1;
  param_4 = param_4 + 0xc;
  if (uVar2 >> 0x10 == uVar13) goto LAB_03956464;
  goto LAB_03956340;
}

