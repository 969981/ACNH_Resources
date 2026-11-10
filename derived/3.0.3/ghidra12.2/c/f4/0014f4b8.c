
undefined8 FUN_0014f4b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_stdout_04bcb8e8;
  *(undefined8 *)(param_1 + 0x6f0) = 0;
  puVar3 = PTR_stdin_04bcb8f0;
  *(undefined8 *)(param_1 + 0x778) = 0;
  puVar4 = PTR_stderr_04bcb8f8;
  *(undefined8 *)(param_1 + 0x780) = 0;
  *(undefined8 *)(param_1 + 0x788) = 0;
  puVar1 = PTR_fread_04bcb720;
  *(undefined1 **)(param_1 + 0x708) = &LAB_0014f680;
  uVar5 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x790) = 0;
  *(undefined8 *)(param_1 + 0x7d8) = 0xffffffffffffffff;
  *(undefined **)(param_1 + 0x720) = puVar1;
  *(undefined8 *)(param_1 + 0x6f8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x688) = uVar5;
  uVar5 = *(undefined8 *)puVar3;
  uVar6 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x6d8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc28) = 0x3c;
  *(undefined8 *)(param_1 + 0xc18) = 5;
  *(undefined8 *)(param_1 + 0x680) = 0;
  *(undefined4 *)(param_1 + 0xc20) = 0;
  *(undefined1 *)(param_1 + 0x6c2) = 0;
  *(undefined8 *)(param_1 + 0x6c8) = 5;
  *(undefined1 *)(param_1 + 0xa90) = 0;
  *(undefined8 *)(param_1 + 0x668) = uVar6;
  *(undefined8 *)(param_1 + 0x690) = uVar5;
  *(undefined4 *)(param_1 + 0xa38) = 1;
  *(undefined4 *)(param_1 + 0xeb0) = 1;
  *(undefined4 *)(param_1 + 0xc60) = 1;
  *(undefined8 *)(param_1 + 0x6b0) = 1;
  *(undefined8 *)(param_1 + 0x6b8) = 1;
  *(undefined2 *)(param_1 + 0x6c0) = 1;
  *(ulong *)(param_1 + 0xf60) = *(ulong *)(param_1 + 0xf60) & 0xfffffffe3fff7ffc | 0xc0008000;
  *(undefined8 *)(param_1 + 0xac8) = 0;
  FUN_0015333c(param_1 + 0x820,param_1);
  *(undefined8 *)(param_1 + 0xc98) = 0xffffffffffffffff;
  *(byte *)(param_1 + 0xad0) = *(byte *)(param_1 + 0xad0) | 0xb;
  memcpy((void *)(param_1 + 0xb30),(void *)(param_1 + 0xa48),0xe8);
  *(undefined8 *)(param_1 + 0xe98) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc88) = 0x1a4;
  *(undefined8 *)(param_1 + 0xc90) = 0x1ed;
  *(undefined8 *)(param_1 + 0xea0) = 0xfffffffff3fffbef;
  FUN_00143f10();
  *(undefined8 *)(param_1 + 0xf00) = 1000;
  *(undefined8 *)(param_1 + 0xec0) = 0;
  *(undefined8 *)(param_1 + 0xc30) = 0x4000;
  *(undefined8 *)(param_1 + 0xc38) = 0x10000;
  *(undefined8 *)(param_1 + 0x7c0) = 200;
  *(undefined8 *)(param_1 + 0xec8) = 0;
  *(undefined8 *)(param_1 + 0xef0) = 0x3c;
  *(undefined8 *)(param_1 + 0xf30) = 60000;
  *(undefined8 *)(param_1 + 0xee8) = 0x3c;
  *(undefined8 *)(param_1 + 0xed0) = 0;
  *(undefined8 *)(param_1 + 0xef8) = 5;
  *(ulong *)(param_1 + 0xf60) = *(ulong *)(param_1 + 0xf60) & 0xffff07ffffffffff | 0x400c00800000010
  ;
  *(undefined8 *)(param_1 + 0xa40) = 4;
  FUN_001595e0(param_1 + 0x668);
  return 0;
}

