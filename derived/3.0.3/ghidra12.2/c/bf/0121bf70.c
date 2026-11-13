
void FUN_0121bf70(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  ushort uVar15;
  long lVar16;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  uint local_6c;
  undefined8 local_68;
  byte local_60 [4];
  uint local_5c;
  ulong local_58;
  
  local_58 = param_2;
  lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
  local_78 = (undefined **)(lVar9 + -0x15180);
  local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
  uVar11 = local_58 >> 0x10 & 0xff;
  local_5c = (uint)uVar11;
  if (0xc < local_5c) {
LAB_0121c080:
    local_5c = 0;
switchD_0121bfdc_caseD_0:
    goto joined_r0x0121c070;
  }
  uVar12 = (uint)(local_58 >> 0x18) & 0xff;
  switch(uVar11) {
  case 0:
    goto switchD_0121bfdc_caseD_0;
  case 1:
    local_5c = (uint)(0x13 < uVar12);
    goto joined_r0x0121c070;
  case 2:
    bVar6 = 0x11 < uVar12;
    bVar7 = uVar12 == 0x12;
    local_5c = 1;
    break;
  case 3:
    bVar6 = 0x13 < uVar12;
    bVar7 = uVar12 == 0x14;
    local_5c = 2;
    break;
  case 4:
    bVar6 = 0x12 < uVar12;
    bVar7 = uVar12 == 0x13;
    local_5c = 3;
    break;
  case 5:
    bVar6 = 0x13 < uVar12;
    bVar7 = uVar12 == 0x14;
    local_5c = 4;
    break;
  case 6:
    bVar6 = 0x14 < uVar12;
    bVar7 = uVar12 == 0x15;
    local_5c = 5;
    break;
  case 7:
    bVar6 = 0x15 < uVar12;
    bVar7 = uVar12 == 0x16;
    local_5c = 6;
    break;
  case 8:
    bVar6 = 0x15 < uVar12;
    bVar7 = uVar12 == 0x16;
    local_5c = 7;
    break;
  case 9:
    bVar6 = 0x15 < uVar12;
    bVar7 = uVar12 == 0x16;
    local_5c = 8;
    break;
  case 10:
    bVar6 = 0x16 < uVar12;
    bVar7 = uVar12 == 0x17;
    local_5c = 9;
    break;
  case 0xb:
    bVar6 = 0x15 < uVar12;
    bVar7 = uVar12 == 0x16;
    local_5c = 10;
    break;
  case 0xc:
    if (0x15 < uVar12) goto LAB_0121c080;
    local_5c = 0xb;
    goto joined_r0x0121c070;
  }
  if (bVar6 && !bVar7) {
    local_5c = local_5c + 1;
  }
joined_r0x0121c070:
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (DAT_0514b3c8 == local_5c) {
    lVar9 = 0;
  }
  else if (DAT_0514b3cc == local_5c) {
    lVar9 = 1;
  }
  else if (DAT_0514b3d0 == local_5c) {
    lVar9 = 2;
  }
  else if (DAT_0514b3d4 == local_5c) {
    lVar9 = 3;
  }
  else if (DAT_0514b3d8 == local_5c) {
    lVar9 = 4;
  }
  else if (DAT_0514b3dc == local_5c) {
    lVar9 = 5;
  }
  else if (DAT_0514b3e0 == local_5c) {
    lVar9 = 6;
  }
  else if (DAT_0514b3e4 == local_5c) {
    lVar9 = 7;
  }
  else if (DAT_0514b3e8 == local_5c) {
    lVar9 = 8;
  }
  else if (DAT_0514b3ec == local_5c) {
    lVar9 = 9;
  }
  else if (DAT_0514b3f0 == local_5c) {
    lVar9 = 10;
  }
  else {
    if (DAT_0514b3f4 != local_5c) {
      local_78 = (undefined **)0x175f;
      FUN_0277d4ac(&local_78);
      *param_1 = (undefined4)local_78;
      param_1[1] = local_78._4_4_;
      return;
    }
    lVar9 = 0xb;
  }
  local_78 = (undefined **)(ulong)(ushort)(&DAT_04174770)[lVar9];
  FUN_0277d4ac(&local_78);
  *param_1 = (undefined4)local_78;
  param_1[1] = local_78._4_4_;
  local_60[0] = *param_3;
  if (7 < local_60[0]) {
    local_60[0] = 0xff;
  }
  lVar9 = FUN_025830c0(DAT_055021a0,local_60,1);
  if (lVar9 == 0) {
    uVar12 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar12 = uVar12 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar12 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    uVar8 = (uint)((ulong)uVar12 * 100 >> 0x20);
    DAT_05582b7c = uVar12;
LAB_0121c474:
    if (uVar8 < 0x55) {
LAB_0121c47c:
      local_78 = (undefined **)0x175f;
    }
    else {
      if (uVar8 < 0x5f) goto LAB_0121c4a4;
LAB_0121c48c:
      local_78 = (undefined **)0x1760;
    }
    FUN_0277d4ac(&local_78);
    *param_1 = (undefined4)local_78;
    param_1[1] = local_78._4_4_;
  }
  else {
    if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar10 == (undefined8 *)0x0)) {
      uVar15 = *(ushort *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x1341c);
      uVar8 = (uint)uVar15;
      uVar12 = uVar15 & 0xff;
      uVar15 = uVar15 >> 8;
    }
    else {
      uVar11 = (**(code **)*puVar10)();
      uVar15 = *(ushort *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x1341c);
      uVar8 = (uint)uVar15;
      uVar12 = uVar15 & 0xff;
      uVar15 = uVar15 >> 8;
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
        (**(code **)*puVar10)();
      }
    }
    if ((0xb < uVar12 - 1) ||
       ((ushort)(byte)(&DAT_0417b531)[(uVar8 & 0xff) - 1] <= (uVar15 - 1 & 0xff))) {
      uVar12 = 1;
      uVar15 = 1;
    }
    switch(uVar12) {
    case 1:
      uVar12 = (uint)(0x13 < uVar15);
      break;
    case 2:
      uVar12 = 1;
      if (0x12 < uVar15) {
        uVar12 = 2;
      }
      break;
    case 3:
      uVar12 = 2;
      if (0x14 < uVar15) {
        uVar12 = 3;
      }
      break;
    case 4:
      uVar12 = 3;
      if (0x13 < uVar15) {
        uVar12 = 4;
      }
      break;
    case 5:
      uVar12 = 4;
      if (0x14 < uVar15) {
        uVar12 = 5;
      }
      break;
    case 6:
      uVar12 = 5;
      if (0x15 < uVar15) {
        uVar12 = 6;
      }
      break;
    case 7:
      uVar12 = 6;
      if (0x16 < uVar15) {
        uVar12 = 7;
      }
      break;
    case 8:
      uVar12 = 7;
      if (0x16 < uVar15) {
        uVar12 = 8;
      }
      break;
    case 9:
      uVar12 = 8;
      if (0x16 < uVar15) {
        uVar12 = 9;
      }
      break;
    case 10:
      uVar12 = 9;
      if (0x17 < uVar15) {
        uVar12 = 10;
      }
      break;
    case 0xb:
      uVar12 = 10;
      if (0x16 < uVar15) {
        uVar12 = 0xb;
      }
      break;
    case 0xc:
      if (0x15 < uVar15) goto switchD_0121c314_default;
      uVar12 = 0xb;
      break;
    default:
switchD_0121c314_default:
      uVar12 = 0;
    }
    local_78 = (undefined **)CONCAT44(local_78._4_4_,uVar12);
    uVar8 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar1 = uVar8 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar8 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    uVar8 = (uint)((ulong)uVar1 * 100 >> 0x20);
    DAT_05582b7c = uVar1;
    if (uVar12 != local_5c) goto LAB_0121c474;
    if (uVar8 < 0x46) goto LAB_0121c47c;
    if (0x59 < uVar8) goto LAB_0121c48c;
  }
