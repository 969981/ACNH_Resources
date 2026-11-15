
uint FUN_02076ca0(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  ushort uVar7;
  uint uVar8;
  undefined *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined *local_1720;
  long local_1718;
  undefined1 local_1710;
  byte local_170f;
  uint local_1708 [2];
  long local_1700;
  long local_16f8;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint *local_58;
  short local_38;
  undefined1 auStack_36 [2];
  uint local_34;
  
  puVar9 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  lVar12 = *(long *)puVar9;
  if (lVar12 == 0) {
    return 0x17;
  }
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if (*(uint *)(lVar11 + 0x1d8) <= uVar2) {
    return 0x17;
  }
  if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar2 * 8) == 0) {
    return 0x17;
  }
  local_58 = (uint *)0x0;
  local_60 = *param_1;
  uStack_5c = param_1[1];
  local_68 = &PTR_FUN_04a36b50;
  uVar2 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar9 == 0) {
LAB_02076e78:
    puVar6 = (uint *)0x0;
    local_1708[0] = 0xbc;
    bVar1 = true;
  }
  else {
    lVar11 = *(long *)(lVar12 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02076e78;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar2 = FUN_0277d6c4(param_1);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar2) ||
       (puVar6 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar2 * 8), puVar6 == (uint *)0x0
       )) goto LAB_02076e78;
    uVar2 = *puVar6;
    local_1708[0] = 0;
    local_58 = puVar6;
    if ((uVar2 == 0) || (puVar6 == (uint *)(ulong)uVar2)) {
LAB_02077278:
      bVar1 = false;
    }
    else {
      puVar10 = (uint *)((long)puVar6 - (long)(ulong)uVar2);
      local_1708[0] = 0;
      if (*puVar10 == 0) goto LAB_02077278;
      uVar2 = puVar10[1];
      if ((uVar2 == 0) || ((ulong)(ushort)puVar10[2] == 0)) {
LAB_02077274:
        local_1708[0] = 0;
        goto LAB_02077278;
      }
      lVar11 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar11 == 0) goto LAB_02077274;
      uVar8 = 0;
      if ((ulong)uVar2 != 0) {
        uVar8 = (uint)((ulong)((long)puVar6 - lVar11) / (ulong)uVar2);
      }
      if (*puVar10 <= uVar8) {
        uVar8 = 0xffffffff;
      }
      if (DAT_05326ec0 <= uVar8) goto LAB_02077274;
      local_1708[0] = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar8 * 2);
      if (local_1708[0] < 0xbd) goto LAB_02077278;
      bVar1 = false;
      local_1708[0] = 0;
    }
  }
  local_34 = 0x17;
  uVar2 = 0x17;
  switch(local_1708[0]) {
  case 9:
    iVar3 = FUN_01b024bc(&local_68,1);
    uVar2 = iVar3 - 1;
    if (3 < uVar2) {
      uVar2 = 4;
    }
    break;
  case 10:
    uVar2 = 0;
    if (((!bVar1) && (uVar8 = *puVar6, uVar8 != 0)) && (puVar6 != (uint *)(ulong)uVar8)) {
      puVar10 = (uint *)((long)puVar6 - (long)(ulong)uVar8);
      uVar2 = 0;
      if (*puVar10 != 0) {
        uVar2 = puVar10[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar8 = 0;
            if ((ulong)uVar2 != 0) {
              uVar8 = (uint)((ulong)((long)puVar6 - lVar11) / (ulong)uVar2);
            }
            if (*puVar10 <= uVar8) {
              uVar8 = 0xffffffff;
            }
            if ((uVar8 < DAT_05327218) &&
               (uVar2 = (uint)*(ushort *)(DAT_05327220 + (long)(int)uVar8 * 2), uVar2 < 0x1c))
            goto LAB_020770a4;
          }
        }
        uVar2 = 0;
      }
    }
LAB_020770a4:
    uVar2 = uVar2 - 2;
    if (4 < uVar2) {
      return 10;
    }
    puVar9 = &DAT_04179644;
    goto LAB_020770c0;
  case 0xb:
  case 0xc:
  case 0xe:
    break;
  case 0xd:
    uVar7 = 0;
    if (((!bVar1) && (uVar2 = *puVar6, uVar2 != 0)) && (puVar6 != (uint *)(ulong)uVar2)) {
      puVar10 = (uint *)((long)puVar6 - (long)(ulong)uVar2);
      uVar7 = 0;
      if (*puVar10 != 0) {
        uVar2 = puVar10[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar8 = 0;
            if ((ulong)uVar2 != 0) {
              uVar8 = (uint)((ulong)((long)puVar6 - lVar11) / (ulong)uVar2);
            }
            if (*puVar10 <= uVar8) {
              uVar8 = 0xffffffff;
            }
            if ((uVar8 < DAT_05327218) &&
               (uVar7 = *(ushort *)(DAT_05327220 + (long)(int)uVar8 * 2), uVar7 < 0x1c))
            goto LAB_02077158;
          }
        }
        uVar7 = 0;
      }
    }
