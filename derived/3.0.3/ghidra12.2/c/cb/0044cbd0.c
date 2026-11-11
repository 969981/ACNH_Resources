
undefined8 FUN_0044cbd0(undefined8 param_1)

{
  undefined8 *local_38 [2];
  ulong local_28;
  
  FUN_0044ed80(local_38,param_1,&DAT_04c153f8);
  if ((local_28 & 1) != 0) {
    FUN_0043dd50(local_28 & 0xfffffffffffffffe);
  }
  if (local_38[0] == (undefined8 *)0x0) {
    return 0;
  }
  (*(code *)*local_38[0])(param_1,local_38[0][1],local_38[0][2]);
  return 1;
}