LAB_0121c4a4:
  puVar5 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar12 = FUN_0277d6c4(param_1);
  lVar16 = *(long *)puVar5;
  if (lVar16 == 0) {
    return;
  }
  lVar9 = *(long *)(lVar9 + 0x57e58);
  uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if (*(uint *)(lVar9 + 0x1d8) <= uVar12) {
    return;
  }
  if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar12 * 8) == 0) {
    return;
  }
  uVar4 = *(undefined2 *)param_1;
  local_68 = 0;
  uVar2 = *(undefined1 *)((long)param_1 + 2);
  uVar3 = *(undefined1 *)((long)param_1 + 3);
  uVar12 = param_1[1];
  local_78 = &PTR_FUN_04a36b50;
  local_70 = uVar4;
  local_6e = uVar2;
  local_6d = uVar3;
  local_6c = uVar12;
  uVar8 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar5 != 0) {
    lVar9 = *(long *)(lVar16 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(param_1);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar9 + 0x1d8)) &&
         (puVar13 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar8 * 8),
         puVar13 != (uint *)0x0)) {
        uVar15 = 0;
        uVar8 = *puVar13;
        if ((uVar8 != 0) && (puVar13 != (uint *)(ulong)uVar8)) {
          puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar8);
          uVar15 = 0;
          if (*puVar14 != 0) {
            uVar8 = puVar14[1];
            if ((uVar8 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar14 + lVar9 + (ulong)(ushort)puVar14[2] * 8;
              if (lVar9 != 0) {
                uVar1 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar13 - lVar9) / (ulong)uVar8);
                }
                if (*puVar14 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar15 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar15 < 0xbd))
                goto LAB_0121c644;
              }
            }
            uVar15 = 0;
          }
        }
        goto LAB_0121c644;
      }
    }
  }
  uVar15 = 0xbc;
LAB_0121c644:
  if (uVar15 == 0x68) {
    local_6c = CONCAT22((short)(uVar12 >> 0x10),(undefined2)local_6c) & 0xfffeffff;
    uVar12 = local_6c;
  }
  *(undefined2 *)param_1 = uVar4;
  *(undefined1 *)((long)param_1 + 2) = uVar2;
  *(undefined1 *)((long)param_1 + 3) = uVar3;
  param_1[1] = uVar12;
  return;
}

