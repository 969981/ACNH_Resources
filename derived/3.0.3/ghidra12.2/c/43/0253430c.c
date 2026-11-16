
undefined8 FUN_0253430c(byte *param_1,long *param_2,int param_3,uint param_4)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 uVar10;
  byte bVar11;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  long lVar12;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x11_01;
  long lVar13;
  undefined2 local_a0;
  undefined1 local_9e;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined4 local_89;
  undefined1 uStack_85;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined7 uStack_60;
  long *local_58;
  char local_50;
  char local_4f;
  char local_4e;
  undefined4 local_48;
  uint local_44;
  
  puVar1 = PTR_DAT_04bb3238;
  local_44 = param_4;
  if (param_3 == 2) {
    uVar6 = FUN_02534ca4(param_1,param_2,PTR_DAT_04bb37e0,1,1);
    return uVar6;
  }
  if (param_3 == 1) {
    uVar6 = FUN_025347c4(param_1,param_2,PTR_DAT_04bb37e0,1,1);
    return uVar6;
  }
  puVar9 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar9 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_48 = *puVar9;
  FUN_0071c8d0(&local_58,&local_48,PTR_DAT_04bb3238,0);
  plVar2 = local_58;
  if (local_58 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar7 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3770);
    if ((uVar7 & 1) == 0) {
      local_4f = '\0';
    }
  }
  if (local_58 == (long *)0x0) {
    return 0;
  }
  if (local_50 == '\0') {
    return 0;
  }
  if (local_4f == '\0') {
    return 0;
  }
  if (local_4e == '\0') {
    return 0;
  }
  bVar11 = *param_1;
  uStack_90 = *(undefined4 *)puVar1;
  uStack_85 = 0;
  local_89 = 0;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  local_98 = CONCAT31(local_98._1_3_,bVar11);
  uStack_94 = 1;
  local_8c = 1;
  local_8a = 1;
  uVar7 = FUN_02530cec(&local_98);
  uVar3 = local_44;
  puVar1 = PTR_DAT_04bb43c0;
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  uVar6 = *(undefined8 *)PTR_DAT_04bb37e0;
  if (param_3 == 5) {
    if ((short)*param_2 != -2) {
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(param_2);
      lVar12 = extraout_x11_00;
      uVar8 = extraout_w10_00;
      if (*(long *)puVar1 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        uVar8 = *(uint *)(lVar13 + 0x1d8);
        if ((uVar4 < uVar8) && (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) != 0))
        goto LAB_025344f0;
      }
LAB_02534614:
      uVar10 = 0;
      goto LAB_02534618;
    }
LAB_025344f0:
    lVar12 = *param_2;
    uVar8 = 10;
  }
  else if (param_3 == 4) {
    if ((short)*param_2 != -2) {
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(param_2);
      lVar12 = extraout_x11_01;
      uVar8 = extraout_w10_01;
      if (*(long *)puVar1 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        uVar8 = *(uint *)(lVar13 + 0x1d8);
        if ((uVar4 < uVar8) && (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) != 0))
        goto LAB_02534508;
      }
      goto LAB_02534614;
    }
LAB_02534508:
    lVar12 = *param_2;
    uVar8 = 8;
  }
  else {
    if (param_3 != 3) {
      return 0;
    }
    if ((short)*param_2 != -2) {
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(param_2);
      lVar12 = extraout_x11;
      uVar8 = extraout_w10;
      if (*(long *)puVar1 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        uVar8 = *(uint *)(lVar13 + 0x1d8);
        if ((uVar4 < uVar8) && (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) != 0))
        goto LAB_025344d8;
      }
      goto LAB_02534614;
    }
LAB_025344d8:
    lVar12 = *param_2;
    uVar8 = 7;
  }
  uVar10 = 1;
  local_98 = uVar8;
LAB_02534618:
  local_58[0x330] = lVar12;
  *(ushort *)((long)local_58 + 0x19d4) = (ushort)((uVar3 & 3) << 2) | 3;
  *(char *)(local_58 + 0x331) = (char)uVar8;
  *(undefined4 *)((long)local_58 + 0x19d6) = 0;
  local_58[0x32f] = local_58[799];
  local_58[0x32c] = local_58[0x31c];
  local_58[0x32d] = local_58[0x31d];
  local_58[0x32e] = local_58[0x31e];
  local_58[0x338] = CONCAT71(uStack_60,local_61);
  *(undefined8 *)((long)local_58 + 0x19a1) = uStack_80;
  *(ulong *)((long)local_58 + 0x1999) = CONCAT44(uStack_84,CONCAT13(uStack_85,local_89._1_3_));
  *(ulong *)((long)local_58 + 0x1991) =
       CONCAT17((undefined1)local_89,CONCAT16(local_8a,CONCAT24(local_8c,uStack_90)));
  *(ulong *)((long)local_58 + 0x1989) = CONCAT44(uStack_94,local_98);
  *(ulong *)((long)local_58 + 0x19b9) = CONCAT17(local_61,uStack_68);
  *(undefined1 *)(local_58 + 0x339) = uVar10;
  *(undefined8 *)((long)local_58 + 0x19c9) = uVar6;
  *(undefined2 *)((long)local_58 + 0x19d1) = local_a0;
  *(undefined8 *)((long)local_58 + 0x19b1) = uStack_70;
  *(undefined8 *)((long)local_58 + 0x19a9) = local_78;
  *(undefined1 *)((long)local_58 + 0x19d3) = local_9e;
  if ((*(uint *)(local_58 + 0x302) & 0xfffffff7) != 1) {
    *(ushort *)((long)local_58 + 0x19d4) = *(ushort *)((long)local_58 + 0x19d4) & 0xfffd;
  }
  local_58[0x318] = local_58[0x338];
  local_58[0x319] = local_58[0x339];
  local_58[0x31a] = local_58[0x33a];
  *(short *)(local_58 + 0x31b) = (short)local_58[0x33b];
  local_58[0x314] = local_58[0x334];
  local_58[0x315] = local_58[0x335];
  local_58[0x316] = local_58[0x336];
  local_58[0x317] = local_58[0x337];
  local_58[0x310] = local_58[0x330];
  local_58[0x311] = local_58[0x331];
  local_58[0x312] = local_58[0x332];
  local_58[0x313] = local_58[0x333];
  local_58[0x30c] = local_58[0x32c];
  local_58[0x30d] = local_58[0x32d];
  local_58[0x30e] = local_58[0x32e];
  local_58[0x30f] = local_58[0x32f];
  lVar12 = 0;
  if (local_58[0xe] != 0) {
    lVar12 = local_58[0xe] + 0x278;
  }
  FUN_03ebb160(lVar12,0x26);
  return 1;
}