LAB_02077158:
    uVar8 = 6;
    if (uVar7 != 3) {
      uVar8 = 0x17;
    }
    uVar2 = 5;
    if (uVar7 != 2) {
      uVar2 = uVar8;
    }
    break;
  case 0xf:
    uVar2 = 0x11;
    break;
  case 0x10:
    uVar7 = 0;
    if (((!bVar1) && (uVar2 = *puVar6, uVar2 != 0)) && (puVar6 != (uint *)(ulong)uVar2)) {
      puVar10 = (uint *)((long)puVar6 - (long)(ulong)uVar2);
      uVar7 = 0;
      if (*puVar10 != 0) {
        uVar2 = puVar10[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar8 = 0;
            if ((ulong)uVar2 != 0) {
              uVar8 = (uint)((ulong)((long)puVar6 - lVar11) / (ulong)uVar2);
            }
            if (*puVar10 <= uVar8) {
              uVar8 = 0xffffffff;
            }
            if ((uVar8 < DAT_05327218) &&
               (uVar7 = *(ushort *)(DAT_05327220 + (long)(int)uVar8 * 2), uVar7 < 0x1c))
            goto LAB_02077214;
          }
        }
        uVar7 = 0;
      }
    }
LAB_02077214:
    uVar8 = 0xb;
    if (uVar7 != 7) {
      uVar8 = 0x17;
    }
    uVar2 = 0xc;
    if (uVar7 != 8) {
      uVar2 = uVar8;
    }
    break;
  case 0x11:
  case 0x12:
    uVar2 = 0;
    if (((!bVar1) && (uVar8 = *puVar6, uVar8 != 0)) && (puVar6 != (uint *)(ulong)uVar8)) {
      puVar10 = (uint *)((long)puVar6 - (long)(ulong)uVar8);
      uVar2 = 0;
      if (*puVar10 != 0) {
        uVar2 = puVar10[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar8 = 0;
            if ((ulong)uVar2 != 0) {
              uVar8 = (uint)((ulong)((long)puVar6 - lVar11) / (ulong)uVar2);
            }
            if (*puVar10 <= uVar8) {
              uVar8 = 0xffffffff;
            }
            if ((uVar8 < DAT_05327218) &&
               (uVar2 = (uint)*(ushort *)(DAT_05327220 + (long)(int)uVar8 * 2), uVar2 < 0x1c))
            goto LAB_02076f40;
          }
        }
        uVar2 = 0;
      }
    }
LAB_02076f40:
    uVar2 = uVar2 - 9;
    if (3 < uVar2) {
      return 0x17;
    }
    puVar9 = &DAT_04102510;
LAB_020770c0:
    uVar2 = *(uint *)(puVar9 + (long)(int)uVar2 * 4);
    break;
  default:
    if (local_1708[0] != 0xac) {
      return 0x17;
    }
    FUN_01b086f4(&local_38,&local_68);
    if (local_38 == DAT_04cb6038) {
      return 0x17;
    }
    FUN_007ef010(auStack_36,&local_38);
    FUN_007e4920(local_1708,auStack_36);
    uVar4 = FUN_007ef180(&local_38);
    if ((uVar4 & 1) == 0) {
      if (local_1700 != 0) {
        local_1718 = local_1700;
        local_1710 = 1;
        if (*(long **)(local_1700 + 0x28) == (long *)0x0) {
          local_170f = 0;
        }
        else {
          puVar5 = (undefined8 *)**(long **)(local_1700 + 0x28);
          local_170f = 0;
          if (puVar5 != (undefined8 *)0x0) {
            local_170f = (**(code **)*puVar5)();
          }
        }
        local_1720 = &DAT_049170e0;
        local_16f8 = local_1700;
        goto LAB_0207729c;
      }
    }
    else if (local_16f8 != 0) {
      local_1718 = local_16f8;
      local_1710 = 1;
      if (*(long **)(local_16f8 + 0x28) == (long *)0x0) {
        local_170f = 0;
        local_1720 = PTR_DAT_04bb4c50;
      }
      else {
        puVar5 = (undefined8 *)**(long **)(local_16f8 + 0x28);
        local_170f = 0;
        if (puVar5 != (undefined8 *)0x0) {
          local_170f = (**(code **)*puVar5)();
        }
        local_1720 = &DAT_049170c0;
      }
LAB_0207729c:
      local_170f = local_170f & 1;
      local_1720 = local_1720 + 0x10;
      FUN_020772d8(*(long *)(local_16f8 + 0x10) + *(long *)(local_16f8 + 8) + 0x38,&local_34,param_2
                   ,param_3);
      FUN_02640184(&local_1720);
    }
    uVar2 = local_34;
  }
  return uVar2;
}

