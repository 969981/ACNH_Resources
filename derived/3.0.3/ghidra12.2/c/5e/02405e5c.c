
void FUN_02405e5c(byte *param_1,long param_2)

{
  long *plVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined4 *puVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  byte bVar17;
  uint *puVar18;
  ulong uVar19;
  uint *puVar20;
  long lVar21;
  byte local_a8 [4];
  byte local_a4 [2];
  undefined1 auStack_a2 [2];
  undefined1 auStack_a0 [2];
  undefined1 auStack_9e [2];
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 auStack_92 [2];
  undefined *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  uint *local_80;
  undefined *local_78;
  char *local_70;
  undefined8 uStack_68;
  ushort local_48;
  undefined1 auStack_46 [2];
  uint local_44;
  
  local_44 = (uint)*(byte *)(param_2 + 0x20);
  if (1 < local_44) {
    local_44 = 0;
  }
  local_78 = (undefined *)CONCAT44(local_78._4_4_,local_44);
  lVar14 = *(long *)PTR_DAT_04bb46b0;
  if (lVar14 == 0) {
    return;
  }
  puVar15 = *(undefined8 **)(lVar14 + 0x10);
  if ((*(byte *)(lVar14 + 0x453) & 1) == 0) {
    lVar14 = (**(code **)(*(long *)*puVar15 + 0x38))();
    if (lVar14 == 0) {
      return;
    }
    lVar14 = lVar14 + 0x70;
  }
  else {
    if (puVar15 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar15[0x26] == (long *)0x0) {
      return;
    }
    lVar14 = (**(code **)(*(long *)puVar15[0x26] + 0x38))();
    if (lVar14 == 0) {
      return;
    }
  }
  lVar14 = lVar14 + (long)(int)(uint)local_78 * 0x18b8;
  if ((*(long **)(lVar14 + 0x271d00) == (long *)0x0) ||
     (puVar15 = (undefined8 *)**(long **)(lVar14 + 0x271d00), puVar15 == (undefined8 *)0x0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)*puVar15)();
    uVar8 = uVar8 & 0xffffffff;
  }
  bVar17 = *param_1;
  if (7 < bVar17) {
    bVar17 = 0xff;
  }
  local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar17);
  lVar9 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_78,1);
  if (lVar9 == 0) goto LAB_0240666c;
  plVar1 = (long *)(lVar9 + 0x162d8);
  lVar16 = *(long *)(lVar9 + 0x162f8);
  if (lVar16 == 0) {
    uVar10 = 0;
  }
  else {
    if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      lVar16 = *(long *)(lVar9 + 0x162f8);
      uVar10 = uVar10 & 0xffffffff;
      if (lVar16 == 0) goto LAB_02405fc0;
    }
    plVar11 = *(long **)(lVar16 + 0x20);
    if (plVar11 != (long *)0x0) {
      local_78 = (undefined *)*plVar1;
      local_70 = *(char **)(lVar9 + 0x162e0);
      uStack_68 = 0x1190;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
    }
  }
LAB_02405fc0:
  memcpy((void *)(*(long *)(lVar9 + 0x162e0) + *plVar1),
         (void *)(*(long *)(lVar14 + 0x271ce8) + *(long *)(lVar14 + 0x271ce0)),0x1190);
  if ((*(long *)(lVar9 + 0x162f8) != 0) &&
     (plVar11 = *(long **)(*(long *)(lVar9 + 0x162f8) + 0x20), plVar11 != (long *)0x0)) {
    local_78 = (undefined *)*plVar1;
    local_70 = *(char **)(lVar9 + 0x162e0);
    uStack_68 = 0x1190;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
  }
  puVar12 = (undefined4 *)FUN_026e85f0(*(long *)(lVar9 + 0x162e0) + *plVar1);
  puVar5 = PTR_DAT_04bb43c0;
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4();
  lVar21 = *(long *)puVar5;
  if (lVar21 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_80 = (uint *)0x0;
      local_88 = *puVar12;
      uStack_84 = puVar12[1];
      local_90 = PTR_DAT_04bc0510 + 0x10;
      uVar6 = FUN_0277d6c4(&local_88);
      if (*(long *)puVar5 == 0) {
LAB_02406198:
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0xac);
        local_9c = 0xbc;
      }
      else {
        lVar16 = *(long *)(lVar21 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02406198;
        lVar16 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(puVar12);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
           (puVar18 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8),
           puVar18 == (uint *)0x0)) goto LAB_02406198;
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0xac);
        local_9c = 0;
        uVar6 = *puVar18;
        local_80 = puVar18;
        if ((uVar6 != 0) && (puVar18 != (uint *)(ulong)uVar6)) {
          puVar20 = (uint *)((long)puVar18 - (long)(ulong)uVar6);
          local_9c = 0;
          if (*puVar20 != 0) {
            uVar6 = puVar20[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
              lVar16 = 0xc;
              if (*(char *)((long)puVar20 + 10) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar20 + lVar16 + (ulong)(ushort)puVar20[2] * 8;
              if (lVar16 != 0) {
                uVar13 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar13 = (uint)((ulong)((long)puVar18 - lVar16) / (ulong)uVar6);
                }
                if (*puVar20 <= uVar13) {
                  uVar13 = 0xffffffff;
                }
                if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_9c = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2),
                   local_9c < 0xbd)) goto LAB_024061a0;
              }
            }
            local_9c = 0;
          }
        }
      }
