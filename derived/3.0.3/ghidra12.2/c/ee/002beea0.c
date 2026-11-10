
void FUN_002beea0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 local_a8;
  ErrorResultVariant aEStack_a4 [128];
  undefined4 local_24;
  
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x10,uVar1);
  if (lVar2 != 0) {
    FUN_00226900(lVar2);
  }
  *(long *)(param_2 + 0x98) = lVar2;
  uVar1 = FUN_0021f454();
  puVar3 = (undefined8 *)FUN_00285d60(0x30,uVar1,8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
  }
  *(undefined8 **)(param_2 + 0x78) = puVar3;
  *(undefined8 *)(param_2 + 0x80) = 0;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d60(0x1d8,uVar1,8);
  if (lVar2 != 0) {
    lVar4 = 0;
    do {
      *(undefined4 *)(lVar2 + lVar4) = 0;
      lVar4 = lVar4 + 4;
    } while (lVar4 != 0x1d8);
  }
  *(long *)(param_2 + 0x60) = lVar2;
  *(undefined8 *)(param_2 + 0x68) = 0;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x260,uVar1);
  if (lVar2 != 0) {
    FUN_002ce684(lVar2);
  }
  *(long *)(param_2 + 0x90) = lVar2;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x18d8,uVar1);
  if (lVar2 != 0) {
    FUN_002cc5b0(lVar2);
  }
  *(long *)(param_2 + 0x88) = lVar2;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x120,uVar1);
  if (lVar2 != 0) {
    FUN_00305e48(lVar2);
  }
  *(long *)(param_2 + 200) = lVar2;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x78,uVar1);
  if (lVar2 != 0) {
    FUN_002ce0e0(lVar2);
  }
  *(long *)(param_2 + 0x168) = lVar2;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0xa0,uVar1);
  if (lVar2 != 0) {
    FUN_002cec24(lVar2);
  }
  *(long *)(param_2 + 0x218) = lVar2;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x70,uVar1);
  if (lVar2 != 0) {
    FUN_002cc2f0(lVar2);
  }
  *(long *)(param_2 + 0x220) = lVar2;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x150,uVar1);
  if (lVar2 != 0) {
    FUN_003137a4(lVar2);
  }
  *(long *)(param_2 + 0x70) = lVar2;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x70,uVar1);
  if (lVar2 != 0) {
    FUN_001b8014(lVar2);
  }
  *(long *)(param_2 + 0x170) = lVar2;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x70,uVar1);
  if (lVar2 != 0) {
    FUN_001b8014(lVar2);
  }
  *(long *)(param_2 + 0x178) = lVar2;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0xc0,uVar1);
  if (lVar2 != 0) {
    FUN_001fb850(lVar2,0);
  }
  *(long *)(param_2 + 0x180) = lVar2;
  FUN_002b3fa8(&local_a8);
  FUN_002b415c(param_2 + 400,&local_a8);
  FUN_002b4104(&local_a8);
  *(undefined8 *)(param_2 + 0x228) = 0;
  local_a8 = 0;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_a4,(Result *)&local_24);
  FUN_002296c4(param_1,&local_a8);
  return;
}

