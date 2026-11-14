
void FUN_01d974f4(undefined8 *param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 2;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  uVar1 = *(undefined2 *)PTR_DAT_04bb3170;
  *(undefined8 *)((long)param_1 + 0x41) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)((long)param_1 + 0x67) = 0x8002308;
  *(undefined2 *)((long)param_1 + 0x4a) = uVar1;
  *(undefined8 *)((long)param_1 + 0x4f) = 0x2308002308002308;
  *(undefined8 *)((long)param_1 + 0x57) = 0x800230800230800;
  *(undefined8 *)((long)param_1 + 0x5f) = 0x23080023080023;
  puVar2 = PTR_DAT_04bb9cf0;
  *(undefined *)((long)param_1 + 0x4d) = *PTR_DAT_04bb9cf0;
  *(undefined *)((long)param_1 + 0x4e) = puVar2[1];
  uVar3 = FUN_020fd7d8(puVar2);
  uVar1 = *(undefined2 *)puVar2;
  *(undefined1 *)((long)param_1 + 0x4f) = uVar3;
  *(undefined2 *)(param_1 + 10) = uVar1;
  uVar3 = FUN_020fd7d8(puVar2);
  uVar1 = *(undefined2 *)puVar2;
  *(undefined1 *)((long)param_1 + 0x52) = uVar3;
  *(undefined2 *)((long)param_1 + 0x53) = uVar1;
  uVar3 = FUN_020fd7d8(puVar2);
  uVar1 = *(undefined2 *)puVar2;
  *(undefined1 *)((long)param_1 + 0x55) = uVar3;
  *(undefined2 *)((long)param_1 + 0x56) = uVar1;
  uVar3 = FUN_020fd7d8(puVar2);
  uVar1 = *(undefined2 *)puVar2;
  *(undefined1 *)(param_1 + 0xb) = uVar3;
  *(undefined2 *)((long)param_1 + 0x59) = uVar1;
  uVar3 = FUN_020fd7d8(puVar2);
  uVar1 = *(undefined2 *)puVar2;
  *(undefined1 *)((long)param_1 + 0x5b) = uVar3;
  *(undefined2 *)((long)param_1 + 0x5c) = uVar1;
  uVar3 = FUN_020fd7d8(puVar2);
  uVar1 = *(undefined2 *)puVar2;
  *(undefined1 *)((long)param_1 + 0x5e) = uVar3;
  *(undefined2 *)((long)param_1 + 0x5f) = uVar1;
  uVar3 = FUN_020fd7d8(puVar2);
  uVar1 = *(undefined2 *)puVar2;
  *(undefined1 *)((long)param_1 + 0x61) = uVar3;
  *(undefined2 *)((long)param_1 + 0x62) = uVar1;
  uVar3 = FUN_020fd7d8(puVar2);
  uVar1 = *(undefined2 *)puVar2;
  *(undefined1 *)((long)param_1 + 100) = uVar3;
  *(undefined2 *)((long)param_1 + 0x65) = uVar1;
  uVar3 = FUN_020fd7d8(puVar2);
  uVar1 = *(undefined2 *)puVar2;
  *(undefined1 *)((long)param_1 + 0x67) = uVar3;
  *(undefined2 *)(param_1 + 0xd) = uVar1;
  uVar3 = FUN_020fd7d8(puVar2);
  *(undefined1 *)((long)param_1 + 0x6a) = uVar3;
  return;
}

