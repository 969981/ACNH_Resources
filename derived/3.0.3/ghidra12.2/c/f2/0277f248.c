
void FUN_0277f248(short *param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined **local_70;
  undefined4 local_68;
  undefined4 local_64;
  uint *local_60;
  uint local_54;
  undefined8 local_38;
  
  sVar1 = *param_1;
  if ((ushort)(sVar1 + 3U) < 2) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  lVar10 = DAT_05150358;
  if (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar2 = *(ushort *)(lVar9 + 0x1f8);
    uVar4 = *(uint *)(lVar9 + 0x1d8);
    uVar3 = (uVar3 & 0xffff) - (uint)uVar2;
    if ((uVar3 < uVar4) &&
       (lVar9 = *(long *)(lVar9 + 0x1e0), *(long *)(lVar9 + (long)(int)uVar3 * 8) != 0)) {
      local_60 = (uint *)0x0;
      local_70 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      local_68 = CONCAT22(param_1[1],sVar1);
      local_64 = *(undefined4 *)(param_1 + 2);
      uVar3 = FUN_0277d6c4(&local_68);
      uVar3 = (uVar3 & 0xffff) - (uint)uVar2;
      if ((uVar3 < uVar4) && (*(long *)(lVar9 + (long)(int)uVar3 * 8) != 0)) {
        lVar10 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((*(uint *)(lVar10 + 0x1d8) <= uVar3) ||
           (puVar7 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8),
           puVar7 == (uint *)0x0)) goto LAB_0277f49c;
        local_38._0_4_ = 0;
        uVar3 = *puVar7;
        local_60 = puVar7;
        if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
          local_38._0_4_ = 0;
          if (*puVar8 != 0) {
            uVar3 = puVar8[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar8 + lVar10 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar10 != 0) {
                uVar4 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar4 = (uint)((ulong)((long)puVar7 - lVar10) / (ulong)uVar3);
                }
                if (*puVar8 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < DAT_05326ec0) &&
                   (local_38._0_4_ = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar4 * 2),
                   (uint)local_38 < 0xbd)) goto LAB_0277f4a0;
              }
            }
            local_38._0_4_ = 0;
          }
        }
      }
      else {
LAB_0277f49c:
        local_38._0_4_ = 0xbc;
      }
LAB_0277f4a0:
      if ((uint)local_38 == 0xa0) {
        local_38._0_4_ = 0x313;
        local_38._4_4_ = 0;
        FUN_0277d4ac(&local_38);
        FUN_01b0a294(&local_70,&local_38);
LAB_0277f51c:
        *(undefined4 *)(param_1 + 2) = local_64;
      }
      else {
        if ((uint)local_38 == 0x8d) {
          local_38._0_4_ = 0x313;
          local_38._4_4_ = 0;
          FUN_0277d4ac(&local_38);
          FUN_01b0678c(&local_70,&local_38);
          goto LAB_0277f51c;
        }
        if ((uint)local_38 == 0x71) {
          local_38._0_4_ = 0x128;
          local_38._4_4_ = 0;
          FUN_0277d4ac(&local_38);
          FUN_01b0b2ec(&local_70,&local_38);
          goto LAB_0277f51c;
        }
      }
      uVar6 = FUN_01af0020(&local_70);
      if ((uVar6 & 1) != 0) {
        param_1[2] = (ushort)*(byte *)((long)param_1 + 5) << 8;
      }
      if (local_60 == (uint *)0x0) {
LAB_0277f5cc:
        uVar4 = 0;
      }
      else {
        uVar3 = *local_60;
        uVar4 = 0;
        if ((uVar3 != 0) && (local_60 != (uint *)(ulong)uVar3)) {
          puVar7 = (uint *)((long)local_60 - (long)(ulong)uVar3);
          uVar4 = 0;
          if (*puVar7 != 0) {
            uVar3 = puVar7[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar7 + lVar10 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar10 != 0) {
                uVar4 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar4 = (uint)((ulong)((long)local_60 - lVar10) / (ulong)uVar3);
                }
                if (*puVar7 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < DAT_05326d48) &&
                   (uVar4 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar4 * 2), uVar4 < 0x52))
                goto LAB_0277f5d0;
              }
            }
            goto LAB_0277f5cc;
          }
        }
      }
