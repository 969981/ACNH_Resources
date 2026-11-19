
void FUN_0391c280(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined8 uVar6;
  
  if ((*(byte *)(param_1 + 0x550) & 1) != 0) {
    if ((*(byte *)(param_1 + 0x550) >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x188) != 0) {
        if (*(long **)(param_1 + 400) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 400) + 8))();
        }
        *(undefined4 *)(param_1 + 0x180) = 0;
        *(undefined8 *)(param_1 + 0x188) = 0;
        *(undefined8 *)(param_1 + 400) = 0;
      }
      if ((*(long *)(param_1 + 0x1a0) != 0) && (*(long **)(param_1 + 0x1a8) != (long *)0x0)) {
        (**(code **)(**(long **)(param_1 + 0x1a8) + 8))();
      }
    }
    *(undefined4 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    *(byte *)(param_1 + 0x550) = *(byte *)(param_1 + 0x550) & 0x78;
  }
  *(undefined4 *)(param_1 + 0xe0) = *param_2;
  *(undefined4 *)(param_1 + 0xe4) = param_2[1];
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0xf8) = param_2[6];
  *(undefined4 *)(param_1 + 0xfc) = param_2[7];
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 10);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  uVar2 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x127) = *(undefined8 *)((long)param_2 + 0x47);
  *(undefined8 *)(param_1 + 0x118) = uVar2;
  *(undefined8 *)(param_1 + 0x120) = uVar6;
  *(undefined8 *)(param_1 + 0x110) = uVar1;
  FUN_038fd1e0(param_1 + 0x130);
  FUN_038fd2f0(param_1 + 0x130,param_2 + 0x14);
  uVar3 = param_2[0x26];
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x178) = uVar3;
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x108);
  FUN_0391be20(param_1);
  if ((*(ushort *)(param_1 + 0x11a) < 10) &&
     ((1 << (ulong)(*(ushort *)(param_1 + 0x11a) & 0x1f) & 0x350U) != 0)) {
    uVar4 = *(ushort *)(param_1 + 0x114);
    uVar5 = uVar4;
  }
  else {
    uVar4 = *(ushort *)(param_1 + 0x114);
    uVar5 = 1;
  }
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  if (6 < uVar5) {
    *(byte *)(param_1 + 0x550) = *(byte *)(param_1 + 0x550) & 0x7f;
  }
  return;
}

