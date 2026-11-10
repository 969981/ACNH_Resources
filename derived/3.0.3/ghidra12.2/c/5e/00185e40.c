
void FUN_00185e40(long *param_1)

{
  bool bVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *__ptr;
  
  plVar4 = param_1 + 6;
  *param_1 = (long)(PTR_DAT_04bcbc78 + 0x10);
  plVar2 = (long *)*plVar4;
  do {
    while( true ) {
      if (plVar2 == param_1 + 7) {
        FUN_0018ed94(plVar4,param_1[7]);
        param_1[6] = (long)(param_1 + 7);
        param_1[7] = 0;
        param_1[8] = 0;
        FUN_0018ed94(plVar4,0);
        plVar2 = (long *)param_1[4];
        param_1[1] = (long)&PTR_LAB_04a426b8;
        if ((plVar2 == (long *)0x0) || (plVar2 == param_1 + 2)) {
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)((long)plVar2 + -0x14);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          free((undefined8 *)((long)plVar2 + -0x14));
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00185ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      lVar5 = plVar2[5];
      if (lVar5 == 0) break;
      FUN_00185c50(lVar5 + 0x68);
      FUN_00185c50(lVar5 + 8);
      __ptr = (undefined8 *)(lVar5 + -0x10);
      if ((code *)*__ptr != (code *)0x0) {
        (*(code *)*__ptr)(__ptr);
        break;
      }
      free(__ptr);
      plVar3 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) goto LAB_00185f30;
LAB_00185f10:
      do {
        plVar2 = plVar3;
        plVar3 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
    }
    plVar3 = (long *)plVar2[1];
    if ((long *)plVar2[1] != (long *)0x0) goto LAB_00185f10;
LAB_00185f30:
    do {
      plVar3 = (long *)plVar2[2];
      bVar1 = (long *)*plVar3 != plVar2;
      plVar2 = plVar3;
    } while (bVar1);
  } while( true );
}

