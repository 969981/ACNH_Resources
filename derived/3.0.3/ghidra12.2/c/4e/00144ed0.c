
void FUN_00144ed0(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  long lStack_20;
  long local_18;
  
  local_48 = *param_4;
  uStack_40 = param_4[1];
  lStack_20 = 0;
  local_38 = param_4[2];
  uStack_30 = param_4[3];
  local_28 = param_1;
  local_18 = param_2;
  iVar1 = FUN_00144f38(&local_28,&LAB_00146084,param_3,&local_48);
  if ((iVar1 != -1) && (local_18 != 0)) {
    *(undefined1 *)(local_28 - (ulong)(local_18 == lStack_20)) = 0;
  }
  return;
}

