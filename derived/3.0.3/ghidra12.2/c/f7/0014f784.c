
undefined8 FUN_0014f784(long param_1,long *param_2,uint param_3)

{
  if (((param_1 != 0) && (param_2 != (long *)0x0)) &&
     ((param_2[0x9c] + param_2[0xa0] == 0 || ((param_3 & 1) != 0)))) {
    if (param_2[0xd] != 0) {
      FUN_0014a8a0(param_1);
      param_2[0xd] = 0;
    }
    FUN_0014a208(param_1);
    *param_2 = param_1;
    if (*(code **)(param_2[0x88] + 0x60) != (code *)0x0) {
      (**(code **)(param_2[0x88] + 0x60))(param_2,param_3 & 1);
      param_1 = *param_2;
    }
    FUN_0014d430(param_1,"Closing connection %ld\n",param_2[0xc]);
    FUN_00157314(param_2);
    thunk_FUN_0017b244(param_2,0);
    thunk_FUN_0017b244(param_2,1);
    if (*(int *)((long)param_2 + 0x25c) != -1) {
      FUN_00158430(param_2);
    }
    if ((int)param_2[0x4b] != -1) {
      FUN_00158430(param_2);
    }
    if ((int)param_2[0x4c] != -1) {
      FUN_00158430(param_2);
    }
    if (*(int *)((long)param_2 + 0x264) != -1) {
      FUN_00158430(param_2);
    }
    FUN_0014ec4c(*param_2,param_2,1);
    FUN_0014f8a8(param_2);
  }
  return 0;
}

