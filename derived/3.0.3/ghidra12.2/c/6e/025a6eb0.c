
/* WARNING: Type propagation algorithm not settling */

void FUN_025a6eb0(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined8 *******pppppppuVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined *local_760;
  char *local_758;
  undefined8 local_750;
  undefined1 *local_748;
  undefined8 *******local_740;
  undefined8 *******local_738;
  undefined8 *******local_730;
  undefined8 *******local_728;
  undefined8 *******local_720;
  undefined8 *******local_718;
  undefined8 *******local_710;
  undefined8 *******local_708;
  undefined8 *******local_700;
  undefined8 *******local_6f8;
  undefined8 *******local_6f0;
  undefined8 *******local_6e8;
  undefined8 *******local_6e0;
  undefined8 *******local_6d8;
  undefined8 *******local_6d0;
  undefined8 *******local_6c8;
  undefined8 *******local_6c0;
  undefined8 *******local_6b8;
  undefined8 *******local_6b0;
  undefined8 *******local_6a8;
  undefined8 *******local_6a0;
  undefined8 *******local_698;
  undefined8 *******local_690;
  undefined8 *******local_688;
  undefined8 *******local_680;
  undefined8 *******local_678;
  undefined8 *******local_670;
  undefined8 *******local_668;
  undefined8 *******local_660;
  undefined8 *******local_658;
  undefined8 *******local_650;
  undefined8 *******local_648;
  undefined8 *******local_640;
  undefined8 *******local_638;
  undefined8 *******local_630;
  undefined8 *******local_628;
  undefined8 *******local_620;
  undefined8 *******local_618;
  undefined8 *******local_610;
  undefined8 *******local_608;
  undefined8 *******local_600;
  undefined8 *******local_5f8;
  undefined8 *******local_5f0;
  undefined8 *******local_5e8;
  undefined8 *******local_5e0;
  undefined8 *******local_5d8;
  undefined8 *******local_5d0;
  undefined8 *******local_5c8;
  undefined8 *******local_5c0;
  undefined8 *******local_5b8;
  undefined8 *******local_5b0;
  undefined8 *******local_5a8;
  undefined8 *******local_5a0;
  undefined8 *******local_598;
  undefined8 *******local_590;
  undefined8 *******local_588;
  undefined8 *******local_580;
  undefined8 *******local_578;
  undefined8 *******local_570;
  undefined8 *******local_568;
  undefined8 *******local_560;
  undefined8 *******local_558;
  undefined8 *******local_550;
  undefined8 *******local_548;
  undefined8 *******local_540;
  undefined8 *******local_538;
  undefined8 *******local_530;
  undefined8 *******local_528;
  undefined8 *******local_520;
  undefined8 *******local_518;
  undefined8 *******local_510;
  undefined8 *******local_508;
  undefined8 *******local_500;
  undefined8 *******local_4f8;
  undefined8 *******local_4f0;
  undefined8 *******local_4e8;
  undefined8 *******local_4e0;
  undefined8 *******local_4d8;
  undefined8 *******local_4d0;
  undefined8 *******local_4c8;
  undefined8 *******local_4c0;
  undefined8 *******local_4b8;
  undefined8 *******local_4b0;
  undefined8 *******local_4a8;
  undefined8 *******local_4a0;
  undefined8 *******local_498;
  undefined8 *******local_490;
  undefined8 *******local_488;
  undefined8 *******local_480;
  undefined8 *******local_478;
  undefined8 *******local_470;
  undefined8 *******local_468;
  undefined8 *******local_460;
  undefined8 *******local_458;
  undefined8 *******local_450;
  undefined8 *******local_448;
  undefined8 *******local_440;
  undefined8 *******local_438;
  undefined8 *******local_430;
  undefined8 *******local_428;
  undefined8 *******local_420;
  undefined8 *******local_418;
  undefined8 *******local_410;
  undefined8 *******local_408;
  undefined8 ******local_400;
  undefined8 *****local_3f8;
  undefined8 ****local_3f0;
  undefined8 ***local_3e8;
  undefined8 **local_3e0;
  undefined8 *local_3d8;
  undefined8 local_3d0;
  undefined1 local_3c8 [872];
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  local_3d0 = 0;
  local_728 = &local_720;
  local_720 = &local_718;
  local_740 = &local_730;
  local_718 = &local_710;
  local_710 = &local_708;
  local_708 = &local_700;
  local_700 = &local_6f8;
  local_6f8 = &local_6f0;
  local_6f0 = &local_6e8;
  local_6e8 = &local_6e0;
  local_6e0 = &local_6d8;
  local_6d8 = &local_6d0;
  local_6d0 = &local_6c8;
  local_6c8 = &local_6c0;
  local_6c0 = &local_6b8;
  local_6b8 = &local_6b0;
  local_6b0 = &local_6a8;
  local_6a8 = &local_6a0;
  local_6a0 = &local_698;
  local_698 = &local_690;
  local_690 = &local_688;
  local_688 = &local_680;
  local_680 = &local_678;
  local_678 = &local_670;
  local_670 = &local_668;
  local_668 = &local_660;
  local_660 = &local_658;
  local_658 = &local_650;
  local_650 = &local_648;
  local_648 = &local_640;
  local_640 = &local_638;
  local_638 = &local_630;
  local_630 = &local_628;
  local_628 = &local_620;
  local_620 = &local_618;
  local_618 = &local_610;
  local_610 = &local_608;
  local_608 = &local_600;
  local_600 = &local_5f8;
  local_5f8 = &local_5f0;
  local_5f0 = &local_5e8;
  local_5e8 = &local_5e0;
  local_5e0 = &local_5d8;
  local_5d8 = &local_5d0;
  local_5d0 = &local_5c8;
  local_5c8 = &local_5c0;
  local_5c0 = &local_5b8;
  local_5b8 = &local_5b0;
  local_5b0 = &local_5a8;
  local_5a8 = &local_5a0;
  local_5a0 = &local_598;
  local_598 = &local_590;
  local_590 = &local_588;
  local_588 = &local_580;
  local_580 = &local_578;
  local_578 = &local_570;
  local_570 = &local_568;
  local_568 = &local_560;
  local_560 = &local_558;
  local_558 = &local_550;
  local_550 = &local_548;
  local_548 = &local_540;
  local_540 = &local_538;
  local_538 = &local_530;
  local_530 = &local_528;
  local_528 = &local_520;
  local_520 = &local_518;
  local_518 = &local_510;
  local_510 = &local_508;
  local_508 = &local_500;
  local_500 = &local_4f8;
  local_4f8 = &local_4f0;
  local_4f0 = &local_4e8;
  local_4e8 = &local_4e0;
  local_4e0 = &local_4d8;
  local_4d8 = &local_4d0;
  local_4d0 = &local_4c8;
  local_4c8 = &local_4c0;
  local_4c0 = &local_4b8;
  local_4b8 = &local_4b0;
  local_4b0 = &local_4a8;
  local_4a8 = &local_4a0;
  local_4a0 = &local_498;
  local_498 = &local_490;
  local_490 = &local_488;
  local_488 = &local_480;
  local_480 = &local_478;
  local_478 = &local_470;
  local_470 = &local_468;
  local_468 = &local_460;
  local_460 = &local_458;
  local_458 = &local_450;
  local_450 = &local_448;
  local_448 = &local_440;
  local_440 = &local_438;
  local_438 = &local_430;
  local_430 = &local_428;
  local_428 = &local_420;
  local_420 = &local_418;
  local_418 = &local_410;
  local_410 = &local_408;
  local_408 = &local_400;
  local_400 = &local_3f8;
  local_3f8 = &local_3f0;
  local_3f0 = &local_3e8;
  local_3e8 = &local_3e0;
  local_3e0 = &local_3d8;
  local_3d8 = &local_3d0;
  local_730 = &local_728;
  local_750 = 0;
  local_748 = (undefined1 *)0x0;
  if (local_3c8 != (undefined1 *)0x0) {
    local_750 = 0x6d00000000;
    local_748 = local_3c8;
  }
  local_738 = local_740;
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_760 = (undefined *)CONCAT71(local_760._1_7_,*(byte *)(param_1 + 0x18));
    lVar6 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_760,1);
    uVar14 = local_750;
