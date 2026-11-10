
void FUN_003667a8(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x3b4) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x3b4) = 0;
  FUN_00347c8c(param_1 + 0x200);
  FUN_00347c8c(param_1 + 0x1a8,param_2);
  if (*(char *)(param_1 + 0x198) != '\0') {
    FUN_0034915c(param_1 + 0x88,param_2);
  }
  FUN_00386420(param_1,param_2,0);
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_00367b50();
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((*(char *)(param_1 + 0x3b5) != '\0') &&
     (plVar1 = *(long **)(param_1 + 0x80), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    FUN_00367b50(*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x410));
    puVar3 = *(undefined8 **)(param_1 + 0x80);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_00367b50(puVar3);
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_00367b50();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_00367b50();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(long *)(param_1 + 600) != 0) {
    FUN_0034d6e0(*(long *)(param_1 + 600),param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x78,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0xf0,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x168,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x1e0,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 600,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x2d0,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x348,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x3c0,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x438,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x4b0,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x528,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x5a0,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x618,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x690,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x708,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x780,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x7f8,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x870,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x8e8,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x960,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x9d8,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0xa50,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0xac8,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0xb40,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 3000,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0xc30,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0xca8,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0xd20,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0xd98,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0xe10,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0xe88,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0xf00,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0xf78,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0xff0,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x1068,param_2);
    FUN_0034d6e0(*(long *)(param_1 + 600) + 0x10e0,param_2);
    FUN_00367b50(*(undefined8 *)(param_1 + 600));
    *(undefined8 *)(param_1 + 600) = 0;
  }
  if (*(long *)(param_1 + 0x260) != 0) {
    FUN_00367b50();
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  uVar2 = FUN_0034ebd0(param_1 + 0x270);
  FUN_0034edf0(param_1 + 0x270,param_2);
  FUN_00367b50(uVar2);
  uVar2 = FUN_0034ebd0(param_1 + 0x298);
  FUN_0034edf0(param_1 + 0x298,param_2);
  FUN_00367b50(uVar2);
  uVar2 = FUN_0034ebd0(param_1 + 0x2c0);
  FUN_0034edf0(param_1 + 0x2c0,param_2);
  FUN_00367b50(uVar2);
  uVar2 = FUN_0034ebd0(param_1 + 0x2e8);
  FUN_0034edf0(param_1 + 0x2e8,param_2);
  FUN_00367b50(uVar2);
  uVar2 = FUN_0034ebd0(param_1 + 0x310);
  FUN_0034edf0(param_1 + 0x310,param_2);
  FUN_00367b50(uVar2);
  uVar2 = FUN_0034ebd0(param_1 + 0x338);
  FUN_0034edf0(param_1 + 0x338,param_2);
  FUN_00367b50(uVar2);
  FUN_0034efb0(param_1 + 0x360,param_2);
  FUN_0034efb0(param_1 + 0x37c,param_2);
  FUN_0034efb0(param_1 + 0x398,param_2);
  return;
}

