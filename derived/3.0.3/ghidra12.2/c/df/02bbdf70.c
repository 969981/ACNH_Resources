
void FUN_02bbdf70(long param_1,ulong param_2)

{
  long *plVar1;
  int iVar2;
  short sVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *local_70;
  char *pcStack_68;
  undefined8 local_48;
  
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "/L_SortWin_00";
  lVar5 = FUN_02bb21c8(**(long **)(*(long *)(param_1 + 0x210) + 0x3f8) + 0x38,&local_70);
  if (lVar5 != 0) {
    if ((param_2 & 1) == 0) {
      uVar9 = (uint)*(ushort *)(lVar5 + 0x2aa);
    }
    else {
      uVar9 = (uint)*(ushort *)(lVar5 + 0x2aa);
      do {
        uVar9 = uVar9 >> 0xf & 1 | uVar9 << 1;
      } while ((uVar9 & *(ushort *)(lVar5 + 0x2a8)) == 0);
      FUN_0312f28c(lVar5,uVar9);
    }
    if ((uVar9 & 0xffff) == 0x400) {
      iVar2 = *(int *)(param_1 + 0x1c2d0);
      if (1 < iVar2) {
        lVar5 = *(long *)(param_1 + 0x1c2d8);
        uVar11 = 0;
        uVar9 = iVar2 - 1;
        do {
          if ((int)uVar9 <= (int)uVar11) {
            return;
          }
          uVar10 = (ulong)uVar11;
          uVar12 = (ulong)uVar9;
          uVar13 = uVar10;
          uVar9 = uVar11;
          do {
            plVar1 = (long *)(lVar5 + uVar13 * 8);
            sVar3 = *(short *)(plVar1[1] + 0x50);
            if (*(short *)(*plVar1 + 0x50) == 0) {
              bVar4 = sVar3 == 0;
LAB_02bbe214:
              uVar8 = (uint)!bVar4;
LAB_02bbe218:
              if (0 < (int)uVar8) {
                lVar6 = plVar1[1];
                uVar9 = (uint)uVar13;
                plVar1[1] = *(long *)(lVar5 + uVar13 * 8);
                *(long *)(lVar5 + uVar13 * 8) = lVar6;
              }
            }
            else if (sVar3 != 0) {
              local_70 = *(undefined **)(*plVar1 + 0x50);
              local_48 = *(undefined8 *)(plVar1[1] + 0x50);
              lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
              lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
              uVar8 = 0xffffffff;
              if (lVar6 <= lVar7) {
                lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
                bVar4 = lVar7 == lVar6;
                goto LAB_02bbe214;
              }
              goto LAB_02bbe218;
            }
            uVar13 = uVar13 + 1;
          } while (uVar12 != uVar13);
          if ((int)uVar9 <= (int)uVar11) {
            return;
          }
          uVar13 = (ulong)uVar9;
          uVar11 = uVar9;
          do {
            plVar1 = (long *)(lVar5 + uVar13 * 8);
            lVar6 = *plVar1;
            if (*(short *)(lVar6 + 0x50) != 0) {
              lVar7 = plVar1[-1];
              if (*(short *)(lVar7 + 0x50) != 0) {
                local_70 = *(undefined **)(lVar6 + 0x50);
                local_48 = *(undefined8 *)(lVar7 + 0x50);
                lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
                lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
                if (lVar6 <= lVar7) {
                  nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
                  goto LAB_02bbe268;
                }
                lVar7 = plVar1[-1];
                lVar6 = *(long *)(lVar5 + uVar13 * 8);
              }
              plVar1[-1] = lVar6;
              uVar11 = (uint)uVar13;
              *(long *)(lVar5 + uVar13 * 8) = lVar7;
            }
LAB_02bbe268:
            uVar13 = uVar13 - 1;
          } while ((long)uVar10 < (long)uVar13);
        } while (uVar11 != uVar9);
      }
    }
    else if (((uVar9 & 0xffff) == 0x80) && (iVar2 = *(int *)(param_1 + 0x1c2d0), 1 < iVar2)) {
      lVar5 = *(long *)(param_1 + 0x1c2d8);
      uVar11 = 0;
      uVar9 = iVar2 - 1;
      do {
        if ((int)uVar9 <= (int)uVar11) {
          return;
        }
        uVar10 = (ulong)uVar11;
        uVar12 = (ulong)uVar9;
        uVar13 = uVar10;
        uVar9 = uVar11;
        do {
          plVar1 = (long *)(lVar5 + uVar13 * 8);
          local_70 = *(undefined **)(*plVar1 + 0x48);
          local_48 = *(undefined8 *)(plVar1[1] + 0x48);
          lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
          if ((lVar6 <= lVar7) &&
             (lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48), lVar7 != lVar6)) {
            lVar6 = plVar1[1];
            uVar9 = (uint)uVar13;
            plVar1[1] = *(long *)(lVar5 + uVar13 * 8);
            *(long *)(lVar5 + uVar13 * 8) = lVar6;
          }
          uVar13 = uVar13 + 1;
        } while (uVar12 != uVar13);
        if ((int)uVar9 <= (int)uVar11) {
          return;
        }
        uVar13 = (ulong)uVar9;
        uVar11 = uVar9;
        do {
          plVar1 = (long *)(lVar5 + uVar13 * 8);
          local_70 = *(undefined **)(*plVar1 + 0x48);
          local_48 = *(undefined8 *)(plVar1[-1] + 0x48);
          lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
          if (lVar7 < lVar6) {
            lVar6 = plVar1[-1];
            uVar11 = (uint)uVar13;
            plVar1[-1] = *(long *)(lVar5 + uVar13 * 8);
            *(long *)(lVar5 + uVar13 * 8) = lVar6;
          }
          else {
            nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
          }
          uVar13 = uVar13 - 1;
        } while ((long)uVar10 < (long)uVar13);
      } while (uVar11 != uVar9);
    }
  }
  return;
}

