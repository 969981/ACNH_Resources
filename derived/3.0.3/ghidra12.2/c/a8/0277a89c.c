
undefined8 FUN_0277a89c(void *param_1,undefined4 *param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined **local_7c8;
  undefined4 local_7c0;
  undefined4 uStack_7bc;
  undefined8 local_7b8;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  uint local_54;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar10 = *(long *)puVar2;
  if (lVar10 == 0) {
    return 0;
  }
  lVar9 = *(long *)(lVar9 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if (*(uint *)(lVar9 + 0x1d8) <= uVar3) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return 0;
  }
  if ((param_3 & 1) == 0) {
    uVar3 = FUN_0277d6c4(param_2);
    lVar9 = *(long *)puVar2;
    if (lVar9 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        local_7b8 = 0;
        local_7c8 = &PTR_FUN_04a36b50;
        local_7c0 = *param_2;
        uStack_7bc = param_2[1];
        uVar3 = FUN_0277d6c4(&local_7c0);
        if (*(long *)puVar2 == 0) {
LAB_0277aaf4:
          local_54 = 0xbc;
        }
        else {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
             (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0277aaf4;
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(param_2);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
             (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8),
             puVar7 == (uint *)0x0)) goto LAB_0277aaf4;
          uVar3 = *puVar7;
          if ((uVar3 == 0) || (puVar7 == (uint *)(ulong)uVar3)) {
LAB_0277aaec:
            local_54 = 0;
          }
          else {
            puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
            if ((*puVar8 != 0) &&
               ((uVar3 = puVar8[1], uVar3 != 0 && ((ulong)(ushort)puVar8[2] != 0)))) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
                }
                if (*puVar8 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if (((uVar1 < DAT_05326ec0) &&
                    (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd)) &&
                   ((uVar5 & 0xfffe) == 0x9a)) goto LAB_0277ab28;
              }
            }
            if (((*puVar8 == 0) || (uVar3 = puVar8[1], uVar3 == 0)) ||
               ((ulong)(ushort)puVar8[2] == 0)) goto LAB_0277aaec;
            lVar9 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar9 == 0) goto LAB_0277aaec;
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((*(uint *)PTR_DAT_04bc00c8 <= uVar1) ||
               (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
               local_54 = (uint)uVar5, 0xbc < uVar5)) goto LAB_0277aaec;
          }
        }
        if ((local_54 - 100 < 0x38) &&
           ((1L << ((ulong)(local_54 - 100) & 0x3f) & 0xc00020000002e7U) != 0)) {
          return 0;
        }
      }
    }
  }
LAB_0277ab28:
  local_7c0 = *param_2;
  uStack_7bc = param_2[1];
  lVar9 = *(long *)puVar2;
  local_7c8 = &PTR_FUN_04a36b50;
  local_7b8 = 0;
  uVar3 = FUN_0277d6c4(&local_7c0);
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
         (((puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8),
           puVar7 != (uint *)0x0 && (uVar3 = *puVar7, uVar3 != 0)) &&
          (puVar7 != (uint *)(ulong)uVar3)))) {
        puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
        if (((*puVar8 != 0) && (uVar3 = puVar8[1], uVar3 != 0)) && ((ulong)(ushort)puVar8[2] != 0))
        {
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) && (*(short *)(DAT_05326ec8 + (long)(int)uVar1 * 2) == 0x8c))
            {
              return 0;
            }
          }
        }
      }
    }
  }
  iVar4 = FUN_0277d6c4(param_2);
  if (iVar4 == 0x32a8) {
    return 0;
  }
  lVar9 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(param_2);
  lVar10 = *(long *)puVar2;
  if (lVar10 == 0) {
LAB_0277adb4:
    iVar4 = 1;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0277adb4;
    local_7b8 = 0;
    local_7c8 = &PTR_FUN_04a36b50;
    local_7c0 = *param_2;
    uStack_7bc = param_2[1];
    uVar3 = FUN_0277d6c4(&local_7c0);
    if (*(long *)puVar2 == 0) {
LAB_0277b028:
      uVar5 = 0xbc;
    }
    else {
      lVar9 = *(long *)(lVar10 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0277b028;
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
         (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar7 == (uint *)0x0)) goto LAB_0277b028;
      uVar3 = *puVar7;
      uVar5 = 0;
      if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
        puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
        if ((*puVar8 != 0) && ((uVar3 = puVar8[1], uVar3 != 0 && ((ulong)(ushort)puVar8[2] != 0))))
        {
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
            goto LAB_0277b02c;
          }
        }
        uVar5 = 0;
      }
    }
LAB_0277b02c:
    iVar4 = FUN_0277a480(param_1,uVar5);
    lVar10 = *(long *)puVar2;
    iVar4 = iVar4 + 1;
  }
  uVar3 = FUN_0277d6c4(param_2);
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    if (iVar4 != 0) {
      return 0;
    }
    goto LAB_0277af34;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
     (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
    local_7b8 = 0;
    local_7c8 = &PTR_FUN_04a36b50;
    local_7c0 = *param_2;
    uStack_7bc = param_2[1];
    uVar3 = FUN_0277d6c4(&local_7c0);
    if (*(long *)puVar2 == 0) {
LAB_0277b040:
      local_54 = 0xbc;
    }
    else {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0277b040;
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
         (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar7 == (uint *)0x0)) goto LAB_0277b040;
      uVar3 = *puVar7;
      local_54 = 0;
      if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
        puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
        local_54 = 0;
        if (*puVar8 != 0) {
          uVar3 = puVar8[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
              }
              if (*puVar8 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (local_54 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), local_54 < 0xbd
                 )) goto LAB_0277b044;
            }
          }
          local_54 = 0;
        }
      }
    }
LAB_0277b044:
    lVar9 = DAT_0532a840 + (ulong)local_54 * 0x20;
    if (0xbc < local_54) {
      lVar9 = DAT_0532a840;
    }
    iVar6 = *(int *)(lVar9 + 4);
  }
  else {
    iVar6 = 0;
  }
  if (iVar4 != iVar6) {
    return 0;
  }
LAB_0277af34:
  lVar9 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(param_2);
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_7c8 = &PTR_LAB_049ff3a8;
      uVar3 = nn::os::GetSystemTick();
      local_6c = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
      local_68 = (local_6c ^ local_6c >> 0x1e) * 0x6c078965 + 2;
      local_64 = (local_68 ^ local_68 >> 0x1e) * 0x6c078965 + 3;
      local_60 = (local_64 ^ local_64 >> 0x1e) * 0x6c078965 + 4;
      memcpy(&local_7c0,param_1,0x754);
      lVar9 = FUN_01a45204(&local_7c8);
      uVar3 = FUN_0277d6c4(param_2);
      if (((uVar3 >> 3 & 0x1fff) < 0x753) &&
         ((*(uint *)(lVar9 + (ulong)((uVar3 & 0xffff) >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1) != 0)
         ) {
        return 0;
      }
    }
  }
  return 1;
}

