
void FUN_021a7250(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  
  lVar3 = DAT_04cea100;
  if (DAT_04cea100 == 0) {
    return;
  }
  puVar2 = (uint *)(param_1 + 0x92cc);
  uVar6 = *puVar2;
  if (uVar6 != 0xffffffff) {
    lVar5 = param_1 + (ulong)uVar6 * 0xba0;
    if (9 < uVar6) {
      lVar5 = param_1;
    }
    FUN_0214f240(lVar5 + 0x8b0);
  }
  uVar6 = *(uint *)(param_1 + 0x92d0);
  if (uVar6 != 0xffffffff) {
    lVar5 = param_1 + (ulong)uVar6 * 0xba0;
    if (9 < uVar6) {
      lVar5 = param_1;
    }
    FUN_0214f240(lVar5 + 0x8b0);
  }
  uVar6 = *(uint *)(param_1 + 0x92d4);
  if (uVar6 != 0xffffffff) {
    lVar5 = param_1 + (ulong)uVar6 * 0xba0;
    if (9 < uVar6) {
      lVar5 = param_1;
    }
    FUN_0214f240(lVar5 + 0x8b0);
  }
  *(undefined4 *)(param_1 + 0x92d4) = 0xffffffff;
  puVar1 = (uint *)(param_1 + 0x55c28);
  puVar2[0] = 0xffffffff;
  puVar2[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x92e8) = 0xffffffff;
  local_50 = *(undefined8 *)(DAT_04da6480 + 0x4060);
  if ((char)(local_50 >> 0x20) < '\x05') {
    lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
    local_48 = lVar5 - 0x15180;
    local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
  }
  uVar4 = local_50 >> 0x30;
  local_50._0_6_ = CONCAT24(5,(undefined4)local_50);
  local_50 = CONCAT26((short)uVar4,(undefined6)local_50) & 0xff00ffffffffffff;
  local_48 = local_48 & 0xffffffff00000000;
  local_58 = 0;
  FUN_021a7710(&local_48,(long)&local_58 + 4,&local_58,lVar3,&local_50);
  FUN_021a78d0(param_1,(long)&local_58 + 4,&local_48,&local_58);
  uVar6 = *puVar2;
  if (uVar6 != 0xffffffff) {
    lVar3 = param_1 + (ulong)uVar6 * 0xba0;
    if (9 < uVar6) {
      lVar3 = param_1;
    }
    if (*(long *)(lVar3 + 0xaa0) == 0) {
      uVar7 = 0x22;
    }
    else {
      uVar7 = *(undefined4 *)(*(long *)(lVar3 + 0xaa0) + 4);
    }
    *(undefined4 *)(lVar3 + 0xaac) = uVar7;
    *(undefined8 *)(lVar3 + 0xaa0) = 0;
    FUN_0214d220(lVar3 + 0x8b0);
    lVar5 = 0;
    *(undefined1 *)(lVar3 + 0xae6) = 1;
    uVar6 = *puVar2;
    if (*puVar1 == uVar6) {
LAB_021a73fc:
      puVar1[lVar5] = 0xffffffff;
      plVar8 = *(long **)(lVar3 + 0x928);
      if (plVar8 != (long *)(lVar3 + 0x920)) {
        plVar9 = plVar8 + -2;
        do {
          if (*(int *)((long)plVar9 + 4) == 5) {
            if (*(long **)(lVar3 + 0xaa0) == plVar9) {
              FUN_0214eb90(lVar3 + 0x8b0,uVar6,1);
            }
            else {
              if (*plVar8 != 0) {
                *(long *)(*plVar8 + 8) = plVar8[1];
              }
              if ((long *)plVar8[1] != (long *)0x0) {
                *(long *)plVar8[1] = *plVar8;
              }
              *plVar8 = 0;
              plVar8[1] = 0;
              *(int *)(lVar3 + 0x930) = *(int *)(lVar3 + 0x930) + -1;
              *plVar9 = *(long *)(lVar3 + 0x938);
              *(long **)(lVar3 + 0x938) = plVar9;
            }
            break;
          }
          plVar8 = (long *)plVar8[1];
          plVar9 = plVar8 + -2;
        } while (plVar9 != (long *)(lVar3 + 0x910));
      }
      uVar6 = *puVar2;
    }
    else if (*(uint *)(param_1 + 0x55c2c) == uVar6) {
      lVar5 = 1;
      goto LAB_021a73fc;
    }
    FUN_0219d7e0(param_1,uVar6,1,0);
  }
  uVar6 = *(uint *)(param_1 + 0x92d0);
  if (uVar6 != 0xffffffff) {
    lVar3 = param_1 + (ulong)uVar6 * 0xba0;
    if (9 < uVar6) {
      lVar3 = param_1;
    }
    if (*(long *)(lVar3 + 0xaa0) == 0) {
      uVar7 = 0x22;
    }
    else {
      uVar7 = *(undefined4 *)(*(long *)(lVar3 + 0xaa0) + 4);
    }
    *(undefined4 *)(lVar3 + 0xaac) = uVar7;
    *(undefined8 *)(lVar3 + 0xaa0) = 0;
    FUN_0214d220(lVar3 + 0x8b0);
    lVar5 = 0;
    *(undefined1 *)(lVar3 + 0xae6) = 1;
    uVar6 = *(uint *)(param_1 + 0x92d0);
    if (*puVar1 == uVar6) {
LAB_021a751c:
      puVar1[lVar5] = 0xffffffff;
      plVar8 = *(long **)(lVar3 + 0x928);
      if (plVar8 != (long *)(lVar3 + 0x920)) {
        plVar9 = plVar8 + -2;
        do {
          if (*(int *)((long)plVar9 + 4) == 5) {
            if (*(long **)(lVar3 + 0xaa0) == plVar9) {
              FUN_0214eb90(lVar3 + 0x8b0,uVar6,1);
            }
            else {
              if (*plVar8 != 0) {
                *(long *)(*plVar8 + 8) = plVar8[1];
              }
              if ((long *)plVar8[1] != (long *)0x0) {
                *(long *)plVar8[1] = *plVar8;
              }
              *plVar8 = 0;
              plVar8[1] = 0;
              *(int *)(lVar3 + 0x930) = *(int *)(lVar3 + 0x930) + -1;
              *plVar9 = *(long *)(lVar3 + 0x938);
              *(long **)(lVar3 + 0x938) = plVar9;
            }
            break;
          }
          plVar8 = (long *)plVar8[1];
          plVar9 = plVar8 + -2;
        } while (plVar9 != (long *)(lVar3 + 0x910));
      }
      uVar6 = *(uint *)(param_1 + 0x92d0);
    }
    else if (*(uint *)(param_1 + 0x55c2c) == uVar6) {
      lVar5 = 1;
      goto LAB_021a751c;
    }
    FUN_0219d7e0(param_1,uVar6,1,0);
  }
  uVar6 = *(uint *)(param_1 + 0x92d4);
  if (uVar6 == 0xffffffff) {
    return;
  }
  lVar3 = param_1 + (ulong)uVar6 * 0xba0;
  if (9 < uVar6) {
    lVar3 = param_1;
  }
  if (*(long *)(lVar3 + 0xaa0) == 0) {
    uVar7 = 0x22;
  }
  else {
    uVar7 = *(undefined4 *)(*(long *)(lVar3 + 0xaa0) + 4);
  }
  *(undefined4 *)(lVar3 + 0xaac) = uVar7;
  *(undefined8 *)(lVar3 + 0xaa0) = 0;
  FUN_0214d220(lVar3 + 0x8b0);
  lVar5 = 0;
  *(undefined1 *)(lVar3 + 0xae6) = 1;
  uVar6 = *(uint *)(param_1 + 0x92d4);
  if (*puVar1 != uVar6) {
    if (*(uint *)(param_1 + 0x55c2c) != uVar6) goto LAB_021a76dc;
    lVar5 = 1;
  }
  puVar1[lVar5] = 0xffffffff;
  plVar8 = *(long **)(lVar3 + 0x928);
  if (plVar8 != (long *)(lVar3 + 0x920)) {
    plVar9 = plVar8 + -2;
    do {
      if (*(int *)((long)plVar9 + 4) == 5) {
        if (*(long **)(lVar3 + 0xaa0) == plVar9) {
          FUN_0214eb90(lVar3 + 0x8b0,uVar6,1);
        }
        else {
          if (*plVar8 != 0) {
            *(long *)(*plVar8 + 8) = plVar8[1];
          }
          if ((long *)plVar8[1] != (long *)0x0) {
            *(long *)plVar8[1] = *plVar8;
          }
          *plVar8 = 0;
          plVar8[1] = 0;
          *(int *)(lVar3 + 0x930) = *(int *)(lVar3 + 0x930) + -1;
          *plVar9 = *(long *)(lVar3 + 0x938);
          *(long **)(lVar3 + 0x938) = plVar9;
        }
        break;
      }
      plVar8 = (long *)plVar8[1];
      plVar9 = plVar8 + -2;
    } while (plVar9 != (long *)(lVar3 + 0x910));
  }
  uVar6 = *(uint *)(param_1 + 0x92d4);
LAB_021a76dc:
  FUN_0219d7e0(param_1,uVar6,1,0);
  return;
}

