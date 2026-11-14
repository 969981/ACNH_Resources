
/* WARNING: Removing unreachable block (ram,0x01d30440) */

undefined8 FUN_01d303e0(long param_1,uint param_2,undefined8 param_3)

{
  long *plVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined *local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  undefined **local_1a0;
  undefined **local_198;
  long *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined **local_170;
  undefined1 *puStack_168;
  undefined4 local_160;
  undefined1 local_15c [63];
  undefined1 local_11d;
  undefined **local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined1 local_c0 [8];
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long local_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  
  uVar6 = FUN_01d30900(param_1,param_3);
  if ((((uVar6 & 1) == 0) || (*(undefined1 *)(param_1 + 0x2c) = 0, DAT_05574040 == 0)) ||
     (local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,1),
     ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) {
    return 0;
  }
  lVar7 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
  if (499 < (param_2 & 0xffff)) {
    return 0;
  }
  if (lVar7 == 0) {
    return 0;
  }
  lVar7 = lVar7 + (ulong)(param_2 & 0xffff) * 0x2d48;
  if ((*(long **)(lVar7 + 0x4cc38) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x4cc38), puVar8 == (undefined8 *)0x0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)*puVar8)();
    uVar6 = uVar6 & 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x72) = 0;
  local_1a8 = 0x46;
  local_11d = 0;
  local_1b0 = (undefined1 *)(param_1 + 0x2d);
  local_190 = (long *)CONCAT44(local_190._4_4_,0x18);
  local_1b8 = PTR_DAT_04bb2030 + 0x10;
  local_160 = 0x40;
  puStack_168 = local_15c;
  local_108 = 0x40;
  local_c5 = 0;
  local_170 = &PTR_LAB_048fb9f8;
  puStack_110 = local_104;
  local_118 = &PTR_LAB_048fb9f8;
  local_1a0 = (undefined **)&DAT_04a542f0;
  plVar1 = &local_90;
  if (&local_90 <= local_c0 + 2) {
    plVar1 = (long *)(local_c0 + 2);
  }
  local_c0 = (undefined1  [8])0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_198 = (undefined **)local_c0;
  memset(local_c0,0,(size_t)((long)plVar1 + (-0xe0 - (long)&local_1a0)));
  local_90._0_4_ = 0x17;
  local_88 = *(long *)(lVar7 + 0x4cc20) + *(long *)(lVar7 + 0x4cc18) + 0x1194;
  memset(local_c0,0,((ulong)((long)plVar1 + ~(ulong)local_c0) & 0xfffffffffffffffe) + 2);
  local_190._0_5_ = (uint5)(uint)local_190;
  local_188 = 0xffffffff;
  uStack_180 = 0xffffffff00000000;
  local_178 = 0xffffffff;
  local_15c[0] = 0;
  local_104[0] = 0;
  local_70 = 0;
  local_58 = 1;
  local_54 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_80 = PTR_DAT_04bc0cd8 + 0x10;
  uStack_78 = 0;
  FUN_02906b00(&local_80,&local_1a0,&local_90);
  uVar9 = (*(code *)local_1a0[3])(&local_1a0);
  (**(code **)(local_1b8 + 0x18))(&local_1b8);
  iVar5 = FUN_038d4f60(&local_80,local_1b0,local_1a8,uVar9,0xffffffff);
  local_90 = CONCAT44(local_90._4_4_,iVar5);
  if (iVar5 != 0) {
    uVar9 = 0;
    *local_1b0 = 0;
    goto joined_r0x01d308f8;
  }
  *(uint *)(param_1 + 0x54c) =
       (uint)*(ushort *)(*(long *)(lVar7 + 0x4cc20) + *(long *)(lVar7 + 0x4cc18) + 0x1192);
  local_80 = PTR_DAT_04bb4958;
  *(undefined4 *)(param_1 + 0x550) =
       *(undefined4 *)(*(long *)(lVar7 + 0x4cc20) + *(long *)(lVar7 + 0x4cc18) + 0x11cc);
  local_80 = *(undefined **)local_80;
  if (((local_80 != (undefined *)0x0) &&
      (local_1b8 = DAT_053e67f0, DAT_053e67f0 != (undefined *)0x0)) &&
     (local_90 = DAT_053f9928, DAT_053f9928 != 0)) {
    local_1a0 = &local_80;
    local_198 = &local_1b8;
    local_190 = &local_90;
    *(undefined4 *)(param_1 + 0x28) = 1;
    uVar10 = FUN_01d30a90(&local_1a0,param_1 + 0x10,param_1 + 0x14,param_2);
    if ((uVar10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      lVar11 = *(long *)(lVar7 + 0x4cc20) + *(long *)(lVar7 + 0x4cc18);
      if (*(short *)(lVar11 + 0xc) != -1) {
        *(undefined4 *)(param_1 + 0x28) = 2;
        uVar10 = FUN_01d30a90(&local_1a0,param_1 + 0x1c,param_1 + 0x20,
                              *(undefined2 *)
                               (*(long *)(lVar7 + 0x4cc20) + *(long *)(lVar7 + 0x4cc18) + 0xc));
        if ((uVar10 & 1) == 0) goto LAB_01d307cc;
        *(undefined4 *)(param_1 + 0x24) = 1;
        lVar11 = *(long *)(lVar7 + 0x4cc20) + *(long *)(lVar7 + 0x4cc18);
      }
      *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)(lVar11 + 0x11d2);
      local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,(int)*(char *)(lVar11 + 0x11d4));
      *(char *)(param_1 + 0x13f) = *(char *)(lVar11 + 0x11d4);
      local_198 = (undefined **)(lVar7 + 0x4e6f8);
      local_190 = (long *)CONCAT71(local_190._1_7_,1);
      if (*(long **)(lVar7 + 0x4e720) == (long *)0x0) {
        uVar4 = 0;
      }
      else {
        puVar8 = (undefined8 *)**(long **)(lVar7 + 0x4e720);
        uVar4 = 0;
        if (puVar8 != (undefined8 *)0x0) {
          uVar4 = (**(code **)*puVar8)();
        }
      }
      puVar3 = PTR_DAT_04bb7668;
      local_190 = (long *)(CONCAT62(local_190._2_6_,CONCAT11(uVar4,local_190._0_1_)) &
                          0xffffffffffff01ff);
      local_1a0 = (undefined **)(PTR_DAT_04bb7668 + 0x10);
      uVar2 = *(ushort *)(*(long *)(lVar7 + 0x4e708) + *(long *)(lVar7 + 0x4e700) + 0x153c);
      FUN_02640184(&local_1a0);
      if ((uVar2 & 1) != 0) {
        *(char *)(param_1 + 0x54a) = *(char *)(param_1 + 0x54a) + '\x01';
      }
      local_198 = (undefined **)(lVar7 + 0x4ed50);
      local_190 = (long *)CONCAT71(local_190._1_7_,1);
      if (*(long **)(lVar7 + 0x4ed78) == (long *)0x0) {
        uVar4 = 0;
      }
      else {
        puVar8 = (undefined8 *)**(long **)(lVar7 + 0x4ed78);
        uVar4 = 0;
        if (puVar8 != (undefined8 *)0x0) {
          uVar4 = (**(code **)*puVar8)();
        }
      }
      local_190 = (long *)(CONCAT62(local_190._2_6_,CONCAT11(uVar4,local_190._0_1_)) &
                          0xffffffffffff01ff);
      local_1a0 = (undefined **)(puVar3 + 0x10);
      uVar2 = *(ushort *)(*(long *)(lVar7 + 0x4ed60) + *(long *)(lVar7 + 0x4ed58) + 0x153c);
      FUN_02640184(&local_1a0);
      if ((uVar2 & 1) != 0) {
        *(char *)(param_1 + 0x54a) = *(char *)(param_1 + 0x54a) + '\x01';
      }
      uVar9 = 1;
      lVar11 = *(long *)(lVar7 + 0x4cc20) + *(long *)(lVar7 + 0x4cc18);
      *(char *)(param_1 + 0x140) =
           (char)(((uint)*(byte *)(lVar11 + 0x11d6) + (uint)*(byte *)(lVar11 + 0x11d5) * 0x3c) /
                 0x1e) + '\x01';
      goto joined_r0x01d308f8;
    }
  }
LAB_01d307cc:
  uVar9 = 0;
joined_r0x01d308f8:
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar7 + 0x4cc38) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x4cc38) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return uVar9;
}

