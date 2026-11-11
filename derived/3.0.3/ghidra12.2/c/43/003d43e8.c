
undefined8 FUN_003d43e8(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar3 = (uint *)*param_1;
  *(undefined1 *)(param_2 + 1) = 0;
  *param_2 = 2;
  param_2[2] = 1;
  uVar1 = puVar3[2];
  *(undefined8 *)(param_2 + 4) = 0;
  param_2[3] = uVar1;
  *(ulong *)(param_2 + 6) = (ulong)*puVar3;
  *(long *)(param_2 + 0xc) = *param_1 + 0x60;
  uVar4 = *(undefined8 *)(puVar3 + 7);
  uVar5 = *(undefined8 *)(puVar3 + 9);
  uVar6 = *(undefined8 *)(puVar3 + 0xb);
  *(undefined8 *)(param_2 + 0x15) = *(undefined8 *)(puVar3 + 0xd);
  *(undefined8 *)(param_2 + 0x13) = uVar6;
  *(undefined8 *)(param_2 + 0x11) = uVar5;
  *(undefined8 *)(param_2 + 0xf) = uVar4;
  uVar2 = *(undefined4 *)((long)puVar3 + 0x3e);
  *(undefined2 *)(param_2 + 0x18) = *(undefined2 *)((long)puVar3 + 0x42);
  param_2[0x17] = uVar2;
  return 1;
}

