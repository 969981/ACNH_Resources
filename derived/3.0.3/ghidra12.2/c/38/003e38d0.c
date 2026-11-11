
void FUN_003e38d0(long param_1,void *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  *(undefined2 *)(param_1 + 0x2b0) = *(undefined2 *)((long)param_2 + 0xc);
  uVar2 = FUN_003c5b84();
  lVar3 = FUN_003cbb70(uVar2,200,1);
  *(undefined4 *)(lVar3 + 8) = 0x32;
  *(long *)(lVar3 + 0x18) = param_1 + 0x300;
  memcpy((void *)(lVar3 + 0x20),param_2,0xa8);
  FUN_003cc15c(uVar2,lVar3);
  bVar1 = *(byte *)((long)param_2 + 0x1c);
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        lVar3 = param_1 + uVar4 * 4;
        uVar4 = uVar4 + 2;
        *(int *)(lVar3 + 0x2b4) = *(int *)(lVar3 + 0x2b4) + 1;
        *(int *)(lVar3 + 0x2b8) = *(int *)(lVar3 + 0x2b8) + 1;
      } while (((ulong)bVar1 & 0xfe) != uVar4);
    }
    if ((bVar1 & 1) != 0) {
      lVar3 = param_1 + uVar4 * 4;
      *(int *)(lVar3 + 0x2b4) = *(int *)(lVar3 + 0x2b4) + 1;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0x2a);
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        lVar3 = param_1 + uVar4 * 4;
        uVar4 = uVar4 + 2;
        *(int *)(lVar3 + 0x2b4) = *(int *)(lVar3 + 0x2b4) + 2;
        *(int *)(lVar3 + 0x2b8) = *(int *)(lVar3 + 0x2b8) + 2;
      } while (((ulong)bVar1 & 0xfe) != uVar4);
    }
    if ((bVar1 & 1) != 0) {
      lVar3 = param_1 + uVar4 * 4;
      *(int *)(lVar3 + 0x2b4) = *(int *)(lVar3 + 0x2b4) + 2;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0x38);
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        lVar3 = param_1 + uVar4 * 4;
        uVar4 = uVar4 + 2;
        *(int *)(lVar3 + 0x2b4) = *(int *)(lVar3 + 0x2b4) + 4;
        *(int *)(lVar3 + 0x2b8) = *(int *)(lVar3 + 0x2b8) + 4;
      } while (((ulong)bVar1 & 0xfe) != uVar4);
    }
    if ((bVar1 & 1) != 0) {
      lVar3 = param_1 + uVar4 * 4;
      *(int *)(lVar3 + 0x2b4) = *(int *)(lVar3 + 0x2b4) + 4;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0x46);
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        lVar3 = param_1 + uVar4 * 4;
        uVar4 = uVar4 + 2;
        *(int *)(lVar3 + 0x2b4) = *(int *)(lVar3 + 0x2b4) + 8;
        *(int *)(lVar3 + 0x2b8) = *(int *)(lVar3 + 0x2b8) + 8;
      } while (((ulong)bVar1 & 0xfe) != uVar4);
    }
    if ((bVar1 & 1) != 0) {
      lVar3 = param_1 + uVar4 * 4;
      *(int *)(lVar3 + 0x2b4) = *(int *)(lVar3 + 0x2b4) + 8;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0x54);
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        lVar3 = param_1 + uVar4 * 4;
        uVar4 = uVar4 + 2;
        *(int *)(lVar3 + 0x2b4) = *(int *)(lVar3 + 0x2b4) + 0x10;
        *(int *)(lVar3 + 0x2b8) = *(int *)(lVar3 + 0x2b8) + 0x10;
      } while (((ulong)bVar1 & 0xfe) != uVar4);
    }
    if ((bVar1 & 1) != 0) {
      lVar3 = param_1 + uVar4 * 4;
      *(int *)(lVar3 + 0x2b4) = *(int *)(lVar3 + 0x2b4) + 0x10;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0x62);
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        lVar3 = param_1 + uVar4 * 4;
        uVar4 = uVar4 + 2;
        *(int *)(lVar3 + 0x2b4) = *(int *)(lVar3 + 0x2b4) + 0x20;
        *(int *)(lVar3 + 0x2b8) = *(int *)(lVar3 + 0x2b8) + 0x20;
      } while (((ulong)bVar1 & 0xfe) != uVar4);
    }
    if ((bVar1 & 1) != 0) {
      lVar3 = param_1 + uVar4 * 4;
      *(int *)(lVar3 + 0x2b4) = *(int *)(lVar3 + 0x2b4) + 0x20;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0x70);
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        lVar3 = param_1 + uVar4 * 4;
        uVar4 = uVar4 + 2;
        *(int *)(lVar3 + 0x2b4) = *(int *)(lVar3 + 0x2b4) + 0x40;
        *(int *)(lVar3 + 0x2b8) = *(int *)(lVar3 + 0x2b8) + 0x40;
      } while (((ulong)bVar1 & 0xfe) != uVar4);
    }
    if ((bVar1 & 1) != 0) {
      lVar3 = param_1 + uVar4 * 4;
      *(int *)(lVar3 + 0x2b4) = *(int *)(lVar3 + 0x2b4) + 0x40;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0x7e);
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        lVar3 = param_1 + uVar4 * 4;
        uVar4 = uVar4 + 2;
        *(int *)(lVar3 + 0x2b4) = *(int *)(lVar3 + 0x2b4) + 0x80;
        *(int *)(lVar3 + 0x2b8) = *(int *)(lVar3 + 0x2b8) + 0x80;
      } while (((ulong)bVar1 & 0xfe) != uVar4);
    }
    if ((bVar1 & 1) != 0) {
      param_1 = param_1 + uVar4 * 4;
      *(int *)(param_1 + 0x2b4) = *(int *)(param_1 + 0x2b4) + 0x80;
    }
  }
  return;
}

