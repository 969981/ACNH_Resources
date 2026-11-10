
undefined8 FUN_0014b80c(long param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0xe8);
  if (puVar1 == (uint *)0x0) {
    return 3;
  }
  if (((*puVar1 >> (ulong)(param_2 & 0x1f) & 1) == 0) || (*(code **)(puVar1 + 4) == (code *)0x0)) {
    return 0;
  }
  (**(code **)(puVar1 + 4))(param_1,param_2,*(undefined8 *)(puVar1 + 6));
  return 0;
}

