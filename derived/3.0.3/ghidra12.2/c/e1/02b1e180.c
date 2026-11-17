
/* WARNING: Removing unreachable block (ram,0x02b1e340) */
/* WARNING: Removing unreachable block (ram,0x02b1e1d8) */
/* WARNING: Removing unreachable block (ram,0x02b1e2f4) */
/* WARNING: Removing unreachable block (ram,0x02b1e370) */

undefined8 FUN_02b1e180(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined *local_60;
  int local_58;
  int local_54;
  
  puVar3 = PTR_DAT_04bb2010;
  lVar7 = *(long *)PTR_DAT_04bb5c90;
  uVar5 = *(uint *)(param_2 + 8);
  if ((uVar5 >> 1 & 1) == 0) {
    lVar6 = param_2 + 0x18;
  }
  else {
    lVar6 = param_2 + 0x350;
  }
  local_58 = *(int *)(lVar6 + 0x10);
  local_54 = *(int *)(lVar6 + 0x14);
  iVar2 = *(int *)(lVar6 + 0x10);
  local_60 = PTR_DAT_04bb2010 + 0x10;
  iVar1 = *(int *)(lVar6 + 0x24) + 1;
  if (iVar2 != local_58 || iVar1 != local_54) {
    do {
      uVar4 = FUN_02a7c60c(param_2,&local_60);
      if (((((uVar4 & 1) != 0) && (*(int *)(lVar7 + 0x28) <= local_58)) &&
          (local_58 <= *(int *)(lVar7 + 0x38))) &&
         ((*(int *)(lVar7 + 0x2c) <= local_54 && (local_54 <= *(int *)(lVar7 + 0x3c))))) {
        return 1;
      }
      if (local_58 < *(int *)(lVar6 + 0x20)) {
        local_58 = local_58 + 1;
      }
      else {
        local_54 = local_54 + 1;
        local_58 = *(int *)(lVar6 + 0x10);
      }
    } while (iVar2 != local_58 || iVar1 != local_54);
    uVar5 = *(uint *)(param_2 + 8);
  }
  if ((uVar5 >> 1 & 1) == 0) {
    lVar6 = *(long *)(param_2 + 0xc0);
    if (lVar6 != 0) {
      if ((*(long *)(lVar6 + 0xd8) != 0) && (*(char *)(*(long *)(lVar6 + 0xd8) + 0x48) != '\0')) {
        lVar6 = param_2 + 0x6a8;
        goto LAB_02b1e370;
      }
      if ((*(long *)(lVar6 + 0x90) != 0) && (*(char *)(*(long *)(lVar6 + 0x90) + 0x48) != '\0'))
      goto LAB_02b1e354;
    }
    lVar6 = param_2 + 0x90;
  }
  else {
LAB_02b1e354:
    lVar6 = param_2 + 0x2b8;
LAB_02b1e370:
    lVar6 = lVar6 + 0x28;
  }
  local_60 = puVar3 + 0x10;
  local_58 = *(int *)(lVar6 + 0x10);
  local_54 = *(int *)(lVar6 + 0x14);
  iVar1 = *(int *)(lVar6 + 0x24) + 1;
  iVar2 = *(int *)(lVar6 + 0x10);
  if ((iVar2 != local_58) || (iVar1 != local_54)) {
    do {
      uVar4 = FUN_02a7c2e0(param_2,&local_60);
      if (((((uVar4 & 1) != 0) && (*(int *)(lVar7 + 0x28) <= local_58)) &&
          (local_58 <= *(int *)(lVar7 + 0x38))) &&
         ((*(int *)(lVar7 + 0x2c) <= local_54 && (local_54 <= *(int *)(lVar7 + 0x3c))))) {
        return 2;
      }
      if (local_58 < *(int *)(lVar6 + 0x20)) {
        local_58 = local_58 + 1;
      }
      else {
        local_54 = local_54 + 1;
        local_58 = *(int *)(lVar6 + 0x10);
      }
    } while (iVar2 != local_58 || iVar1 != local_54);
  }
  return 0;
}

