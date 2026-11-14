
undefined8 FUN_01c1e750(undefined8 param_1,short *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  long lVar17;
  uint *puVar18;
  bool bVar19;
  int iVar20;
  undefined2 local_828;
  undefined1 local_826;
  undefined1 local_825;
  undefined4 local_824;
  undefined *local_820;
  undefined1 auStack_818 [1876];
  uint local_c4;
  uint local_c0;
  uint local_bc;
  int local_b8;
  uint local_ac;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint *local_98;
  undefined **local_90;
  uint *local_88;
  undefined8 local_80;
  uint local_70;
  undefined4 local_6c;
  
  if ((*param_2 == -2) || (DAT_05574040 == 0)) {
    return 0;
  }
  puVar14 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar8 = (**(code **)(*(long *)*puVar14 + 0x38))();
    if (lVar8 == 0) {
      return 0;
    }
    lVar8 = lVar8 + 0x70;
  }
  else {
    if (puVar14 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar14[0x26] == (long *)0x0) {
      return 0;
    }
    lVar8 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
    if (lVar8 == 0) {
      return 0;
    }
  }
  if ((*(long **)(lVar8 + 0x1bf1b8) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar8 + 0x1bf1b8), puVar14 == (undefined8 *)0x0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)*puVar14)();
    uVar9 = uVar9 & 0xffffffff;
  }
  puVar6 = PTR_DAT_04bc0510;
  puVar5 = PTR_DAT_04bb43c0;
  local_98 = (uint *)0x0;
  local_a8 = PTR_DAT_04bc0510 + 0x10;
  local_a0 = *(undefined4 *)param_2;
  uStack_9c = *(undefined4 *)(param_2 + 2);
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_a0);
  if (*(long *)puVar5 == 0) {
LAB_01c1e970:
    puVar18 = (uint *)0x0;
    local_820 = (undefined *)CONCAT44(local_820._4_4_,0x70);
    uVar7 = 0xbc;
    bVar19 = true;
  }
  else {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((*(uint *)(lVar17 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_01c1e970;
    lVar17 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(param_2);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((*(uint *)(lVar17 + 0x1d8) <= uVar7) ||
       (puVar18 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8),
       puVar18 == (uint *)0x0)) goto LAB_01c1e970;
    uVar7 = 0;
    local_820 = (undefined *)CONCAT44(local_820._4_4_,0x70);
    uVar3 = *puVar18;
    local_98 = puVar18;
    if ((uVar3 == 0) || (puVar18 == (uint *)(ulong)uVar3)) {
LAB_01c1eb98:
      bVar19 = false;
    }
    else {
      puVar15 = (uint *)((long)puVar18 - (long)(ulong)uVar3);
      uVar7 = 0;
      if (*puVar15 == 0) goto LAB_01c1eb98;
      uVar7 = puVar15[1];
      if ((uVar7 == 0) || ((ulong)(ushort)puVar15[2] == 0)) {
LAB_01c1eb94:
        uVar7 = 0;
        goto LAB_01c1eb98;
      }
      lVar17 = 0xc;
      if (*(char *)((long)puVar15 + 10) != '\0') {
        lVar17 = 0x1c;
      }
      lVar17 = (long)puVar15 + lVar17 + (ulong)(ushort)puVar15[2] * 8;
      if (lVar17 == 0) goto LAB_01c1eb94;
      uVar3 = 0;
      if ((ulong)uVar7 != 0) {
        uVar3 = (uint)((ulong)((long)puVar18 - lVar17) / (ulong)uVar7);
      }
      if (*puVar15 <= uVar3) {
        uVar3 = 0xffffffff;
      }
      if (DAT_05326ec0 <= uVar3) goto LAB_01c1eb94;
      uVar7 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2);
      if (uVar7 < 0xbd) goto LAB_01c1eb98;
      bVar19 = false;
      uVar7 = 0;
    }
  }
  local_90 = (undefined **)CONCAT44(local_90._4_4_,uVar7);
  if ((uVar7 != (uint)local_820) ||
     (uVar10 = FUN_027bf130(*(long *)(lVar8 + 0x1bf1a0) + *(long *)(lVar8 + 0x1bf198),param_2),
     (uVar10 & 1) == 0)) {
LAB_01c1ede0:
    uVar16 = 0;
    goto LAB_01c1ede4;
  }
  if (!bVar19) {
    uVar7 = *puVar18;
    uVar16 = 1;
    if ((uVar7 == 0) || (puVar18 == (uint *)(ulong)uVar7)) goto LAB_01c1ede4;
    puVar15 = (uint *)((long)puVar18 - (long)(ulong)uVar7);
    if ((*puVar15 == 0) || ((uVar7 = puVar15[1], uVar7 == 0 || ((ulong)(ushort)puVar15[2] == 0))))
    goto LAB_01c1ede4;
    lVar17 = 0xc;
    if (*(char *)((long)puVar15 + 10) != '\0') {
      lVar17 = 0x1c;
    }
    lVar17 = (long)puVar15 + lVar17 + (ulong)(ushort)puVar15[2] * 8;
    if (lVar17 == 0) goto LAB_01c1ede4;
    uVar3 = 0;
    if ((ulong)uVar7 != 0) {
      uVar3 = (uint)((ulong)((long)puVar18 - lVar17) / (ulong)uVar7);
    }
    if (*puVar15 <= uVar3) {
      uVar3 = 0xffffffff;
    }
    if (((DAT_05326fd0 <= uVar3) ||
        (uVar4 = *(ushort *)(DAT_05326fd8 + (long)(int)uVar3 * 2), uVar7 = (uint)uVar4, 0x23 < uVar4
        )) || (local_ac = uVar7, uVar7 == 0)) goto LAB_01c1ede4;
    local_820 = PTR_DAT_04bbfe60 + 0x10;
    memset(auStack_818,0,0x754);
    uVar7 = nn::os::GetSystemTick();
    local_c4 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
    local_c0 = (local_c4 ^ local_c4 >> 0x1e) * 0x6c078965 + 2;
    local_bc = (local_c0 ^ local_c0 >> 0x1e) * 0x6c078965 + 3;
    local_b8 = (local_bc ^ local_bc >> 0x1e) * 0x6c078965 + 4;
    pvVar11 = (void *)FUN_01a451fc(&local_820);
    memset(pvVar11,0,0x754);
    pvVar11 = (void *)(**(code **)(local_820 + 0x18))(&local_820);
    memset(pvVar11,0,0x754);
    local_88 = &local_ac;
    local_90 = &PTR_FUN_049ff5d8;
    FUN_008a1ba0(&local_820,&local_90);
    lVar17 = (**(code **)(local_820 + 0x20))(&local_820);
    uVar10 = 0;
    do {
      if ((*(uint *)(lVar17 + (uVar10 >> 5) * 4) >> (ulong)((uint)uVar10 & 0x1f) & 1) != 0)
      goto LAB_01c1eb48;
      uVar7 = (uint)uVar10 + 1;
      uVar10 = (ulong)uVar7;
    } while (uVar7 != 15000);
    uVar10 = 0;
LAB_01c1eb48:
    lVar12 = (**(code **)(local_820 + 0x20))(&local_820);
    iVar20 = 15000;
    do {
      if ((*(uint *)(lVar12 + (ulong)(iVar20 - 1U >> 5) * 4) >> (ulong)(iVar20 - 1U & 0x1f) & 1) !=
          0) break;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    if (iVar20 != (int)uVar10) {
LAB_01c1ebb0:
      plVar1 = (long *)(PTR_DAT_04bbfe58 + uVar10 * 8);
      if (0x752 < (uint)(uVar10 >> 3)) {
        plVar1 = (long *)PTR_DAT_04bbfe58;
      }
      lVar12 = *(long *)puVar5;
      local_80 = 0;
      plVar2 = (long *)&DAT_05586008;
      if ((uint)uVar10 < 0x3a99) {
        plVar2 = plVar1;
      }
      local_828 = (undefined2)*plVar2;
      local_826 = *(undefined1 *)((long)plVar2 + 2);
      local_825 = *(undefined1 *)((long)plVar2 + 3);
      local_824 = *(undefined4 *)((long)plVar2 + 4);
      local_88 = (uint *)*plVar2;
      local_90 = (undefined **)(puVar6 + 0x10);
      uVar7 = FUN_0277d6c4(&local_88);
      if (*(long *)puVar5 == 0) {
LAB_01c1ed30:
        local_70 = 0xbc;
      }
      else {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_01c1ed30;
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(&local_828);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
           (puVar18 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8),
           puVar18 == (uint *)0x0)) goto LAB_01c1ed30;
        local_70 = 0;
        uVar7 = *puVar18;
        if ((uVar7 != 0) && (puVar18 != (uint *)(ulong)uVar7)) {
          puVar15 = (uint *)((long)puVar18 - (long)(ulong)uVar7);
          local_70 = 0;
          if (*puVar15 != 0) {
            uVar7 = puVar15[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
              lVar12 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar15 + lVar12 + (ulong)(ushort)puVar15[2] * 8;
              if (lVar12 != 0) {
                uVar3 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar18 - lVar12) / (ulong)uVar7);
                }
                if (*puVar15 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < DAT_05326ec0) &&
                   (local_70 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2),
                   local_70 < 0xbd)) goto LAB_01c1ed3c;
              }
            }
            local_70 = 0;
          }
        }
      }
