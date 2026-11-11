
uint FUN_00439d40(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 2);
  uVar3 = uVar2;
  if (uVar2 == (*(uint *)((long)param_1 + 0x14) & 0x3fffffff)) {
    FUN_00426990(*param_1,param_1 + 1,0x20);
    uVar3 = *(uint *)(param_1 + 2);
  }
  *(uint *)(param_1 + 2) = uVar3 + 1;
  puVar1 = (undefined8 *)(param_1[1] + (long)(int)uVar3 * 0x20);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined4 *)(puVar1 + 2) = param_2;
  *(undefined4 *)((long)puVar1 + 0x14) = 0xffffffff;
  *(undefined1 *)(puVar1 + 3) = param_3;
  return uVar2;
}

