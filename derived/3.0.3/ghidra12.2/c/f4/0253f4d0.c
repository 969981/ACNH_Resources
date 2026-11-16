
undefined8 FUN_0253f4d0(byte *param_1,long *param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  byte bVar9;
  undefined1 uVar10;
  long unaff_x24;
  ulong uVar11;
  long lVar12;
  undefined2 local_b8;
  undefined1 local_b6;
  uint local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined4 local_a1;
  undefined1 uStack_9d;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined7 uStack_80;
  undefined1 local_79;
  undefined7 uStack_78;
  long *local_70;
  char local_68;
  char local_67;
  char local_66;
  undefined4 local_5c;
  uint local_58;
  undefined4 local_54;
  
  puVar1 = PTR_DAT_04bb3238;
  puVar7 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar7 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_5c = *puVar7;
  local_58 = param_4;
  FUN_0071c8d0(&local_70,&local_5c,PTR_DAT_04bb3238,0);
  plVar2 = local_70;
  if (local_70 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar6 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3770);
    if ((uVar6 & 1) == 0) {
      local_67 = '\0';
    }
  }
  if (local_70 == (long *)0x0) {
    return 0;
  }
  if (local_68 == '\0') {
    return 0;
  }
  if (local_67 == '\0') {
    return 0;
  }
  if (local_66 == '\0') {
    return 0;
  }
  bVar9 = *param_1;
  uStack_a8 = *(undefined4 *)puVar1;
  uStack_9d = 0;
  local_a1 = 0;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  local_b0 = CONCAT31(local_b0._1_3_,bVar9);
  uStack_ac = 1;
  local_a4 = 1;
  local_a2 = 1;
  uVar6 = FUN_02530cec(&local_b0);
  puVar1 = PTR_DAT_04bb43c0;
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  uVar6 = *(ulong *)PTR_DAT_04bb43c0;
  if ((short)*param_2 == -2) {
    uVar11 = uVar6;
LAB_0253f610:
    unaff_x24 = *param_2;
    uVar10 = 1;
    uVar6 = (ulong)param_3;
    local_b0 = param_3;
  }
  else {
    uVar3 = FUN_0277d6c4(param_2);
    uVar11 = *(ulong *)puVar1;
    if (uVar11 != 0) {
      lVar12 = *(long *)(uVar6 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) goto LAB_0253f610;
    }
    uVar10 = 0;
  }
  uVar3 = local_58 & 3;
  lVar12 = *(long *)PTR_DAT_04bb37e0;
  uVar4 = FUN_0277d6c4(param_2);
  if (*(long *)puVar1 != 0) {
    lVar8 = *(long *)(uVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (uVar4 < *(uint *)(lVar8 + 0x1d8)) {
      if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0) {
        lVar12 = *param_2;
      }
    }
  }
  local_70[0x330] = unaff_x24;
  *(ushort *)((long)local_70 + 0x19d4) = (ushort)(uVar3 << 2) | 2;
  *(undefined4 *)((long)local_70 + 0x19d6) = 0;
  *(char *)(local_70 + 0x331) = (char)uVar6;
  local_70[0x32c] = local_70[0x31c];
  local_70[0x32d] = local_70[0x31d];
  local_70[0x32e] = local_70[0x31e];
  local_70[0x32f] = local_70[799];
  local_70[0x338] = CONCAT71(uStack_78,local_79);
  *(undefined8 *)((long)local_70 + 0x19a1) = uStack_98;
  *(ulong *)((long)local_70 + 0x1999) = CONCAT44(uStack_9c,CONCAT13(uStack_9d,local_a1._1_3_));
  *(ulong *)((long)local_70 + 0x1991) =
       CONCAT17((undefined1)local_a1,CONCAT16(local_a2,CONCAT24(local_a4,uStack_a8)));
  *(ulong *)((long)local_70 + 0x1989) = CONCAT44(uStack_ac,local_b0);
  *(ulong *)((long)local_70 + 0x19b9) = CONCAT17(local_79,uStack_80);
  *(undefined1 *)(local_70 + 0x339) = uVar10;
  *(long *)((long)local_70 + 0x19c9) = lVar12;
  *(undefined2 *)((long)local_70 + 0x19d1) = local_b8;
  *(undefined8 *)((long)local_70 + 0x19b1) = uStack_88;
  *(undefined8 *)((long)local_70 + 0x19a9) = local_90;
  *(undefined1 *)((long)local_70 + 0x19d3) = local_b6;
  if ((*(uint *)(local_70 + 0x302) & 0xfffffff7) != 1) {
    *(ushort *)((long)local_70 + 0x19d4) = *(ushort *)((long)local_70 + 0x19d4) & 0xfffd;
  }
  local_54 = 0x26;
  local_70[0x318] = local_70[0x338];
  local_70[0x319] = local_70[0x339];
  local_70[0x31a] = local_70[0x33a];
  *(short *)(local_70 + 0x31b) = (short)local_70[0x33b];
  local_70[0x314] = local_70[0x334];
  local_70[0x315] = local_70[0x335];
  local_70[0x316] = local_70[0x336];
  local_70[0x317] = local_70[0x337];
  local_70[0x310] = local_70[0x330];
  local_70[0x311] = local_70[0x331];
  local_70[0x312] = local_70[0x332];
  local_70[0x313] = local_70[0x333];
  local_70[0x30c] = local_70[0x32c];
  local_70[0x30d] = local_70[0x32d];
  local_70[0x30e] = local_70[0x32e];
  local_70[0x30f] = local_70[0x32f];
  lVar12 = 0;
  if (local_70[0xe] != 0) {
    lVar12 = local_70[0xe] + 0x278;
  }
  FUN_03ebb160(lVar12,0x26);
  return 1;
}

