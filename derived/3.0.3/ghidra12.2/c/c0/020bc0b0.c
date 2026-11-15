
undefined8 FUN_020bc0b0(long *param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  undefined *local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4 [31];
  undefined1 local_185;
  undefined *local_180;
  undefined1 *local_178;
  undefined4 local_170;
  undefined1 local_16c [31];
  undefined1 local_14d;
  undefined **local_148;
  byte *local_140;
  undefined4 local_138;
  byte local_134 [255];
  undefined1 local_35;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14d = 0;
  local_16c[0] = 0;
  local_170 = 0x20;
  local_178 = local_16c;
  local_138 = 0x100;
  local_140 = local_134;
  local_35 = 0;
  local_180 = PTR_DAT_04bb3000 + 0x10;
  local_134[0] = 0;
  local_148 = &PTR_LAB_048fda60;
  (**(code **)(*param_1 + 0x58))(param_1,&local_148);
  (*(code *)local_148[3])(&local_148);
  bVar1 = *local_140;
  if (bVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0xffffffff;
    pbVar6 = local_140;
    do {
      pbVar6 = pbVar6 + 1;
      uVar5 = crc32b(uVar5,(uint)bVar1,0x4c11db7);
      bVar1 = *pbVar6;
    } while (bVar1 != 0);
    uVar5 = ~uVar5;
  }
  FUN_038d1270(&local_180,&DAT_04074ae0,uVar5);
  (**(code **)(local_180 + 0x18))(&local_180);
  uVar2 = FUN_03ea9790(param_2,&local_18,2,local_178);
  if ((uVar2 & 1) == 0) {
    FUN_0071b954(&local_148,"%s.Bin",param_1[1]);
    local_185 = 0;
    local_1a8 = 0x20;
    local_1b0 = local_1a4;
    local_1a4[0] = 0;
    local_1b8 = PTR_DAT_04bb58a8 + 0x10;
    (*(code *)local_148[3])(&local_148);
    bVar1 = *local_140;
    if (bVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0xffffffff;
      pbVar6 = local_140;
      do {
        pbVar6 = pbVar6 + 1;
        uVar5 = crc32b(uVar5,(uint)bVar1,0x4c11db7);
        bVar1 = *pbVar6;
      } while (bVar1 != 0);
      uVar5 = ~uVar5;
    }
    FUN_038d1270(&local_1b8,&DAT_04074ae0,uVar5);
    (**(code **)(local_1b8 + 0x18))(&local_1b8);
    uVar2 = FUN_03ea9790(param_2,&local_18,2,local_1b0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0xf0))(param_1);
  *puVar3 = local_18;
  lVar4 = (**(code **)(*param_1 + 0xf0))(param_1);
  *(undefined4 *)(lVar4 + 4) = local_14;
  return 1;
}

