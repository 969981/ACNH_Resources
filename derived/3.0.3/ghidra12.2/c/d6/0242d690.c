
float FUN_0242d690(long param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [2];
  byte local_56;
  undefined8 local_50;
  undefined *local_48;
  int local_40;
  int iStack_3c;
  undefined8 local_38;
  
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  local_38 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = FUN_016e4e3c(&local_38);
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_016e4d80(&local_38), (uVar2 & 1) == 0)) {
    fVar5 = (float)*(int *)(param_1 + 9) * 0.001;
  }
  else {
    local_48 = PTR_DAT_04bb2010 + 0x10;
    fVar5 = (float)*(int *)(param_1 + 9) * 0.001;
    fVar6 = (float)*(int *)(param_1 + 0xf) * 0.001;
    fVar5 = (float)(int)((int)((float)(int)fVar5 / 10.0) - (uint)(fVar5 < 0.0)) * 10.0 + 2.5;
    fVar6 = (float)(int)((int)((float)(int)fVar6 / 10.0) - (uint)(fVar6 < 0.0)) * 10.0 + 2.5;
    local_40 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
    iStack_3c = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
    FUN_0124c030(auStack_60,&local_38);
    iVar1 = FUN_0123db50(auStack_58,local_50);
    if ((iVar1 == 0x21) || (iVar1 = FUN_0123db50(auStack_58,local_50), iVar1 == 0x22)) {
      uVar3 = local_56 >> 2 & 7;
    }
    else {
      uVar3 = 0;
    }
    pfVar4 = (float *)(&DAT_0417a910 + (ulong)uVar3 * 3);
    if (7 < uVar3) {
      pfVar4 = (float *)&DAT_0417a910;
    }
    fVar5 = *pfVar4;
    uVar2 = FUN_016e4e3c(&local_38);
    if (((uVar2 & 1) != 0) || (uVar2 = FUN_016e4d80(&local_38), (uVar2 & 1) != 0)) {
      fVar6 = (float)FUN_0124fa64(0,auStack_60,&local_48);
      fVar5 = fVar5 + fVar6;
    }
  }
  return fVar5;
}

