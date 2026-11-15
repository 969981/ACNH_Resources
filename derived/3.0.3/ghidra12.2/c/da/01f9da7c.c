
uint FUN_01f9da7c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **local_1f8;
  long lStack_1f0;
  long local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined1 local_1a0;
  undefined4 local_194;
  undefined8 local_4c;
  undefined4 local_44;
  
  lVar3 = *(long *)(param_1 + 8);
  if (*(int *)(lVar3 + 0x750) == 2) {
    FUN_01fa09e0(param_1);
    uVar1 = 1;
  }
  else {
    local_1f8 = (undefined **)CONCAT44(local_1f8._4_4_,*(undefined4 *)(lVar3 + 0x230));
    uVar2 = FUN_021e8490(&local_1f8,*(long *)(lVar3 + 0x68) + 0x278,param_1 + 0x188,1,0);
    local_4c = 0;
    local_44 = 0;
    local_1f8 = &PTR_LAB_04a69c50;
    lStack_1f0 = param_1;
    uVar1 = FUN_01fabcd0(uVar2,&local_4c,param_2,&local_1f8);
    if ((uVar1 & 1) != 0) {
      FUN_01e63f1c(&local_1f8);
      local_1f8 = (undefined **)CONCAT44(local_1f8._4_4_,0x16);
      local_1d8 = param_1 + 0x121f8;
      local_1a0 = 1;
      local_194 = 1;
      *(long *)(param_1 + 0x12200) = param_1;
      *(code **)(param_1 + 0x12208) = FUN_01fa09e0;
      local_1c8 = local_44;
      *(undefined8 *)(param_1 + 0x12210) = 0;
      uStack_1d0 = local_4c;
      FUN_01fb1020(param_1,&local_1f8,0x1e);
    }
  }
  return uVar1 & 1;
}

