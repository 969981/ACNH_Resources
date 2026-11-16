
uint FUN_025536b0(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  byte local_34 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined2 local_28;
  undefined1 local_26;
  undefined4 local_25;
  undefined1 local_21;
  
  uStack_2c = *(undefined4 *)(param_1 + 4);
  if (param_1[8] == 0) {
    local_34[0] = *param_1;
    local_21 = 0;
    local_25 = 0;
    local_30 = 1;
    local_28 = 1;
    local_26 = 1;
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
    uVar1 = FUN_02550b18(local_34,6);
  }
  else {
    local_34[0] = *param_1;
    local_30 = 8;
    local_21 = 0;
    local_25 = 0;
    local_28 = 0x101;
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
    local_26 = 1;
    uVar1 = FUN_02550b18(local_34,0);
  }
  if ((((uVar1 & 1) != 0) && (DAT_054f5738 != 0)) &&
     ((bVar2 = *param_1, 7 < DAT_0548e140 ||
      (((DAT_0548e140 == *(byte *)(DAT_054f5738 + 0x11a4) || (7 < *(byte *)(DAT_054f5738 + 0x11a4)))
       || (bVar2 < 8)))))) {
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    *(byte *)(DAT_054f5738 + 0x11a4) = bVar2;
  }
  return uVar1 & 1;
}

