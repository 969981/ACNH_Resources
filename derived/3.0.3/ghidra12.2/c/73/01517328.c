
bool FUN_01517328(long param_1,byte *param_2,long param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined *local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint *local_58;
  
  puVar3 = PTR_DAT_04bb43c0;
  if (param_1 == 0) {
    return false;
  }
  if (param_2 == (byte *)0x0) {
    return false;
  }
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_4);
  lVar13 = *(long *)puVar3;
  if (lVar13 == 0) {
    return false;
  }
  lVar14 = *(long *)(lVar14 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
  if (*(uint *)(lVar14 + 0x1d8) <= uVar4) {
    return false;
  }
  if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return false;
  }
  local_58 = (uint *)0x0;
  local_60 = *param_4;
  uStack_5c = param_4[1];
  local_68 = &PTR_FUN_04a36b50;
  uVar4 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar3 == 0) {
LAB_01517470:
    if (local_58 != (uint *)0x0) goto LAB_01517478;
LAB_01517500:
    uVar6 = 0;
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01517470;
    lVar13 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_4);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar4) ||
       (puVar7 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8), puVar7 == (uint *)0x0
       )) goto LAB_01517470;
    local_58 = puVar7;
LAB_01517478:
    uVar4 = *local_58;
    uVar6 = 0;
    if ((uVar4 != 0) && (local_58 != (uint *)(ulong)uVar4)) {
      puVar7 = (uint *)((long)local_58 - (long)(ulong)uVar4);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar4 = puVar7[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar7 + lVar13 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar13 != 0) {
            uVar6 = 0;
            if ((ulong)uVar4 != 0) {
              uVar6 = (uint)((ulong)((long)local_58 - lVar13) / (ulong)uVar4);
            }
            if (*puVar7 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_05326d48) &&
               (uVar6 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar6 * 2), uVar6 < 0x52))
            goto LAB_01517504;
          }
        }
        goto LAB_01517500;
      }
    }
  }
LAB_01517504:
  uVar6 = uVar6 - 1;
  if (8 < uVar6) {
    return uVar6 < 9;
  }
  local_78 = PTR_DAT_04bb2e18 + 0x10;
  local_70 = 0;
  FUN_01afb1a0(&local_68,&local_78);
  uVar4 = FUN_01ae98d0(&local_68);
  if (local_58 == (uint *)0x0) goto LAB_015176bc;
  uVar2 = *local_58;
  uVar8 = 0;
  if ((uVar2 != 0) && (local_58 != (uint *)(ulong)uVar2)) {
    puVar7 = (uint *)((long)local_58 - (long)(ulong)uVar2);
    uVar8 = 0;
    if (*puVar7 != 0) {
      uVar2 = puVar7[1];
      if ((uVar2 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar13 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar7 + lVar13 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar13 != 0) {
          uVar1 = 0;
          if ((ulong)uVar2 != 0) {
            uVar1 = (uint)((ulong)((long)local_58 - lVar13) / (ulong)uVar2);
          }
          if (*puVar7 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326d48) &&
             (uVar8 = *(ushort *)(DAT_05326d50 + (long)(int)uVar1 * 2), uVar8 < 0x52))
          goto LAB_015175dc;
        }
      }
      uVar8 = 0;
    }
  }
LAB_015175dc:
  if (uVar8 != 7) {
    uVar2 = *local_58;
    uVar8 = 0;
    if ((uVar2 != 0) && (local_58 != (uint *)(ulong)uVar2)) {
      puVar7 = (uint *)((long)local_58 - (long)(ulong)uVar2);
      uVar8 = 0;
      if (*puVar7 != 0) {
        uVar2 = puVar7[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar7 + lVar13 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar13 != 0) {
            uVar1 = 0;
            if ((ulong)uVar2 != 0) {
              uVar1 = (uint)((ulong)((long)local_58 - lVar13) / (ulong)uVar2);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326d48) &&
               (uVar8 = *(ushort *)(DAT_05326d50 + (long)(int)uVar1 * 2), uVar8 < 0x52))
            goto LAB_015176c0;
          }
        }
LAB_015176bc:
        uVar8 = 0;
      }
    }
LAB_015176c0:
    if (uVar8 == 6) {
      iVar10 = (int)local_70;
      if ((int)local_70 < 0) {
        iVar10 = (int)local_70 + 1;
      }
      iVar10 = iVar10 >> 1;
      if ((uVar4 | 2) == 3) {
        iVar9 = iVar10;
        iVar10 = local_70._4_4_;
      }
      else {
        iVar9 = local_70._4_4_;
      }
      iVar12 = *(int *)(param_3 + 8);
      iVar11 = *(int *)(param_3 + 0xc);
      if (uVar4 == 1) {
        iVar11 = iVar11 + iVar9;
      }
      else if (uVar4 == 2) {
        iVar12 = iVar12 + iVar10;
      }
      iVar10 = iVar10 + iVar12;
      *(int *)(param_1 + 0x10) = iVar12;
      *(int *)(param_1 + 0x14) = iVar11;
      iVar9 = iVar9 + iVar11;
    }
    else {
      iVar9 = (int)local_70;
      iVar10 = local_70._4_4_;
      if ((uVar4 & 0x80000001) != 1) {
        iVar9 = local_70._4_4_;
        iVar10 = (int)local_70;
      }
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 8);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 0xc);
      iVar10 = iVar10 + *(int *)(param_3 + 8);
      iVar9 = iVar9 + *(int *)(param_3 + 0xc);
    }
    iVar10 = iVar10 + -1;
    iVar9 = iVar9 + -1;
    goto LAB_015177cc;
  }
  switch(uVar4) {
  case 0:
    iVar9 = local_70._4_4_ + -2;
    break;
  case 1:
    iVar10 = (int)local_70 + -2;
    goto LAB_01517764;
  case 2:
    iVar9 = 0;
    break;
  case 3:
    iVar10 = 0;
LAB_01517764:
    iVar9 = local_70._4_4_;
    if (0 < local_70._4_4_) {
      iVar9 = local_70._4_4_ + -1;
    }
    iVar9 = iVar9 >> 1;
    goto LAB_01517770;
  default:
    iVar10 = 0;
    iVar9 = 0;
    goto LAB_01517770;
  }
  iVar10 = (int)local_70;
  if (0 < (int)local_70) {
    iVar10 = (int)local_70 + -1;
  }
  iVar10 = iVar10 >> 1;
LAB_01517770:
  iVar10 = *(int *)(param_3 + 8) + iVar10;
  iVar9 = *(int *)(param_3 + 0xc) + iVar9;
  *(int *)(param_1 + 0x10) = iVar10;
  *(int *)(param_1 + 0x14) = iVar9;
  iVar10 = iVar10 + 1;
  iVar9 = iVar9 + 1;
LAB_015177cc:
  *(int *)(param_1 + 0x20) = iVar10;
  *(int *)(param_1 + 0x24) = iVar9;
  uVar5 = FUN_01ae94f0(&local_68,0);
  if ((uVar5 & 1) != 0) {
    local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
    *param_2 = *param_2 | 1;
  }
  uVar5 = FUN_01ae94f0(&local_68,1);
  if ((uVar5 & 1) != 0) {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    *param_2 = *param_2 | 2;
  }
  uVar5 = FUN_01ae94f0(&local_68,2);
  if ((uVar5 & 1) != 0) {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
    *param_2 = *param_2 | 4;
  }
  uVar5 = FUN_01ae94f0(&local_68,3);
  if ((uVar5 & 1) != 0) {
    *param_2 = *param_2 | 8;
  }
  return uVar6 < 9;
}

