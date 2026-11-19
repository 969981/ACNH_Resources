
void * FUN_03c2b470(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  undefined *puVar6;
  undefined8 **ppuVar7;
  undefined **ppuVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  void *pvVar12;
  long *plVar13;
  void *pvVar14;
  long lVar15;
  void *__dest;
  undefined8 uVar16;
  undefined4 uVar17;
  long lVar18;
  char *pcVar19;
  uint uVar20;
  long *plVar21;
  byte *pbVar22;
  char *pcVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long *plVar27;
  long *plVar28;
  byte *pbVar29;
  size_t __size;
  long lVar30;
  void *local_5c8;
  int local_5c0;
  uint uStack_5bc;
  undefined1 local_5b8;
  undefined8 local_5b0;
  undefined *puStack_5a8;
  undefined *local_5a0;
  long *plStack_598;
  undefined4 local_590;
  undefined *local_588;
  char *local_580;
  undefined8 local_578;
  int local_570;
  byte local_56c [23];
  undefined1 local_555;
  undefined1 local_475;
  undefined1 local_470;
  undefined1 local_46d;
  undefined8 local_468;
  long *local_460;
  undefined8 uStack_458;
  undefined2 local_450;
  undefined8 local_44c;
  undefined2 local_444;
  undefined *local_440;
  byte *local_438;
  undefined8 **local_430;
  ulong local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  int local_408;
  undefined1 local_400;
  undefined8 *local_3f8;
  byte *local_3f0;
  undefined4 local_3e8;
  byte local_3e4 [100];
  char local_380;
  undefined1 local_2e5;
  undefined1 local_2e0;
  undefined *local_2d8;
  long local_2d0;
  undefined **local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined *local_2a0;
  long local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined2 local_26c;
  ulong local_268;
  undefined1 local_260;
  char local_228;
  int local_214;
  undefined *local_210;
  undefined1 *local_208;
  undefined4 local_200;
  undefined1 local_1fc [255];
  undefined1 local_fd;
  undefined *local_f8;
  undefined8 uStack_f0;
  long *local_e8;
  long *plStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long *local_b8;
  int local_b0;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined *local_a0;
  char *local_98;
  undefined4 local_90;
  char local_8c [31];
  undefined1 local_6d;
  
  plVar3 = DAT_05aed588;
  puVar2 = PTR_DAT_04bb2650;
  puVar6 = PTR_DAT_04bb2028;
  local_e8 = (long *)0x0;
  plStack_e0 = (long *)0x0;
  local_ac = 1;
  local_c8 = 0;
  local_c0 = 0;
  uStack_f0 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = PTR_DAT_04bb2020 + 0x10;
  local_a8 = 0;
  local_555 = 0;
  lVar30 = param_2 + 8;
  local_d8 = 0x2000000020;
  uStack_d0 = 0;
  local_578 = (byte *)CONCAT35(local_578._5_3_,0x20);
  local_580 = (char *)((long)&local_578 + 4);
  local_b0 = (uint)*(byte *)(param_2 + 0x144) << 0x14;
  local_b8 = *(long **)(*(long *)PTR_DAT_04bb2650 + 0x100);
  local_588 = PTR_DAT_04bb2028 + 0x10;
  FUN_038b6c10(&local_588,lVar30);
  (**(code **)(local_588 + 0x18))(&local_588);
  (**(code **)(local_588 + 0x18))(&local_588);
  puVar1 = PTR_DAT_04bb21f8;
  if (local_580 != "pack") {
    if (*local_580 != 'p') {
LAB_03c2b5a0:
      local_c0 = 0;
      goto LAB_03c2b5a4;
    }
    lVar18 = 0;
    do {
      if ((lVar18 == 0x80000) || (lVar15 = lVar18 + 1, local_580[lVar15] != (&DAT_040fc3d3)[lVar18])
         ) goto LAB_03c2b5a0;
      lVar18 = lVar18 + 1;
    } while (local_580[lVar15] != '\0');
  }
  local_c0 = *(undefined8 *)(param_1 + 0x340);
LAB_03c2b5a4:
  local_200 = 0x100;
  local_208 = local_1fc;
  local_fd = 0;
  local_210 = PTR_DAT_04bb21f8 + 0x10;
  local_1fc[0] = 0;
  if (*(char *)(param_1 + 0x2440) != '\0') {
    local_588 = (undefined *)((ulong)local_588 & 0xffffffffffffff00);
    plVar27 = *(long **)(*(long *)puVar2 + 0x108);
    if ((char)plVar27[0xf] != '\0') {
      (**(code **)(*plVar27 + 0xc0))(plVar27,&local_588,lVar30);
      if ((char)local_588 != '\0') {
        local_b8 = plVar27;
      }
    }
  }
  lVar18 = *(long *)(param_1 + 0x2488);
  if (lVar18 != 0) {
    (**(code **)(*(long *)(param_2 + 8) + 0x18))(lVar30);
    FUN_038d13f0(lVar18,"+\"%s\"\n",*(undefined8 *)(param_2 + 0x10));
  }
  plVar21 = *(long **)(param_2 + 0x128);
  plVar27 = *(long **)(param_1 + 0x338);
  if ((*(char *)(param_2 + 0x150) == '\0') || (*(char *)(param_2 + 0x145) == '\0')) {
    plVar28 = plVar21;
    if (plVar21 == plVar27) {
      local_588 = (undefined *)((ulong)local_588 & 0xffffffff00000000);
      uVar20 = (uint)*(byte *)(local_b8 + 0xf);
      if (*(byte *)(local_b8 + 0xf) != 0) {
        (**(code **)(*local_b8 + 0xb0))(local_b8,&local_588,&local_f8);
        uVar20 = (uint)local_588;
      }
      plVar28 = (long *)FUN_03c2cb20(param_1,uVar20 + 0x5dc);
    }
    lVar30 = *(long *)PTR_DAT_04bb2698;
    local_e8 = plVar28;
    plStack_e0 = plVar28;
    if (lVar30 == 0) {
      pvVar12 = malloc(0x1b8);
    }
    else {
      if (plVar28 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar10 = (undefined8 *)(lVar30 + 8);
        if (lVar18 != 0) {
          puVar10 = (undefined8 *)(lVar18 + 0xa8);
        }
        plVar28 = (long *)*puVar10;
      }
      pvVar12 = (void *)(**(code **)(*plVar28 + 0x30))(plVar28,0x1b8,0xfffffffc);
      plVar28 = local_e8;
    }
    FUN_03c2d240(pvVar12,param_2,plVar28);
    if (plVar21 == plVar27) {
      local_e8[5] = *(long *)((long)pvVar12 + 0x68);
    }
    local_588 = (undefined *)CONCAT44(local_588._4_4_,2);
    puVar10 = (undefined8 *)FUN_038d9cc0(*(undefined8 *)PTR_DAT_04bb28c8,&local_f8);
    if (((*PTR_DAT_04bb2828 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2828);
    }
    if ((puVar10 == (undefined8 *)0x0) ||
       (uVar11 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb2820), (uVar11 & 1) == 0)) {
      puVar10 = (undefined8 *)0x0;
    }
    *(undefined8 **)((long)pvVar12 + 0x48) = puVar10;
    if (*(char *)(param_2 + 0x150) == '\0') {
      (**(code **)(*plVar3 + 0x28))
                (plVar3,puVar10[1],*(undefined4 *)(puVar10 + 2),(long)pvVar12 + 0x60);
    }
    else {
      if (((*PTR_DAT_04bb2868 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar9 != 0)) {
        *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2868);
      }
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        uVar11 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb2860);
        if ((uVar11 & 1) == 0) {
          puVar10 = (undefined8 *)0x0;
        }
      }
      FUN_006cd430(&local_3f8,puVar10);
      puVar6 = PTR_DAT_04bb2818;
      local_410 = 0;
      local_418 = 0;
      local_420 = 0;
      local_440 = PTR_DAT_04bb2818 + 0x10;
      local_428 = 0;
      local_430 = (undefined8 **)0x0;
      local_438 = (byte *)0x0;
      local_588 = PTR_DAT_04bb2020 + 0x10;
      local_580 = "";
      if (local_380 != '\0') {
        local_438 = (byte *)(*(code *)local_3f8[0x1a])(&local_3f8,&local_440,&local_588);
        if (local_438 != (byte *)0x0) {
          local_430 = &local_3f8;
        }
      }
      local_588 = puVar1 + 0x10;
      local_475 = 0;
      local_580 = (char *)((long)&local_578 + 4);
      local_578 = (byte *)CONCAT35(local_578._5_3_,0x100);
      local_470 = 0;
      if (local_380 != '\0') {
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        do {
          uVar11 = (*(code *)local_3f8[9])(&local_3f8,&local_440);
          if ((uVar11 & 1) == 0) {
LAB_03c2c3ac:
            if (((local_380 != '\0') &&
                (uVar11 = (*(code *)local_3f8[9])(&local_3f8,&local_440), (uVar11 & 1) != 0)) &&
               (uVar11 = (*(code *)local_3f8[0x1b])(&local_3f8,&local_440), (uVar11 & 1) != 0)) {
              local_438 = (byte *)0x0;
              local_430 = (undefined8 **)0x0;
            }
            break;
          }
          local_2a0 = (undefined *)((ulong)local_2a0 & 0xffffffff00000000);
          (*(code *)local_3f8[0x1c])(&local_3f8,&local_2a0,&local_440,&local_588,1);
          if ((int)local_2a0 == 0) goto LAB_03c2c3ac;
          local_290 = 0;
          local_288 = 0;
          local_270 = 0;
          local_26c = 0x101;
          local_268 = 0;
          local_260 = 0;
          local_298 = (long)local_580;
          local_280 = 0;
          uStack_278 = 0;
          local_2a0 = puVar1;
          if (local_380 == '\0') {
            uVar11 = 0;
            uVar16 = 0;
          }
          else {
            uVar16 = (*(code *)local_3f8[0xb])(&local_3f8,&local_2a0);
            uVar11 = local_268 & 0xffffffff;
          }
          (**(code **)(*plVar3 + 0x28))(plVar3,uVar16,uVar11,&local_588);
        } while (local_380 != '\0');
      }
      ppuVar7 = local_430;
      local_440 = puVar6 + 0x10;
      if (((local_430 != (undefined8 **)0x0) && (*(char *)(local_430 + 0xf) != '\0')) &&
         (uVar11 = (*(code *)(*local_430)[9])(local_430,&local_440), (uVar11 & 1) != 0)) {
        (*(code *)(*ppuVar7)[0x1b])(ppuVar7,&local_440);
      }
      FUN_038b3c54(&local_3f8);
    }
    if (plVar21 == plVar27) {
      *(undefined4 *)((long)pvVar12 + 0x1a0) = *(undefined4 *)(param_2 + 0x13c);
      *(undefined4 *)((long)pvVar12 + 0x1a4) = *(undefined4 *)(param_1 + 0x2444);
      if (*(long *)PTR_DAT_04bb2720 == 0) {
        uVar17 = 0xffffffff;
      }
      else {
        uVar17 = *(undefined4 *)(*(long *)PTR_DAT_04bb2720 + 0x338);
      }
      *(undefined4 *)((long)pvVar12 + 0x1a8) = uVar17;
      *(long **)((long)pvVar12 + 0x1b0) = local_e8;
      lVar30 = 2;
    }
    else {
      lVar30 = 1;
    }
    plVar3 = (long *)(param_1 + lVar30 * 0x960 + 0x348);
    puVar10 = (undefined8 *)((long)pvVar12 + 0x28);
    plVar27 = plVar3 + (ulong)*(uint *)(param_2 + 0x14c) * 3;
    if (99 < *(uint *)(param_2 + 0x14c)) {
      plVar27 = plVar3;
    }
    lVar30 = *(long *)((long)pvVar12 + 0x40);
    if (lVar30 != 0) {
      *(undefined8 *)((long)pvVar12 + 0x40) = 0;
      if (*(long *)((long)pvVar12 + 0x28) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar12 + 0x28) + 8) = *(undefined8 *)((long)pvVar12 + 0x30)
        ;
      }
      if (*(undefined8 **)((long)pvVar12 + 0x30) != (undefined8 *)0x0) {
        **(undefined8 **)((long)pvVar12 + 0x30) = *puVar10;
      }
      *puVar10 = 0;
      *(undefined8 *)((long)pvVar12 + 0x30) = 0;
      *(int *)(lVar30 + 0x10) = *(int *)(lVar30 + 0x10) + -1;
    }
    *(long **)((long)pvVar12 + 0x40) = plVar27;
    lVar30 = *plVar27;
    *plVar27 = (long)puVar10;
    *(long *)((long)pvVar12 + 0x28) = lVar30;
    *(long **)((long)pvVar12 + 0x30) = plVar27;
    if (lVar30 != 0) {
      *(undefined8 **)(lVar30 + 8) = puVar10;
    }
    *(int *)(plVar27 + 2) = (int)plVar27[2] + 1;
  }
  else {
    local_214 = 0;
    if ((char)local_b8[0xf] == '\0') {
      iVar9 = 0x400;
    }
    else {
      (**(code **)(*local_b8 + 0xb0))(local_b8,&local_214,&local_f8);
      iVar9 = local_214 + 0x400;
    }
    local_e8 = (long *)FUN_03c2cb20(param_1,iVar9);
    local_588 = (undefined *)CONCAT44(local_588._4_4_,2);
    plStack_e0 = local_e8;
    puVar10 = (undefined8 *)FUN_038d9cc0(*(undefined8 *)PTR_DAT_04bb28c8,&local_f8);
    if (((*PTR_DAT_04bb2828 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2828);
    }
    if ((puVar10 == (undefined8 *)0x0) ||
       (uVar11 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb2820), (uVar11 & 1) == 0)) {
      puVar10 = (undefined8 *)0x0;
    }
    if (((*PTR_DAT_04bb2868 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2868);
    }
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      uVar11 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb2860);
      if ((uVar11 & 1) == 0) {
        puVar10 = (undefined8 *)0x0;
      }
    }
    FUN_006cd430(&local_2a0,puVar10);
    local_2a8 = 0;
    local_2b0 = 0;
    local_2b8 = 0;
    local_2d8 = PTR_DAT_04bb2818 + 0x10;
    local_2c0 = 0;
    local_2c8 = (undefined **)0x0;
    local_2d0 = 0;
    local_588 = PTR_DAT_04bb2020 + 0x10;
    local_580 = "";
    if (local_228 != '\0') {
      local_2d0 = (**(code **)(local_2a0 + 0xd0))(&local_2a0,&local_2d8,&local_588);
      if (local_2d0 != 0) {
        local_2c8 = &local_2a0;
      }
    }
    puVar10 = (undefined8 *)(puVar1 + 0x10);
    local_2e5 = 0;
    local_3e8 = 0x100;
    local_3f0 = local_3e4;
    local_3e4[0] = 0;
    local_2e0 = 0;
    local_3f8 = puVar10;
    if (local_228 != '\0') {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      puVar2 = PTR_DAT_04bb2830 + 0x10;
      do {
        uVar11 = (**(code **)(local_2a0 + 0x48))(&local_2a0,&local_2d8);
        if ((uVar11 & 1) == 0) {
LAB_03c2c158:
          if (((local_228 != '\0') &&
              (uVar11 = (**(code **)(local_2a0 + 0x48))(&local_2a0,&local_2d8), (uVar11 & 1) != 0))
             && (uVar11 = (**(code **)(local_2a0 + 0xd8))(&local_2a0,&local_2d8), (uVar11 & 1) != 0)
             ) {
            local_2d0 = 0;
            local_2c8 = (undefined **)0x0;
          }
          break;
        }
        local_588 = (undefined *)((ulong)local_588 & 0xffffffff00000000);
        (**(code **)(local_2a0 + 0xe0))(&local_2a0,&local_588,&local_2d8,&local_3f8,1);
        if ((int)local_588 == 0) goto LAB_03c2c158;
        (*(code *)local_3f8[3])(&local_3f8);
        uVar20 = (uint)*local_3f0;
        if (*local_3f0 == 0) {
          uVar24 = 0;
        }
        else {
          uVar24 = 0xffffffff;
          pbVar22 = local_3f0;
          do {
            pbVar22 = pbVar22 + 1;
            uVar24 = crc32b(uVar24,uVar20,0x4c11db7);
            uVar20 = (uint)*pbVar22;
          } while (uVar20 != 0);
          uVar24 = ~uVar24;
        }
        uVar20 = uVar24 % 100;
        puVar26 = (undefined8 *)(param_1 + 0xca8 + (ulong)uVar20 * 0x18);
        pbVar22 = local_3f0;
        for (puVar25 = (undefined8 *)*puVar26; puVar25 != puVar26; puVar25 = (undefined8 *)*puVar25)
        {
          lVar30 = puVar25[2];
          if (*(uint *)(lVar30 + 0x20) == uVar24) {
            plVar28 = (long *)(lVar30 + 0x60);
            (**(code **)(*plVar28 + 0x18))(plVar28);
            (**(code **)(*plVar28 + 0x18))(plVar28);
            pbVar29 = *(byte **)(lVar30 + 0x68);
            (*(code *)local_3f8[3])(&local_3f8);
            pbVar22 = local_3f0;
            if (pbVar29 == local_3f0) {
LAB_03c2bb74:
              lVar30 = puVar25[2];
              goto LAB_03c2bb84;
            }
            pbVar29 = *(byte **)(lVar30 + 0x68);
            if (*pbVar29 == *local_3f0) {
              if (*pbVar29 == 0) goto LAB_03c2bb74;
              lVar30 = 0;
              while (pbVar29[lVar30 + 1] == local_3f0[lVar30 + 1]) {
                if (pbVar29[lVar30 + 1] == 0) goto LAB_03c2bb74;
                if (pbVar29[lVar30 + 2] != local_3f0[lVar30 + 2]) break;
                if (pbVar29[lVar30 + 2] == 0) goto LAB_03c2bb74;
                if ((lVar30 == 0x7fffe) ||
                   (lVar18 = lVar30 + 3, pbVar29[lVar18] != local_3f0[lVar30 + 3])) break;
                lVar30 = lVar30 + 3;
                if (pbVar29[lVar18] == 0) goto LAB_03c2bb74;
              }
            }
          }
        }
        lVar30 = 0;
LAB_03c2bb84:
        puVar26 = (undefined8 *)(param_1 + 0x1608 + (ulong)uVar20 * 0x18);
        for (puVar25 = (undefined8 *)*puVar26; puVar25 != puVar26; puVar25 = (undefined8 *)*puVar25)
        {
          lVar18 = puVar25[2];
          if (*(uint *)(lVar18 + 0x20) == uVar24) {
            plVar28 = (long *)(lVar18 + 0x60);
            (**(code **)(*plVar28 + 0x18))(plVar28);
            (**(code **)(*plVar28 + 0x18))(plVar28);
            pbVar29 = *(byte **)(lVar18 + 0x68);
            (*(code *)local_3f8[3])(&local_3f8);
            pbVar22 = local_3f0;
            if (pbVar29 == local_3f0) {
LAB_03c2bc70:
              if (!(lVar30 == 0 && puVar25[2] == 0)) goto LAB_03c2b9ec;
              goto LAB_03c2bc8c;
            }
            pbVar29 = *(byte **)(lVar18 + 0x68);
            if (*pbVar29 == *local_3f0) {
              if (*pbVar29 == 0) goto LAB_03c2bc70;
              lVar18 = 0;
              while (pbVar29[lVar18 + 1] == local_3f0[lVar18 + 1]) {
                if (pbVar29[lVar18 + 1] == 0) goto LAB_03c2bc70;
                if (pbVar29[lVar18 + 2] != local_3f0[lVar18 + 2]) break;
                if (pbVar29[lVar18 + 2] == 0) goto LAB_03c2bc70;
                if ((lVar18 == 0x7fffe) ||
                   (lVar15 = lVar18 + 3, pbVar29[lVar15] != local_3f0[lVar18 + 3])) break;
                lVar18 = lVar18 + 3;
                if (pbVar29[lVar15] == 0) goto LAB_03c2bc70;
              }
            }
          }
        }
        if (lVar30 == 0) {
LAB_03c2bc8c:
          local_430 = (undefined8 **)0x0;
          local_428 = local_428 & 0xffffffff00000000;
          local_410 = CONCAT26((short)((ulong)local_410 >> 0x30),0x10100000000);
          local_408 = 0;
          local_400 = 0;
          local_440 = puVar1;
          local_438 = pbVar22;
          if (local_228 == '\0') {
            iVar9 = 0;
            pvVar12 = (void *)0x0;
          }
          else {
            pvVar12 = (void *)(**(code **)(local_2a0 + 0x58))(&local_2a0,&local_440);
            iVar9 = local_408;
          }
          uVar24 = iVar9 + 0x1fU & 0xffffffe0;
          if (plVar21 == plVar27) {
            plVar28 = (long *)FUN_03c2cb20(param_1,uVar24 + 0x400);
          }
          else {
            plVar28 = *(long **)(param_2 + 0x128);
          }
          local_46d = 0;
          local_570 = 0x100;
          local_450 = 1;
          local_56c[0] = 0;
          local_444 = 0;
          local_44c = 0xffffffff00000000;
          local_460 = *(long **)(DAT_05aed590 + 0x338);
          local_468 = 0x1000;
          local_588 = (undefined *)0x0;
          uStack_458 = 0;
          local_580 = (char *)puVar10;
          local_578 = local_56c;
          (**(code **)(local_440 + 0x18))(&local_440);
          pbVar22 = local_438;
          if (local_56c != local_438) {
            (**(code **)(local_440 + 0x18))(&local_440);
            lVar30 = 0;
            do {
              if (local_438[lVar30] == 0) goto LAB_03c2bde8;
              if (local_438[lVar30 + 1] == 0) {
                lVar30 = lVar30 + 1;
                goto LAB_03c2bde8;
              }
              if (local_438[lVar30 + 2] == 0) {
                lVar30 = lVar30 + 2;
                goto LAB_03c2bde8;
              }
              lVar30 = lVar30 + 3;
            } while (lVar30 != 0x80001);
            lVar30 = 0;
LAB_03c2bde8:
            iVar4 = (int)lVar30;
            if (local_570 <= (int)lVar30) {
              iVar4 = local_570 + -1;
            }
            memcpy(local_56c,pbVar22,(long)iVar4);
            local_56c[iVar4] = 0;
          }
          lVar30 = *(long *)PTR_DAT_04bb2698;
          local_460 = plVar28;
          if (lVar30 == 0) {
            pvVar14 = malloc(0x1b8);
          }
          else {
            plVar13 = plVar28;
            if (plVar28 == (long *)0x0) {
              lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              puVar25 = (undefined8 *)(lVar30 + 8);
              if (lVar18 != 0) {
                puVar25 = (undefined8 *)(lVar18 + 0xa8);
              }
              plVar13 = (long *)*puVar25;
            }
            pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x1b8,0xfffffffc);
          }
          FUN_03c2d240(pvVar14,&local_588,plVar28);
          if (plVar21 == plVar27) {
            lVar30 = 2;
            plVar28[5] = *(long *)((long)pvVar14 + 0x68);
            *(long **)((long)pvVar14 + 0x1b0) = plVar28;
          }
          else {
            lVar30 = 1;
          }
          __size = (size_t)(int)uVar24;
          lVar18 = *(long *)PTR_DAT_04bb2698;
          if (lVar18 == 0) {
            __dest = malloc(__size);
          }
          else {
            plVar13 = plVar28;
            if (plVar28 == (long *)0x0) {
              lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar13 = (long *)(lVar18 + 8);
              if (lVar15 != 0) {
                plVar13 = (long *)(lVar15 + 0xa8);
              }
              plVar13 = (long *)*plVar13;
              if (plVar13 == (long *)0x0) {
                __dest = (void *)0x0;
                goto LAB_03c2bf18;
              }
            }
            __dest = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,__size,0x20);
          }
LAB_03c2bf18:
          memcpy(__dest,pvVar12,__size);
          local_590 = 0x20;
          puStack_5a8 = PTR_DAT_04bb2020 + 0x10;
          local_5b0 = 0;
          local_90 = 0x20;
          local_6d = 0;
          local_8c[0] = '\0';
          local_5a0 = PTR_DAT_04bb2120;
          local_5b8 = 1;
          local_5c8 = __dest;
          local_5c0 = iVar9;
          uStack_5bc = uVar24;
          plStack_598 = plVar28;
          local_a0 = puVar6 + 0x10;
          local_98 = local_8c;
          FUN_038b6c10(&local_a0,&local_3f8);
          (**(code **)(local_a0 + 0x18))(&local_a0);
          (**(code **)(local_a0 + 0x18))(&local_a0);
          if (local_98 == "pack") {
LAB_03c2c030:
            local_5b0 = *(undefined8 *)(param_1 + 0x340);
          }
          else {
            if (*local_98 == 'p') {
              lVar18 = 0x7fffe;
              pcVar23 = "k";
              pcVar19 = local_98;
              do {
                if (pcVar19[1] != pcVar23[-2]) goto LAB_03c2c040;
                if (pcVar19[1] == '\0') break;
                if (pcVar19[2] != pcVar23[-1]) goto LAB_03c2c040;
                if (pcVar19[2] == '\0') break;
                if ((lVar18 == 0) || (cVar5 = pcVar19[3], cVar5 != *pcVar23)) goto LAB_03c2c040;
                pcVar23 = pcVar23 + 3;
                lVar18 = lVar18 + -3;
                pcVar19 = pcVar19 + 3;
              } while (cVar5 != '\0');
              goto LAB_03c2c030;
            }
LAB_03c2c040:
            local_5b0 = 0;
          }
          puVar25 = (undefined8 *)FUN_038da2f0(*(undefined8 *)PTR_DAT_04bb28c8,&local_5c8);
          if (((*PTR_DAT_04bb2828 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar9 != 0)) {
            *(undefined **)PTR_DAT_04bb2820 = puVar2;
            __cxa_guard_release(PTR_DAT_04bb2828);
          }
          uVar11 = (**(code **)*puVar25)(puVar25,PTR_DAT_04bb2820);
          if ((uVar11 & 1) == 0) {
            puVar25 = (undefined8 *)0x0;
          }
          *(undefined8 **)((long)pvVar14 + 0x48) = puVar25;
          (**(code **)(*plVar3 + 0x28))
                    (plVar3,puVar25[1],*(undefined4 *)(puVar25 + 2),(long)pvVar14 + 0x60);
          lVar18 = *(long *)((long)pvVar14 + 0x40);
          puVar25 = (undefined8 *)((long)pvVar14 + 0x28);
          if (lVar18 != 0) {
            *(undefined8 *)((long)pvVar14 + 0x40) = 0;
            if (*(long *)((long)pvVar14 + 0x28) != 0) {
              *(undefined8 *)(*(long *)((long)pvVar14 + 0x28) + 8) =
                   *(undefined8 *)((long)pvVar14 + 0x30);
            }
            if (*(undefined8 **)((long)pvVar14 + 0x30) != (undefined8 *)0x0) {
              **(undefined8 **)((long)pvVar14 + 0x30) = *puVar25;
            }
            *puVar25 = 0;
            *(undefined8 *)((long)pvVar14 + 0x30) = 0;
            *(int *)(lVar18 + 0x10) = *(int *)(lVar18 + 0x10) + -1;
          }
          plVar28 = (long *)(param_1 + 0x348 + lVar30 * 0x960 + (ulong)uVar20 * 0x18);
          *(long **)((long)pvVar14 + 0x40) = plVar28;
          lVar30 = *plVar28;
          *plVar28 = (long)puVar25;
          *(long *)((long)pvVar14 + 0x28) = lVar30;
          *(long **)((long)pvVar14 + 0x30) = plVar28;
          if (lVar30 != 0) {
            *(undefined8 **)(lVar30 + 8) = puVar25;
          }
          *(int *)(plVar28 + 2) = (int)plVar28[2] + 1;
        }
LAB_03c2b9ec:
      } while (local_228 != '\0');
    }
    (**(code **)(*local_e8 + 0x20))();
    ppuVar8 = local_2c8;
    local_2d8 = PTR_DAT_04bb2818 + 0x10;
    if (((local_2c8 != (undefined **)0x0) && (*(char *)(local_2c8 + 0xf) != '\0')) &&
       (uVar11 = (**(code **)(*local_2c8 + 0x48))(local_2c8,&local_2d8), (uVar11 & 1) != 0)) {
      (**(code **)(*ppuVar8 + 0xd8))(ppuVar8,&local_2d8);
    }
    FUN_038b3c54(&local_2a0);
    pvVar12 = (void *)0xffffffffffffffff;
  }
  return pvVar12;
}

