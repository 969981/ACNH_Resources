
void FUN_01fe1694(long *param_1,long param_2)

{
  long lVar1;
  float local_2c [3];
  undefined4 local_4;
  
  lVar1 = *param_1;
  local_2c[1] = 0.0;
  local_2c[2] = (float)*(int *)(param_2 + 0xc) * 5.0;
  local_2c[0] = (float)*(int *)(param_2 + 8) * 5.0;
  local_4 = FUN_006f0400(*(float *)param_1[1] - local_2c[0],((float *)param_1[1])[2] - local_2c[2]);
  FUN_01e39778(*(undefined8 *)(lVar1 + 8),local_2c,&local_4,0);
  *(ushort *)(lVar1 + 0x1242c) = *(ushort *)(lVar1 + 0x1242c) | 4;
  return;
}

