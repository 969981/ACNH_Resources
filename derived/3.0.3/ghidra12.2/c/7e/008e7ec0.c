
undefined8 FUN_008e7ec0(long *param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  undefined **local_1c0;
  undefined1 *local_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac [31];
  undefined1 local_18d;
  undefined *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  undefined1 local_174 [31];
  undefined1 local_155;
  undefined4 local_150;
  undefined4 local_14c;
  undefined **local_148;
  byte *local_140;
  undefined4 local_138;
  byte local_134 [255];
  undefined1 local_35;
  
  local_155 = 0;
  local_174[0] = 0;
  local_178 = 0x20;
  local_180 = local_174;
  local_138 = 0x100;
  local_140 = local_134;
  local_35 = 0;
  local_188 = PTR_DAT_04bb3000 + 0x10;
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
  FUN_038d1270(&local_188,&DAT_04074ae0,uVar5);
  (**(code **)(local_188 + 0x18))(&local_188);
  uVar2 = FUN_03ea9be0(param_2,&local_150,2,local_180);
  if ((uVar2 & 1) == 0) {
    FUN_0071b954(&local_148,"%s.Bin",param_1[1]);
    local_18d = 0;
    local_1b8 = local_1ac;
    local_1b0 = 0x20;
    local_1c0 = &PTR_LAB_049263f8;
    local_1ac[0] = 0;
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
    FUN_038d1270(&local_1c0,&DAT_04074ae0,uVar5);
    (*(code *)local_1c0[3])(&local_1c0);
    uVar2 = FUN_03ea9be0(param_2,&local_150,2,local_1b8);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0xf0))(param_1);
  *puVar3 = local_150;
  lVar4 = (**(code **)(*param_1 + 0xf0))(param_1);
  *(undefined4 *)(lVar4 + 4) = local_14c;
  return 1;
}

