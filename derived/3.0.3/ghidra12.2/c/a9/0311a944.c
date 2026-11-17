
void FUN_0311a944(long param_1)

{
  undefined8 *puVar1;
  undefined4 local_30;
  float fStack_2c;
  undefined4 local_28;
  
  puVar1 = (undefined8 *)FUN_0251b3b0(param_1 + 0x230,0);
  if (puVar1 != (undefined8 *)0x0) {
    local_28 = *(undefined4 *)(puVar1 + 1);
    fStack_2c = (float)((ulong)*puVar1 >> 0x20);
    _local_30 = CONCAT44(fStack_2c + 20.0,(int)*puVar1);
    FUN_033fb470(*(undefined8 *)(*(long *)(param_1 + 0x210) + 0x1d0),&local_30);
  }
  return;
}

