
void FUN_00243554(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_002a3840();
  *(undefined4 *)(param_1 + 0x256) = *(undefined4 *)(param_2 + 0x256);
  *(undefined2 *)(param_1 + 0x25a) = *(undefined2 *)(param_2 + 0x25a);
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_2 + 0x25c);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x260);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x260) = uVar2;
  memcpy((void *)(param_1 + 0x28),(void *)(param_2 + 0x28),0x50);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
  uVar1 = *(undefined4 *)(param_2 + 0x238);
  *(undefined1 *)(param_1 + 0x250) = *(undefined1 *)(param_2 + 0x250);
  *(undefined4 *)(param_1 + 0x238) = uVar1;
  memcpy((void *)(param_1 + 0x78),(void *)(param_2 + 0x78),0x50);
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_2 + 0x224);
  uVar1 = *(undefined4 *)(param_2 + 0x23c);
  *(undefined1 *)(param_1 + 0x251) = *(undefined1 *)(param_2 + 0x251);
  *(undefined4 *)(param_1 + 0x23c) = uVar1;
  memcpy((void *)(param_1 + 200),(void *)(param_2 + 200),0x50);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
  uVar1 = *(undefined4 *)(param_2 + 0x240);
  *(undefined1 *)(param_1 + 0x252) = *(undefined1 *)(param_2 + 0x252);
  *(undefined4 *)(param_1 + 0x240) = uVar1;
  memcpy((void *)(param_1 + 0x118),(void *)(param_2 + 0x118),0x50);
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_2 + 0x214);
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_2 + 0x22c);
  uVar1 = *(undefined4 *)(param_2 + 0x244);
  *(undefined1 *)(param_1 + 0x253) = *(undefined1 *)(param_2 + 0x253);
  *(undefined4 *)(param_1 + 0x244) = uVar1;
  memcpy((void *)(param_1 + 0x168),(void *)(param_2 + 0x168),0x50);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x218);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x230);
  uVar1 = *(undefined4 *)(param_2 + 0x248);
  *(undefined1 *)(param_1 + 0x254) = *(undefined1 *)(param_2 + 0x254);
  *(undefined4 *)(param_1 + 0x248) = uVar1;
  memcpy((void *)(param_1 + 0x1b8),(void *)(param_2 + 0x1b8),0x50);
  *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_2 + 0x21c);
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_2 + 0x234);
  *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_2 + 0x24c);
  *(undefined1 *)(param_1 + 0x255) = *(undefined1 *)(param_2 + 0x255);
  return;
}

