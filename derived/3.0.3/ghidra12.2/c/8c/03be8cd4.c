
void FUN_03be8cd4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *local_178;
  undefined1 *puStack_170;
  undefined4 local_168;
  undefined1 local_164 [255];
  undefined1 local_65;
  undefined1 auStack_64 [4];
  
  local_65 = 0;
  local_164[0] = 0;
  puStack_170 = local_164;
  local_168 = 0x100;
  local_178 = PTR_DAT_04bb21f8 + 0x10;
  uVar1 = nn::util::VSNPrintf(puStack_170,0x100,param_2,auStack_64 + 0x24);
  if (0xff < uVar1) {
    local_65 = 0;
  }
  (**(code **)(local_178 + 0x18))(&local_178);
  return;
}

