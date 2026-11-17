
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03106b40(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if (((DAT_056f2460 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f2460), iVar3 != 0)) {
    DAT_056f23c0 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f23c8 = &DAT_040fe5ab;
    DAT_056f23d8 = &DAT_0407ebb1;
    DAT_056f23f8 = &DAT_0407ebb1;
    DAT_056f23e8 = "Mirror";
    DAT_056f2408 = "GridOff";
    DAT_056f2428 = "GridOn";
    DAT_056f2418 = &DAT_0407ebb1;
    DAT_056f2438 = &DAT_0407ebb1;
    DAT_056f2448 = "Active";
    DAT_056f2458 = &DAT_0407ebb1;
    DAT_056f23d0 = DAT_056f23c0;
    DAT_056f23e0 = DAT_056f23c0;
    DAT_056f23f0 = DAT_056f23c0;
    DAT_056f2400 = DAT_056f23c0;
    DAT_056f2410 = DAT_056f23c0;
    DAT_056f2420 = DAT_056f23c0;
    DAT_056f2430 = DAT_056f23c0;
    DAT_056f2440 = DAT_056f23c0;
    DAT_056f2450 = DAT_056f23c0;
    __cxa_guard_release(&DAT_056f2460);
  }
  if (((DAT_056f2478 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f2478), iVar3 != 0)) {
    _DAT_056f2468 = 0x500000002;
    DAT_056f2470 = &DAT_056f23c0;
    __cxa_guard_release(&DAT_056f2478);
  }
  uVar1 = DAT_056f246c;
  uVar9 = (ulong)DAT_056f246c;
  if (0 < (int)DAT_056f246c) {
    uVar4 = FUN_03c68d44(param_2,DAT_056f2470,DAT_056f2470 + (ulong)(1 < DAT_056f2468) * 2);
    *(undefined8 *)(param_1 + 0x208) = uVar4;
    if (uVar1 != 1) {
      uVar5 = (ulong)(int)DAT_056f2468;
      uVar6 = uVar5;
      if (uVar5 == 0 || DAT_056f246c < 2) {
        uVar6 = 0;
      }
      lVar8 = 0;
      if (1 < uVar5 && DAT_056f246c >= 2) {
        lVar8 = uVar5 + 1;
      }
      uVar4 = FUN_03c68d44(param_2,DAT_056f2470 + uVar6 * 2,DAT_056f2470 + lVar8 * 2);
      *(undefined8 *)(param_1 + 0x210) = uVar4;
      if (uVar1 != 2) {
        uVar6 = (ulong)(int)DAT_056f2468;
        lVar8 = uVar6 << 1;
        if (uVar6 == 0 || DAT_056f246c < 3) {
          lVar8 = 0;
        }
        lVar7 = (long)(int)((uint)(uVar6 << 1) | 1);
        if (uVar6 < 2 || DAT_056f246c < 3) {
          lVar7 = 0;
        }
        uVar4 = FUN_03c68d44(param_2,DAT_056f2470 + lVar8 * 2,DAT_056f2470 + lVar7 * 2);
        *(undefined8 *)(param_1 + 0x218) = uVar4;
        if (uVar1 != 3) {
          uVar6 = (ulong)(int)DAT_056f2468;
          lVar8 = uVar6 * 3;
          if (uVar6 == 0 || DAT_056f246c < 4) {
            lVar8 = 0;
          }
          lVar7 = (long)((int)(uVar6 * 3) + 1);
          if (uVar6 < 2 || DAT_056f246c < 4) {
            lVar7 = 0;
          }
          uVar4 = FUN_03c68d44(param_2,DAT_056f2470 + lVar8 * 2,DAT_056f2470 + lVar7 * 2);
          *(undefined8 *)(param_1 + 0x220) = uVar4;
          if (uVar1 != 4) {
            uVar6 = (ulong)(int)DAT_056f2468;
            lVar8 = uVar6 << 2;
            if (uVar6 == 0 || DAT_056f246c < 5) {
              lVar8 = 0;
            }
            lVar7 = (long)(int)((uint)(uVar6 << 2) | 1);
            if (uVar6 < 2 || DAT_056f246c < 5) {
              lVar7 = 0;
            }
            uVar4 = FUN_03c68d44(param_2,DAT_056f2470 + lVar8 * 2,DAT_056f2470 + lVar7 * 2);
            *(undefined8 *)(param_1 + 0x228) = uVar4;
            if (uVar1 != 5) {
              uVar6 = 5;
              do {
                iVar3 = DAT_056f2468 * (int)uVar6;
                bVar2 = _DAT_056f2468 >> 0x20 <= uVar6;
                lVar8 = (long)iVar3;
                if (DAT_056f2468 == 0 || bVar2) {
                  lVar8 = 0;
                }
                lVar7 = (long)(iVar3 + 1);
                if (DAT_056f2468 < 2 || bVar2) {
                  lVar7 = 0;
                }
                uVar4 = FUN_03c68d44(param_2,DAT_056f2470 + lVar8 * 2,DAT_056f2470 + lVar7 * 2);
                uVar6 = uVar6 + 1;
                *(undefined8 *)(param_1 + 0x208) = uVar4;
              } while (uVar9 != uVar6);
            }
          }
        }
      }
    }
  }
  if (((DAT_056f26e0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f26e0), iVar3 != 0)) {
    DAT_056f2480 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f2488 = "N_EditAreaSize_00";
    DAT_056f2498 = "N_EditAreaSize_01";
    DAT_056f24a8 = "P_Tex_00";
    DAT_056f24c8 = "P_Tex_03";
    DAT_056f24d8 = "P_Tex_04";
    DAT_056f24e8 = "P_Tex_05";
    DAT_056f2508 = "P_Mask_00";
    DAT_056f2518 = "P_Mask_01";
    DAT_056f2538 = "P_Mask_04";
    DAT_056f2548 = "P_Mask_05";
    DAT_056f2568 = "P_Tex_07";
    DAT_056f2578 = "P_Mask_07";
    DAT_056f2598 = "P_Tex_09";
    DAT_056f25a8 = "P_Mask_08";
    DAT_056f25c8 = "P_Tex_10";
    DAT_056f25d8 = "P_Mask_10";
    DAT_056f25f8 = "P_Mask_11";
    DAT_056f24f8 = "P_Tex_06";
    DAT_056f2608 = "P_Tex_12";
    DAT_056f2528 = "P_Mask_03";
    DAT_056f2628 = "P_Tex_13";
    DAT_056f2558 = "P_Mask_06";
    DAT_056f2638 = "P_Tex_14";
    DAT_056f2588 = "P_Tex_08";
    DAT_056f2658 = "P_Tex_16";
    DAT_056f25b8 = "P_Mask_09";
    DAT_056f2668 = "P_Tex_17";
    DAT_056f2688 = "P_Mask_14";
    DAT_056f2698 = "P_Mask_15";
    DAT_056f26a8 = "P_Mask_16";
    DAT_056f26b8 = "P_Mask_17";
    DAT_056f26c8 = "W_EditArea_00";
    DAT_056f25e8 = "P_Tex_11";
    DAT_056f2618 = "P_Mask_12";
    DAT_056f2648 = "P_Tex_15";
    DAT_056f24b8 = "P_Tex_01";
    DAT_056f2678 = "P_Mask_13";
    DAT_056f26d8 = "W_EditArea_01";
    DAT_056f2490 = DAT_056f2480;
    DAT_056f24a0 = DAT_056f2480;
    DAT_056f24b0 = DAT_056f2480;
    DAT_056f24c0 = DAT_056f2480;
    DAT_056f24d0 = DAT_056f2480;
    DAT_056f24e0 = DAT_056f2480;
    DAT_056f24f0 = DAT_056f2480;
    DAT_056f2500 = DAT_056f2480;
    DAT_056f2510 = DAT_056f2480;
    DAT_056f2520 = DAT_056f2480;
    DAT_056f2530 = DAT_056f2480;
    DAT_056f2540 = DAT_056f2480;
    DAT_056f2550 = DAT_056f2480;
    DAT_056f2560 = DAT_056f2480;
    DAT_056f2570 = DAT_056f2480;
    DAT_056f2580 = DAT_056f2480;
    DAT_056f2590 = DAT_056f2480;
    DAT_056f25a0 = DAT_056f2480;
    DAT_056f25b0 = DAT_056f2480;
    DAT_056f25c0 = DAT_056f2480;
    DAT_056f25d0 = DAT_056f2480;
    DAT_056f25e0 = DAT_056f2480;
    DAT_056f25f0 = DAT_056f2480;
    DAT_056f2600 = DAT_056f2480;
    DAT_056f2610 = DAT_056f2480;
    DAT_056f2620 = DAT_056f2480;
    DAT_056f2630 = DAT_056f2480;
    DAT_056f2640 = DAT_056f2480;
    DAT_056f2650 = DAT_056f2480;
    DAT_056f2660 = DAT_056f2480;
    DAT_056f2670 = DAT_056f2480;
    DAT_056f2680 = DAT_056f2480;
    DAT_056f2690 = DAT_056f2480;
    DAT_056f26a0 = DAT_056f2480;
    DAT_056f26b0 = DAT_056f2480;
    DAT_056f26c0 = DAT_056f2480;
    DAT_056f26d0 = DAT_056f2480;
    __cxa_guard_release(&DAT_056f26e0);
  }
  (**(code **)(DAT_056f2480 + 0x18))(&DAT_056f2480);
  if (*DAT_056f2488 == '\0') {
LAB_03106e04:
    FUN_0386fd70(&DAT_056f2480);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2480);
  }
  else {
    if (*DAT_056f2488 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2488[lVar7] == '\0'))
        goto LAB_03106e04;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2488[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2480);
  }
  *(undefined8 *)(param_1 + 0x230) = uVar4;
  (**(code **)(DAT_056f2490 + 0x18))(&DAT_056f2490);
  if (*DAT_056f2498 == '\0') {
LAB_03106e90:
    FUN_0386fd70(&DAT_056f2490);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2490);
  }
  else {
    if (*DAT_056f2498 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2498[lVar7] == '\0'))
        goto LAB_03106e90;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2498[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2490);
  }
  *(undefined8 *)(param_1 + 0x238) = uVar4;
  (**(code **)(DAT_056f24a0 + 0x18))(&DAT_056f24a0);
  if (*DAT_056f24a8 == '\0') {
LAB_03106f14:
    FUN_0386fd70(&DAT_056f24a0);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f24a0);
  }
  else {
    if (*DAT_056f24a8 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f24a8[lVar7] == '\0'))
        goto LAB_03106f14;
        lVar8 = lVar8 + 1;
      } while (DAT_056f24a8[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f24a0);
  }
  *(undefined8 *)(param_1 + 0x240) = uVar4;
  (**(code **)(DAT_056f24b0 + 0x18))(&DAT_056f24b0);
  if (*DAT_056f24b8 == '\0') {
LAB_03106fa0:
    FUN_0386fd70(&DAT_056f24b0);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f24b0);
  }
  else {
    if (*DAT_056f24b8 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f24b8[lVar7] == '\0'))
        goto LAB_03106fa0;
        lVar8 = lVar8 + 1;
      } while (DAT_056f24b8[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f24b0);
  }
  *(undefined8 *)(param_1 + 0x248) = uVar4;
  (**(code **)(DAT_056f24c0 + 0x18))(&DAT_056f24c0);
  if (*DAT_056f24c8 == '\0') {
LAB_03107024:
    FUN_0386fd70(&DAT_056f24c0);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f24c0);
  }
  else {
    if (*DAT_056f24c8 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f24c8[lVar7] == '\0'))
        goto LAB_03107024;
        lVar8 = lVar8 + 1;
      } while (DAT_056f24c8[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f24c0);
  }
  *(undefined8 *)(param_1 + 0x250) = uVar4;
  (**(code **)(DAT_056f24d0 + 0x18))(&DAT_056f24d0);
  if (*DAT_056f24d8 == '\0') {
LAB_031070b0:
    FUN_0386fd70(&DAT_056f24d0);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f24d0);
  }
  else {
    if (*DAT_056f24d8 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f24d8[lVar7] == '\0'))
        goto LAB_031070b0;
        lVar8 = lVar8 + 1;
      } while (DAT_056f24d8[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f24d0);
  }
  *(undefined8 *)(param_1 + 600) = uVar4;
  (**(code **)(DAT_056f24e0 + 0x18))(&DAT_056f24e0);
  if (*DAT_056f24e8 == '\0') {
LAB_03107134:
    FUN_0386fd70(&DAT_056f24e0);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f24e0);
  }
  else {
    if (*DAT_056f24e8 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f24e8[lVar7] == '\0'))
        goto LAB_03107134;
        lVar8 = lVar8 + 1;
      } while (DAT_056f24e8[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f24e0);
  }
  *(undefined8 *)(param_1 + 0x260) = uVar4;
  (**(code **)(DAT_056f24f0 + 0x18))(&DAT_056f24f0);
  if (*DAT_056f24f8 == '\0') {
LAB_031071c0:
    FUN_0386fd70(&DAT_056f24f0);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f24f0);
  }
  else {
    if (*DAT_056f24f8 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f24f8[lVar7] == '\0'))
        goto LAB_031071c0;
        lVar8 = lVar8 + 1;
      } while (DAT_056f24f8[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f24f0);
  }
  *(undefined8 *)(param_1 + 0x268) = uVar4;
  (**(code **)(DAT_056f2500 + 0x18))(&DAT_056f2500);
  if (*DAT_056f2508 == '\0') {
LAB_03107244:
    FUN_0386fd70(&DAT_056f2500);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2500);
  }
  else {
    if (*DAT_056f2508 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2508[lVar7] == '\0'))
        goto LAB_03107244;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2508[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2500);
  }
  *(undefined8 *)(param_1 + 0x270) = uVar4;
  (**(code **)(DAT_056f2510 + 0x18))(&DAT_056f2510);
  if (*DAT_056f2518 == '\0') {
LAB_031072d0:
    FUN_0386fd70(&DAT_056f2510);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2510);
  }
  else {
    if (*DAT_056f2518 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2518[lVar7] == '\0'))
        goto LAB_031072d0;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2518[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2510);
  }
  *(undefined8 *)(param_1 + 0x278) = uVar4;
  (**(code **)(DAT_056f2520 + 0x18))(&DAT_056f2520);
  if (*DAT_056f2528 == '\0') {
LAB_03107354:
    FUN_0386fd70(&DAT_056f2520);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2520);
  }
  else {
    if (*DAT_056f2528 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2528[lVar7] == '\0'))
        goto LAB_03107354;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2528[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2520);
  }
  *(undefined8 *)(param_1 + 0x280) = uVar4;
  (**(code **)(DAT_056f2530 + 0x18))(&DAT_056f2530);
  if (*DAT_056f2538 == '\0') {
LAB_031073e0:
    FUN_0386fd70(&DAT_056f2530);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2530);
  }
  else {
    if (*DAT_056f2538 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2538[lVar7] == '\0'))
        goto LAB_031073e0;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2538[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2530);
  }
  *(undefined8 *)(param_1 + 0x288) = uVar4;
  (**(code **)(DAT_056f2540 + 0x18))(&DAT_056f2540);
  if (*DAT_056f2548 == '\0') {
LAB_03107464:
    FUN_0386fd70(&DAT_056f2540);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2540);
  }
  else {
    if (*DAT_056f2548 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2548[lVar7] == '\0'))
        goto LAB_03107464;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2548[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2540);
  }
  *(undefined8 *)(param_1 + 0x290) = uVar4;
  (**(code **)(DAT_056f2550 + 0x18))(&DAT_056f2550);
  if (*DAT_056f2558 == '\0') {
LAB_031074f0:
    FUN_0386fd70(&DAT_056f2550);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2550);
  }
  else {
    if (*DAT_056f2558 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2558[lVar7] == '\0'))
        goto LAB_031074f0;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2558[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2550);
  }
  *(undefined8 *)(param_1 + 0x298) = uVar4;
  (**(code **)(DAT_056f2560 + 0x18))(&DAT_056f2560);
  if (*DAT_056f2568 == '\0') {
LAB_03107574:
    FUN_0386fd70(&DAT_056f2560);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2560);
  }
  else {
    if (*DAT_056f2568 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2568[lVar7] == '\0'))
        goto LAB_03107574;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2568[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2560);
  }
  *(undefined8 *)(param_1 + 0x2a0) = uVar4;
  (**(code **)(DAT_056f2570 + 0x18))(&DAT_056f2570);
  if (*DAT_056f2578 == '\0') {
LAB_03107600:
    FUN_0386fd70(&DAT_056f2570);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2570);
  }
  else {
    if (*DAT_056f2578 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2578[lVar7] == '\0'))
        goto LAB_03107600;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2578[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2570);
  }
  *(undefined8 *)(param_1 + 0x2a8) = uVar4;
  (**(code **)(DAT_056f2580 + 0x18))(&DAT_056f2580);
  if (*DAT_056f2588 == '\0') {
LAB_03107684:
    FUN_0386fd70(&DAT_056f2580);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2580);
  }
  else {
    if (*DAT_056f2588 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2588[lVar7] == '\0'))
        goto LAB_03107684;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2588[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2580);
  }
  *(undefined8 *)(param_1 + 0x2b0) = uVar4;
  (**(code **)(DAT_056f2590 + 0x18))(&DAT_056f2590);
  if (*DAT_056f2598 == '\0') {
LAB_03107710:
    FUN_0386fd70(&DAT_056f2590);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2590);
  }
  else {
    if (*DAT_056f2598 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2598[lVar7] == '\0'))
        goto LAB_03107710;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2598[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2590);
  }
  *(undefined8 *)(param_1 + 0x2b8) = uVar4;
  (**(code **)(DAT_056f25a0 + 0x18))(&DAT_056f25a0);
  if (*DAT_056f25a8 == '\0') {
LAB_03107794:
    FUN_0386fd70(&DAT_056f25a0);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f25a0);
  }
  else {
    if (*DAT_056f25a8 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f25a8[lVar7] == '\0'))
        goto LAB_03107794;
        lVar8 = lVar8 + 1;
      } while (DAT_056f25a8[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f25a0);
  }
  *(undefined8 *)(param_1 + 0x2c0) = uVar4;
  (**(code **)(DAT_056f25b0 + 0x18))(&DAT_056f25b0);
  if (*DAT_056f25b8 == '\0') {
LAB_03107820:
    FUN_0386fd70(&DAT_056f25b0);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f25b0);
  }
  else {
    if (*DAT_056f25b8 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f25b8[lVar7] == '\0'))
        goto LAB_03107820;
        lVar8 = lVar8 + 1;
      } while (DAT_056f25b8[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f25b0);
  }
  *(undefined8 *)(param_1 + 0x2c8) = uVar4;
  (**(code **)(DAT_056f25c0 + 0x18))(&DAT_056f25c0);
  if (*DAT_056f25c8 == '\0') {
LAB_031078a4:
    FUN_0386fd70(&DAT_056f25c0);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f25c0);
  }
  else {
    if (*DAT_056f25c8 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f25c8[lVar7] == '\0'))
        goto LAB_031078a4;
        lVar8 = lVar8 + 1;
      } while (DAT_056f25c8[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f25c0);
  }
  *(undefined8 *)(param_1 + 0x2d0) = uVar4;
  (**(code **)(DAT_056f25d0 + 0x18))(&DAT_056f25d0);
  if (*DAT_056f25d8 == '\0') {
LAB_03107930:
    FUN_0386fd70(&DAT_056f25d0);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f25d0);
  }
  else {
    if (*DAT_056f25d8 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f25d8[lVar7] == '\0'))
        goto LAB_03107930;
        lVar8 = lVar8 + 1;
      } while (DAT_056f25d8[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f25d0);
  }
  *(undefined8 *)(param_1 + 0x2d8) = uVar4;
  (**(code **)(DAT_056f25e0 + 0x18))(&DAT_056f25e0);
  if (*DAT_056f25e8 == '\0') {
LAB_031079b4:
    FUN_0386fd70(&DAT_056f25e0);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f25e0);
  }
  else {
    if (*DAT_056f25e8 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f25e8[lVar7] == '\0'))
        goto LAB_031079b4;
        lVar8 = lVar8 + 1;
      } while (DAT_056f25e8[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f25e0);
  }
  *(undefined8 *)(param_1 + 0x2e0) = uVar4;
  (**(code **)(DAT_056f25f0 + 0x18))(&DAT_056f25f0);
  if (*DAT_056f25f8 == '\0') {
LAB_03107a40:
    FUN_0386fd70(&DAT_056f25f0);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f25f0);
  }
  else {
    if (*DAT_056f25f8 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f25f8[lVar7] == '\0'))
        goto LAB_03107a40;
        lVar8 = lVar8 + 1;
      } while (DAT_056f25f8[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f25f0);
  }
  *(undefined8 *)(param_1 + 0x2e8) = uVar4;
  (**(code **)(DAT_056f2600 + 0x18))(&DAT_056f2600);
  if (*DAT_056f2608 == '\0') {
LAB_03107ac4:
    FUN_0386fd70(&DAT_056f2600);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2600);
  }
  else {
    if (*DAT_056f2608 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2608[lVar7] == '\0'))
        goto LAB_03107ac4;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2608[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2600);
  }
  *(undefined8 *)(param_1 + 0x2f0) = uVar4;
  (**(code **)(DAT_056f2610 + 0x18))(&DAT_056f2610);
  if (*DAT_056f2618 == '\0') {
LAB_03107b50:
    FUN_0386fd70(&DAT_056f2610);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2610);
  }
  else {
    if (*DAT_056f2618 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2618[lVar7] == '\0'))
        goto LAB_03107b50;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2618[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2610);
  }
  *(undefined8 *)(param_1 + 0x2f8) = uVar4;
  (**(code **)(DAT_056f2620 + 0x18))(&DAT_056f2620);
  if (*DAT_056f2628 == '\0') {
LAB_03107bd4:
    FUN_0386fd70(&DAT_056f2620);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2620);
  }
  else {
    if (*DAT_056f2628 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2628[lVar7] == '\0'))
        goto LAB_03107bd4;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2628[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2620);
  }
  *(undefined8 *)(param_1 + 0x300) = uVar4;
  (**(code **)(DAT_056f2630 + 0x18))(&DAT_056f2630);
  if (*DAT_056f2638 == '\0') {
LAB_03107c60:
    FUN_0386fd70(&DAT_056f2630);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2630);
  }
  else {
    if (*DAT_056f2638 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2638[lVar7] == '\0'))
        goto LAB_03107c60;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2638[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2630);
  }
  *(undefined8 *)(param_1 + 0x308) = uVar4;
  (**(code **)(DAT_056f2640 + 0x18))(&DAT_056f2640);
  if (*DAT_056f2648 == '\0') {
LAB_03107ce4:
    FUN_0386fd70(&DAT_056f2640);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2640);
  }
  else {
    if (*DAT_056f2648 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2648[lVar7] == '\0'))
        goto LAB_03107ce4;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2648[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2640);
  }
  *(undefined8 *)(param_1 + 0x310) = uVar4;
  (**(code **)(DAT_056f2650 + 0x18))(&DAT_056f2650);
  if (*DAT_056f2658 == '\0') {
LAB_03107d70:
    FUN_0386fd70(&DAT_056f2650);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2650);
  }
  else {
    if (*DAT_056f2658 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2658[lVar7] == '\0'))
        goto LAB_03107d70;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2658[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2650);
  }
  *(undefined8 *)(param_1 + 0x318) = uVar4;
  (**(code **)(DAT_056f2660 + 0x18))(&DAT_056f2660);
  if (*DAT_056f2668 == '\0') {
LAB_03107df4:
    FUN_0386fd70(&DAT_056f2660);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2660);
  }
  else {
    if (*DAT_056f2668 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2668[lVar7] == '\0'))
        goto LAB_03107df4;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2668[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2660);
  }
  *(undefined8 *)(param_1 + 800) = uVar4;
  (**(code **)(DAT_056f2670 + 0x18))(&DAT_056f2670);
  if (*DAT_056f2678 == '\0') {
LAB_03107e80:
    FUN_0386fd70(&DAT_056f2670);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2670);
  }
  else {
    if (*DAT_056f2678 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2678[lVar7] == '\0'))
        goto LAB_03107e80;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2678[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2670);
  }
  *(undefined8 *)(param_1 + 0x328) = uVar4;
  (**(code **)(DAT_056f2680 + 0x18))(&DAT_056f2680);
  if (*DAT_056f2688 == '\0') {
LAB_03107f04:
    FUN_0386fd70(&DAT_056f2680);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2680);
  }
  else {
    if (*DAT_056f2688 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2688[lVar7] == '\0'))
        goto LAB_03107f04;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2688[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2680);
  }
  *(undefined8 *)(param_1 + 0x330) = uVar4;
  (**(code **)(DAT_056f2690 + 0x18))(&DAT_056f2690);
  if (*DAT_056f2698 == '\0') {
LAB_03107f90:
    FUN_0386fd70(&DAT_056f2690);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f2690);
  }
  else {
    if (*DAT_056f2698 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f2698[lVar7] == '\0'))
        goto LAB_03107f90;
        lVar8 = lVar8 + 1;
      } while (DAT_056f2698[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f2690);
  }
  *(undefined8 *)(param_1 + 0x338) = uVar4;
  (**(code **)(DAT_056f26a0 + 0x18))(&DAT_056f26a0);
  if (*DAT_056f26a8 == '\0') {
LAB_03108014:
    FUN_0386fd70(&DAT_056f26a0);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f26a0);
  }
  else {
    if (*DAT_056f26a8 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f26a8[lVar7] == '\0'))
        goto LAB_03108014;
        lVar8 = lVar8 + 1;
      } while (DAT_056f26a8[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f26a0);
  }
  *(undefined8 *)(param_1 + 0x340) = uVar4;
  (**(code **)(DAT_056f26b0 + 0x18))(&DAT_056f26b0);
  if (*DAT_056f26b8 == '\0') {
LAB_031080a0:
    FUN_0386fd70(&DAT_056f26b0);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f26b0);
  }
  else {
    if (*DAT_056f26b8 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f26b8[lVar7] == '\0'))
        goto LAB_031080a0;
        lVar8 = lVar8 + 1;
      } while (DAT_056f26b8[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f26b0);
  }
  *(undefined8 *)(param_1 + 0x348) = uVar4;
  (**(code **)(DAT_056f26c0 + 0x18))(&DAT_056f26c0);
  if (*DAT_056f26c8 == '\0') {
LAB_03108124:
    FUN_0386fd70(&DAT_056f26c0);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f26c0);
  }
  else {
    if (*DAT_056f26c8 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f26c8[lVar7] == '\0'))
        goto LAB_03108124;
        lVar8 = lVar8 + 1;
      } while (DAT_056f26c8[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f26c0);
  }
  *(undefined8 *)(param_1 + 0x350) = uVar4;
  (**(code **)(DAT_056f26d0 + 0x18))(&DAT_056f26d0);
  if (*DAT_056f26d8 == '\0') {
LAB_031081b0:
    FUN_0386fd70(&DAT_056f26d0);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f26d0);
  }
  else {
    if (*DAT_056f26d8 != '@') {
      lVar8 = 0;
      do {
        if ((lVar8 == 0x80000) || (lVar7 = lVar8 + 1, DAT_056f26d8[lVar7] == '\0'))
        goto LAB_031081b0;
        lVar8 = lVar8 + 1;
      } while (DAT_056f26d8[lVar7] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f26d0);
  }
  *(undefined8 *)(param_1 + 0x358) = uVar4;
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

