
int FUN_03eba830(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  undefined **local_198;
  undefined1 *puStack_190;
  undefined4 local_188;
  undefined1 local_184 [255];
  undefined1 local_85;
  undefined1 local_80;
  undefined *local_78;
  long local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_24;
  
  puVar1 = PTR_DAT_04bb2818;
  local_50 = 0;
  uStack_48 = 0;
  puStack_190 = local_184;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (long *)0x0;
  local_78 = PTR_DAT_04bb2818 + 0x10;
  local_85 = 0;
  local_70 = 0;
  local_188 = 0x100;
  local_184[0] = 0;
  local_80 = 0;
  local_198 = &PTR_LAB_048f9a70;
  if ((char)param_1[0xf] != '\0') {
    local_70 = (**(code **)(*param_1 + 0xd0))(param_1,&local_78,param_2);
    if (local_70 != 0) {
      local_68 = param_1;
    }
  }
  iVar3 = 0;
  do {
    iVar5 = iVar3;
    if ((char)param_1[0xf] == '\0') goto LAB_03eba960;
    uVar4 = (**(code **)(*param_1 + 0x48))(param_1,&local_78);
    if ((uVar4 & 1) == 0) break;
    local_24 = 0;
    (**(code **)(*param_1 + 0xe0))(param_1,&local_24,&local_78,&local_198,1);
    iVar3 = iVar5 + 1;
  } while (local_24 != 0);
  if ((((char)param_1[0xf] != '\0') &&
      (uVar4 = (**(code **)(*param_1 + 0x48))(param_1,&local_78), (uVar4 & 1) != 0)) &&
     (uVar4 = (**(code **)(*param_1 + 0xd8))(param_1,&local_78), (uVar4 & 1) != 0)) {
    local_70 = 0;
    local_68 = (long *)0x0;
  }
LAB_03eba960:
  plVar2 = local_68;
  local_78 = puVar1 + 0x10;
  if (((local_68 != (long *)0x0) && ((char)local_68[0xf] != '\0')) &&
     (uVar4 = (**(code **)(*local_68 + 0x48))(local_68,&local_78), (uVar4 & 1) != 0)) {
    (**(code **)(*plVar2 + 0xd8))(plVar2,&local_78);
  }
  return iVar5;
}

