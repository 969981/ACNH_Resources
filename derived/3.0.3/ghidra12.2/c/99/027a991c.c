
/* WARNING: Removing unreachable block (ram,0x027a9c54) */

uint FUN_027a991c(undefined8 *param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  undefined **local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  uint *local_40;
  uint local_38;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
LAB_027a9ab4:
    uVar5 = FUN_0277e294(param_1);
    if ((uVar5 & 1) == 0) {
LAB_027a9d8c:
      uVar5 = FUN_0277e394(param_1,1);
      if ((uVar5 & 1) != 0) {
        local_50 = (undefined **)*param_1;
        FUN_0277e56c(&local_50,1);
        uVar4 = FUN_0277e788(&local_50);
        goto LAB_027a9dc0;
      }
    }
    else {
      local_48 = *(undefined4 *)param_1;
      uStack_44 = *(undefined4 *)((long)param_1 + 4);
      lVar9 = *(long *)puVar3;
      local_40 = (uint *)0x0;
      local_50 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      uVar4 = FUN_0277d6c4(&local_48);
      if (*(long *)puVar3 == 0) {
LAB_027a9bfc:
        puVar6 = (uint *)0x0;
        local_38 = 0xbc;
        bVar8 = true;
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_027a9bfc;
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_1);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
           (puVar6 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
           puVar6 == (uint *)0x0)) goto LAB_027a9bfc;
        local_38 = 0;
        uVar4 = *puVar6;
        local_40 = puVar6;
        if ((uVar4 == 0) || (puVar6 == (uint *)(ulong)uVar4)) {
LAB_027a9ddc:
          bVar8 = false;
        }
        else {
          puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
          local_38 = 0;
          if (*puVar7 == 0) goto LAB_027a9ddc;
          uVar4 = puVar7[1];
          if ((uVar4 == 0) || ((ulong)(ushort)puVar7[2] == 0)) {
LAB_027a9dd8:
            local_38 = 0;
            goto LAB_027a9ddc;
          }
          lVar9 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar9 == 0) goto LAB_027a9dd8;
          uVar1 = 0;
          if ((ulong)uVar4 != 0) {
            uVar1 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar4);
          }
          if (*puVar7 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if (DAT_05326ec0 <= uVar1) goto LAB_027a9dd8;
          local_38 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2);
          if (local_38 < 0xbd) goto LAB_027a9ddc;
          bVar8 = false;
          local_38 = 0;
        }
      }
      local_34 = 0x76;
      if ((local_38 != 0x76) && (uVar5 = FUN_01ae89e0(&local_50), (uVar5 & 1) == 0)) {
        local_34 = 0xac;
        if (bVar8) {
          local_38 = 0xbc;
        }
        else {
          uVar4 = *puVar6;
          local_38 = 0;
          if ((uVar4 != 0) && (puVar6 != (uint *)(ulong)uVar4)) {
            puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
            local_38 = 0;
            if (*puVar7 != 0) {
              uVar4 = puVar7[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
                lVar9 = 0xc;
                if (*(char *)((long)puVar7 + 10) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
                if (lVar9 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar4);
                  }
                  if (*puVar7 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < DAT_05326ec0) &&
                     (local_38 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                     local_38 < 0xbd)) goto LAB_027a9ce4;
                }
              }
              local_38 = 0;
            }
          }
LAB_027a9ce4:
          if (local_38 == 0xac) goto LAB_027a9dbc;
          puVar7 = (uint *)((long)puVar6 - (ulong)*puVar6);
          if ((((*puVar6 != 0) && (puVar7 != (uint *)0x0)) && (*puVar7 != 0)) &&
             ((uVar4 = puVar7[1], uVar4 != 0 && ((ulong)(ushort)puVar7[2] != 0)))) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar4);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (*(short *)(DAT_05326ec8 + (long)(int)uVar1 * 2) == 0xad)) goto LAB_027a9dbc;
            }
          }
        }
        uVar5 = FUN_01ae893c(&local_50);
        if (((uVar5 & 1) == 0) && (uVar5 = FUN_01ae8b58(&local_50), (uVar5 & 1) == 0))
        goto LAB_027a9d8c;
      }
    }
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_027a9ab4;
    local_40 = (uint *)0x0;
    local_48 = *(undefined4 *)param_1;
    uStack_44 = *(undefined4 *)((long)param_1 + 4);
    local_50 = &PTR_FUN_04a36b50;
    uVar4 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar3 == 0) goto LAB_027a9ab4;
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_027a9ab4;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_1);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
       (((puVar6 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar6 == (uint *)0x0 || (uVar4 = *puVar6, uVar4 == 0)) || (puVar6 == (uint *)(ulong)uVar4)
        ))) goto LAB_027a9ab4;
    puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
    if (((*puVar7 == 0) || (uVar4 = puVar7[1], uVar4 == 0)) || ((ulong)(ushort)puVar7[2] == 0))
    goto LAB_027a9ab4;
    lVar9 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      lVar9 = 0x1c;
    }
    lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
    if (lVar9 == 0) goto LAB_027a9ab4;
    uVar1 = 0;
    if ((ulong)uVar4 != 0) {
      uVar1 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar4);
    }
    if (*puVar7 <= uVar1) {
      uVar1 = 0xffffffff;
    }
    if (DAT_05326ec0 <= uVar1) goto LAB_027a9ab4;
    uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2);
    if ((0xbc < uVar2) || ((uVar4 = uVar2 - 0x8f, 4 < uVar4 || uVar4 == 2 && (uVar2 != 0x8a))))
    goto LAB_027a9ab4;
  }
LAB_027a9dbc:
  uVar4 = 0;
LAB_027a9dc0:
  return uVar4 & 1;
}

