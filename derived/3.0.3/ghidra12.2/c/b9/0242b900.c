
undefined1  [16] FUN_0242b900(long param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  float *pfVar4;
  float fVar5;
  ulong extraout_d0;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [2];
  byte local_36;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffe;
  FUN_0277d4ac(&local_28);
  local_28 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = FUN_016e4e3c(&local_28);
  uVar6 = extraout_d0;
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_016e4d80(&local_28);
    uVar6 = 0;
    if ((uVar2 & 1) == 0) goto LAB_0242b9d8;
  }
  FUN_0124c030(uVar6,auStack_40,&local_28);
  iVar1 = FUN_0123db50(auStack_38,local_30);
  if ((iVar1 == 0x21) || (iVar1 = FUN_0123db50(auStack_38,local_30), iVar1 == 0x22)) {
    uVar3 = local_36 >> 2 & 7;
  }
  else {
    uVar3 = 0;
  }
  fVar5 = (float)FUN_0242d690(param_1);
  pfVar4 = (float *)(&DAT_0417a910 + (ulong)uVar3 * 3);
  if (7 < uVar3) {
    pfVar4 = (float *)&DAT_0417a910;
  }
  uVar6 = (ulong)(uint)(fVar5 - *pfVar4);
LAB_0242b9d8:
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar6;
  return auVar7;
}

