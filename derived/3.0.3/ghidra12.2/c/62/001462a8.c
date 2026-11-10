
long FUN_001462a8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  long lStack_28;
  long local_20;
  undefined8 local_18;
  
  local_50 = *param_2;
  uStack_48 = param_2[1];
  local_20 = 0;
  local_18 = 0;
  local_30 = 0;
  lStack_28 = 0;
  local_40 = param_2[2];
  uStack_38 = param_2[3];
  iVar1 = FUN_00144f38(&local_30,FUN_00146200,param_1,&local_50);
  if ((iVar1 == -1) || ((int)local_18 != 0)) {
    if (local_20 != 0) {
      FUN_00143300(local_30);
    }
    local_30 = 0;
  }
  else if (local_20 == 0) {
    local_30 = FUN_00143320(&DAT_0407ebb1);
  }
  else {
    *(undefined1 *)(local_30 + lStack_28) = 0;
  }
  return local_30;
}

