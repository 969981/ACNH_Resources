
long FUN_0264e8e0(ushort *param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  byte local_74 [4];
  byte local_70 [4];
  byte local_6c [4];
  byte local_68 [4];
  byte local_64 [4];
  byte local_60 [4];
  byte local_5c [4];
  uint local_58;
  undefined1 uStack_51;
  undefined1 local_50 [16];
  undefined1 *local_28;
  
  puVar6 = PTR_DAT_04bb3128;
  uVar4 = *param_1;
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0))
  {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  puVar5 = PTR_DAT_04bb3120;
  if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
    uVar9 = 0;
    do {
      if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar9 * 4) == (uint)(uVar4 >> 0xb))
      goto LAB_0264e94c;
      uVar9 = uVar9 + 1;
    } while (*(uint *)PTR_DAT_04bb3120 != uVar9);
  }
  uVar9 = 0;
LAB_0264e94c:
  local_58 = (uint)uVar9;
  if (*param_1 == *(ushort *)PTR_DAT_04bb3170) {
    return 0;
  }
  uVar9 = (ulong)*param_1 & 0x7f;
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar1 = local_58;
  if (*(uint *)puVar5 <= local_58) {
    uVar1 = 0;
  }
  uVar14 = (uint)uVar9;
  if (*(int *)(*(long *)(puVar5 + 8) + (long)(int)uVar1 * 4) == 1) {
    if ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) &&
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) {
      if (uVar14 < 100) {
        return *(long *)(*(long *)PTR_DAT_04bc1530 + uVar9 * 8 + 0x3a8) + 0x8a8;
      }
      return 0;
    }
    lVar10 = *(long *)PTR_DAT_04bb46b0;
    if (lVar10 != 0) {
      lVar11 = *(long *)(lVar10 + 0x10);
      if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
        if (lVar11 != 0) goto LAB_0264ea18;
      }
      else if ((lVar11 != 0) && (lVar10 = *(long *)(lVar11 + 0x138), lVar10 != 0))
      goto LAB_0264eaec;
    }
    goto LAB_0264ef1c;
  }
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar1 = local_58;
  if (*(uint *)puVar5 <= local_58) {
    uVar1 = 0;
  }
  if (*(int *)(*(long *)(puVar5 + 8) + (long)(int)uVar1 * 4) == 5) {
    if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
       (lVar11 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x10), lVar11 == 0)) goto LAB_0264ef1c;
LAB_0264ea18:
    lVar10 = *(long *)(lVar11 + 8);
    if (lVar10 == 0) goto LAB_0264ef1c;
