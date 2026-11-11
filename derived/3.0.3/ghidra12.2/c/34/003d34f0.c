
void FUN_003d34f0(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(param_1 + 0x108) = *param_2;
  *(undefined4 *)(param_1 + 0x10c) = param_2[1];
  *(long *)(param_1 + 0x110) = (long)(int)param_2[2];
  uVar3 = param_2[4];
  if (uVar3 == 0) {
    uVar3 = (uint)param_2[3] / 5;
  }
  *(uint *)(param_1 + 0x118) = uVar3;
  *(undefined4 *)(param_1 + 0x11c) = param_2[6];
  *(byte *)(param_1 + 0x124) =
       *(byte *)(param_2 + 7) & (byte)((*(int *)(param_1 + 0x120) << 0x1e) >> 0x1f);
  uVar2 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x130) = uVar2;
  *(undefined4 *)(param_1 + 0x168) = param_2[0xc];
  uVar1 = *(undefined4 *)(param_3 + 5);
  uVar4 = param_3[2];
  uVar2 = param_3[3];
  *(undefined8 *)(param_1 + 0x1a0) = param_3[4];
  *(undefined8 *)(param_1 + 400) = uVar4;
  *(undefined8 *)(param_1 + 0x198) = uVar2;
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  uVar2 = *param_3;
  uVar4 = param_3[1];
  *(undefined1 *)(param_1 + 0x16c) = 1;
  *(undefined8 *)(param_1 + 0x180) = uVar2;
  *(undefined8 *)(param_1 + 0x188) = uVar4;
  uVar2 = FUN_003ca198();
  FUN_003ca570(uVar2,param_1 + 0xd8);
  *(undefined1 *)(param_1 + 0x16e) = 1;
  return;
}

