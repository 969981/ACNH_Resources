
void FUN_01817104(long param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  
  puVar1 = (undefined4 *)(**(code **)(**(long **)(param_1 + 0x300) + 0xf8))();
  *puVar1 = *(undefined4 *)(*(long *)(param_1 + 0x300) + 0x284);
  puVar1[2] = *(undefined4 *)(*(long *)(param_1 + 0x300) + 0x28c);
  fVar2 = (float)FUN_01a1fd20(*(long *)(param_1 + 0x300) + 0x284,0);
  if (fVar2 <= (float)puVar1[1]) {
    fVar2 = (float)puVar1[1];
  }
  puVar1[1] = fVar2;
  fVar3 = (float)FUN_01a1fd20(*(long *)(param_1 + 0x300) + 0x284,1);
  *(undefined1 *)(param_1 + 0x419) = 1;
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(bool *)(param_1 + 0x3c8) = fVar2 == fVar3;
  return;
}

