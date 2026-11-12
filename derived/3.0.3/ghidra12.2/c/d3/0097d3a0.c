
/* WARNING: Removing unreachable block (ram,0x0097d480) */

undefined8 FUN_0097d3a0(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined *local_98;
  uint local_90;
  uint local_8c;
  undefined1 auStack_84 [48];
  char local_54;
  char local_53;
  char local_52;
  char local_51;
  
  puVar3 = PTR_DAT_04bb27c8;
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar6 = *(uint *)(param_1 + 0x14);
  local_98 = PTR_DAT_04bb2010 + 0x10;
  uVar1 = *(int *)(param_1 + 0x24) + 1;
  if (uVar1 != uVar6) {
    lVar5 = *(long *)PTR_DAT_04bb27c8;
    local_90 = uVar2;
    local_8c = uVar6;
    do {
      uVar4 = local_90;
      if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x90), lVar5 == 0)) {
        return 1;
      }
      if ((int)local_90 < 0) {
        return 1;
      }
      if (((int)uVar6 < 0) || (*(uint *)(lVar5 + 0x38) <= local_90)) {
        return 1;
      }
      if (*(uint *)(lVar5 + 0x3c) <= uVar6) {
        return 1;
      }
      FUN_00962530(lVar5,&local_98,auStack_84);
      lVar5 = *(long *)puVar3;
      if (local_54 == ',') {
        return 1;
      }
      if (local_53 == ',') {
        return 1;
      }
      if (local_52 == ',') {
        return 1;
      }
      if (local_51 == ',') {
        return 1;
      }
      if ((int)uVar4 < *(int *)(param_1 + 0x20)) {
        local_90 = uVar4 + 1;
      }
      else {
        local_90 = *(uint *)(param_1 + 0x10);
        uVar6 = uVar6 + 1;
        local_8c = uVar6;
      }
    } while ((uVar2 != local_90) || (uVar1 != uVar6));
  }
  return 0;
}

