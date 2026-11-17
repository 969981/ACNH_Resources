
/* WARNING: Removing unreachable block (ram,0x02ade1b0) */

void FUN_02ade0d0(undefined4 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined **local_58;
  undefined **ppuStack_50;
  undefined4 local_48;
  undefined *local_38;
  uint local_30;
  undefined4 uStack_2c;
  byte local_28;
  
  local_38 = PTR_DAT_04bbfe68 + 0x10;
  uStack_2c = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
  local_30 = 1;
  local_28 = FUN_017baf44();
  local_28 = local_28 & 1;
  ppuStack_50 = &local_38;
  local_58 = &PTR_FUN_04a9fc88;
  local_48 = param_1;
  uVar2 = FUN_01a4fa00(&local_38);
  if (local_30 != 0) {
    if (local_30 == 0) {
      return;
    }
    if (local_30 != 0) {
      plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
      plVar4 = plVar1 + local_30;
      if (0x38 < local_30) {
        plVar4 = plVar1;
      }
      goto LAB_02ade188;
    }
  }
  plVar4 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_02ade188:
  if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0xd0), lVar3 != 0)) {
    FUN_012e6150(lVar3,&local_58,uVar2);
  }
  return;
}

