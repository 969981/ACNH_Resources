
undefined8 FUN_028c9744(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined4 local_b8 [2];
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  iVar3 = FUN_027b78b0(param_3,DAT_05573f4c);
  if ((iVar3 != -1) &&
     (FUN_03ea9348(&local_58,param_3 + 8,iVar3), lVar2 = local_50, lVar1 = local_58, local_58 != 0))
  {
    local_40 = 0;
    uStack_38 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    if (*(int *)(param_3 + 0x2c) == 1) {
      local_50 = lVar1;
      local_48 = lVar2;
      local_58 = param_3;
      local_40 = param_2;
    }
    local_80 = 0;
    local_98 = 0;
    uStack_90 = 0x53eb3c96;
    local_68 = 0;
    uStack_60 = 0;
    local_a8 = 0x68cb8460;
    uStack_a0 = DAT_0417bd10;
    local_b8[0] = 3;
    local_b0 = &local_a8;
    local_88 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar5 = FUN_0272d760(&local_58,&local_80,local_b8);
    if ((uVar5 & 1) != 0) {
      local_30 = local_78;
      uStack_28 = uStack_70;
      uVar4 = FUN_0272e334(&local_30,0x9a517ecb);
      iVar3 = FUN_0272da84(&local_80,uVar4);
      if ((0 < iVar3) &&
         (pbVar6 = (byte *)FUN_0272e550(&local_80,local_68,uVar4,0,0), (*pbVar6 & 1) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

