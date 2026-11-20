
void FUN_03d4bdf8(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long local_50;
  long *plStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined1 local_30;
  long local_28;
  
  if (*(char *)(param_1 + 0x3c) == '\0' && *(char *)(param_1 + 0x3b) != '\0') {
    local_40 = *(undefined4 *)(param_1 + 0x2c);
    uVar2 = 6;
  }
  else {
    if ((*(char *)(param_1 + 0x3c) == '\0') || (*(char *)(param_1 + 0x3b) != '\0'))
    goto LAB_03d4be90;
    local_40 = *(undefined4 *)(param_1 + 0x2c);
    uVar2 = 7;
  }
  local_30 = *(undefined1 *)(param_1 + 0x39);
  local_3c = *(undefined4 *)(param_1 + 0x30);
  uStack_38 = *(undefined4 *)(param_1 + 0x34);
  plStack_48 = (long *)0x0;
  if (param_2 != 0) {
    plStack_48 = &local_28;
  }
  local_34 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x48) + (ulong)uVar2 * 4;
  if (8 < uVar2) {
    puVar1 = (undefined8 *)(param_1 + 0x48);
  }
  local_50 = param_1;
  local_28 = param_2;
  (**(code **)*puVar1)(puVar1,(ulong)uVar2,&local_50);
LAB_03d4be90:
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_1 + 0x3b);
  return;
}

