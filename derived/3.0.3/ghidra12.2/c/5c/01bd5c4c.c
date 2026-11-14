
void FUN_01bd5c4c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 uStack_31;
  undefined8 local_30;
  undefined8 local_28;
  
  FUN_01bd3dc0();
  if (*(long **)(param_1 + 600) != (long *)0x0) {
    local_28 = 0;
    local_30 = 0;
    (**(code **)(**(long **)(param_1 + 600) + 0x10))(&uStack_31);
    uVar1 = FUN_01bb546c(&local_28,&local_30,param_2,&uStack_31);
    if ((uVar1 & 1) != 0) {
      FUN_01bd574c(param_1,local_28,local_30);
    }
  }
  return;
}