LAB_0264eaec:
    lVar10 = *(long *)(lVar10 + 0x18);
    goto LAB_0264ef20;
  }
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar1 = local_58;
  if (*(uint *)puVar5 <= local_58) {
    uVar1 = 0;
  }
  if (*(int *)(*(long *)(puVar5 + 8) + (long)(int)uVar1 * 4) == 3) {
    lVar11 = *(long *)PTR_DAT_04bb46b0;
    lVar10 = 0;
    if (lVar11 != 0) {
      lVar10 = *(long *)(lVar11 + 0x10);
      lVar13 = lVar10;
      if ((*(byte *)(lVar11 + 0x453) & 1) == 0) goto joined_r0x0264ea68;
      if (lVar10 != 0) {
        lVar11 = *(long *)(lVar10 + 0x138);
        lVar10 = 0;
        if (lVar11 != 0) goto LAB_0264eb78;
      }
    }
LAB_0264eb7c:
    bVar7 = 7 < uVar14;
    lVar10 = lVar10 + 0x8d960;
    goto LAB_0264eb8c;
  }
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar1 = local_58;
  if (*(uint *)puVar5 <= local_58) {
    uVar1 = 0;
  }
  if (*(int *)(*(long *)(puVar5 + 8) + (long)(int)uVar1 * 4) == 7) {
    lVar10 = 0;
    if (*(long *)PTR_DAT_04bb46b0 != 0) {
      lVar10 = 0;
      lVar13 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x10);
joined_r0x0264ea68:
      if (lVar13 != 0) {
        lVar11 = *(long *)(lVar13 + 8);
        if (lVar11 == 0) {
          lVar10 = 0;
        }
        else {
LAB_0264eb78:
          lVar10 = *(long *)(lVar11 + 0x18);
        }
      }
    }
    goto LAB_0264eb7c;
  }
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar1 = local_58;
  if (*(uint *)puVar5 <= local_58) {
    uVar1 = 0;
  }
  if (*(int *)(*(long *)(puVar5 + 8) + (long)(int)uVar1 * 4) == 10) {
    pbVar2 = PTR_DAT_04bb5038 + uVar9;
    if (7 < uVar14) {
      pbVar2 = PTR_DAT_04bb32e0;
    }
    bVar3 = *pbVar2;
    if ((*param_1 >> 7 & 0xf) < 8) {
      local_5c[0] = bVar3;
      if (7 < bVar3) {
        local_5c[0] = 0xff;
      }
      lVar10 = FUN_0266a690(local_5c);
    }
    else {
      local_60[0] = bVar3;
      if (7 < bVar3) {
        local_60[0] = 0xff;
      }
      lVar10 = FUN_02669fb0(local_60);
    }
    if (lVar10 != 0) {
      return lVar10 + 0xce8;
    }
    goto LAB_0264ef1c;
  }
  iVar8 = FUN_00802664(&local_58);
  if (iVar8 == 8) {
    pbVar2 = PTR_DAT_04bb5038 + uVar9;
    if (7 < uVar14) {
      pbVar2 = PTR_DAT_04bb32e0;
    }
    bVar3 = *pbVar2;
    if ((*param_1 >> 7 & 0xf) < 8) {
      local_64[0] = bVar3;
      if (7 < bVar3) {
        local_64[0] = 0xff;
      }
      lVar10 = FUN_0266a690(local_64);
    }
    else {
      local_68[0] = bVar3;
      if (7 < bVar3) {
        local_68[0] = 0xff;
      }
      lVar10 = FUN_02669fb0(local_68);
    }
    if (lVar10 != 0) {
      return lVar10 + 0xe0;
    }
    goto LAB_0264ef1c;
  }
  iVar8 = FUN_00802664(&local_58);
  if (iVar8 == 0xb) {
    pbVar2 = PTR_DAT_04bb5038 + uVar9;
    if (7 < uVar14) {
      pbVar2 = PTR_DAT_04bb32e0;
    }
    local_6c[0] = *pbVar2;
    if (7 < local_6c[0]) {
      local_6c[0] = 0xff;
    }
    lVar10 = FUN_0266a060(local_6c);
    goto joined_r0x0264ec64;
  }
  iVar8 = FUN_00802664(&local_58);
  if (iVar8 == 0xd) {
    lVar10 = FUN_0265c3e0(uVar9);
    if (lVar10 != 0) {
      return lVar10 + 0xfb58;
    }
    goto LAB_0264ef1c;
  }
  iVar8 = FUN_00802664(&local_58);
  if (iVar8 == 0xe) {
    if (*(long *)PTR_DAT_04bb47d8 != 0) {
      uVar12 = uVar9;
      if (10 < uVar14) {
        uVar12 = 0;
      }
      lVar10 = *(long *)(*(long *)PTR_DAT_04bb47d8 + uVar12 * 8);
      if (lVar10 != 0) {
        return lVar10;
      }
    }
    goto LAB_0264ef1c;
  }
  iVar8 = FUN_00802664(&local_58);
  if (iVar8 == 0xf) {
    if (*(long *)PTR_DAT_04bb47d8 != 0) {
      uVar12 = uVar9;
      if (10 < uVar14) {
        uVar12 = 0;
      }
      lVar10 = *(long *)(*(long *)PTR_DAT_04bb47d8 + uVar12 * 8);
      if (lVar10 != 0) {
        return lVar10 + 0xb28;
      }
    }
    goto LAB_0264ef1c;
  }
  iVar8 = FUN_00802664(&local_58);
  if (iVar8 == 0x16) {
    uVar4 = *param_1 >> 7 & 0xf;
    switch(uVar4) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      local_50._8_2_ = (short)uVar9 + uVar4 * 100 + -100;
      local_50._0_8_ = PTR_DAT_04bb7648 + 0x10;
      lVar10 = FUN_03775e20(local_50);
      if (lVar10 == 0) {
        return 0;
      }
      return lVar10 + 0xb60;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      local_50._8_2_ = (short)uVar9 + uVar4 * 100 + -600;
      local_50._0_8_ = PTR_DAT_04bb7648 + 0x10;
      lVar10 = FUN_03775e20(local_50);
      if (lVar10 == 0) {
        return 0;
      }
      return lVar10 + 0x38;
    case 0xb:
      lVar11 = FUN_03776bc0(uVar9);
      lVar10 = lVar11 + 0xb60;
      break;
    case 0xc:
      lVar11 = FUN_03776bc0(uVar9);
      lVar10 = lVar11 + 0x38;
      break;
    case 0xd:
      lVar11 = FUN_03775560();
      lVar10 = lVar11 + 0x3c60;
      break;
    default:
      goto switchD_0264ed68_default;
    }
    lVar13 = 0;
    if (lVar11 != 0) {
      lVar13 = lVar10;
    }
    return lVar13;
  }
  iVar8 = FUN_00802664(&local_58);
  if (iVar8 == 0x18) {
    if ((*param_1 & 0x780) != 0) {
      return 0;
    }
    if (*(long *)PTR_DAT_04bc1530 == 0) {
      return 0;
    }
    lVar11 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x6d0);
    goto LAB_0264f018;
  }
  iVar8 = FUN_00802664(&local_58);
  if (iVar8 != 0x19) goto LAB_0264ef1c;
  uVar4 = *param_1 >> 7 & 0xf;
  if (3 < uVar4) goto LAB_0264ef1c;
  uVar12 = (ulong)*param_1 & 0x7f;
  switch(uVar4) {
  case 0:
    lVar10 = FUN_016c9d4c();
    break;
  case 1:
    lVar10 = FUN_016c9d4c(uVar12);
    goto joined_r0x0264ef10;
  case 2:
    pbVar2 = PTR_DAT_04bb5038 + uVar12;
    if (7 < (uint)uVar12) {
      pbVar2 = PTR_DAT_04bb32e0;
    }
    local_70[0] = *pbVar2;
    if (7 < local_70[0]) {
      local_70[0] = 0xff;
    }
    lVar10 = FUN_0266aca0(local_70);
    break;
  case 3:
    pbVar2 = PTR_DAT_04bb5038 + uVar12;
    if (7 < (uint)uVar12) {
      pbVar2 = PTR_DAT_04bb32e0;
    }
    local_74[0] = *pbVar2;
    if (7 < local_74[0]) {
      local_74[0] = 0xff;
    }
    lVar10 = FUN_0266aca0(local_74);
joined_r0x0264ef10:
    if (lVar10 != 0) {
      return lVar10 + 0xcb0;
    }
    goto LAB_0264ef1c;
  }
