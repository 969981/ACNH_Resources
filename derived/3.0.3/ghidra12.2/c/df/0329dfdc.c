
void FUN_0329dfdc(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  long local_58;
  ulong local_50;
  long local_48;
  undefined *local_40;
  undefined *local_38;
  
  local_48 = param_1[4];
  lVar5 = FUN_032a3a20(&local_48);
  if (lVar5 != 0) {
    local_40 = PTR_DAT_04bc8e78 + 0x10;
    local_38 = PTR_DAT_04bb2da0;
    if (*(undefined **)(lVar5 + 0xd8) != (undefined *)0x0) {
      local_38 = *(undefined **)(lVar5 + 0xd8);
    }
    local_58 = lVar5;
    fVar7 = (float)FUN_032d8b60(&local_58,&local_40);
    if (fVar7 != *(float *)(lVar5 + 0x54)) {
      uVar6 = (uint)fVar7;
      fVar8 = (float)(int)fVar7;
      uVar2 = -(uVar6 & 1);
      if (-1 < (int)uVar6) {
        uVar2 = uVar6 & 1;
      }
      if (fVar7 != fVar8 || uVar2 != 0) {
        iVar3 = 2;
        if ((int)uVar6 < 0) {
          iVar3 = -2;
        }
        fVar8 = (float)(int)((uVar6 - uVar2) + iVar3);
      }
      *(float *)(lVar5 + 0x54) = fVar8;
      *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 0x10;
    }
  }
  FUN_032a3c70(&local_48);
  lVar5 = param_1[3];
  (**(code **)(*param_1 + 0x80))(&local_58,param_1);
  puVar1 = PTR_DAT_04bc8e68 + 0x10;
  local_48 = *(long *)(*(long *)(lVar5 + 0xf0) + 0x18);
  local_38 = (undefined *)local_50;
  local_40 = puVar1;
  local_40 = (undefined *)FUN_032d32b0(&local_48,&local_40);
  local_38 = (undefined *)((ulong)local_38 & 0xffffffff00000000);
  iVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
  if (iVar3 < 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0xa8))(param_1);
  }
  FUN_032d5bf0(&local_40,param_1 + 1,0,uVar4);
  lVar5 = param_1[3];
  (**(code **)(*param_1 + 0x90))(&local_58,param_1);
  local_48 = *(long *)(*(long *)(lVar5 + 0xf0) + 0x18);
  local_38 = (undefined *)local_50;
  local_40 = puVar1;
  local_40 = (undefined *)FUN_032d32b0(&local_48,&local_40);
  local_38 = (undefined *)((ulong)local_38 & 0xffffffff00000000);
  iVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
  if (iVar3 < 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
    iVar3 = iVar3 + 1;
  }
  FUN_032d5bf0(&local_40,param_1 + 1,0,iVar3);
  return;
}

