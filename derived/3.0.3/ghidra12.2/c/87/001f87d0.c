
void FUN_001f87d0(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  (**(code **)(DAT_04c5ee88 + 0x10))();
  plVar2 = DAT_04c5ee70;
  DAT_04c5ee68 = DAT_04c5ee68 + -1;
  if (DAT_04c5ee68 == 0) {
    if (DAT_04c5ee70 != (long *)0x0) {
      if (DAT_04c5ee70[2] != 0) {
        lVar1 = *DAT_04c5ee70;
        plVar4 = (long *)DAT_04c5ee70[1];
        DAT_04c5ee70[2] = 0;
        lVar3 = *plVar4;
        *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
        **(long **)(lVar1 + 8) = lVar3;
        while (plVar4 != plVar2) {
          plVar4 = (long *)plVar4[1];
          FUN_00187e4c();
        }
      }
      FUN_00185ac4(plVar2);
    }
    DAT_04c5ee70 = (long *)0x0;
    DAT_04c5eb80 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x001f8884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_04c5ee88 + 0x20))();
  return;
}

