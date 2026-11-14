
int FUN_015371f0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  long local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  long local_a8;
  long local_a0;
  undefined *local_98;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  int local_64;
  
  local_78 = 0;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar11 = &DAT_055c04a0;
  }
  else {
    puVar11 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar5 = FUN_006bd550(*puVar11,0);
      puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar11 = &DAT_055c04a0;
      }
    }
  }
  local_74 = *(undefined4 *)(puVar11 + 7);
  local_70 = FUN_017baf44();
  puVar4 = PTR_DAT_04bb43c0;
  local_a8 = param_1 + 8;
  local_a0 = param_1 + 0x18;
  local_80 = PTR_DAT_04bb3140 + 0x10;
  local_70 = local_70 & 1;
  iVar2 = *(int *)(param_1 + 0x10);
  local_8c = *(int *)(param_1 + 0x14);
  iVar13 = *(int *)PTR_DAT_04bb3238;
  local_88 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_84 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_98 = PTR_DAT_04bb2010 + 0x10;
  iVar5 = *(int *)(param_1 + 0x24) + 1;
  if (iVar5 != local_8c) {
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    local_90 = iVar2;
    do {
      puVar7 = (undefined4 *)FUN_01a5190c(&local_80,0,&local_98,0);
      local_b0 = *puVar7;
      local_ac = puVar7[1];
      piVar8 = (int *)FUN_014fbd50(&local_80,0,&local_98);
      iVar3 = *piVar8;
      lVar12 = *(long *)puVar4;
      uVar6 = FUN_0277d6c4(&local_b0);
      lVar10 = *(long *)puVar4;
      if (lVar10 == 0) {
LAB_015374ec:
        return *(int *)PTR_DAT_04bb3238;
      }
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((*(uint *)(lVar12 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_015374ec;
      local_b8 = 0;
      local_c0 = local_b0;
      uStack_bc = local_ac;
      local_c8 = puVar1;
      uVar6 = FUN_0277d6c4(&local_c0);
      if (*(long *)puVar4 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(&local_b0);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if (uVar6 < *(uint *)(lVar10 + 0x1d8)) {
            lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8);
            if (lVar10 != 0) {
              local_b8 = lVar10;
            }
          }
        }
      }
      local_64 = FUN_01ae7550(&local_c8);
      if ((5 < local_64 - 1U) || (iVar3 == 0)) goto LAB_015374ec;
      if ((short)local_88 == -2) {
        local_88 = local_b0;
        uStack_84 = local_ac;
        iVar13 = iVar3;
      }
      else {
        uVar9 = FUN_0277d7b4(&local_88,&local_b0);
        if (((uVar9 & 1) == 0) || (iVar13 != iVar3)) goto LAB_015374ec;
      }
      if (local_90 < *(int *)(local_a0 + 8)) {
        local_90 = local_90 + 1;
      }
      else {
        local_90 = *(int *)(local_a8 + 8);
        local_8c = local_8c + 1;
      }
    } while ((iVar2 != local_90) || (iVar5 != local_8c));
  }
  return iVar13;
}

