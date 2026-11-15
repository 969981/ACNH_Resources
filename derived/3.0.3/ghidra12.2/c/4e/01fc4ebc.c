
bool FUN_01fc4ebc(long *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  undefined *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  int local_4;
  
  uVar1 = (int)(long)((float)param_2 * 90.0 * 11930465.0) + 0xa0000000U >> 0x1e;
  local_38 = 0;
  local_4 = uVar1 + 2;
  local_48 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_40 = PTR_DAT_04bb2010 + 0x10;
  local_28 = 0;
  if (2 < uVar1 - 1) {
    local_4 = 2;
  }
  local_30 = puStack_40;
  FUN_01508594(&local_48,&local_4);
  fVar4 = *(float *)*param_1;
  fVar3 = (float)(int)local_28 * 5.0 + 5.0;
  bVar2 = false;
  if (((float)(int)local_38 * 5.0 < fVar4) && (bVar2 = false, !NAN(fVar4) && !NAN(fVar3))) {
    bVar2 = fVar4 < fVar3;
  }
  if (bVar2) {
    fVar3 = ((float *)*param_1)[2];
    if ((float)local_38._4_4_ * 5.0 < fVar3) {
      return (float)local_28._4_4_ * 5.0 + 5.0 <= fVar3;
    }
  }
  return true;
}

