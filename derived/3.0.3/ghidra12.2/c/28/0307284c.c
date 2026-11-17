
void FUN_0307284c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_030728ac:
    if (((DAT_056e2730 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e2730), iVar1 != 0)) {
      DAT_056e2610 = PTR_DAT_04bb2020 + 0x10;
      DAT_056e2618 = &DAT_040fe5ab;
      DAT_056e2628 = &DAT_0407ebb1;
      DAT_056e2648 = &DAT_0407ebb1;
      DAT_056e2668 = &DAT_0407ebb1;
      DAT_056e2638 = "CategoryType";
      DAT_056e2658 = "Share";
      DAT_056e2678 = "Empty";
      DAT_056e2698 = "GuideType";
      DAT_056e26b8 = "VisibleOff";
      DAT_056e26d8 = "VisibleOn";
      DAT_056e26f8 = "ContentsOut";
      DAT_056e2688 = &DAT_0407ebb1;
      DAT_056e26a8 = &DAT_0407ebb1;
      DAT_056e26c8 = &DAT_0407ebb1;
      DAT_056e26e8 = &DAT_0407ebb1;
      DAT_056e2708 = &DAT_0407ebb1;
      DAT_056e2718 = "ContentsIn";
      DAT_056e2728 = &DAT_0407ebb1;
      DAT_056e2620 = DAT_056e2610;
      DAT_056e2630 = DAT_056e2610;
      DAT_056e2640 = DAT_056e2610;
      DAT_056e2650 = DAT_056e2610;
      DAT_056e2660 = DAT_056e2610;
      DAT_056e2670 = DAT_056e2610;
      DAT_056e2680 = DAT_056e2610;
      DAT_056e2690 = DAT_056e2610;
      DAT_056e26a0 = DAT_056e2610;
      DAT_056e26b0 = DAT_056e2610;
      DAT_056e26c0 = DAT_056e2610;
      DAT_056e26d0 = DAT_056e2610;
      DAT_056e26e0 = DAT_056e2610;
      DAT_056e26f0 = DAT_056e2610;
      DAT_056e2700 = DAT_056e2610;
      DAT_056e2710 = DAT_056e2610;
      DAT_056e2720 = DAT_056e2610;
      __cxa_guard_release(&DAT_056e2730);
    }
    if (((DAT_056e2748 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e2748), iVar1 != 0)) {
      DAT_056e2738 = 0x900000002;
      DAT_056e2740 = &DAT_056e2610;
      __cxa_guard_release(&DAT_056e2748);
    }
    if (((DAT_056e2790 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e2790), iVar1 != 0)) {
      DAT_056e2750 = PTR_DAT_04bb2020 + 0x10;
      DAT_056e2758 = "@T_L_00";
      DAT_056e2788 = "@T_Empty_00";
      DAT_056e2768 = "@T_R_00";
      DAT_056e2778 = "@T_Title_00";
      DAT_056e2760 = DAT_056e2750;
      DAT_056e2770 = DAT_056e2750;
      DAT_056e2780 = DAT_056e2750;
      __cxa_guard_release(&DAT_056e2790);
    }
    if (((DAT_056e27b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e27b8), iVar1 != 0)) {
      DAT_056e2798 = PTR_DAT_04bb2020 + 0x10;
      DAT_056e27a0 = "N_SubWin_00";
      DAT_056e27b0 = "N_Icon_00";
      DAT_056e27a8 = DAT_056e2798;
      __cxa_guard_release(&DAT_056e27b8);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_48 = &DAT_04af8aa0;
    puStack_40 = &DAT_056e2738;
    local_38 = 0;
    local_50 = &DAT_04af8ab0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
    goto LAB_03072934;
  }
  if (*pcVar5 == '/') {
    if (((((((pcVar5[1] == 'L') && (pcVar5[2] == '_')) && (pcVar5[3] == 'B')) &&
          ((pcVar5[4] == 't' && (pcVar5[5] == 'n')))) && (pcVar5[6] == 'L')) &&
        (((pcVar5[7] == 'i' && (pcVar5[8] == 's')) &&
         ((pcVar5[9] == 't' &&
          (((pcVar5[10] == '_' && (pcVar5[0xb] == '0')) && (pcVar5[0xc] == '0')))))))) &&
       (((pcVar5[0xd] == '/' && (pcVar5[0xe] == 'L')) &&
        ((pcVar5[0xf] == '_' &&
         (((pcVar5[0x10] == 'B' && (pcVar5[0x11] == 't')) &&
          ((pcVar5[0x12] == 'n' && (pcVar5[0x13] == '_')))))))))) {
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e40);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38), (uVar3 & 1) != 0)) {
        if (((DAT_056e28c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e28c0), iVar1 != 0)) {
          DAT_056e27c0 = PTR_DAT_04bb2020 + 0x10;
          DAT_056e27c8 = "Check";
          DAT_056e27d8 = &DAT_0407ebb1;
          DAT_056e27f8 = &DAT_0407ebb1;
          DAT_056e2818 = &DAT_0407ebb1;
          DAT_056e27e8 = &DAT_040d4018;
          DAT_056e2808 = "Cloth";
          DAT_056e2828 = &DAT_040fe5ab;
          DAT_056e2848 = "Shake";
          DAT_056e2868 = "IconType";
          DAT_056e2888 = "UploadType";
          DAT_056e2838 = &DAT_0407ebb1;
          DAT_056e2858 = &DAT_0407ebb1;
          DAT_056e2878 = &DAT_0407ebb1;
          DAT_056e2898 = &DAT_0407ebb1;
          DAT_056e28a8 = "CheckIconType";
          DAT_056e28b8 = &DAT_0407ebb1;
          DAT_056e27d0 = DAT_056e27c0;
          DAT_056e27e0 = DAT_056e27c0;
          DAT_056e27f0 = DAT_056e27c0;
          DAT_056e2800 = DAT_056e27c0;
          DAT_056e2810 = DAT_056e27c0;
          DAT_056e2820 = DAT_056e27c0;
          DAT_056e2830 = DAT_056e27c0;
          DAT_056e2840 = DAT_056e27c0;
          DAT_056e2850 = DAT_056e27c0;
          DAT_056e2860 = DAT_056e27c0;
          DAT_056e2870 = DAT_056e27c0;
          DAT_056e2880 = DAT_056e27c0;
          DAT_056e2890 = DAT_056e27c0;
          DAT_056e28a0 = DAT_056e27c0;
          DAT_056e28b0 = DAT_056e27c0;
          __cxa_guard_release(&DAT_056e28c0);
        }
        if (((DAT_056e28d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e28d8), iVar1 != 0)) {
          DAT_056e28c8 = 0x800000002;
          DAT_056e28d0 = &DAT_056e27c0;
          __cxa_guard_release(&DAT_056e28d8);
        }
        if (((DAT_056e28f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e28f0), iVar1 != 0)) {
          DAT_056e28e0 = PTR_DAT_04bb2020 + 0x10;
          DAT_056e28e8 = "P_Tex_00";
          __cxa_guard_release(&DAT_056e28f0);
        }
        local_58 = *param_2;
        local_48 = (undefined *)0x0;
        puStack_40 = &DAT_056e28c8;
        local_38 = 1;
        local_50 = &DAT_04af8ac0;
        local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
        lVar4 = puVar7[2];
        lVar2 = lVar4 + 0x2c8;
        goto LAB_03072934;
      }
    }
  }
  else if (*pcVar5 == '\0') goto LAB_030728ac;
  pcVar5 = (char *)param_2[5];
  if (((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'I')))) &&
     (((((pcVar5[4] == 't' && (pcVar5[5] == 'e')) && (pcVar5[6] == 'm')) &&
       ((pcVar5[7] == 'B' && (pcVar5[8] == 'a')))) &&
      ((pcVar5[9] == 'l' &&
       ((((pcVar5[10] == 'l' && (pcVar5[0xb] == 'o')) && (pcVar5[0xc] == 'o')) &&
        ((pcVar5[0xd] == 'n' && (pcVar5[0xe] == '_')))))))))) {
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4fe0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4fe0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fd8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4fe0);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fd8), (uVar3 & 1) == 0)) goto LAB_03072c4c;
    if (((DAT_056e2938 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e2938), iVar1 != 0)) {
      DAT_056e28f8 = PTR_DAT_04bb2020 + 0x10;
      DAT_056e2900 = "Guide";
      DAT_056e2910 = &DAT_0407ebb1;
      DAT_056e2930 = &DAT_0407ebb1;
      DAT_056e2920 = "NumRotate";
      DAT_056e2908 = DAT_056e28f8;
      DAT_056e2918 = DAT_056e28f8;
      DAT_056e2928 = DAT_056e28f8;
      __cxa_guard_release(&DAT_056e2938);
    }
    if (((DAT_056e2950 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e2950), iVar1 != 0)) {
      DAT_056e2940 = 0x200000002;
      DAT_056e2948 = &DAT_056e28f8;
      __cxa_guard_release(&DAT_056e2950);
    }
    if (((DAT_056e2978 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e2978), iVar1 != 0)) {
      DAT_056e2958 = PTR_DAT_04bb2020 + 0x10;
      DAT_056e2960 = "@T_Guide_00";
      DAT_056e2970 = "@T_Icon_00";
      DAT_056e2968 = DAT_056e2958;
      __cxa_guard_release(&DAT_056e2978);
    }
    if (((DAT_056e2990 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e2990), iVar1 != 0)) {
      DAT_056e2980 = PTR_DAT_04bb2020 + 0x10;
      DAT_056e2988 = "P_TextSize_00";
      __cxa_guard_release(&DAT_056e2990);
    }
    local_58 = *param_2;
    local_38 = 1;
    local_48 = &DAT_04af8ad0;
    puStack_40 = &DAT_056e2940;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_50 = &DAT_04af8ae0;
  }
  else {
LAB_03072c4c:
    pcVar5 = (char *)param_2[5];
    if (((((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'E'))))
         && (((pcVar5[4] == 'x' && (pcVar5[5] == 'c')) && (pcVar5[6] == 'h')))) &&
        (((pcVar5[7] == 'S' && (pcVar5[8] == 'w')) &&
         ((pcVar5[9] == 'i' &&
          (((pcVar5[10] == 't' && (pcVar5[0xb] == 'c')) && (pcVar5[0xc] == 'h')))))))) &&
       (pcVar5[0xd] == '_')) {
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4ff0);
      }
      if ((puVar7 == (undefined8 *)0x0) ||
         (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) == 0))
      goto LAB_03072da4;
      if (((DAT_056e29d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e29d8), iVar1 != 0)) {
        DAT_056e2998 = PTR_DAT_04bb2020 + 0x10;
        DAT_056e29a0 = "Decide";
        DAT_056e29b0 = &DAT_0407ebb1;
        DAT_056e29d0 = &DAT_0407ebb1;
        DAT_056e29c0 = "Share";
        DAT_056e29a8 = DAT_056e2998;
        DAT_056e29b8 = DAT_056e2998;
        DAT_056e29c8 = DAT_056e2998;
        __cxa_guard_release(&DAT_056e29d8);
      }
      puVar8 = &DAT_056e29e0;
      if (((DAT_056e29f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e29f0), iVar1 != 0)) {
        DAT_056e29e0 = 0x200000002;
        DAT_056e29e8 = &DAT_056e2998;
        __cxa_guard_release(&DAT_056e29f0);
      }
      if (((DAT_056e2a08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e2a08), iVar1 != 0)) {
        DAT_056e29f8 = PTR_DAT_04bb2020 + 0x10;
        DAT_056e2a00 = "@T_Icon_00";
        __cxa_guard_release(&DAT_056e2a08);
      }
      local_48 = &DAT_04af8af0;
    }
    else {
LAB_03072da4:
      pcVar5 = (char *)param_2[5];
      if (*pcVar5 != '/') {
        return;
      }
      if (pcVar5[1] != 'L') {
        return;
      }
      if (pcVar5[2] != '_') {
        return;
      }
      if (pcVar5[3] != 'F') {
        return;
      }
      if (pcVar5[4] != 'a') {
        return;
      }
      if (pcVar5[5] != 'b') {
        return;
      }
      if (pcVar5[6] != 'r') {
        return;
      }
      if (pcVar5[7] != 'i') {
        return;
      }
      if (pcVar5[8] != 'c') {
        return;
      }
      if (pcVar5[9] != 'S') {
        return;
      }
      if (pcVar5[10] != 'w') {
        return;
      }
      if (pcVar5[0xb] != 'i') {
        return;
      }
      if (pcVar5[0xc] != 't') {
        return;
      }
      if (pcVar5[0xd] != 'c') {
        return;
      }
      if (pcVar5[0xe] != 'h') {
        return;
      }
      if (pcVar5[0xf] != '_') {
        return;
      }
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4ff0);
      }
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (((DAT_056e2a50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e2a50), iVar1 != 0)) {
        DAT_056e2a10 = PTR_DAT_04bb2020 + 0x10;
        DAT_056e2a18 = "Decide";
        DAT_056e2a28 = &DAT_0407ebb1;
        DAT_056e2a48 = &DAT_0407ebb1;
        DAT_056e2a38 = "Share";
        DAT_056e2a20 = DAT_056e2a10;
        DAT_056e2a30 = DAT_056e2a10;
        DAT_056e2a40 = DAT_056e2a10;
        __cxa_guard_release(&DAT_056e2a50);
      }
      puVar8 = &DAT_056e2a58;
      if (((DAT_056e2a68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e2a68), iVar1 != 0)) {
        DAT_056e2a58 = 0x200000002;
        DAT_056e2a60 = &DAT_056e2a10;
        __cxa_guard_release(&DAT_056e2a68);
      }
      if (((DAT_056e2a80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056e2a80), iVar1 != 0)) {
        DAT_056e2a70 = PTR_DAT_04bb2020 + 0x10;
        DAT_056e2a78 = "@T_Icon_00";
        __cxa_guard_release(&DAT_056e2a80);
      }
      local_48 = &DAT_04af8b00;
    }
    local_58 = *param_2;
    local_38 = 0;
    local_50 = (undefined *)0x0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    puStack_40 = puVar8;
  }
  lVar4 = puVar7[2];
  lVar2 = lVar4 + 0x208;
LAB_03072934:
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

