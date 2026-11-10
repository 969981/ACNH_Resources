
undefined4 FUN_00158430(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[10] != 0) {
      if ((*(int *)((long)param_1 + 0x25c) != param_2) || (*(char *)((long)param_1 + 0x269) == '\0')
         ) {
        FUN_0014996c(*param_1,param_2);
        FUN_00149fe4(*param_1,1);
        uVar1 = (*(code *)param_1[10])(param_1[0xb],param_2);
        FUN_00149fe4(*param_1,0);
        return uVar1;
      }
      *(undefined1 *)((long)param_1 + 0x269) = 0;
    }
    FUN_0014996c(*param_1,param_2);
  }
  nnsocketClose(param_2);
  return 0;
}

