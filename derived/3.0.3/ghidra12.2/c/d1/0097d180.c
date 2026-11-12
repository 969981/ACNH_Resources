
undefined8 FUN_0097d180(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char *pcVar9;
  long lVar10;
  uint uVar11;
  undefined *local_a8;
  uint local_a0;
  uint local_9c;
  uint local_94 [12];
  byte local_64;
  byte local_63;
  byte local_62;
  byte local_61;
  
  puVar4 = PTR_DAT_04bb5d20;
  puVar3 = PTR_DAT_04bb46c8;
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar11 = *(uint *)(param_1 + 0x14);
  local_a8 = PTR_DAT_04bb2010 + 0x10;
  uVar1 = *(int *)(param_1 + 0x24) + 1;
  if (uVar1 != uVar11) {
    local_a0 = uVar2;
    local_9c = uVar11;
    do {
      uVar5 = local_a0;
      if (*(long *)PTR_DAT_04bb27c8 == 0) {
        return 1;
      }
      lVar10 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90);
      if (lVar10 == 0) {
        return 1;
      }
      if ((int)local_a0 < 0) {
        return 1;
      }
      if ((int)uVar11 < 0) {
        return 1;
      }
      if (*(uint *)(lVar10 + 0x38) <= local_a0 || *(uint *)(lVar10 + 0x3c) <= uVar11) {
        return 1;
      }
      FUN_00962530(lVar10,&local_a8,local_94);
      bVar8 = local_61;
      bVar7 = local_62;
      bVar6 = local_63;
      local_94[0] = (uint)local_64;
      lVar10 = FUN_009807cc(*(long *)puVar3 + 8,local_94[0]);
      if (((lVar10 != 0) &&
          (pcVar9 = (char *)FUN_009823a0(lVar10,0xc,0x9cb82a1e,*(undefined8 *)puVar4),
          pcVar9 != (char *)0x0)) && (*pcVar9 != '\0')) {
        return 1;
      }
      local_94[0] = (uint)bVar6;
      lVar10 = FUN_009807cc(*(long *)puVar3 + 8,local_94[0]);
      if (((lVar10 != 0) &&
          (pcVar9 = (char *)FUN_009823a0(lVar10,0xc,0x9cb82a1e,*(undefined8 *)puVar4),
          pcVar9 != (char *)0x0)) && (*pcVar9 != '\0')) {
        return 1;
      }
      local_94[0] = (uint)bVar7;
      lVar10 = FUN_009807cc(*(long *)puVar3 + 8,local_94[0]);
      if (((lVar10 != 0) &&
          (pcVar9 = (char *)FUN_009823a0(lVar10,0xc,0x9cb82a1e,*(undefined8 *)puVar4),
          pcVar9 != (char *)0x0)) && (*pcVar9 != '\0')) {
        return 1;
      }
      local_94[0] = (uint)bVar8;
      lVar10 = FUN_009807cc(*(long *)puVar3 + 8,local_94[0]);
      if (((lVar10 != 0) &&
          (pcVar9 = (char *)FUN_009823a0(lVar10,0xc,0x9cb82a1e,*(undefined8 *)puVar4),
          pcVar9 != (char *)0x0)) && (*pcVar9 != '\0')) {
        return 1;
      }
      if ((int)uVar5 < *(int *)(param_1 + 0x20)) {
        local_a0 = uVar5 + 1;
      }
      else {
        local_a0 = *(uint *)(param_1 + 0x10);
        uVar11 = uVar11 + 1;
        local_9c = uVar11;
      }
    } while ((uVar2 != local_a0) || (uVar1 != uVar11));
  }
  return 0;
}

