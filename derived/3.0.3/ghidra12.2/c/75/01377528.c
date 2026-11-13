
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_01377528(short *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint *puVar11;
  ushort uVar12;
  long lVar13;
  long lVar14;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  uint local_88 [4];
  undefined8 local_78;
  undefined4 local_70;
  undefined *local_68;
  short local_60;
  byte local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  uint *local_58;
  
  puVar5 = PTR_DAT_04bb43c0;
  if ((ushort)(*param_1 + 3U) < 2) {
    return 7;
  }
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4();
  lVar13 = *(long *)puVar5;
  if (lVar13 == 0) {
LAB_01377668:
    lVar13 = *(long *)PTR_DAT_04bbbc68;
    if (((lVar13 == 0) ||
        ((((*(long *)(lVar13 + 0xb0) == 0 || (*(long *)(*(long *)(lVar13 + 0xb0) + 8) == 0)) ||
          (*(long *)(lVar13 + 0x488) == 0)) ||
         ((*(long *)(*(long *)(lVar13 + 0x488) + 8) == 0 || (*(long *)(lVar13 + 0x2b0) == 0)))))) ||
       (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) == 0)) {
LAB_0137775c:
      local_b0 = PTR_DAT_04bc35c0 + 0x10;
      local_a8 = *(undefined **)param_1;
      FUN_0277d6c4(&local_a8);
      return 7;
    }
    uVar6 = FUN_0277d6c4(param_1);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0137775c;
    FUN_0124c030(&local_b0,param_1);
    iVar7 = FUN_0123db50(&local_a8,local_a0);
    if ((iVar7 != 0x2d) && (iVar7 = FUN_0123db50(&local_a8,local_a0), iVar7 != 0x21)) {
      iVar7 = FUN_0123db50(&local_a8,local_a0);
      if (iVar7 == 0x22) {
        return 0;
      }
      if ((param_3 & 1) != 0) {
        return 7;
      }
      iVar7 = FUN_0123db50(&local_a8,local_a0);
      uVar9 = 6;
      if ((param_4 & 1) != 0) {
        uVar9 = 1;
      }
      if (8 < iVar7 - 0x23U) {
        uVar9 = 7;
      }
      return uVar9;
    }
    goto LAB_01377ab4;
  }
  lVar14 = *(long *)(lVar14 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
  if ((*(uint *)(lVar14 + 0x1d8) <= uVar6) ||
     (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_01377668;
  local_60 = *param_1;
  local_58 = (uint *)0x0;
  local_5d = *(undefined1 *)((long)param_1 + 3);
  bVar3 = *(byte *)(param_1 + 1);
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_5c = *(undefined4 *)(param_1 + 2);
  local_5e = bVar3;
  uVar6 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar5 == 0) {
LAB_013777a4:
    puVar11 = (uint *)0x0;
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_013777a4;
    lVar13 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(param_1);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if (*(uint *)(lVar13 + 0x1d8) <= uVar6) goto LAB_013777a4;
    puVar11 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8);
    if (puVar11 != (uint *)0x0) {
      local_58 = puVar11;
    }
  }
  uVar8 = FUN_01ae59b0(&local_68);
  bVar1 = bVar3 >> 2 & 1;
  if ((uVar8 & 1) == 0) {
    bVar1 = bVar3 & 4;
  }
  if (bVar1 != 0) {
    return 7;
  }
  uVar8 = FUN_01ae59b0(&local_68);
  if ((uVar8 & 1) != 0) {
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,0x76);
    if (puVar11 == (uint *)0x0) {
      local_88[0] = 0xbc;
    }
    else {
      uVar6 = *puVar11;
      local_88[0] = 0;
      if ((uVar6 != 0) && (puVar11 != (uint *)(ulong)uVar6)) {
        puVar10 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
        local_88[0] = 0;
        if (*puVar10 != 0) {
          uVar6 = puVar10[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar10 + lVar13 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar13 != 0) {
              uVar2 = 0;
              if ((ulong)uVar6 != 0) {
                uVar2 = (uint)((ulong)((long)puVar11 - lVar13) / (ulong)uVar6);
              }
              if (*puVar10 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_88[0] = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                 local_88[0] < 0xbd)) goto LAB_01377998;
            }
          }
          local_88[0] = 0;
        }
      }
    }
