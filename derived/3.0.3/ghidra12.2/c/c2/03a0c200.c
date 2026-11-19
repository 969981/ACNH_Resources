
void FUN_03a0c200(long param_1,uint param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  lVar5 = *(long *)(param_1 + 0x118);
  uVar3 = 0;
  if (*(long *)(lVar5 + 0x55c8) != 0) {
    uVar3 = (uint)*(byte *)(*(long *)(lVar5 + 0x118) + 0x6b0);
  }
  uVar4 = 0;
  if (*(long *)(lVar5 + 0x55d0) != 0) {
    uVar4 = (uint)(((*(byte *)(*(long *)(lVar5 + 0x55d0) + 0x324) ^ 0xff) & 3) == 0) << 5;
  }
  uVar2 = *(uint *)(param_1 + 0xf4);
  uVar6 = 0x10;
  if ((uVar2 & param_2 & 1) == 0) {
    uVar6 = 0;
  }
  *(uint *)(param_1 + 0x140) = uVar4 | uVar3 | uVar2 & 2 | uVar2 >> 4 & 4 | uVar2 >> 2 & 8 | uVar6;
  if ((uVar2 >> 3 & 1) != 0) {
    FUN_03949cd0(param_1 + 0x108,&LAB_03a0c390);
  }
  if (*(char *)(param_1 + 0xf0) < '\0') {
    uVar7 = (ulong)*(int *)(param_1 + 0x108);
    if (*(int *)(param_1 + 0x108) != 0) {
      lVar5 = *(long *)(param_1 + 0x110);
      for (uVar1 = uVar7 & 7; uVar1 != 0; uVar1 = uVar1 - 1) {
        lVar5 = lVar5 + 8;
      }
      if (6 < (uVar7 - 1 & 0x1fffffffffffffff)) {
        do {
          lVar5 = lVar5 + 0x40;
        } while (lVar5 != *(long *)(param_1 + 0x110) + uVar7 * 8);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = 5;
  uVar3 = *(uint *)(param_1 + 0x98);
  if (0 < (int)uVar3) {
    uVar4 = 0;
    do {
      uVar6 = uVar4 + 1;
      if (uVar3 <= uVar4) {
        uVar4 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0xa0) + (long)(int)uVar4 * 4) = 0;
      uVar3 = *(uint *)(param_1 + 0x98);
      uVar4 = uVar6;
    } while ((int)uVar6 < (int)uVar3);
  }
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_03a0b730(param_1,param_3,*(undefined1 *)(param_1 + 0x146),0,*(undefined4 *)(param_1 + 0x108),
               *(undefined2 *)(param_1 + 0xe8));
  return;
}