joined_r0x025a723c:
    local_750 = uVar14;
    if (lVar6 != 0) {
      lVar8 = lVar6 + 0x194b0;
      if (*(long *)(lVar6 + 0x194b8) == 0) {
        lVar8 = *(long *)(DAT_05574040 + 0x20);
      }
      local_750._0_4_ = (int)uVar14;
      local_750._4_4_ = (int)(uVar14 >> 0x20);
      if (local_750._4_4_ <= (int)local_750) goto LAB_025a7338;
      lVar6 = 0;
      do {
        pppppppuVar5 = local_740;
        if ((int)local_750 < local_750._4_4_) {
          if (local_740 != (undefined8 *******)0x0) {
            local_740 = (undefined8 *******)*local_740;
          }
          *pppppppuVar5 = (undefined8 ******)0x0;
          if ((int)local_750 < local_750._4_4_) {
            *(undefined8 ********)(local_748 + (long)(int)local_750 * 8) = pppppppuVar5;
            local_750 = CONCAT44(local_750._4_4_,(int)local_750 + 1);
          }
          *(int *)pppppppuVar5 = (int)lVar6;
          if ((*(long **)(lVar8 + 0x2a8b0) == (long *)0x0) ||
             (puVar7 = (undefined8 *)**(long **)(lVar8 + 0x2a8b0), puVar7 == (undefined8 *)0x0)) {
            *(undefined4 *)((long)pppppppuVar5 + 4) =
                 *(undefined4 *)
                  (*(long *)(lVar8 + 0x2a898) + *(long *)(lVar8 + 0x2a890) + lVar6 * 4);
          }
          else {
            uVar14 = (**(code **)*puVar7)();
            *(undefined4 *)((long)pppppppuVar5 + 4) =
                 *(undefined4 *)
                  (*(long *)(lVar8 + 0x2a898) + *(long *)(lVar8 + 0x2a890) + lVar6 * 4);
            if ((((uVar14 & 1) != 0) && (*(long *)(lVar8 + 0x2a8b0) != 0)) &&
               (puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x2a8b0) + 8),
               puVar7 != (undefined8 *)0x0)) {
              (**(code **)*puVar7)();
            }
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x6d);
    }
  }
  else if ((*(int *)(param_1 + 0x1c) != -1) && (DAT_05574040 != 0)) {
    lVar6 = FUN_026eec4c();
    uVar14 = local_750;
    goto joined_r0x025a723c;
  }
  uVar14 = local_750;
