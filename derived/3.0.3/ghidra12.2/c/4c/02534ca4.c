
undefined8
FUN_02534ca4(byte *param_1,long *param_2,undefined8 *param_3,ulong param_4,ushort param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte bVar11;
  long lVar12;
  long *plVar13;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined2 uStack_b4;
  undefined1 uStack_b2;
  undefined4 uStack_b1;
  undefined1 uStack_ad;
  undefined4 uStack_ac;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  byte local_78;
  undefined5 local_77;
  undefined2 uStack_72;
  undefined4 uStack_70;
  ushort local_6c;
  long *local_68;
  char local_60;
  char local_5f;
  char local_5e;
  undefined4 local_54;
  
  puVar3 = PTR_DAT_04bb3238;
  puVar8 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar8 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_54 = *puVar8;
  FUN_0071c8d0(&local_68,&local_54,PTR_DAT_04bb3238,0);
  plVar13 = local_68;
  if (local_68 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar7 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb3770);
    if ((uVar7 & 1) == 0) {
      local_5f = '\0';
    }
  }
  if (local_68 == (long *)0x0) {
    return 0;
  }
  if (local_60 == '\0') {
    return 0;
  }
  if (local_5f == '\0') {
    return 0;
  }
  if (local_5e == '\0') {
    return 0;
  }
  bVar11 = *param_1;
  local_b8 = *(undefined4 *)puVar3;
  uStack_ad = 0;
  uStack_b1 = 0;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  local_c0 = CONCAT71(local_c0._1_7_,bVar11);
  local_c0 = CONCAT44(1,(undefined4)local_c0);
  uStack_b4 = 1;
  uStack_b2 = 1;
  uVar7 = FUN_02530cec(&local_c0);
  puVar3 = PTR_DAT_04bb43c0;
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  local_78 = 0;
  local_6c = local_6c & 0xfc00;
  if ((short)*param_2 == -2) {
LAB_02534df0:
    local_c0 = *param_2;
    uVar7 = 1;
    local_78 = 1;
    local_b8 = CONCAT31(local_b8._1_3_,5);
  }
  else {
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(param_2);
    if (*(long *)puVar3 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) goto LAB_02534df0;
    }
    uVar7 = 0;
  }
  plVar13 = param_2 + 1;
  if ((short)*plVar13 == -2) {
LAB_02534e6c:
    uVar9 = uVar7 | uVar7 << 3;
    uVar5 = (int)uVar7 + 1;
    uVar7 = (ulong)uVar5;
    *(long *)((long)&local_c0 + uVar9) = *plVar13;
    local_78 = (byte)uVar5;
    *(undefined1 *)((long)&local_b8 + uVar9) = 6;
  }
  else {
    lVar12 = *(long *)puVar3;
    uVar5 = FUN_0277d6c4(plVar13);
    if (*(long *)puVar3 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) goto LAB_02534e6c;
    }
  }
  param_2 = param_2 + 2;
  if ((short)*param_2 != -2) {
    lVar12 = *(long *)puVar3;
    uVar5 = FUN_0277d6c4(param_2);
    if (*(long *)puVar3 == 0) goto LAB_02534f7c;
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_02534f7c;
  }
  *(long *)((long)&local_c0 + (uVar7 | uVar7 << 3)) = *param_2;
  uVar7 = (ulong)local_78;
  bVar4 = 7 < local_78;
  local_78 = local_78 + 1;
  puVar8 = (undefined4 *)((long)&local_b8 + uVar7 * 9);
  if (bVar4) {
    puVar8 = &local_b8;
  }
  *(undefined1 *)puVar8 = 4;
LAB_02534f7c:
  lVar12 = *(long *)puVar3;
  uVar10 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_77 = (undefined5)uVar10;
  uStack_72 = (undefined2)((ulong)uVar10 >> 0x28);
  uStack_70._0_1_ = (undefined1)((ulong)uVar10 >> 0x38);
  uVar5 = FUN_0277d6c4(param_3);
  if (*(long *)puVar3 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      uVar10 = *param_3;
      local_77 = (undefined5)uVar10;
      uStack_72 = (undefined2)((ulong)uVar10 >> 0x28);
      uStack_70._0_1_ = (undefined1)((ulong)uVar10 >> 0x38);
    }
  }
  local_68[0x32c] = local_68[0x31c];
  local_68[0x32d] = local_68[0x31d];
  local_68[0x32e] = local_68[0x31e];
  local_68[0x32f] = local_68[799];
  uVar1 = local_6c & 0xffc0 | (param_5 & 3) << 2;
  uVar2 = uVar1 | 1;
  if ((param_4 & 1) == 0) {
    uVar2 = uVar1;
  }
  local_6c = uVar2 | 2;
  *(undefined4 *)((long)local_68 + 0x19d6) = 0;
  local_68[0x332] = CONCAT44(uStack_ac,CONCAT13(uStack_ad,uStack_b1._1_3_));
  local_68[0x333] = lStack_a8;
  local_68[0x331] = CONCAT17((undefined1)uStack_b1,CONCAT16(uStack_b2,CONCAT24(uStack_b4,local_b8)))
  ;
  local_68[0x330] = local_c0;
  local_68[0x336] = local_90;
  local_68[0x337] = lStack_88;
  local_68[0x334] = local_a0;
  local_68[0x335] = lStack_98;
  local_68[0x338] = local_80;
  *(ulong *)((long)local_68 + 0x19ce) =
       CONCAT26(uVar2,CONCAT42(uStack_70,uStack_72)) | 0x2000000000000;
  local_68[0x339] = CONCAT26(uStack_72,CONCAT51(local_77,local_78));
  if ((*(uint *)(local_68 + 0x302) & 0xfffffff7) != 1) {
    *(ushort *)((long)local_68 + 0x19d4) = *(ushort *)((long)local_68 + 0x19d4) & 0xfffd;
  }
  local_68[0x318] = local_68[0x338];
  local_68[0x319] = local_68[0x339];
  local_68[0x31a] = local_68[0x33a];
  *(short *)(local_68 + 0x31b) = (short)local_68[0x33b];
  local_68[0x314] = local_68[0x334];
  local_68[0x315] = local_68[0x335];
  local_68[0x316] = local_68[0x336];
  local_68[0x317] = local_68[0x337];
  local_68[0x310] = local_68[0x330];
  local_68[0x311] = local_68[0x331];
  local_68[0x312] = local_68[0x332];
  local_68[0x313] = local_68[0x333];
  local_68[0x30c] = local_68[0x32c];
  local_68[0x30d] = local_68[0x32d];
  local_68[0x30e] = local_68[0x32e];
  local_68[0x30f] = local_68[0x32f];
  lVar12 = 0;
  if (local_68[0xe] != 0) {
    lVar12 = local_68[0xe] + 0x278;
  }
  FUN_03ebb160(lVar12,0x26);
  return 1;
}

