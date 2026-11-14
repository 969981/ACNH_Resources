
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_01a1dfd0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined *local_60;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  puVar3 = PTR_DAT_04bb27c8;
  iVar2 = *(int *)(param_1 + 0x10);
  local_54 = *(int *)(param_1 + 0x14);
  local_60 = PTR_DAT_04bb2010 + 0x10;
  uVar4 = 1;
  iVar1 = *(int *)(param_1 + 0x24) + 1;
  if (iVar1 != local_54) {
    local_58 = iVar2;
    do {
      local_48 = 0;
      local_44 = 1;
      local_50 = 0;
      local_50 = 2;
      local_44 = 1;
      local_48 = 0;
      lVar5 = *(long *)puVar3;
      if ((lVar5 == 0) || (*(long *)(lVar5 + 0xa8) == 0)) {
        uVar4 = 0;
        break;
      }
      uVar4 = FUN_00949594(lVar5 + 0x28,&local_60,&local_50);
      if ((uVar4 & 1) == 0) break;
      if (local_58 < *(int *)(param_1 + 0x20)) {
        local_58 = local_58 + 1;
      }
      else {
        local_54 = local_54 + 1;
        local_58 = *(int *)(param_1 + 0x10);
      }
    } while ((iVar2 != local_58) || (iVar1 != local_54));
  }
  return uVar4 & 1;
}