joined_r0x0264ec64:
  if (lVar10 == 0) {
LAB_0264ef1c:
    lVar10 = 0;
LAB_0264ef20:
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    uVar1 = local_58;
    if (*(uint *)puVar5 <= local_58) {
      uVar1 = 0;
    }
    if (*(int *)(*(long *)(puVar5 + 8) + (long)(int)uVar1 * 4) == 0x12) {
      if (*(long *)PTR_DAT_04bb46b0 == 0) {
        lVar11 = 0;
      }
      else {
        lVar10 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,uVar9);
        lVar11 = 0;
        if (lVar10 != 0) {
          lVar11 = lVar10 + 0xe0;
        }
      }
LAB_0264f018:
      lVar13 = lVar11 + 0x150;
    }
    else {
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      uVar1 = local_58;
      if (*(uint *)puVar5 <= local_58) {
        uVar1 = 0;
      }
      if (*(int *)(*(long *)(puVar5 + 8) + (long)(int)uVar1 * 4) == 0x14) {
        if (*(long *)PTR_DAT_04bb46b0 == 0) {
          lVar11 = 0;
          lVar13 = 0xd58;
        }
        else {
          lVar10 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,uVar9);
          lVar11 = 0;
          if (lVar10 != 0) {
            lVar11 = lVar10 + 0xe0;
          }
          lVar13 = lVar11 + 0xd58;
        }
      }
      else {
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
          FUN_00706e58(PTR_DAT_04bb3120);
          __cxa_guard_release(PTR_DAT_04bb3128);
        }
        uVar1 = local_58;
        if (*(uint *)puVar5 <= local_58) {
          uVar1 = 0;
        }
        if (*(int *)(*(long *)(puVar5 + 8) + (long)(int)uVar1 * 4) != 0x15) {
          local_50 = FUN_02642d30();
          uVar12 = local_50._8_8_ & 0xffffffff;
          if (uVar12 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_00d72dc0();
          }
          local_28 = &uStack_51;
          lVar11 = (*(code *)(&PTR_LAB_04a88330)[uVar12])(&local_28,local_50);
          if ((lVar11 != 0) && ((*param_1 & 0x780) == 0x80)) {
            uVar9 = (ulong)*param_1 & 0x7f;
            lVar10 = lVar11 + 0x4fb50 + uVar9 * 0xb28;
            if (99 < (uint)uVar9) {
              lVar10 = lVar11 + 0x4fb50;
            }
            return lVar10;
          }
          if (lVar10 == 0) {
switchD_0264ed68_default:
            return 0;
          }
          bVar7 = 99 < uVar14;
          lVar10 = lVar10 + 0x47228;
LAB_0264eb8c:
          lVar11 = lVar10 + uVar9 * 0xb28;
          if (bVar7) {
            lVar11 = lVar10;
          }
          return lVar11;
        }
        if (*(long *)PTR_DAT_04bb46b0 == 0) {
          lVar11 = 0;
        }
        else {
          lVar10 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,uVar9);
          lVar11 = 0;
          if (lVar10 != 0) {
            lVar11 = lVar10 + 0xe0;
          }
        }
        lVar13 = lVar11 + 0x1a40;
      }
    }
    lVar10 = 0;
    if (lVar11 != 0) {
      lVar10 = lVar13;
    }
  }
  else {
    lVar10 = lVar10 + 0xa8;
  }
  return lVar10;
}

