
void FUN_01b0d9d0(long param_1,uint param_2)

{
  ulong uVar1;
  byte bVar2;
  uint local_4;
  
  if ((int)param_2 < 0x10) {
    uVar1 = FUN_01b032d0(param_1);
    if ((uVar1 & 1) != 0) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfc | 1;
    }
    uVar1 = FUN_01b032d0(param_1);
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar1 = FUN_01b032d0(param_1);
    bVar2 = *(byte *)(param_1 + 0xb);
    local_4 = param_2;
  }
  else {
    if (param_2 != 0x10) {
      return;
    }
    uVar1 = FUN_01b032d0(param_1);
    if ((uVar1 & 1) != 0) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfc | 3;
    }
    local_4 = 0xf;
    uVar1 = FUN_01b032d0(param_1);
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar1 = FUN_01b032d0(param_1);
    bVar2 = *(byte *)(param_1 + 0xb);
  }
  if (((uVar1 & 1) == 0) || ((bVar2 & 3) == 0)) {
    bVar2 = bVar2 & 0xc3;
  }
  else {
    bVar2 = (byte)((local_4 & 0xf) << 2) | bVar2 & 0xc3;
  }
  *(byte *)(param_1 + 0xb) = bVar2;
  return;
}

