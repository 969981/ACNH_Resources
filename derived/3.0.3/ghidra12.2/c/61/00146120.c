
long FUN_00146120(undefined8 param_1)

{
  int iVar1;
  undefined1 local_100 [128];
  long local_60;
  long lStack_58;
  long local_50;
  undefined8 local_48;
  
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  lStack_58 = 0;
  iVar1 = FUN_00144f38(&local_60,FUN_00146200,param_1,local_100 + 0x80);
  if ((iVar1 == -1) || ((int)local_48 != 0)) {
    if (local_50 != 0) {
      FUN_00143300(local_60);
    }
    local_60 = 0;
  }
  else if (local_50 == 0) {
    local_60 = FUN_00143320(&DAT_0407ebb1);
  }
  else {
    *(undefined1 *)(local_60 + lStack_58) = 0;
  }
  return local_60;
}

