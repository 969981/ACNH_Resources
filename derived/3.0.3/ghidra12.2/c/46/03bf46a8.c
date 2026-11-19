
undefined8 FUN_03bf46a8(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **local_178;
  undefined1 *puStack_170;
  undefined4 local_168;
  undefined1 local_164 [255];
  undefined1 local_65;
  undefined1 auStack_64 [4];
  
  lVar3 = *(long *)(param_1 + ((ulong)*(byte *)(param_1 + 0xd8) & 1) * 8 + 0x20);
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x20) == '\0')) {
    local_65 = 0;
    local_168 = 0x100;
    local_164[0] = 0;
    puStack_170 = local_164;
    local_178 = &PTR_LAB_048f9a70;
    uVar1 = nn::util::VSNPrintf(puStack_170,0x100,param_2,auStack_64 + 0x24);
    if (0xff < uVar1) {
      local_65 = 0;
    }
    (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + 0x18) + 0x20))();
    (*(code *)local_178[3])(&local_178);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