LAB_025a7338:
  local_750 = uVar14;
  puVar4 = PTR_DAT_04bb2020;
  bVar1 = 1 < (int)local_750;
  if (bVar1) {
    uVar10 = 0;
    uVar9 = (int)local_750 - 1;
    do {
      if ((int)uVar9 <= (int)uVar10) break;
      lVar6 = *(long *)(local_748 + (ulong)uVar10 * 8);
      uVar14 = (ulong)uVar10;
      if ((uVar9 - uVar10 & 1) == 0) {
        lVar8 = lVar6;
        uVar11 = uVar14;
      }
      else {
        uVar11 = uVar14 + 1;
        lVar8 = *(long *)(local_748 + uVar11 * 8);
        if (*(int *)(lVar8 + 4) < *(int *)(lVar6 + 4)) {
          *(long *)(local_748 + uVar11 * 8) = lVar6;
          *(long *)(local_748 + uVar14 * 8) = lVar8;
          lVar8 = lVar6;
        }
      }
      uVar12 = (ulong)uVar9;
      uVar9 = uVar10;
      if (~uVar14 + uVar12 != 0) {
        plVar13 = (long *)(local_748 + uVar11 * 8 + 8);
        do {
          lVar6 = *plVar13;
          if (*(int *)(lVar6 + 4) < *(int *)(lVar8 + 4)) {
            plVar13[-1] = lVar6;
            *plVar13 = lVar8;
            uVar9 = (uint)uVar11;
          }
          else {
            lVar8 = lVar6;
          }
          lVar6 = plVar13[1];
          if (*(int *)(lVar6 + 4) < *(int *)(lVar8 + 4)) {
            uVar9 = (uint)uVar11 + 1;
            *plVar13 = lVar6;
            plVar13[1] = lVar8;
          }
          else {
            lVar8 = lVar6;
          }
          uVar11 = uVar11 + 2;
          plVar13 = plVar13 + 2;
        } while (uVar12 != uVar11);
      }
      if ((int)uVar9 <= (int)uVar10) break;
      lVar6 = *(long *)(local_748 + (ulong)uVar9 * 8);
      uVar11 = (ulong)uVar9;
      uVar10 = uVar9;
      do {
        lVar8 = *(long *)(local_748 + uVar11 * 8 + -8);
        if (*(int *)(lVar6 + 4) < *(int *)(lVar8 + 4)) {
          uVar10 = (uint)uVar11;
          *(long *)(local_748 + uVar11 * 8 + -8) = lVar6;
          *(long *)(local_748 + uVar11 * 8) = lVar8;
        }
        else {
          lVar6 = lVar8;
        }
        uVar11 = uVar11 - 1;
      } while ((long)uVar14 < (long)uVar11);
    } while (uVar10 != uVar9);
  }
  uVar14 = 0;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (uVar14 < (local_750 & 0xffffffff)) {
      lVar6 = *(long *)(local_748 + uVar14 * 8);
    }
    else {
      lVar6 = 0;
    }
    if (((uVar14 < *(uint *)(param_1 + 0x30)) && (lVar6 != 0)) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x38) + uVar14 * 8), lVar6 != 0)) {
      local_758 = "u";
      pcVar3 = (char *)(lVar6 + 8);
      local_760 = puVar2;
      lVar6 = nn::prepo::Struct::GetBuffer();
      if (lVar6 != 0) {
        (**(code **)(local_760 + 0x18))(&local_760);
        nn::prepo::Struct::Add(pcVar3,(long)local_758);
      }
      local_760 = puVar4 + 0x10;
      local_758 = "c";
      lVar6 = nn::prepo::Struct::GetBuffer();
      if (lVar6 != 0) {
        (**(code **)(local_760 + 0x18))(&local_760);
        nn::prepo::Struct::Add(pcVar3,(long)local_758);
      }
      lVar8 = *(long *)(param_1 + 0x28);
      lVar6 = nn::prepo::Array::GetBuffer();
      if (lVar6 != 0) {
        nn::prepo::Array::Add((Struct *)(lVar8 + 8));
      }
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 != 0x6d);
  local_760 = puVar4 + 0x10;
  local_758 = "UseRanking";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605b30(*(long *)(param_1 + 8),&local_760,*(undefined8 *)(param_1 + 0x28));
  }
  return;
}

