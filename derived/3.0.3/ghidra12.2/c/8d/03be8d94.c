
bool FUN_03be8d94(undefined8 param_1,long param_2,undefined8 param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined **local_178;
  undefined1 *puStack_170;
  undefined4 local_168;
  undefined1 local_164 [255];
  undefined1 local_65;
  undefined1 auStack_64 [4];
  
  uVar1 = *(ushort *)(param_2 + 6);
  if ((uVar1 & 1) != 0) {
    local_65 = 0;
    local_168 = 0x100;
    local_164[0] = 0;
    puStack_170 = local_164;
    local_178 = &PTR_LAB_048f9a70;
    uVar2 = nn::util::VSNPrintf(puStack_170,0x100,param_3,auStack_64 + 0x24);
    if (0xff < uVar2) {
      local_65 = 0;
    }
    (*(code *)local_178[3])(&local_178);
  }
  return (uVar1 & 1) == 0;
}

