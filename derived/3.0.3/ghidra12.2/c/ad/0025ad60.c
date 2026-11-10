
uint FUN_0025ad60(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x2a8;
  uVar3 = FUN_0024e270(param_1 + 0xb0);
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
    uVar3 = FUN_0024e270(param_1 + 0xf0);
  }
  else {
    uVar2 = FUN_002200e4(param_1 + 0xb8,lVar1);
    uVar2 = (uVar2 ^ 0xffffffff) & 1;
    uVar3 = FUN_0024e270(param_1 + 0xf0);
  }
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_002200e4(param_1 + 0xf8,lVar1);
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar2 | 2;
    }
  }
  uVar3 = FUN_0024e270(param_1 + 0x130);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_0024e270(param_1 + 0x170);
  }
  else {
    uVar3 = FUN_002200e4(param_1 + 0x138,lVar1);
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar2 | 4;
    }
    uVar3 = FUN_0024e270(param_1 + 0x170);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_0024e270(param_1 + 0x1b0);
  }
  else {
    uVar3 = FUN_002200e4(param_1 + 0x178,lVar1);
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar2 | 8;
    }
    uVar3 = FUN_0024e270(param_1 + 0x1b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_0024e270(param_1 + 0x1f0);
  }
  else {
    uVar3 = FUN_002200e4(param_1 + 0x1b8,lVar1);
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar2 | 0x10;
    }
    uVar3 = FUN_0024e270(param_1 + 0x1f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_0024e270(param_1 + 0x230);
  }
  else {
    uVar3 = FUN_002200e4(param_1 + 0x1f8,lVar1);
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar2 | 0x20;
    }
    uVar3 = FUN_0024e270(param_1 + 0x230);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_0024e270(param_1 + 0x270);
  }
  else {
    uVar3 = FUN_002200e4(param_1 + 0x238,lVar1);
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar2 | 0x40;
    }
    uVar3 = FUN_0024e270(param_1 + 0x270);
  }
  if ((uVar3 & 1) == 0) {
    return uVar2;
  }
  uVar3 = FUN_002200e4(param_1 + 0x278,lVar1);
  if ((uVar3 & 1) == 0) {
    uVar2 = uVar2 | 0x80;
  }
  return uVar2;
}

