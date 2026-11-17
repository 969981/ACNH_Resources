
void FUN_0305f820(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  byte bVar15;
  undefined8 uVar16;
  undefined *local_118;
  char *pcStack_110;
  undefined *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined1 local_cc [4];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [4];
  undefined4 local_ac;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined4 local_a4;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  
  puVar6 = PTR_DAT_04bb2718;
  puVar5 = PTR_DAT_04bb2020;
  uVar16 = *(undefined8 *)(param_1 + 0x98);
  local_d8 = PTR_DAT_04bc5820 + 0x10;
  local_d0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_c8 = 0xffffffff;
  local_cc[2] = *(byte *)(param_1 + 0x1f8);
  local_100 = "CommandSelectSeq";
  if (7 < local_cc[2]) {
    local_cc[2] = 0xff;
  }
  local_cc._0_2_ = 1;
  local_108 = puVar1;
  lVar9 = FUN_02c26914(uVar16,&local_108,param_1,&local_d8);
  *(long *)(param_1 + 0x230) = lVar9;
  *(undefined ***)(lVar9 + 0x218) = &PTR_LAB_04af8148;
  *(undefined1 **)(lVar9 + 0x228) = &LAB_0305f0ac;
  lVar14 = *(long *)puVar6;
  *(long *)(lVar9 + 0x220) = param_1;
  *(undefined8 *)(lVar9 + 0x230) = 0;
  local_d0 = *(undefined4 *)(*(long *)(lVar14 + 0x418) + 0xc);
  local_cc._0_3_ = 0xff0001;
  local_c8 = 0xffffffff;
  local_d8 = PTR_DAT_04bc5008 + 0x10;
  lVar9 = *(long *)(param_1 + 0x218);
  local_b8 = (undefined4)lVar9;
  uStack_b4 = (undefined4)((ulong)lVar9 >> 0x20);
  local_100 = "/L_ItemBalloon_00";
  local_108 = puVar1;
  uVar10 = FUN_02bcb7b8(**(long **)(lVar9 + 0x3f8) + 0x38,&local_108);
  local_c0 = (undefined4)uVar10;
  uStack_bc = (undefined4)((ulong)uVar10 >> 0x20);
  local_100 = "NameWindowCtrlSeq";
  local_108 = puVar1;
  uVar10 = FUN_02bcffa8(uVar16,&local_108,param_1,&local_d8);
  lVar9 = *(long *)puVar6;
  *(undefined8 *)(param_1 + 0x238) = uVar10;
  puVar6 = PTR_DAT_04bb3170;
  local_d0 = *(undefined4 *)(*(long *)(lVar9 + 0x418) + 0xc);
  local_cc._0_2_ = 1;
  local_c8 = 0xffffffff;
  local_d8 = PTR_DAT_04bc5040 + 0x10;
  FUN_007ef010(auStack_b0,PTR_DAT_04bb3170);
  local_a8 = 0x100;
  local_a6 = 1;
  uStack_c4 = 1;
  local_c0 = 1;
  bVar15 = *(byte *)(param_1 + 0x1f8);
  local_a4 = 0;
  uStack_bc = 0;
  local_b8 = 0;
  local_ac = 0xffffffff;
  uStack_b4 = 0;
  if (7 < bVar15) {
    bVar15 = 0xff;
  }
  local_100 = "MyDesignListSeq";
  local_cc[2] = bVar15;
  local_108 = puVar1;
  uVar10 = FUN_02bd043c(uVar16,&local_108,param_1,&local_d8);
  *(undefined8 *)(param_1 + 0x240) = uVar10;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    puVar12 = malloc(0xf8);
  }
  else {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar11 = (long *)(lVar9 + 8);
    if (lVar14 != 0) {
      plVar11 = (long *)(lVar14 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) goto LAB_0305fa90;
    puVar12 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0xf8,8);
  }
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = 10;
    uVar4 = *(undefined2 *)puVar6;
    *(undefined2 *)(puVar12 + 3) = uVar4;
    *(undefined2 *)(puVar12 + 6) = uVar4;
    *(undefined2 *)(puVar12 + 9) = uVar4;
    *(undefined2 *)(puVar12 + 0xc) = uVar4;
    *(undefined2 *)(puVar12 + 0xf) = uVar4;
    *(undefined2 *)(puVar12 + 0x12) = uVar4;
    *(undefined2 *)(puVar12 + 0x15) = uVar4;
    *(undefined2 *)(puVar12 + 0x18) = uVar4;
    *(undefined2 *)(puVar12 + 0x1b) = uVar4;
    *(undefined2 *)(puVar12 + 0x1e) = uVar4;
    *(undefined4 *)(param_1 + 0x220) = 10;
    *(undefined8 **)(param_1 + 0x228) = puVar12 + 1;
  }
LAB_0305fa90:
  local_78 = 0;
  local_70[0] = 0;
  local_80 = 0;
  FUN_007ef010(local_70,PTR_DAT_04bb3170);
  uVar3 = *(uint *)(param_1 + 0x220);
  if (0 < (int)uVar3) {
    lVar9 = 0;
    do {
      puVar12 = (undefined8 *)(*(long *)(param_1 + 0x228) + lVar9);
      lVar9 = lVar9 + 0x18;
      *puVar12 = local_80;
      puVar12[1] = local_78;
      *(undefined2 *)(puVar12 + 2) = (undefined2)local_70[0];
    } while ((ulong)uVar3 * 0x18 != lVar9);
  }
  puVar12 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x218) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar8 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar12 != (undefined8 *)0x0) &&
     (uVar13 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc4e58), (uVar13 & 1) != 0)) {
    uVar13 = 0;
    puVar1 = PTR_DAT_04bc7e60 + 0x10;
    do {
      FUN_0071b954(&local_d8,"/L_MyDesignBtn_%02d/L_MyDesign_00",uVar13 & 0xffffffff);
      pcVar7 = local_100;
      local_f8 = 0xffffffff;
      local_e0 = 1;
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = (char *)CONCAT44(1,*(undefined4 *)
                                      (*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc));
      uVar10 = local_100;
      bVar15 = *(byte *)(param_1 + 0x1f8);
      if (7 < bVar15) {
        bVar15 = 0xff;
      }
      local_100._7_1_ = SUB81(pcVar7,7);
      local_100._0_7_ = CONCAT16(bVar15,(int6)uVar10);
      local_108 = puVar1;
      local_f0 = FUN_030647d4(*(long *)(*(long *)(param_1 + 0x218) + uVar13 * 8 + 0x570) + 0x38,
                              &local_d8);
      pcStack_110 = "MyDesign2DPreviewCtrlSeq";
      local_118 = puVar5 + 0x10;
      uVar10 = FUN_0305fc74(uVar16,&local_118,param_1,&local_108);
      uVar2 = uVar13;
      if (*(uint *)(param_1 + 0x220) <= uVar13) {
        uVar2 = 0;
      }
      uVar13 = uVar13 + 1;
      *(undefined8 *)(*(long *)(param_1 + 0x228) + uVar2 * 0x18 + 8) = uVar10;
    } while (uVar13 != 10);
  }
  return;
}

