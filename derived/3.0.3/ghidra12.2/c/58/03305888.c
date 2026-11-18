
/* WARNING: Removing unreachable block (ram,0x033058e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_03305888(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  float fVar12;
  undefined **local_130;
  long lStack_128;
  undefined1 *local_120;
  undefined8 uStack_118;
  undefined *local_110;
  undefined ***local_108;
  undefined **local_100;
  long lStack_f8;
  undefined1 *local_f0;
  undefined8 uStack_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined *local_d0;
  undefined ***local_c8;
  undefined **local_c0;
  long local_b8;
  undefined1 *puStack_b0;
  undefined8 local_a8;
  undefined *local_a0;
  long *local_98;
  undefined8 local_70;
  undefined *puStack_68;
  undefined *local_60;
  float local_58;
  float fStack_54;
  
  if (*(long *)(param_1 + 0x510) != 0) {
    FUN_032bc5cc();
    plVar6 = *(long **)(param_1 + 0x510);
    *(undefined8 *)(param_1 + 0x510) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  local_e0 = (undefined8 *)((ulong)local_e0 & 0xffffffff00000000);
  puVar1 = (undefined8 *)(param_1 + 0x4e0);
  plVar6 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x170,8);
  puVar2 = PTR_DAT_04bc9338;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  *plVar6 = (long)(puVar2 + 0x10);
  plVar6[1] = 0;
  puVar2 = PTR_DAT_04bc8ea0 + 0x10;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[8] = 0;
  plVar6[9] = (long)puVar2;
  puVar2 = PTR_DAT_04bc9340;
  *(undefined1 *)(plVar6 + 0xc) = 0;
  local_d0 = puVar2 + 0x10;
  plVar6[0xd] = (long)local_d0;
  plVar6[0xe] = 0;
  local_a0 = PTR_DAT_04bc9348 + 0x10;
  plVar6[0x13] = (long)local_a0;
  plVar6[0x14] = 0;
  puVar4 = PTR_DAT_04bc9350;
  plVar6[0x25] = (long)local_d0;
  plVar6[0x26] = 0;
  *(undefined1 *)((long)plVar6 + 0x16c) = 0;
  plVar6[0x19] = (long)(puVar4 + 0x10);
  plVar6[0x1a] = 0;
  plVar6[0x1f] = (long)(puVar4 + 0x10);
  plVar6[0x20] = 0;
  *(undefined4 *)((long)plVar6 + 0x15b) = 0;
  *(undefined4 *)(plVar6 + 0x2b) = 0;
  *(undefined2 *)((long)plVar6 + 0x15f) = 0x101;
  *(undefined8 *)((long)plVar6 + 0x164) = 0x7fffffff00000000;
  plVar7 = *(long **)(param_1 + 0x510);
  *(long **)(param_1 + 0x510) = plVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  local_d8 = 0;
  local_d4 = 0;
  puStack_68 = PTR_DAT_04bc8e68 + 0x10;
  local_98 = (long *)0x0;
  local_60 = PTR_DAT_04bb2120;
  local_70 = 0;
  lVar9 = *(long *)PTR_DAT_04bc1118;
  uVar3 = *(uint *)(*(long *)(lVar9 + 0x20) + 0x1050);
  if ((uVar3 < 10) && ((0x3fdU >> (ulong)(uVar3 & 0x1f) & 1) != 0)) {
    local_d8 = *(undefined4 *)(&DAT_0418d864 + (long)(int)uVar3 * 4);
  }
  ppuVar11 = &PTR_LAB_04b1dd10;
  local_c8 = &local_c0;
  local_a8 = 0;
  puStack_b0 = &LAB_03305c90;
  local_c0 = &PTR_LAB_04b1dd10;
  lVar10 = *(long *)(*(long *)(lVar9 + 0x20) + 0x6e0);
  bVar5 = false;
  if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + 8);
    bVar5 = false;
    if (lVar10 != 0) {
      bVar5 = *(int *)(lVar10 + 0x15d4) == 0;
    }
  }
  plVar6 = *(long **)(param_1 + 0x510);
  fVar12 = 400.0;
  if (!(bool)(bVar5 & *(char *)(lVar9 + 0x498) != '\0')) {
    fVar12 = 466.0;
  }
  _local_58 = CONCAT44(fVar12 + -400.0,fVar12);
  local_e0 = puVar1;
  local_b8 = param_1;
  if (*(char *)((long)plVar6 + 0x15e) == '\0') {
    (**(code **)(*plVar6 + 0x60))(plVar6,&local_e0);
    (**(code **)(*plVar6 + 0x68))(plVar6,&local_e0);
    (**(code **)(*plVar6 + 0x70))(plVar6,&local_e0);
    (**(code **)(*plVar6 + 0x78))(plVar6,&local_e0);
    (**(code **)(*plVar6 + 0x90))(plVar6,&local_e0);
    (**(code **)(*plVar6 + 0x80))(plVar6,&local_e0);
    (**(code **)(*plVar6 + 0x88))(plVar6,&local_e0);
    (**(code **)(*plVar6 + 0x98))(plVar6,&local_e0);
    *(undefined1 *)((long)plVar6 + 0x15e) = 1;
    plVar6 = *(long **)(param_1 + 0x510);
  }
  local_110 = puVar2 + 0x10;
  local_108 = &local_100;
  local_f0 = &LAB_033060e0;
  uStack_e8 = 0;
  plVar7 = (long *)plVar6[0x26];
  local_100 = &PTR_LAB_04b1dd10;
  lStack_f8 = param_1;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))(plVar7);
    if (local_108 == (undefined ***)0x0) {
      plVar6[0x26] = 0;
      goto LAB_03305bbc;
    }
    ppuVar11 = *local_108;
  }
  lVar9 = (*(code *)ppuVar11[3])(local_108,plVar6 + 0x27);
  plVar6[0x26] = lVar9;
  if (local_108 != (undefined ***)0x0) {
    (*(code *)(*local_108)[1])();
  }
LAB_03305bbc:
  lVar9 = *(long *)(param_1 + 0x510);
  local_120 = &LAB_03306258;
  uStack_118 = 0;
  local_130 = &PTR_LAB_04b1dd98;
  plVar6 = *(long **)(lVar9 + 0xd0);
  lStack_128 = param_1;
  if ((plVar6 == (long *)0x0) ||
     ((**(code **)(*plVar6 + 8))(plVar6), &local_130 != (undefined ***)0x0)) {
    uVar8 = (*(code *)local_130[3])(&local_130,lVar9 + 0xd8);
    *(undefined8 *)(lVar9 + 0xd0) = uVar8;
    if (&local_130 != (undefined ***)0x0) {
      (*(code *)local_130[1])();
    }
  }
  else {
    *(undefined8 *)(lVar9 + 0xd0) = 0;
  }
  local_70 = 0;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  if (local_c8 != (undefined ***)0x0) {
    (*(code *)(*local_c8)[1])();
  }
  return;
}

