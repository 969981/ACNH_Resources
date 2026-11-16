
undefined8 FUN_028496d0(long param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined *puVar10;
  undefined8 local_68;
  undefined1 local_60;
  undefined2 local_5f;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  
  local_50 = *(undefined8 *)(param_1 + 0x1c);
  local_58 = *(undefined8 *)(param_1 + 0x24);
  iVar6 = FUN_00a8255c(&local_58,&local_50);
  if ((short)local_58 != 0) {
    local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
    local_68 = local_68 + (iVar6 + 0x3b);
    local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
  }
  if ((int)*(uint *)(DAT_053e0208 + 0x16718) < 1) {
    if (*(long *)(DAT_053e0208 + 0x16608) == 0) {
      return 0;
    }
    puVar9 = *(uint **)(*(long *)(DAT_053e0208 + 0x16608) + 8);
    if (puVar9 == (uint *)0x0) {
      return 0;
    }
    if ((0x13 < *(uint *)(DAT_053e0208 + 0x16620)) &&
       (*(char *)(*(long *)(DAT_053e0208 + 0x16628) + 0x13) == '\0')) {
      return 0;
    }
    if (*puVar9 < 0x14) {
      return 0;
    }
    if (puVar9[1] == 0) {
      return 0;
    }
    if ((ushort)puVar9[2] == 0) {
      return 0;
    }
    iVar6 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar6 = 0x1c;
    }
    lVar7 = (ulong)(puVar9[1] * 0x13 + (uint)(ushort)puVar9[2] * 8 + iVar6) + (long)puVar9;
  }
  else {
    if (*(uint *)(DAT_053e0208 + 0x16718) < 0x14) {
      return 0;
    }
    lVar7 = 0x98;
    if (*(uint *)(DAT_053e0208 + 0x16708) < 0x14) {
      lVar7 = 0;
    }
    lVar7 = *(long *)(*(long *)(DAT_053e0208 + 0x16710) + lVar7);
  }
  if (lVar7 == 0) {
    return 0;
  }
  uVar5 = local_50._5_1_;
  uVar4 = local_58._5_1_;
  bVar1 = local_50._4_1_ + 0x18;
  if (4 < local_50._4_1_) {
    bVar1 = local_50._4_1_;
  }
  cVar2 = local_58._4_1_ + '\x18';
  if ('\x04' < local_58._4_1_) {
    cVar2 = local_58._4_1_;
  }
  FUN_0214ca00(&local_68);
  lVar7 = local_68;
  cVar3 = *(char *)(param_1 + 0x2c);
  puVar10 = &DAT_053fe348 + ((long)cVar3 & 0xffffffffU) * 0xba0;
  local_68._4_4_ = SUB84(lVar7,4);
  local_68._0_4_ = CONCAT13(uVar4,CONCAT12(cVar2,CONCAT11(uVar5,bVar1)));
  if (9 < (uint)(int)cVar3) {
    puVar10 = &DAT_053fe348;
  }
  local_44 = *(int *)(puVar10 + 0xa94);
  if ((local_44 == 0) || (local_48 = local_44, local_44 == 0x22)) {
    puVar10[0xa90] = bVar1;
    puVar10[0xa91] = uVar5;
    puVar10[0xa92] = cVar2;
    puVar10[0xa93] = uVar4;
    *(undefined4 *)(puVar10 + 0xa94) = local_68._4_4_;
    puVar10[0xa98] = local_60;
    *(undefined2 *)(puVar10 + 0xa99) = local_5f;
    if (*(long *)(puVar10 + 0xaa0) == 0) {
      uVar8 = 0x22;
    }
    else {
      uVar8 = *(undefined4 *)(*(long *)(puVar10 + 0xaa0) + 4);
    }
    *(undefined4 *)(puVar10 + 0xaac) = uVar8;
    *(undefined8 *)(puVar10 + 0xaa0) = 0;
    FUN_0214d220(puVar10 + 0x8b0);
    puVar10[0xae6] = 1;
  }
  FUN_0219d7e0(&DAT_053fe348,(int)cVar3,0,0);
  return 1;
}

