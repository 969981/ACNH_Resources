
void FUN_024e05e0(long param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float local_3c;
  undefined4 local_38;
  float local_34;
  
  local_38 = 0;
  fVar4 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x1900));
  local_3c = fVar4 * 5.0 + 2.5;
  fVar4 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x1901));
  local_34 = fVar4 * 5.0 + 2.5;
  iVar5 = (int)local_3c;
  bVar2 = local_3c < 0.0;
  bVar3 = local_34 < 0.0;
  iVar6 = (int)local_34;
  local_38 = FUN_016e026c(0,&local_3c,0,0);
  local_3c = (float)(int)((int)((float)iVar5 / 5.0) - (uint)bVar2 & 0xfffffffe) * 5.0 + 5.0;
  local_34 = (float)(int)((int)((float)iVar6 / 5.0) - (uint)bVar3 & 0xfffffffe) * 5.0 + 5.0;
  local_38 = FUN_016e026c(0,&local_3c,0,0);
  cVar1 = *(char *)(param_1 + 0x1902);
  FUN_016dec40(param_1,&local_3c,0,0,0,0,0);
  FUN_0231ade8(param_1,6);
  if (cVar1 != '\0') {
    FUN_02549a64(param_1 + 0x1ee8);
  }
  return;
}

