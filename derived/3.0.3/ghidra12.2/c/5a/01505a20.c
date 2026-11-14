
/* WARNING: Removing unreachable block (ram,0x01505ca8) */
/* WARNING: Removing unreachable block (ram,0x01505cb8) */
/* WARNING: Removing unreachable block (ram,0x01505af8) */
/* WARNING: Removing unreachable block (ram,0x01505b08) */
/* WARNING: Removing unreachable block (ram,0x01505b40) */
/* WARNING: Removing unreachable block (ram,0x01505b50) */
/* WARNING: Removing unreachable block (ram,0x01505cf0) */
/* WARNING: Removing unreachable block (ram,0x01505d00) */

undefined8 FUN_01505a20(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  byte local_40;
  undefined4 local_34;
  
  local_48 = 0;
  lVar4 = *(long *)PTR_DAT_04bb2720;
  if (lVar4 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(lVar4 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar4 + 0x338));
      iVar1 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  local_44 = *(undefined4 *)(puVar5 + 7);
  local_40 = FUN_017baf44();
  local_40 = local_40 & 1;
  lVar4 = param_2 + 0x10;
  local_50 = PTR_DAT_04bb3140 + 0x10;
  uVar2 = FUN_01a4f680(&local_50,0);
  if ((uVar2 & 1) != 0) {
    local_34 = 0;
  }
  uVar2 = FUN_01a4f680(&local_50,1);
  if ((uVar2 & 1) != 0) {
    local_34 = 1;
  }
  uVar2 = FUN_01a4f680(&local_50,2);
  if ((uVar2 & 1) == 0) {
LAB_01505ba8:
    uVar2 = FUN_01a4f680(&local_50,3);
    if ((uVar2 & 1) != 0) {
      local_34 = 3;
      uVar2 = FUN_01505d50(param_1,param_2);
      if (((uVar2 & 1) != 0) && (uVar2 = FUN_01505780(param_1,lVar4), (uVar2 & 1) != 0))
      goto LAB_01505d30;
    }
    uVar2 = FUN_01a4f680(&local_50,4);
    if ((uVar2 & 1) != 0) {
      local_34 = 4;
      uVar2 = FUN_01505d50(param_1,param_2);
      if (((uVar2 & 1) != 0) && (uVar2 = FUN_01505780(param_1,lVar4), (uVar2 & 1) != 0))
      goto LAB_01505d30;
    }
    uVar2 = FUN_01a4f680(&local_50,5);
    if ((uVar2 & 1) != 0) {
      local_34 = 5;
      uVar2 = FUN_01505d50(param_1,param_2);
      if (((uVar2 & 1) != 0) && (uVar2 = FUN_01505780(param_1,lVar4), (uVar2 & 1) != 0))
      goto LAB_01505d30;
    }
    uVar2 = FUN_01a4f680(&local_50,6);
    if ((uVar2 & 1) != 0) {
      local_34 = 6;
    }
    uVar2 = FUN_01a4f680(&local_50,7);
    if ((uVar2 & 1) != 0) {
      local_34 = 7;
      uVar2 = FUN_0150657c(param_1,param_2);
      if (((uVar2 & 1) != 0) && (uVar2 = FUN_01505780(param_1,lVar4), (uVar2 & 1) != 0))
      goto LAB_01505d30;
    }
    uVar3 = 0;
  }
  else {
    local_34 = 2;
    uVar2 = FUN_01505d50(param_1,param_2);
    if (((uVar2 & 1) == 0) || (uVar2 = FUN_01505780(param_1,lVar4), (uVar2 & 1) == 0))
    goto LAB_01505ba8;
LAB_01505d30:
    uVar3 = 1;
  }
  return uVar3;
}

