
/* WARNING: Removing unreachable block (ram,0x01507148) */
/* WARNING: Removing unreachable block (ram,0x01506ff8) */
/* WARNING: Removing unreachable block (ram,0x01507030) */
/* WARNING: Removing unreachable block (ram,0x01507180) */

undefined8 FUN_01506f24(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  
  local_40 = 0;
  lVar3 = *(long *)PTR_DAT_04bb2720;
  if (lVar3 == 0) {
    puVar4 = &DAT_055c04a0;
  }
  else {
    puVar4 = &DAT_055c04a0;
    if (*(long *)(lVar3 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar3 + 0x338));
      iVar1 = FUN_006bd550(*puVar4,0);
      puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar4 = &DAT_055c04a0;
      }
    }
  }
  local_3c = *(undefined4 *)(puVar4 + 7);
  local_38 = FUN_017baf44();
  local_38 = local_38 & 1;
  local_48 = PTR_DAT_04bb3140 + 0x10;
  FUN_01a4f680(&local_48,0);
  FUN_01a4f680(&local_48,1);
  uVar2 = FUN_01a4f680(&local_48,2);
  if ((((((uVar2 & 1) == 0) || (uVar2 = FUN_01505d50(param_1,param_2), (uVar2 & 1) == 0)) &&
       ((uVar2 = FUN_01a4f680(&local_48,3), (uVar2 & 1) == 0 ||
        (uVar2 = FUN_01505d50(param_1,param_2), (uVar2 & 1) == 0)))) &&
      ((uVar2 = FUN_01a4f680(&local_48,4), (uVar2 & 1) == 0 ||
       (uVar2 = FUN_01505d50(param_1,param_2), (uVar2 & 1) == 0)))) &&
     ((uVar2 = FUN_01a4f680(&local_48,5), (uVar2 & 1) == 0 ||
      (uVar2 = FUN_01505d50(param_1,param_2), (uVar2 & 1) == 0)))) {
    FUN_01a4f680(&local_48,6);
    uVar2 = FUN_01a4f680(&local_48,7);
    if (((uVar2 & 1) == 0) || (uVar2 = FUN_0150657c(param_1,param_2), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  return 1;
}

