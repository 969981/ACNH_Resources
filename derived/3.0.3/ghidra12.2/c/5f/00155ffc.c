
void FUN_00155ffc(undefined1 *param_1,uint *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  ulong __n;
  
  puVar5 = param_2 + 6;
  uVar4 = (ulong)*param_2 & 0x3f;
  __n = uVar4 ^ 0x3f;
  *(undefined1 *)((long)puVar5 + uVar4) = 0x80;
  lVar3 = uVar4 + 1;
  if (__n < 8) {
    memset((void *)((long)param_2 + uVar4 + 0x19),0,__n);
    __n = 0x40;
    FUN_0015631c(param_2,puVar5,0x40);
    lVar3 = 0;
  }
  memset((void *)((long)param_2 + lVar3 + 0x18),0,__n - 8);
  uVar1 = *param_2;
  *param_2 = uVar1 << 3;
  uVar2 = FUN_00146658(uVar1 << 3 & 0xf8);
  *(undefined1 *)(param_2 + 0x14) = uVar2;
  uVar2 = FUN_00146658(*(undefined1 *)((long)param_2 + 1));
  *(undefined1 *)((long)param_2 + 0x51) = uVar2;
  uVar2 = FUN_00146658(*(undefined1 *)((long)param_2 + 2));
  *(undefined1 *)((long)param_2 + 0x52) = uVar2;
  uVar2 = FUN_00146658(*(undefined1 *)((long)param_2 + 3));
  *(undefined1 *)((long)param_2 + 0x53) = uVar2;
  uVar2 = FUN_00146658((char)param_2[1]);
  *(undefined1 *)(param_2 + 0x15) = uVar2;
  uVar2 = FUN_00146658(*(undefined1 *)((long)param_2 + 5));
  *(undefined1 *)((long)param_2 + 0x55) = uVar2;
  uVar2 = FUN_00146658(*(undefined1 *)((long)param_2 + 6));
  *(undefined1 *)((long)param_2 + 0x56) = uVar2;
  uVar2 = FUN_00146658(*(undefined1 *)((long)param_2 + 7));
  *(undefined1 *)((long)param_2 + 0x57) = uVar2;
  FUN_0015631c(param_2,puVar5,0x40);
  uVar2 = FUN_00146658((char)param_2[2]);
  *param_1 = uVar2;
  uVar2 = FUN_00146658(*(undefined1 *)((long)param_2 + 9));
  param_1[1] = uVar2;
  uVar2 = FUN_00146658(*(undefined1 *)((long)param_2 + 10));
  param_1[2] = uVar2;
  uVar2 = FUN_00146658(*(undefined1 *)((long)param_2 + 0xb));
  param_1[3] = uVar2;
  uVar2 = FUN_00146658((char)param_2[3]);
  param_1[4] = uVar2;
  uVar2 = FUN_00146658(*(undefined1 *)((long)param_2 + 0xd));
  param_1[5] = uVar2;
  uVar2 = FUN_00146658(*(undefined1 *)((long)param_2 + 0xe));
  param_1[6] = uVar2;
  uVar2 = FUN_00146658(*(undefined1 *)((long)param_2 + 0xf));
  param_1[7] = uVar2;
  uVar2 = FUN_00146658((char)param_2[4]);
  param_1[8] = uVar2;
  uVar2 = FUN_00146658(*(undefined1 *)((long)param_2 + 0x11));
  param_1[9] = uVar2;
  uVar2 = FUN_00146658(*(undefined1 *)((long)param_2 + 0x12));
  param_1[10] = uVar2;
  uVar2 = FUN_00146658(*(undefined1 *)((long)param_2 + 0x13));
  param_1[0xb] = uVar2;
  uVar2 = FUN_00146658((char)param_2[5]);
  param_1[0xc] = uVar2;
  uVar2 = FUN_00146658(*(undefined1 *)((long)param_2 + 0x15));
  param_1[0xd] = uVar2;
  uVar2 = FUN_00146658(*(undefined1 *)((long)param_2 + 0x16));
  param_1[0xe] = uVar2;
  uVar2 = FUN_00146658(*(undefined1 *)((long)param_2 + 0x17));
  param_1[0xf] = uVar2;
  memset(param_2,0,0x98);
  return;
}

