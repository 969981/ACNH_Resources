
undefined8 FUN_00978f80(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_50;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_04bb27c8;
  iVar2 = *(int *)(param_1 + 0x10);
  local_44 = *(int *)(param_1 + 0x14);
  local_50 = PTR_DAT_04bb2010 + 0x10;
  iVar1 = *(int *)(param_1 + 0x24) + 1;
  if (iVar1 != local_44) {
    local_48 = iVar2;
    do {
      lVar5 = *(long *)puVar3;
      local_40 = 0;
      local_38 = 0;
      if ((((((lVar5 == 0) || (*(long *)(lVar5 + 0xa8) == 0)) ||
            (uVar4 = FUN_009493f8(lVar5 + 0x28,&local_50,(long)&local_38 + 4,&local_38,
                                  (long)&local_40 + 4,&local_40), (uVar4 & 1) == 0)) ||
           ((local_38._4_4_ != 0xc && (local_38._4_4_ != 5)))) ||
          (((int)local_38 != 0xc && ((int)local_38 != 5)))) ||
         (((local_40._4_4_ != 5 && (local_40._4_4_ != 0xc)) ||
          (((int)local_40 != 0xc && ((int)local_40 != 5)))))) {
        return 0;
      }
      if (local_48 < *(int *)(param_1 + 0x20)) {
        local_48 = local_48 + 1;
      }
      else {
        local_44 = local_44 + 1;
        local_48 = *(int *)(param_1 + 0x10);
      }
    } while ((iVar2 != local_48) || (iVar1 != local_44));
  }
  return 1;
}