LAB_024061a0:
      puVar4 = PTR_DAT_04bb3128;
      if (local_9c == (uint)local_78) {
        if (((*PTR_DAT_04bb3128 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
          FUN_00706e58(PTR_DAT_04bb3120);
          __cxa_guard_release(PTR_DAT_04bb3128);
        }
        uVar6 = local_44;
        puVar3 = PTR_DAT_04bb3120;
        if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
          uVar19 = 0;
          do {
            if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar19 * 4) == 0x19) goto LAB_024061fc;
            uVar19 = uVar19 + 1;
          } while (*(uint *)PTR_DAT_04bb3120 != uVar19);
        }
        uVar19 = 0;
LAB_024061fc:
        uVar13 = (uint)uVar19;
        local_48 = 0;
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
          FUN_00706e58(PTR_DAT_04bb3120);
          __cxa_guard_release(PTR_DAT_04bb3128);
        }
        if (*(uint *)puVar3 <= uVar13) {
          uVar13 = 0;
        }
        local_48 = (ushort)uVar6 & 0x7f |
                   (ushort)(*(int *)(*(long *)(puVar3 + 8) + (long)(int)uVar13 * 4) << 0xb);
        FUN_007ef010(auStack_92,&local_48);
        FUN_026575c0(auStack_46,param_1,auStack_92);
        FUN_007ef010(auStack_9e,auStack_46);
        FUN_00805ba8(&local_9c,auStack_9e);
        if ((*(long *)(lVar9 + 0x162f8) != 0) &&
           (plVar11 = *(long **)(*(long *)(lVar9 + 0x162f8) + 0x20), plVar11 != (long *)0x0)) {
          local_78 = (undefined *)*plVar1;
          local_70 = *(char **)(lVar9 + 0x162e0);
          uStack_68 = 0x1190;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
        }
        puVar2 = (undefined2 *)(*(long *)(lVar9 + 0x162e0) + *plVar1);
        *puVar2 = (undefined2)local_9c;
        *(undefined1 *)(puVar2 + 1) = local_9c._2_1_;
        *(undefined1 *)((long)puVar2 + 3) = local_9c._3_1_;
        *(undefined4 *)(puVar2 + 2) = local_98;
      }
    }
  }
  if ((*(long *)(lVar9 + 0x162f8) != 0) &&
     (plVar11 = *(long **)(*(long *)(lVar9 + 0x162f8) + 0x20), plVar11 != (long *)0x0)) {
    local_78 = (undefined *)*plVar1;
    local_70 = *(char **)(lVar9 + 0x162e0);
    uStack_68 = 0x1190;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
  }
  puVar12 = (undefined4 *)FUN_026e8d10(*(long *)(lVar9 + 0x162e0) + *plVar1);
  lVar21 = *(long *)puVar5;
  uVar6 = FUN_0277d6c4();
  lVar16 = *(long *)puVar5;
  if (lVar16 != 0) {
    lVar21 = *(long *)(lVar21 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar21 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_80 = (uint *)0x0;
      local_88 = *puVar12;
      uStack_84 = puVar12[1];
      local_90 = PTR_DAT_04bc0510 + 0x10;
      uVar6 = FUN_0277d6c4(&local_88);
      if (*(long *)puVar5 == 0) {
LAB_02406474:
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0xac);
        local_9c = 0xbc;
      }
      else {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02406474;
        lVar16 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(puVar12);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
           (puVar18 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8),
           puVar18 == (uint *)0x0)) goto LAB_02406474;
        local_9c = 0;
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0xac);
        uVar6 = *puVar18;
        local_80 = puVar18;
        if ((uVar6 != 0) && (puVar18 != (uint *)(ulong)uVar6)) {
          puVar20 = (uint *)((long)puVar18 - (long)(ulong)uVar6);
          local_9c = 0;
          if (*puVar20 != 0) {
            uVar6 = puVar20[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
              lVar16 = 0xc;
              if (*(char *)((long)puVar20 + 10) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar20 + lVar16 + (ulong)(ushort)puVar20[2] * 8;
              if (lVar16 != 0) {
                uVar13 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar13 = (uint)((ulong)((long)puVar18 - lVar16) / (ulong)uVar6);
                }
                if (*puVar20 <= uVar13) {
                  uVar13 = 0xffffffff;
                }
                if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_9c = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2),
                   local_9c < 0xbd)) goto LAB_02406480;
              }
            }
            local_9c = 0;
          }
        }
      }
