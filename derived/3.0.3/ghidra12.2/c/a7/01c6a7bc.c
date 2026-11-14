
undefined8 FUN_01c6a7bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x168) == '\0') {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined **)(param_1 + 0xe8) = PTR_DAT_04bc0ec8 + 0x10;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 **)(param_1 + 0x100) = (undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0x10;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    puVar1 = PTR_DAT_04bc0fa0 + 0x10;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined **)(param_1 + 0xd8) = puVar1;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  else if (*(long *)(param_1 + 0x148) != 0) {
    return 1;
  }
  uVar2 = nn::os::ConvertToTimeSpan(0);
  uVar3 = nn::os::TimedWaitLightEvent(param_1 + 0x88,uVar2);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x308) == '\0') {
    return 1;
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  *(undefined4 *)(param_1 + 8) = 3;
  return 0;
}

