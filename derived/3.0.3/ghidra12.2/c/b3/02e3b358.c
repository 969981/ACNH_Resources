
void FUN_02e3b358(long param_1)

{
  byte local_14 [4];
  
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  local_14[0] = *(byte *)(param_1 + 0x50);
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  if (*(long *)(DAT_0537d558 + 0x20) == 0) {
    *(undefined8 *)(param_1 + 0x60) = 1;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    FUN_01da0f60(*(long *)(DAT_0537d558 + 0x20),local_14,param_1 + 0x1d0,param_1 + 0x58);
  }
  return;
}

