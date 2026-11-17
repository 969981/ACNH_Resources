
uint FUN_0308b800(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int local_16f8 [7];
  int local_16dc;
  undefined1 auStack_16c0 [5792];
  undefined1 auStack_6 [6];
  
  FUN_007ef010(auStack_6,param_1);
  FUN_007e4920(auStack_16c0,auStack_6);
  FUN_007e6230(local_16f8,auStack_16c0);
  if (DAT_04c487d4 == -1) {
    uVar3 = 0;
  }
  else {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    uVar3 = *(uint *)(puVar1 + 4) & 1;
  }
  uVar2 = 0;
  if (local_16dc == (int)DAT_04ccacbc) {
    uVar2 = uVar3;
  }
  if ((uVar3 == 0) && (local_16dc == (int)DAT_04ccacbc)) {
    uVar2 = (uint)(local_16f8[0] == (int)DAT_04ccaca0);
  }
  return uVar2;
}