LAB_0277f5d0:
      local_38 = CONCAT44(local_38._4_4_,uVar4);
      if ((uVar4 & 0xfffffffe) == 0x12) {
        FUN_01aea570(&local_70,2);
        *(undefined4 *)(param_1 + 2) = local_64;
      }
      iVar5 = FUN_0277d6c4(&local_68);
      if (((iVar5 == 0x1618) || (iVar5 = FUN_0277d6c4(&local_68), iVar5 == 0x315a)) ||
         (iVar5 = FUN_0277d6c4(&local_68), iVar5 == 0x3805)) {
        local_38 = 0xec9;
        FUN_0277d4ac(&local_38);
        FUN_01b01548(&local_70,&local_38);
        *(undefined4 *)(param_1 + 2) = local_64;
      }
      iVar5 = FUN_0277d6c4(&local_68);
      if (iVar5 == 0x342f) {
        local_38 = 0x3358;
        FUN_0277d4ac(&local_38);
        FUN_01b01cc0(&local_70,&local_38);
        *(undefined4 *)(param_1 + 2) = local_64;
      }
      local_38 = CONCAT44(local_38._4_4_,0xb1);
      if (local_60 == (uint *)0x0) {
        local_54 = 0xbc;
      }
      else {
        uVar3 = *local_60;
        local_54 = 0;
        if ((uVar3 != 0) && (local_60 != (uint *)(ulong)uVar3)) {
          puVar7 = (uint *)((long)local_60 - (long)(ulong)uVar3);
          local_54 = 0;
          if (*puVar7 != 0) {
            uVar3 = puVar7[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar7 + lVar10 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar10 != 0) {
                uVar4 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar4 = (uint)((ulong)((long)local_60 - lVar10) / (ulong)uVar3);
                }
                if (*puVar7 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < DAT_05326ec0) &&
                   (local_54 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar4 * 2),
                   local_54 < 0xbd)) goto LAB_0277f734;
              }
            }
            local_54 = 0;
          }
        }
      }
LAB_0277f734:
      if (local_54 != 0xb1) {
        return;
      }
      FUN_01b058c8(&local_70,0xf);
      goto LAB_0277f754;
    }
  }
  if (DAT_05150358 == 0) {
    return;
  }
  lVar9 = *(long *)(DAT_05150358 + 0xb0);
  if (lVar9 == 0) {
    return;
  }
  if (*(long *)(lVar9 + 8) == 0) {
    return;
  }
  if (*(long *)(DAT_05150358 + 0x488) == 0) {
    return;
  }
  if (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0) {
    return;
  }
  if (*(long *)(DAT_05150358 + 0x2b0) == 0) {
    return;
  }
  if (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0) {
    return;
  }
  uVar3 = FUN_0277d6c4(param_1);
  uVar2 = *(ushort *)(lVar10 + 0x1f8);
  uVar4 = (uVar3 & 0xffff) - (uint)uVar2;
  uVar3 = *(uint *)(lVar10 + 0x1d8);
  if (uVar3 <= uVar4) {
    return;
  }
  lVar10 = *(long *)(lVar10 + 0x1e0);
  if (*(long *)(lVar10 + (long)(int)uVar4 * 8) == 0) {
    return;
  }
  local_70 = &PTR_LAB_04989040;
  local_68 = CONCAT22(param_1[1],sVar1);
  local_64 = *(undefined4 *)(param_1 + 2);
  if (*(long *)(lVar9 + 8) == 0) {
LAB_0277f77c:
    local_60 = (uint *)0x0;
    local_38 = 0xea71;
    FUN_0277d4ac(&local_38);
    lVar10 = DAT_05150358;
    local_68 = (uint)local_38;
    local_64 = local_38._4_4_;
    if (DAT_05150358 == 0) {
LAB_0277f7dc:
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      if ((*(long *)(DAT_05150358 + 0xb0) != 0) &&
         (lVar9 = 0, *(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) {
        uVar3 = FUN_0277d6c4(&local_68);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if (*(uint *)(lVar10 + 0x1d8) <= uVar3) goto LAB_0277f7dc;
        lVar9 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8);
      }
    }
    local_60 = (uint *)lVar9;
  }
  else {
    uVar4 = FUN_0277d6c4(param_1);
    uVar4 = (uVar4 & 0xffff) - (uint)uVar2;
    if ((uVar3 <= uVar4) ||
       (local_60 = *(uint **)(lVar10 + (long)(int)uVar4 * 8), local_60 == (uint *)0x0))
    goto LAB_0277f77c;
  }
  FUN_0124c150(&local_70);
LAB_0277f754:
  *(undefined4 *)(param_1 + 2) = local_64;
  return;
}

