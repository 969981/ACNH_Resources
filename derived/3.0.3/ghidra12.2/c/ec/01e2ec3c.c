
uint FUN_01e2ec3c(long param_1,long param_2)

{
  CalendarTime *pCVar1;
  short *psVar2;
  uint *puVar3;
  short sVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  long lVar16;
  undefined4 local_74 [3];
  undefined8 local_68;
  undefined6 uStack_60;
  undefined2 local_5a;
  undefined6 uStack_58;
  
  puVar8 = PTR_DAT_04bb32e8;
  puVar7 = PTR_DAT_04bb27d0;
  uVar11 = *(uint *)(param_2 + 0xc);
  if (uVar11 == 0xffffffff) {
    return 0;
  }
  lVar14 = **(long **)PTR_DAT_04bb27d0;
  bVar5 = *(byte *)(lVar14 + 0x473);
  if ((long)(char)bVar5 == 0xffffffffffffffff) {
LAB_01e2eca0:
    lVar16 = param_1 + 0x78 + (ulong)uVar11 * 0x28;
    if (9 < uVar11) {
      lVar16 = param_1 + 0x78;
    }
LAB_01e2ecb4:
    pCVar1 = (CalendarTime *)(param_2 + 0x2c);
    psVar2 = (short *)(param_2 + 0x24);
    sVar4 = *psVar2;
  }
  else {
    pbVar15 = (byte *)(lVar14 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x80;
    if (7 < bVar5) {
      pbVar15 = (byte *)(lVar14 + 0x48);
    }
    if ((*pbVar15 >> 3 & 1) == 0) goto LAB_01e2eca0;
    lVar16 = param_1 + 0x78 + (ulong)uVar11 * 0x28;
    if (9 < uVar11) {
      lVar16 = param_1 + 0x78;
    }
    if (*(byte *)(lVar14 + 0x472) == bVar5) goto LAB_01e2ecb4;
    psVar2 = (short *)(lVar16 + 0xe);
    pCVar1 = (CalendarTime *)(lVar16 + 0x16);
    sVar4 = *psVar2;
  }
  if ((sVar4 == 0) || (*(short *)pCVar1 == 0)) {
    return 0;
  }
  lVar12 = *(long *)PTR_DAT_04bb32e8;
  lVar14 = nn::time::ToPosixTimeFromUtc(pCVar1);
  lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar12 + 0x4060));
  if ((lVar10 < lVar14) ||
     (lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar12 + 0x4060)), lVar10 == lVar14)) {
    lVar14 = FUN_00a8255c(*(long *)puVar8 + 0x4060,psVar2);
    lVar10 = FUN_00a8255c(pCVar1,psVar2);
    uVar11 = (uint)((float)(lVar14 * 100) / (float)lVar10);
    if (99 < (int)uVar11) {
      uVar11 = 100;
    }
    uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
  }
  else {
    uVar11 = 100;
  }
  lVar14 = **(long **)puVar7;
  if (*(byte *)(lVar14 + 0x476) < 2) {
    *(uint *)(param_2 + 0x20) = uVar11;
    return uVar11;
  }
  pbVar15 = (byte *)(lVar16 + 8);
  if (99 < *pbVar15) {
    return uVar11;
  }
  lVar10 = *(long *)pbVar15;
  uStack_60 = (undefined6)*(undefined8 *)(lVar16 + 0x10);
  local_5a = (undefined2)*(undefined8 *)(lVar16 + 0x16);
  uStack_58 = (undefined6)((ulong)*(undefined8 *)(lVar16 + 0x16) >> 0x10);
  local_68 = CONCAT71((int7)((ulong)lVar10 >> 8),(char)uVar11);
  if (DAT_04c487d4 != -1) {
    local_74[0] = 0;
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 & 1) != 0) {
      FUN_02507c6c(local_74,7,1,1,0);
      bVar5 = local_68._1_1_ & 0xfc;
      local_68._0_2_ = CONCAT11(bVar5 | (byte)local_74[0] < 8,(undefined1)local_68);
      lVar14 = **(long **)puVar7;
      goto LAB_01e2ee88;
    }
  }
  local_68._1_1_ = (byte)((ulong)lVar10 >> 8);
  local_68._2_6_ = (undefined6)((ulong)lVar10 >> 0x10);
  local_68 = CONCAT62(local_68._2_6_,CONCAT11(local_68._1_1_,(char)uVar11)) & 0xfffffffffffffcff;
LAB_01e2ee88:
  uVar9 = local_68;
  bVar5 = *(byte *)(lVar14 + 0x473);
  pbVar13 = PTR_DAT_04bc1220;
  if ((long)(char)bVar5 != 0xffffffffffffffff) {
    puVar3 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
    if (7 < bVar5) {
      puVar3 = (uint *)(lVar14 + 0x48);
    }
    if ((*puVar3 & 8) != 0) {
      pbVar13 = (byte *)(lVar14 + 0x473);
    }
  }
  bVar5 = local_68._3_1_ & 0x3f;
  local_68._4_1_ = SUB81(uVar9,4);
  bVar6 = local_68._4_1_ & 0xc0;
  local_68._5_3_ = SUB83(uVar9,5);
  local_68._0_5_ =
       CONCAT14(bVar6 | *pbVar13 >> 2,CONCAT13(bVar5 | *pbVar13 << 6,(undefined3)local_68));
  if ((*(long *)pbVar15 == local_68 && *(long *)(lVar16 + 0x10) == CONCAT26(local_5a,uStack_60)) &&
      *(long *)(lVar16 + 0x16) == CONCAT62(uStack_58,local_5a)) {
    return uVar11;
  }
  *(ulong *)pbVar15 = local_68;
  *(ulong *)(lVar16 + 0x10) = CONCAT26(local_5a,uStack_60);
  *(ulong *)(lVar16 + 0x16) = CONCAT62(uStack_58,local_5a);
  *(undefined1 *)(lVar16 + 0x1e) = 1;
  return uVar11;
}

