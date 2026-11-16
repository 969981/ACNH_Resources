
uint FUN_025552d4(byte *param_1,undefined4 param_2)

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
  
  local_34[0] = *param_1;
  local_30 = 2;
  local_21 = 0;
  local_25 = 0;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  local_28 = 1;
  local_26 = 1;
  uStack_2c = param_2;
  uVar1 = FUN_02550b18(local_34,0);
  if (((uVar1 & 1) != 0) && (DAT_054f5738 != 0)) {
    bVar2 = *param_1;
    if ((7 < DAT_0548e140) ||
       (((DAT_0548e140 == *(byte *)(DAT_054f5738 + 0x11a4) || (7 < *(byte *)(DAT_054f5738 + 0x11a4))
         ) || (bVar2 < 8)))) {
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      *(byte *)(DAT_054f5738 + 0x11a4) = bVar2;
    }
  }
  return uVar1 & 1;
}

