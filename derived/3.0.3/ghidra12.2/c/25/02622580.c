
undefined8
FUN_02622580(long param_1,short *param_2,undefined1 *param_3,uint param_4,undefined1 param_5)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  short *psVar7;
  ushort *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 uVar12;
  short local_38;
  undefined2 local_36;
  undefined4 local_34;
  
  if (param_2 == (short *)0x0) {
    return 0;
  }
  if (param_3 == (undefined1 *)0x0) {
    return 0;
  }
  uVar1 = param_4 & 0xffff;
  uVar3 = uVar1 - *(ushort *)(param_1 + 0xea6e0);
  if (*(uint *)(param_1 + 0xea6c0) <= uVar3) goto switchD_02622624_default;
  if (0x7ff < uVar1) {
    return 0;
  }
  lVar11 = *(long *)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar3 * 8);
  if (lVar11 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + (ulong)(uVar1 >> 3) + 0xe98e0) >> (ulong)(param_4 & 7) & 1) == 0)
  goto switchD_02622624_default;
  switch(param_5) {
  case 0:
    psVar7 = (short *)FUN_02633cd0(lVar11,0x10,0x1bbfa75e,0);
    if (psVar7 == (short *)0x0) {
      local_38 = -2;
    }
    else {
      local_38 = *psVar7;
    }
    local_36 = 0;
    local_34 = 0;
    FUN_0277d4ac(&local_38);
    uVar10 = 9;
    uVar9 = 0x13a65775;
    break;
  case 1:
    psVar7 = (short *)FUN_02633cd0(lVar11,0x11,0x5c1fdd8e,0);
    if (psVar7 == (short *)0x0) {
      local_38 = -2;
    }
    else {
      local_38 = *psVar7;
    }
    local_36 = 0;
    local_34 = 0;
    FUN_0277d4ac(&local_38);
    uVar10 = 10;
    uVar9 = 0x54062da5;
    break;
  case 2:
    psVar7 = (short *)FUN_02633cd0(lVar11,0x12,0x617ff43e,0);
    if (psVar7 == (short *)0x0) {
      local_38 = -2;
    }
    else {
      local_38 = *psVar7;
    }
    local_36 = 0;
    local_34 = 0;
    FUN_0277d4ac(&local_38);
    uVar10 = 0xb;
    uVar9 = 0x69660415;
    break;
  case 3:
    psVar7 = (short *)FUN_02633cd0(lVar11,0x13,0xd35f282e,0);
    if (psVar7 == (short *)0x0) {
      local_38 = -2;
    }
    else {
      local_38 = *psVar7;
    }
    local_36 = 0;
    local_34 = 0;
    FUN_0277d4ac(&local_38);
    uVar9 = 0xdb46d805;
    uVar10 = 0xc;
    uVar12 = (undefined1)local_36;
    goto LAB_0262281c;
  case 4:
    psVar7 = (short *)FUN_02633cd0(lVar11,0x14,0xee3f019e,0);
    if (psVar7 == (short *)0x0) {
      local_38 = -2;
    }
    else {
      local_38 = *psVar7;
    }
    local_36 = 0;
    local_34 = 0;
    FUN_0277d4ac(&local_38);
    uVar10 = 0xd;
    uVar9 = 0xe626f1b5;
    break;
  case 5:
    psVar7 = (short *)FUN_02633cd0(lVar11,0x15,0xa99f7b4e,0);
    if (psVar7 == (short *)0x0) {
      local_38 = -2;
    }
    else {
      local_38 = *psVar7;
    }
    local_36 = 0;
    local_34 = 0;
    FUN_0277d4ac(&local_38);
    uVar9 = 0xa1868b65;
    uVar10 = 0xe;
    uVar12 = (undefined1)local_36;
    goto LAB_0262281c;
  default:
    goto switchD_02622624_default;
  }
  uVar12 = (undefined1)local_36;
LAB_0262281c:
  uVar6 = local_34;
  sVar4 = local_38;
  uVar5 = local_36._1_1_;
  puVar8 = (ushort *)FUN_02633cd0(lVar11,uVar10,uVar9,0);
  if (puVar8 == (ushort *)0x0) {
switchD_02622624_default:
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    if ((sVar4 != -2) && (uVar2 = *puVar8, (uVar2 & 0xff) != 0)) {
      uVar10 = 1;
      *param_2 = sVar4;
      *(undefined1 *)(param_2 + 1) = uVar12;
      *(undefined1 *)((long)param_2 + 3) = uVar5;
      *(undefined4 *)(param_2 + 2) = uVar6;
      *param_3 = (char)uVar2;
    }
  }
  return uVar10;
}