LAB_01c1ed3c:
      local_6c = 0x70;
      if (local_70 == 0x70) {
        local_90 = (undefined **)*plVar2;
        uVar13 = FUN_027bf130(*(long *)(lVar8 + 0x1bf1a0) + *(long *)(lVar8 + 0x1bf198),&local_90);
        if ((uVar13 & 1) == 0) goto LAB_01c1ede0;
      }
      do {
        uVar7 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar7;
        if (0x752 < uVar7 >> 3) {
          uVar7 = 0x3a95;
          goto LAB_01c1ed94;
        }
      } while ((*(uint *)(lVar17 + (ulong)(uVar7 >> 5) * 4) >> (ulong)(uVar7 & 0x1f) & 1) == 0);
      goto LAB_01c1eba8;
    }
  }
LAB_01c1e9b0:
  uVar16 = 1;
LAB_01c1ede4:
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0x1bf1b8) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar8 + 0x1bf1b8) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  return uVar16;
  while( true ) {
    if ((*(uint *)(lVar17 + (ulong)(uVar7 >> 5) * 4) >> (ulong)(uVar7 & 0x1f) & 1) != 0)
    goto LAB_01c1eba4;
    uVar7 = uVar7 - 3;
    if (uVar7 == 0xfffffffd) break;
LAB_01c1ed94:
    uVar3 = uVar7 + 2;
    if (((*(uint *)(lVar17 + (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1) != 0) ||
       (uVar3 = uVar7 + 1,
       (*(uint *)(lVar17 + (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1) != 0)) {
      uVar7 = uVar3;
LAB_01c1eba4:
      uVar10 = (ulong)(uVar7 + 1);
      goto LAB_01c1eba8;
    }
  }
  uVar10 = 0;
LAB_01c1eba8:
  if (iVar20 == (int)uVar10) goto LAB_01c1e9b0;
  goto LAB_01c1ebb0;
}

