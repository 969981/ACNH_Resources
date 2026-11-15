
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021ae86c(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  ulong local_40;
  byte local_34 [4];
  ulong local_18;
  
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  pbVar6 = &DAT_0548e140;
  if (lVar8 == 0) {
LAB_021ae8d8:
    if (7 < *pbVar6) {
LAB_021ae8e4:
      if (DAT_0537d558 != (long *)0x0) {
        lVar8 = *DAT_0537d558;
        bVar1 = *(byte *)(lVar8 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar1 != 0xffffffffffffffff) {
          puVar9 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar1 & 0xffffffffU) * 0x20;
          if (7 < bVar1) {
            puVar9 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar9 & 8) != 0) {
            pbVar6 = (byte *)(lVar8 + 0x471);
          }
        }
        local_34[0] = *pbVar6;
        if (local_34[0] < 8) goto LAB_021ae964;
      }
      pbVar6 = &DAT_0548e168;
    }
  }
  else {
    pbVar6 = &DAT_0548e140;
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_021ae8d8;
      }
      goto LAB_021ae8e4;
    }
  }
  local_34[0] = *pbVar6;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
LAB_021ae964:
  if ((*(int *)(param_1 + 0x7c84) != -1) && (DAT_04c487d4 != -1)) {
    local_18 = CONCAT44(local_18._4_4_,6);
    puVar9 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar9 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar9 >> 6 & 1) != 0) {
      uVar3 = FUN_02915598(local_34);
      if ((uVar3 & 1) != 0) {
        if (DAT_05aed670 == 0) {
          return;
        }
        if (*(long *)(DAT_05aed670 + 0x330) == 0) {
          return;
        }
        puVar4 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar4,0);
        if (iVar2 != 0x758f7eaf) {
          return;
        }
        if (DAT_05aed670 == 0) {
          return;
        }
        if (*(long *)(DAT_05aed670 + 0x330) == 0) {
          return;
        }
        if (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) == 0) {
          return;
        }
      }
      local_40 = _DAT_055c1a88;
      if ((_DAT_055c1a88 & 0xffff) != 0) {
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
        local_18 = lVar8 + 0xe10;
        local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
        lVar7 = *(long *)PTR_DAT_04bb32e8;
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
        lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar7 + 0x4060));
        if (lVar8 <= lVar5) {
          nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar7 + 0x4060));
          FUN_021aebe0(param_1);
          if (DAT_054f5738 == 0) {
            if ((DAT_054f08c8 & 1) == 0) {
              iVar2 = __cxa_guard_acquire(&DAT_054f08c8);
              puVar9 = &DAT_054f08c0;
              if (iVar2 != 0) {
                DAT_054f08c0 = 0;
                __cxa_guard_release(&DAT_054f08c8);
              }
            }
            else {
              puVar9 = &DAT_054f08c0;
            }
          }
          else {
            puVar9 = (uint *)(DAT_054f5738 + 0x1fc);
          }
          local_18 = local_18 & 0xffffffff00000000;
          *puVar9 = *puVar9 & 0xfffffffe;
          if (DAT_054f5738 == 0) {
            if ((DAT_054f08c8 & 1) == 0) {
              iVar2 = __cxa_guard_acquire(&DAT_054f08c8);
              puVar9 = &DAT_054f08c0;
              if (iVar2 != 0) {
                DAT_054f08c0 = 0;
                __cxa_guard_release(&DAT_054f08c8);
              }
            }
            else {
              puVar9 = &DAT_054f08c0;
            }
          }
          else {
            puVar9 = (uint *)(DAT_054f5738 + 0x1fc);
          }
          *puVar9 = *puVar9 & 0xfffffffd;
        }
      }
    }
  }
  return;
}

