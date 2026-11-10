
undefined8 FUN_00144c7c(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulong local_28;
  undefined8 local_8;
  
  local_8 = 0;
  if (-1 < param_3) {
    local_28 = 0;
    iVar1 = FUN_00144cf8(param_1,param_2,param_3,&local_8,&local_28,0);
    if (iVar1 == 0) {
      if (param_4 != (undefined4 *)0x0) {
        if (local_28 >> 0x1f == 0) {
          uVar2 = FUN_0014665c();
          *param_4 = uVar2;
        }
        else {
          FUN_00143300(local_8);
          local_8 = 0;
        }
      }
      return local_8;
    }
  }
  return 0;
}

