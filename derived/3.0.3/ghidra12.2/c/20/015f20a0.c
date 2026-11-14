
uint FUN_015f20a0(long *param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined *local_180;
  undefined1 *local_178;
  undefined4 local_170;
  undefined1 local_16c [31];
  undefined1 local_14d;
  undefined **local_148;
  byte *local_140;
  undefined4 local_138;
  byte local_134 [31];
  undefined1 local_115;
  undefined1 local_35;
  
  uVar3 = (**(code **)(*param_1 + 0xf0))();
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
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    pbVar5 = local_140;
    do {
      pbVar5 = pbVar5 + 1;
      uVar2 = crc32b(uVar2,(uint)bVar1,0x4c11db7);
      bVar1 = *pbVar5;
    } while (bVar1 != 0);
    uVar2 = ~uVar2;
  }
  FUN_038d1270(&local_180,&DAT_04074ae0,uVar2);
  (**(code **)(local_180 + 0x18))(&local_180);
  uVar4 = FUN_03ea9790(param_2,uVar3,3,local_178);
  if ((uVar4 & 1) == 0) {
    uVar3 = (**(code **)(*param_1 + 0xf0))(param_1);
    local_115 = 0;
    local_138 = 0x20;
    local_140 = local_134;
    local_134[0] = 0;
    local_148 = (undefined **)(PTR_DAT_04bb3008 + 0x10);
    pbVar5 = (byte *)param_1[1];
    bVar1 = *pbVar5;
    if (bVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
      do {
        pbVar5 = pbVar5 + 1;
        uVar2 = crc32b(uVar2,(uint)bVar1,0x4c11db7);
        bVar1 = *pbVar5;
      } while (bVar1 != 0);
      uVar2 = ~uVar2;
    }
    FUN_038d1270(&local_148,&DAT_04074ae0,uVar2);
    (*(code *)local_148[3])(&local_148);
    uVar2 = FUN_03ea9790(param_2,uVar3,3,local_140);
  }
  else {
    uVar2 = 1;
  }
  return uVar2 & 1;
}