LAB_01377998:
    if (local_88[0] == 0x76) {
      return 7;
    }
    uVar8 = FUN_01ae89e0(&local_68);
    if ((uVar8 & 1) != 0) {
      return 5;
    }
    uVar8 = FUN_01ae887c(&local_68);
    if ((uVar8 & 1) != 0) {
      return 5;
    }
    uVar8 = FUN_01377be0(&local_68);
    uVar9 = 5;
    if ((uVar8 & 1) == 0) {
      uVar9 = 0;
    }
    return uVar9;
  }
  if (puVar11 == (uint *)0x0) {
    uVar12 = 0xbc;
    local_88[0] = 0xbc;
  }
  else {
    uVar6 = *puVar11;
    uVar12 = 0;
    if ((uVar6 != 0) && (puVar11 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
      if ((*puVar10 != 0) && ((uVar6 = puVar10[1], uVar6 != 0 && ((ulong)(ushort)puVar10[2] != 0))))
      {
        lVar13 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar10 + lVar13 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar13 != 0) {
          uVar2 = 0;
          if ((ulong)uVar6 != 0) {
            uVar2 = (uint)((ulong)((long)puVar11 - lVar13) / (ulong)uVar6);
          }
          if (*puVar10 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
             uVar12 < 0xbd)) goto LAB_01377900;
        }
      }
      uVar12 = 0;
    }
LAB_01377900:
    local_88[0] = 0;
    uVar6 = *puVar11;
    if ((uVar6 != 0) && (puVar11 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
      if ((*puVar10 == 0) || ((uVar6 = puVar10[1], uVar6 == 0 || ((ulong)(ushort)puVar10[2] == 0))))
      {
LAB_0137798c:
        local_88[0] = 0;
      }
      else {
        lVar13 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar10 + lVar13 + (ulong)(ushort)puVar10[2] * 8;
        local_88[0] = 0;
        if (lVar13 != 0) {
          uVar2 = 0;
          if ((ulong)uVar6 != 0) {
            uVar2 = (uint)((ulong)((long)puVar11 - lVar13) / (ulong)uVar6);
          }
          if (*puVar10 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bc00c8 <= uVar2) ||
             (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
             local_88[0] = (uint)uVar4, 0xbc < uVar4)) goto LAB_0137798c;
        }
      }
    }
  }
  local_b0._0_4_ = 0x86;
  if (local_88[0] == 0x86) {
    return 2;
  }
  if (0xb1 < uVar12) {
    if (uVar12 == 0xb2) {
      return 4;
    }
    if (uVar12 == 0xb3) {
      return 4;
    }
    if (uVar12 == 0xb9) {
      return 4;
    }
switchD_01377a14_caseD_4b:
    uVar8 = FUN_01af2868(&local_68);
    if ((uVar8 & 1) != 0) {
      return 4;
    }
    if (uVar12 < 0x90) {
      if (uVar12 == 0x59) {
        return 8;
      }
      if (uVar12 == 0x8f) {
        return 9;
      }
    }
    else {
      if (uVar12 == 0x90) {
        return 9;
      }
      if (uVar12 == 0x93) {
        return 10;
      }
    }
    goto LAB_01377ab4;
  }
  uVar9 = 5;
  switch(uVar12) {
  case 0x4a:
  case 0x7f:
switchD_01377a14_caseD_4a:
    uVar8 = FUN_013772ec(param_2);
    if ((uVar8 & 1) == 0) {
      local_70 = 0;
      local_78 = 0;
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,0x2e);
      local_78 = 0x4000;
      local_70 = 0;
      FUN_0137d59c(local_88,param_2);
      local_a0 = 0;
      local_b0 = PTR_DAT_04bbc1a0 + 0x10;
      local_a8 = PTR_DAT_04bb2010 + 0x10;
      uStack_90 = 0;
      local_98 = local_a8;
      FUN_0137d7d4(local_88,&local_b0);
      uVar8 = FUN_01377440(&local_b0,&local_78);
      goto LAB_01377b8c;
    }
    break;
  default:
    goto switchD_01377a14_caseD_4b;
  case 0x58:
    uVar8 = FUN_01b15608(&local_68);
    if ((uVar8 & 1) != 0) {
      return 7;
    }
    uVar8 = FUN_01af2868(&local_68);
    if ((uVar8 & 1) != 0) {
      return 4;
    }
    break;
  case 0x5a:
    goto switchD_01377a14_caseD_5a;
  case 0x68:
    uVar8 = FUN_01b156d0(&local_68);
    goto LAB_01377b8c;
  case 0x6c:
    uVar8 = FUN_01b09a34(&local_68);
    if ((uVar8 & 1) == 0) goto switchD_01377a14_caseD_4a;
    uVar8 = FUN_01b09bec(&local_68);
LAB_01377b8c:
    uVar9 = 7;
    if ((uVar8 & 1) == 0) {
      uVar9 = 0;
    }
    goto switchD_01377a14_caseD_5a;
  }
LAB_01377ab4:
  uVar9 = 0;
switchD_01377a14_caseD_5a:
  return uVar9;
}

