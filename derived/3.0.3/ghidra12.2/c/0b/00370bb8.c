
void FUN_00370bb8(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((*(byte *)((long)param_1 + 0xdd) & 1) != 0) {
    *(byte *)((long)param_1 + 0xdd) = *(byte *)((long)param_1 + 0xdd) & 0xfe;
    FUN_0037e460(param_1,param_3,1);
    if ((*(byte *)((long)param_1 + 0xdd) >> 1 & 1) == 0) {
      if (*(uint *)((long)param_1 + 0xd4) < 2) {
        FUN_00370c70();
      }
      else {
        FUN_00371630();
      }
    }
    else if (*(uint *)((long)param_1 + 0xd4) < 2) {
      FUN_003717d0();
    }
    else {
      FUN_003721b0(param_1);
    }
  }
  FUN_0037d4c0(param_1,param_2,param_3,param_4 & 1);
                    /* WARNING: Could not recover jumptable at 0x00370c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))(param_1,param_2);
  return;
}

