
void FUN_001d14d0(long param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  lVar3 = *param_2;
  if (*(long *)(param_1 + 0xd0) == 0) {
    *(long *)(param_1 + 0xd0) = lVar3;
  }
  else if (0x19 < lVar3 - *(long *)(param_1 + 0xd0)) {
    *(long *)(param_1 + 0xd0) = lVar3;
    FUN_001d1620(param_1 + 0x40,param_2);
    plVar8 = *(long **)(param_1 + 0x150);
    while (plVar8 != (long *)(param_1 + 0x158)) {
      uVar2 = FUN_001c70f0(plVar8[4]);
      plVar4 = (long *)plVar8[1];
      if ((uVar2 & 1) == 0) {
        plVar5 = plVar8;
        if (plVar4 == (long *)0x0) {
          do {
            plVar8 = (long *)plVar5[2];
            bVar1 = (long *)*plVar8 != plVar5;
            plVar5 = plVar8;
          } while (bVar1);
        }
        else {
          do {
            plVar8 = plVar4;
            plVar4 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
      }
      else {
        plVar5 = plVar8;
        plVar6 = plVar4;
        if (plVar4 == (long *)0x0) {
          do {
            plVar7 = (long *)plVar5[2];
            bVar1 = (long *)*plVar7 != plVar5;
            plVar5 = plVar7;
          } while (bVar1);
        }
        else {
          do {
            plVar7 = plVar6;
            plVar6 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
        plVar5 = plVar8;
        if (plVar4 == (long *)0x0) {
          do {
            plVar6 = (long *)plVar5[2];
            bVar1 = (long *)*plVar6 != plVar5;
            plVar5 = plVar6;
          } while (bVar1);
        }
        else {
          do {
            plVar6 = plVar4;
            plVar4 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
        if (*(long **)(param_1 + 0x150) == plVar8) {
          *(long **)(param_1 + 0x150) = plVar6;
        }
        *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + -1;
        FUN_00192390(*(undefined8 *)(param_1 + 0x158),plVar8);
        FUN_00187e4c(plVar8);
        plVar8 = plVar7;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001d161c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x168) + 0x38))(*(long **)(param_1 + 0x168),param_2);
  return;
}

