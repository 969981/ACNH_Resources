
uint FUN_01d2affc(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined7 uStack_20;
  undefined1 local_19;
  undefined7 uStack_18;
  undefined1 local_11;
  
  puVar1 = (undefined8 *)*param_2;
  local_11 = 0;
  local_50 = *puVar1;
  uStack_48 = puVar1[1];
  local_40 = puVar1[2];
  uStack_38 = puVar1[3];
  local_30 = puVar1[4];
  local_28 = puVar1[5];
  uStack_18 = (undefined7)((ulong)*(undefined8 *)((long)puVar1 + 0x37) >> 8);
  uStack_20 = (undefined7)puVar1[6];
  local_19 = (undefined1)((ulong)puVar1[6] >> 0x38);
  uVar2 = FUN_0069bad0(param_2[1],"mMtSendTime",&local_50);
  return uVar2 & 1;
}

