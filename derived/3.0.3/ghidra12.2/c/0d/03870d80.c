
void FUN_03870d80(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  FUN_002bd9a0(param_1 + 0x20);
  (**(code **)(*(long *)(param_1 + 0x660) + 0x18))(param_1 + 0x660);
  (**(code **)(*(long *)(param_1 + 0x1398) + 0x18))(param_1 + 0x1398);
  *(undefined4 *)(param_1 + 0x20d0) = 0;
  FUN_002cbfb0(param_1 + 0x20d8);
  FUN_002cbbd4(param_1 + 0x2460);
  FUN_0030c080(param_1 + 0x4520);
  *(undefined1 *)(param_1 + 0x4ea0) = 0;
  FUN_0024ddd0(param_1 + 0x4ec0);
  FUN_002443c0(param_1 + 0x4ef8);
  FUN_00244730(param_1 + 0x5130);
  FUN_0022cde8(param_1 + 0x5da8);
  (**(code **)(*(long *)(param_1 + 0x5f68) + 0x18))(param_1 + 0x5f68);
  (**(code **)(*(long *)(param_1 + 0x61d0) + 0x18))(param_1 + 0x61d0);
  FUN_0022d6ec(param_1 + 0x6438);
  FUN_0022d4f0(param_1 + 0x6d28);
  *(undefined2 *)(param_1 + 0x1c) = 0;
  if (*(long *)(param_1 + 0x4eb0) != 0) {
    uVar1 = *(uint *)(param_1 + 0x4ea8);
    if (0 < (int)uVar1) {
      uVar2 = (ulong)uVar1 & 3;
      if (uVar1 < 4) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          lVar4 = uVar3 * 8;
          uVar3 = uVar3 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x4eb0) + lVar4) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x4eb0) + lVar4 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x4eb0) + lVar4 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x4eb0) + lVar4 + 0x18) = 0;
        } while (((ulong)uVar1 & 0xfffffffc) != uVar3);
      }
      if ((uVar1 & 3) != 0) {
        lVar4 = uVar3 << 3;
        do {
          uVar2 = uVar2 - 1;
          *(undefined8 *)(*(long *)(param_1 + 0x4eb0) + lVar4) = 0;
          lVar4 = lVar4 + 8;
        } while (uVar2 != 0);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x4eb8) = 0;
  return;
}

