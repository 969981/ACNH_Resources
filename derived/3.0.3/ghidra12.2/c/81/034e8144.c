
undefined8 FUN_034e8144(long param_1,undefined2 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  uVar1 = FUN_01d77c78(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    uVar2 = 4;
  }
  else {
    local_2c = 0;
    local_24 = 0;
    local_3c = 0x1000007b2;
    local_34 = 0x400000001;
    uVar2 = FUN_01d7862c(param_1 + 8,&local_3c);
    *param_2 = (short)local_3c;
    *(char *)(param_2 + 1) = (char)((ulong)local_3c >> 0x20);
    *(char *)(param_2 + 2) = (char)local_2c;
    *(char *)((long)param_2 + 3) = (char)local_34;
    *(char *)((long)param_2 + 5) = (char)((ulong)local_2c >> 0x20);
    *(char *)(param_2 + 3) = (char)local_24;
  }
  return uVar2;
}

