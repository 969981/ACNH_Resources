
uint FUN_023fefd0(byte *param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_3c;
  float fStack_38;
  float local_34;
  undefined4 local_30;
  byte local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined8 local_18;
  
  fVar4 = *param_2;
  fStack_38 = param_2[1];
  fVar3 = param_2[2];
  fVar2 = (float)(int)((int)((float)(int)fVar4 / 5.0) - (uint)(fVar4 < 0.0));
  fVar5 = (float)(int)((int)((float)(int)fVar3 / 5.0) - (uint)(fVar3 < 0.0));
  local_3c = fVar2 * 5.0;
  local_34 = fVar5 * 5.0;
  if (fVar2 * 5.0 + 2.5 < fVar4) {
    local_3c = local_3c + 5.0;
  }
  if (fVar5 * 5.0 + 2.5 < fVar3) {
    local_34 = local_34 + 5.0;
  }
  local_1c = 0x101;
  local_24 = 0xbf8000000000001f;
  local_1a = 1;
  local_2c = *param_1;
  local_18 = 0x1000000000000;
  local_28 = *(undefined4 *)PTR_DAT_04bb3238;
  if (7 < local_2c) {
    local_2c = 0xff;
  }
  local_30 = 0x40400000;
  uVar1 = FUN_0251fad0(&local_3c,0);
  return uVar1 & 1;
}

