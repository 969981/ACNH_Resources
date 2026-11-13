
/* WARNING: Removing unreachable block (ram,0x013188ec) */
/* WARNING: Removing unreachable block (ram,0x013188dc) */
/* WARNING: Removing unreachable block (ram,0x013188f8) */
/* WARNING: Removing unreachable block (ram,0x01318a04) */

undefined1 FUN_013188b0(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 local_30;
  undefined1 local_2c;
  
  local_30 = 0;
  lVar6 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar6 == 0) {
    return 0;
  }
  lVar5 = *(long *)(lVar6 + 0xa8);
  if (lVar5 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < *(int *)(lVar5 + 0x18) || *(int *)(lVar5 + 0x28) < iVar2) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 < *(int *)(lVar5 + 0x1c)) {
    return 0;
  }
  if (*(int *)(lVar5 + 0x2c) < iVar3) {
    return 0;
  }
  lVar6 = *(long *)(lVar6 + 0xb0);
  if (lVar6 == 0) goto LAB_013189e0;
  uVar8 = iVar2 - *(int *)(lVar6 + 0x28);
  uVar1 = *(uint *)(lVar6 + 0x18);
  uVar4 = iVar3 - *(int *)(lVar6 + 0x2c);
  if ((uVar8 < uVar1 && uVar4 <= *(uint *)(lVar6 + 0x1c)) &&
      (uVar1 <= uVar8 || *(uint *)(lVar6 + 0x1c) != uVar4)) {
    uVar8 = uVar8 + uVar1 * uVar4;
LAB_013189ac:
    if (*(uint *)(lVar6 + 0x30) <= uVar8) {
      uVar8 = 0;
    }
    puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + (long)(int)uVar8 * 0x68);
  }
  else {
    if (*(char *)(lVar6 + 0x88) != '\0') {
      uVar1 = iVar2 - *(int *)(lVar6 + 0x98);
      uVar4 = iVar3 - *(int *)(lVar6 + 0x9c);
      uVar8 = *(uint *)(lVar6 + 0xa0);
      if ((uVar1 < uVar8 && uVar4 <= *(uint *)(lVar6 + 0xa4)) &&
          (uVar8 <= uVar1 || *(uint *)(lVar6 + 0xa4) != uVar4)) {
        uVar8 = uVar1 + uVar8 * uVar4 + *(int *)(lVar6 + 0x8c);
        goto LAB_013189ac;
      }
    }
    puVar7 = &DAT_051a50f0;
  }
  if ((*(byte *)((long)puVar7 + 0xd) & 1) == 0) {
    return 0;
  }
LAB_013189e0:
  FUN_01309ec4(&local_30);
  return local_2c;
}

