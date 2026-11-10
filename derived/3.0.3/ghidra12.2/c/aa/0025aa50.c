
undefined8 FUN_0025aa50(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  undefined1 auStack_44 [16];
  undefined4 local_34;
  
  lVar1 = param_1 + 0x2c8;
  uVar2 = FUN_0024e270(param_1 + 0xb0);
  if (((uVar2 & 1) == 0) || (uVar2 = FUN_002200e4(param_1 + 0xb8,lVar1), (uVar2 & 1) != 0)) {
    bVar5 = 0xff;
    uVar3 = 0xffffffff;
    uVar2 = FUN_0024e270(param_1 + 0xf0);
  }
  else {
    bVar5 = *(byte *)(param_1 + 0xe5);
    uVar3 = -(uint)(bVar5 == 0xff);
    uVar2 = FUN_0024e270(param_1 + 0xf0);
  }
  if ((((uVar2 & 1) != 0) && (uVar2 = FUN_002200e4(param_1 + 0xf8,lVar1), (uVar2 & 1) == 0)) &&
     (*(byte *)(param_1 + 0x125) < bVar5)) {
    uVar3 = 1;
    bVar5 = *(byte *)(param_1 + 0x125);
  }
  uVar2 = FUN_0024e270(param_1 + 0x130);
  uVar4 = uVar3;
  bVar6 = bVar5;
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_002200e4(param_1 + 0x138,lVar1), (uVar2 & 1) == 0)) {
    uVar4 = 2;
    bVar6 = *(byte *)(param_1 + 0x165);
    if (bVar5 <= *(byte *)(param_1 + 0x165)) {
      uVar4 = uVar3;
      bVar6 = bVar5;
    }
  }
  uVar2 = FUN_0024e270(param_1 + 0x170);
  uVar3 = uVar4;
  bVar5 = bVar6;
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_002200e4(param_1 + 0x178,lVar1), (uVar2 & 1) == 0)) {
    uVar3 = 3;
    bVar5 = *(byte *)(param_1 + 0x1a5);
    if (bVar6 <= *(byte *)(param_1 + 0x1a5)) {
      uVar3 = uVar4;
      bVar5 = bVar6;
    }
  }
  uVar2 = FUN_0024e270(param_1 + 0x1b0);
  uVar4 = uVar3;
  bVar6 = bVar5;
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_002200e4(param_1 + 0x1b8,lVar1), (uVar2 & 1) == 0)) {
    uVar4 = 4;
    bVar6 = *(byte *)(param_1 + 0x1e5);
    if (bVar5 <= *(byte *)(param_1 + 0x1e5)) {
      uVar4 = uVar3;
      bVar6 = bVar5;
    }
  }
  uVar2 = FUN_0024e270(param_1 + 0x1f0);
  uVar3 = uVar4;
  bVar5 = bVar6;
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_002200e4(param_1 + 0x1f8,lVar1), (uVar2 & 1) == 0)) {
    uVar3 = 5;
    bVar5 = *(byte *)(param_1 + 0x225);
    if (bVar6 <= *(byte *)(param_1 + 0x225)) {
      uVar3 = uVar4;
      bVar5 = bVar6;
    }
  }
  uVar2 = FUN_0024e270(param_1 + 0x230);
  uVar4 = uVar3;
  bVar6 = bVar5;
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_002200e4(param_1 + 0x238,lVar1), (uVar2 & 1) == 0)) {
    uVar4 = 6;
    bVar6 = *(byte *)(param_1 + 0x265);
    if (bVar5 <= *(byte *)(param_1 + 0x265)) {
      uVar4 = uVar3;
      bVar6 = bVar5;
    }
  }
  uVar2 = FUN_0024e270(param_1 + 0x270);
  if ((((uVar2 & 1) == 0) || (uVar2 = FUN_002200e4(param_1 + 0x278,lVar1), (uVar2 & 1) != 0)) ||
     (bVar6 <= *(byte *)(param_1 + 0x2a5))) {
    if (uVar4 == 0xffffffff) {
      FUN_0021fef8(param_2);
      return 0;
    }
  }
  else {
    uVar4 = 7;
  }
  local_34 = 0;
  param_1 = param_1 + (ulong)uVar4 * 0x40;
  FUN_0021f618(auStack_44,param_1 + 0xb8,&local_34);
  FUN_0021f5a0(param_2,local_34);
  *(undefined2 *)(param_2 + 0x18) = *(undefined2 *)(param_1 + 0xd0);
  return 1;
}

