
void FUN_03d6de88(long param_1,int param_2,long param_3)

{
  undefined8 *puVar1;
  undefined4 local_30 [2];
  long local_28;
  
  if (param_2 == 1) {
    puVar1 = *(undefined8 **)(param_1 + 0x2c0);
    local_30[0] = 0;
    if (puVar1 != (undefined8 *)0x0) {
      local_28 = param_1;
      (**(code **)*puVar1)(puVar1,local_30);
    }
    if (*(char *)(*(long *)(param_1 + 0x250) + 0x3c) != '\0') {
      *(undefined1 *)(*(long *)(param_1 + 0x250) + 0x3b) = 0;
      *(undefined1 *)(*(long *)(param_1 + 0x250) + 0x3a) = 0;
    }
  }
  else if ((param_2 == 3) && (*(char *)(*(long *)(param_1 + 0x250) + 0x3c) != '\0')) {
    FUN_03d4ac08(*(undefined4 *)(param_1 + 0x2ac),*(undefined4 *)(param_1 + 0x2b0),param_1 + 600,
                 param_3 + 0x14);
    return;
  }
  return;
}

