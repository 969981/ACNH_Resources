
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_01a1ddd0(long param_1,code *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *local_68;
  int local_60;
  int local_5c;
  undefined *local_58;
  undefined *puStack_50;
  int local_48;
  int iStack_44;
  undefined *local_40;
  int local_38;
  int iStack_34;
  
  local_58 = PTR_DAT_04bbc1a0 + 0x10;
  local_68 = PTR_DAT_04bb2010 + 0x10;
  iVar2 = *(uint *)(param_1 + 8) - (uint)((*(uint *)(param_1 + 8) & 0x80000001) == 1);
  local_5c = *(uint *)(param_1 + 0xc) - (uint)((*(uint *)(param_1 + 0xc) & 0x80000001) == 1);
  local_38 = iVar2 + 1;
  iStack_34 = local_5c + 1;
  iVar1 = local_5c + 2;
  local_60 = iVar2;
  puStack_50 = local_68;
  local_48 = iVar2;
  iStack_44 = local_5c;
  local_40 = local_68;
  do {
    uVar3 = (*param_2)(&local_68);
    if ((uVar3 & 1) != 0) break;
    if (local_60 < local_38) {
      local_60 = local_60 + 1;
    }
    else {
      local_5c = local_5c + 1;
      local_60 = local_48;
    }
  } while (iVar2 != local_60 || iVar1 != local_5c);
  return uVar3 & 1;
}

