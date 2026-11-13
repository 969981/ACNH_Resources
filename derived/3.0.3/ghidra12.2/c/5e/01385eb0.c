
/* WARNING: Removing unreachable block (ram,0x01385f00) */
/* WARNING: Removing unreachable block (ram,0x01385f10) */

void FUN_01385eb0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_50;
  int local_48;
  int local_44;
  
  puVar3 = PTR_DAT_04bb3170;
  if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) &&
     (lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xc0), lVar4 != 0)) {
    iVar2 = *(int *)(param_1 + 0x10);
    local_44 = *(int *)(param_1 + 0x14);
    local_50 = PTR_DAT_04bb2018 + 0x10;
    iVar1 = *(int *)(param_1 + 0x24) + 1;
    if (iVar1 != local_44) {
      local_48 = iVar2;
      do {
        FUN_0132101c(lVar4,&local_50,puVar3);
        if (local_48 < *(int *)(param_1 + 0x20)) {
          local_48 = local_48 + 1;
        }
        else {
          local_44 = local_44 + 1;
          local_48 = *(int *)(param_1 + 0x10);
        }
      } while (iVar2 != local_48 || iVar1 != local_44);
    }
  }
  return;
}