LAB_02406480:
      puVar5 = PTR_DAT_04bb3128;
      if (local_9c == (uint)local_78) {
        if (((*PTR_DAT_04bb3128 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
          FUN_00706e58(PTR_DAT_04bb3120);
          __cxa_guard_release(PTR_DAT_04bb3128);
        }
        uVar6 = local_44;
        puVar4 = PTR_DAT_04bb3120;
        if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
          uVar19 = 0;
          do {
            if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar19 * 4) == 0x19) goto LAB_024064dc;
            uVar19 = uVar19 + 1;
          } while (*(uint *)PTR_DAT_04bb3120 != uVar19);
        }
        uVar19 = 0;
LAB_024064dc:
        local_48 = 0;
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
          FUN_00706e58(PTR_DAT_04bb3120);
          __cxa_guard_release(PTR_DAT_04bb3128);
        }
        uVar13 = (uint)uVar19;
        if (*(uint *)puVar4 <= uVar13) {
          uVar13 = 0;
        }
        local_48 = (ushort)uVar6 & 0x7f |
                   (ushort)(*(int *)(*(long *)(puVar4 + 8) + (long)(int)uVar13 * 4) << 0xb) | 0x80;
        FUN_007ef010(auStack_a0,&local_48);
        FUN_02657730(auStack_46,param_1,auStack_a0);
        FUN_007ef010(auStack_a2,auStack_46);
        FUN_00805ba8(&local_9c,auStack_a2);
        if ((*(long *)(lVar9 + 0x162f8) != 0) &&
           (plVar11 = *(long **)(*(long *)(lVar9 + 0x162f8) + 0x20), plVar11 != (long *)0x0)) {
          local_78 = (undefined *)*plVar1;
          local_70 = *(char **)(lVar9 + 0x162e0);
          uStack_68 = 0x1190;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
        }
        lVar16 = *(long *)(lVar9 + 0x162e0) + *plVar1;
        *(uint *)(lVar16 + 0x8c0) = local_9c;
        *(undefined4 *)(lVar16 + 0x8c4) = local_98;
      }
    }
  }
  local_a4[0] = *param_1;
  if (7 < local_a4[0]) {
    local_a4[0] = 0xff;
  }
  FUN_0266a9e0(local_a4,local_44);
  if ((((*param_1 < 8) && (uVar6 = FUN_02582d8c(param_1,1), uVar6 < 8)) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d6) != '\0')) {
    local_a8[0] = *param_1;
    if (7 < local_a8[0]) {
      local_a8[0] = 0xff;
    }
    uVar19 = FUN_02669430(local_a8);
    if ((uVar19 & 1) == 0) {
      local_78 = PTR_DAT_04bb2020 + 0x10;
      local_70 = "HotelIsRentalFromOtherIsland";
      FUN_0274bfe8(param_1,&local_78,1);
    }
  }
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar9 + 0x162f8) != 0)) &&
     (puVar15 = *(undefined8 **)(*(long *)(lVar9 + 0x162f8) + 0x18), puVar15 != (undefined8 *)0x0))
  {
    (**(code **)*puVar15)();
  }
LAB_0240666c:
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar14 + 0x271d00) != 0)) &&
     (puVar15 = *(undefined8 **)(*(long *)(lVar14 + 0x271d00) + 8), puVar15 != (undefined8 *)0x0)) {
    (**(code **)*puVar15)();
  }
  return;
}

