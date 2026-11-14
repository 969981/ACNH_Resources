
void FUN_016d2b94(short *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint *puVar10;
  short *psVar11;
  ushort uVar12;
  uint *puVar13;
  long lVar14;
  short *psVar15;
  short *psVar16;
  long lVar17;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  long local_58;
  
  local_b0 = *(undefined2 *)PTR_DAT_04bb37e0;
  local_ae = PTR_DAT_04bb37e0[2];
  local_ad = PTR_DAT_04bb37e0[3];
  local_98 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_ac = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_a8 = local_b0;
  local_a6 = local_ae;
  local_a5 = local_ad;
  local_a4 = local_ac;
  local_a0 = local_b0;
  local_9e = local_ae;
  local_9d = local_ad;
  local_9c = local_ac;
  local_94 = local_ac;
  local_90 = local_b0;
  local_8e = local_ae;
  local_8d = local_ad;
  local_8c = local_ac;
  local_88 = local_b0;
  local_86 = local_ae;
  local_85 = local_ad;
  local_84 = local_ac;
  local_80 = local_b0;
  local_7e = local_ae;
  local_7d = local_ad;
  local_7c = local_ac;
  local_78 = local_b0;
  local_76 = local_ae;
  local_75 = local_ad;
  local_74 = local_ac;
  local_70 = local_b0;
  local_6e = local_ae;
  local_6d = local_ad;
  local_6c = local_ac;
  uVar6 = FUN_016d3390(&local_b0,0);
  if ((uVar6 & 1) == 0) {
    local_68 = (undefined **)0x3390;
    FUN_0277d4ac(&local_68);
    *(int *)param_1 = (int)local_68;
    *(undefined4 *)(param_1 + 2) = local_68._4_4_;
    return;
  }
  *(undefined4 *)param_1 = local_98;
  *(undefined4 *)(param_1 + 2) = local_94;
  lVar7 = FUN_016c91a4(param_2);
  if (lVar7 == 0) {
    return;
  }
  if (*(long **)(lVar7 + 0x28) == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar8 = (undefined8 *)**(long **)(lVar7 + 0x28);
    uVar6 = 0;
    if (puVar8 != (undefined8 *)0x0) {
      uVar6 = (**(code **)*puVar8)();
    }
  }
  cVar3 = *(char *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x1634);
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  local_68 = (undefined **)CONCAT44(local_68._4_4_,(uint)(cVar3 == '\0'));
  if (DAT_05574040 == 0) {
    return;
  }
  puVar8 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar7 = (**(code **)(*(long *)*puVar8 + 0x38))();
    if (lVar7 == 0) {
      return;
    }
    lVar7 = lVar7 + 0x70;
  }
  else {
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar8[0x26] == (long *)0x0) {
      return;
    }
    lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
    if (lVar7 == 0) {
      return;
    }
  }
  lVar7 = lVar7 + (long)(int)local_68 * 0x18b8;
  if ((*(long **)(lVar7 + 0x271d38) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x271d38), puVar8 == (undefined8 *)0x0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)*puVar8)();
    uVar6 = uVar6 & 0xffffffff;
  }
  puVar4 = PTR_DAT_04bb43c0;
  psVar11 = (short *)(*(long *)(lVar7 + 0x271d20) + *(long *)(lVar7 + 0x271d18));
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(psVar11);
  if (*(long *)puVar4 == 0) {
    psVar15 = &DAT_05586008;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    psVar15 = (short *)PTR_DAT_04bb37e0;
    if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      psVar15 = psVar11;
    }
  }
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar7 + 0x271d38) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x271d38) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  if ((*(long **)(lVar7 + 0x272940) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x272940), puVar8 == (undefined8 *)0x0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)*puVar8)();
    uVar6 = uVar6 & 0xffffffff;
  }
  psVar11 = (short *)(*(long *)(lVar7 + 0x272928) + *(long *)(lVar7 + 0x272920));
  lVar14 = *(long *)puVar4;
  uVar5 = FUN_0277d6c4(psVar11);
  if (*(long *)puVar4 == 0) {
    psVar16 = &DAT_05586008;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    psVar16 = (short *)PTR_DAT_04bb37e0;
    if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      psVar16 = psVar11;
    }
  }
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar7 + 0x272940) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x272940) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  if ((*(long **)(lVar7 + 0x2728d0) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x2728d0), puVar8 == (undefined8 *)0x0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)*puVar8)();
    uVar6 = uVar6 & 0xffffffff;
  }
  if (*psVar16 != -2) {
    lVar14 = *(long *)puVar4;
    local_68 = &PTR_FUN_04a36b50;
    local_60 = CONCAT22(psVar16[1],*psVar16);
    local_5c = *(undefined4 *)(psVar16 + 2);
    local_58 = 0;
    uVar5 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar4 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(psVar16);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if (uVar5 < *(uint *)(lVar14 + 0x1d8)) {
          lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8);
          if (lVar14 != 0) {
            local_58 = lVar14;
          }
        }
      }
    }
    uVar9 = FUN_01ad9cb4(&local_68);
    if ((uVar9 & 1) == 0) {
      *param_1 = *psVar16;
      *(char *)(param_1 + 1) = (char)psVar16[1];
      *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)psVar16 + 3);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(psVar16 + 2);
    }
  }
  lVar17 = *(long *)puVar4;
  uVar5 = FUN_0277d6c4(psVar15);
  lVar14 = *(long *)puVar4;
  if (lVar14 == 0) {
LAB_016d3184:
    psVar15 = &DAT_05586008;
  }
  else {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((*(uint *)(lVar17 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_016d3184;
    local_68 = &PTR_FUN_04a36b50;
    local_60 = *(undefined4 *)psVar15;
    local_5c = *(undefined4 *)(psVar15 + 2);
    local_58 = 0;
    uVar5 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar4 == 0) {
LAB_016d3174:
      uVar12 = 0;
    }
    else {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_016d3174;
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(psVar15);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
         (puVar10 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar10 == (uint *)0x0)) goto LAB_016d3174;
      uVar5 = *puVar10;
      uVar12 = 0;
      if ((uVar5 != 0) && (puVar10 != (uint *)(ulong)uVar5)) {
        puVar13 = (uint *)((long)puVar10 - (long)(ulong)uVar5);
        uVar12 = 0;
        if (*puVar13 != 0) {
          uVar5 = puVar13[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar13 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
            if (lVar14 != 0) {
              uVar2 = 0;
              if ((ulong)uVar5 != 0) {
                uVar2 = (uint)((ulong)((long)puVar10 - lVar14) / (ulong)uVar5);
              }
              if (*puVar13 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326c20) &&
                 (uVar12 = *(ushort *)(DAT_05326c28 + (long)(int)uVar2 * 2), uVar12 < 0x15))
              goto LAB_016d3178;
            }
          }
          goto LAB_016d3174;
        }
      }
    }
LAB_016d3178:
    if (uVar12 == 0) goto LAB_016d3184;
  }
  param_1[8] = *psVar15;
  lVar17 = *(long *)puVar4;
  *(char *)(param_1 + 9) = (char)psVar15[1];
  *(undefined1 *)((long)param_1 + 0x13) = *(undefined1 *)((long)psVar15 + 3);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(psVar15 + 2);
  puVar1 = (undefined4 *)(*(long *)(lVar7 + 0x2728b8) + *(long *)(lVar7 + 0x2728b0));
  uVar5 = FUN_0277d6c4(puVar1);
  lVar14 = *(long *)puVar4;
  if (lVar14 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_68 = &PTR_FUN_04a36b50;
      local_60 = *puVar1;
      local_5c = puVar1[1];
      local_58 = 0;
      uVar5 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar4 == 0) {
LAB_016d3324:
        uVar12 = 0;
      }
      else {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_016d3324;
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(puVar1);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
           (puVar10 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8),
           puVar10 == (uint *)0x0)) goto LAB_016d3324;
        uVar5 = *puVar10;
        uVar12 = 0;
        if ((uVar5 != 0) && (puVar10 != (uint *)(ulong)uVar5)) {
          puVar13 = (uint *)((long)puVar10 - (long)(ulong)uVar5);
          uVar12 = 0;
          if (*puVar13 != 0) {
            uVar5 = puVar13[1];
            if ((uVar5 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
              lVar14 = 0xc;
              if (*(char *)((long)puVar13 + 10) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
              if (lVar14 != 0) {
                uVar2 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar10 - lVar14) / (ulong)uVar5);
                }
                if (*puVar13 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326c20) &&
                   (uVar12 = *(ushort *)(DAT_05326c28 + (long)(int)uVar2 * 2), uVar12 < 0x15))
                goto LAB_016d3328;
              }
            }
            goto LAB_016d3324;
          }
        }
      }
LAB_016d3328:
      if (uVar12 != 0) {
        psVar11 = (short *)(*(long *)(lVar7 + 0x2728b8) + *(long *)(lVar7 + 0x2728b0));
        goto LAB_016d334c;
      }
    }
  }
  psVar11 = &DAT_05586008;
LAB_016d334c:
  param_1[0xc] = *psVar11;
  *(char *)(param_1 + 0xd) = (char)psVar11[1];
  *(undefined1 *)((long)param_1 + 0x1b) = *(undefined1 *)((long)psVar11 + 3);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(psVar11 + 2);
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar7 + 0x2728d0) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x2728d0) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

