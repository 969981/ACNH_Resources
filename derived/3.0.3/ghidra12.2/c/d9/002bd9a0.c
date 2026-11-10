
void FUN_002bd9a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_00293208();
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  memset((void *)(param_1 + 0x34),0,0x200);
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined2 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined1 *)(param_1 + 0x248) = 0;
  *(undefined2 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x638) = 0;
  FUN_0021fed4(param_1 + 0x278);
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    lVar2 = lVar2 + 3;
    *(undefined2 *)(lVar1 + 700) = 0;
    *(undefined1 *)(lVar1 + 0x2be) = 0;
  } while (lVar2 != 0x81);
  lVar2 = 0;
  *(undefined8 *)(param_1 + 0x2b4) = 0;
  do {
    lVar1 = param_1 + lVar2;
    lVar2 = lVar2 + 3;
    *(undefined2 *)(lVar1 + 0x5b4) = 0;
    *(undefined1 *)(lVar1 + 0x5b6) = 0;
  } while (lVar2 != 0x81);
  *(undefined8 *)(param_1 + 0x5ac) = 0;
  memset((void *)(param_1 + 0x1c),0,0x18);
  (**(code **)(*(long *)(param_1 + 0x348) + 0x18))(param_1 + 0x348);
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  (**(code **)(*(long *)(param_1 + 0x388) + 0x18))(param_1 + 0x388);
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined4 *)(param_1 + 0x420) = 0;
  (**(code **)(*(long *)(param_1 + 0x3c8) + 0x18))(param_1 + 0x3c8);
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined4 *)(param_1 + 0x430) = 0;
  (**(code **)(*(long *)(param_1 + 0x438) + 0x18))(param_1 + 0x438);
  (**(code **)(*(long *)(param_1 + 0x478) + 0x18))(param_1 + 0x478);
  *(undefined1 *)(param_1 + 0x274) = 0;
  *(undefined8 *)(param_1 + 0x26c) = 0;
  *(undefined8 *)(param_1 + 0x264) = 0;
  return;
}

