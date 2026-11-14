
void FUN_0160d3d4(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_049b3360;
  FUN_0166ad60(param_1 + 0x70);
  FUN_0390e230(param_1 + 0xb0);
  FUN_0390e230(param_1 + 0x74);
  FUN_038fd0e0(param_1 + 0x66);
  if ((*(byte *)(param_1 + 0x55) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) & 0xf8 | 4;
    if (param_1[0x59] == 0) {
      if (param_1[0x56] == 0) goto LAB_0160d46c;
    }
    else {
      FUN_03f45838(param_1 + 0x57);
      if (param_1[0x56] == 0) {
        *(undefined4 *)((long)param_1 + 0x2ac) = 0xe;
        goto LAB_0160d46c;
      }
    }
    if (DAT_05b05848 != 0) {
      FUN_03f350f4(DAT_05b05848,param_1 + 0x54);
    }
  }
LAB_0160d46c:
  FUN_03f457c4(param_1 + 0x57);
  FUN_01629448(param_1);
  return;
}

