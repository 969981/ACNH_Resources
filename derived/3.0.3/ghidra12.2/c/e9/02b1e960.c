
/* WARNING: Removing unreachable block (ram,0x02b1e9d8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_02b1e960(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined *local_98;
  int local_90;
  int local_8c;
  undefined *local_88;
  undefined *puStack_80;
  int local_78;
  int local_74;
  undefined *local_70;
  int local_68;
  int iStack_64;
  undefined8 local_60;
  undefined4 local_58;
  
  puVar6 = PTR_DAT_04bb27c8;
  local_88 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_80 = PTR_DAT_04bb2010 + 0x10;
  if ((*(byte *)(param_2 + 8) >> 1 & 1) == 0) {
    param_2 = param_2 + 0x18;
  }
  else {
    param_2 = param_2 + 0x350;
  }
  local_98 = PTR_DAT_04bb2010 + 0x10;
  iVar4 = *(int *)(param_2 + 0x10) + -2;
  iVar1 = *(int *)(param_2 + 0x20) + 2;
  iVar5 = *(int *)(param_2 + 0x14) + -2;
  iVar2 = *(int *)(param_2 + 0x24) + 2;
  iVar3 = iVar4;
  if (iVar1 <= iVar4) {
    iVar3 = iVar1;
  }
  if (iVar4 <= iVar1) {
    iVar4 = iVar1;
  }
  local_8c = iVar5;
  if (iVar2 <= iVar5) {
    local_8c = iVar2;
  }
  if (iVar5 <= iVar2) {
    iVar5 = iVar2;
  }
  _local_68 = CONCAT44(iVar5,iVar4);
  if (iVar5 + 1 != local_8c) {
    local_90 = iVar3;
    local_78 = iVar3;
    local_74 = local_8c;
    local_70 = puStack_80;
    do {
      local_58 = 0;
      local_60 = 0;
      local_58 = 0;
      local_60 = 0x200000000000;
      lVar8 = *(long *)puVar6;
      if (((lVar8 != 0) && (*(long *)(lVar8 + 0xa8) != 0)) &&
         (uVar7 = FUN_00949898(lVar8 + 0x28,&local_98,&local_60), (uVar7 & 1) != 0)) {
        return 1;
      }
      if (local_90 < local_68) {
        local_90 = local_90 + 1;
      }
      else {
        local_8c = local_8c + 1;
        local_90 = local_78;
      }
    } while ((iVar3 != local_90) || (iVar5 + 1 != local_8c));
  }
  return 0;
}

