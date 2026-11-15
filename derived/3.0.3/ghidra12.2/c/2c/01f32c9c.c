
undefined8 FUN_01f32c9c(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  bool bVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  CalendarTime *pCVar16;
  byte *pbVar17;
  byte bVar18;
  long lVar19;
  ulong uVar20;
  undefined8 local_68;
  undefined *local_60;
  char *local_58;
  
  puVar3 = PTR_DAT_04bb2020;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  local_58 = "SurpriseVisitEntered";
  sVar8 = FUN_02196ed0(*(long *)(param_1 + 8) + 0x508,&local_60);
  uVar6 = DAT_05405f40;
  if ((sVar8 == 0) || ((DAT_05405f40 & 0xffff) == 0)) {
LAB_01f330b4:
    uVar15 = 0;
  }
  else {
    uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
    if ((uVar2 < 10) && (lVar14 = (ulong)uVar2 * 0xba0, (&DAT_053fee41)[lVar14] != '\0')) {
      local_58 = "IndoorTalkCount";
      local_60 = puVar3 + 0x10;
      iVar9 = FUN_021991a0(&DAT_053fe348 + lVar14,&local_60);
      puVar5 = PTR_DAT_04bb32e8;
      uVar20 = *(ulong *)PTR_DAT_04bc3a00;
      if (iVar9 == 0) {
        local_68 = uVar20;
        if ((uVar20 & 0xffff) != 0) {
          lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
          local_60 = (undefined *)(lVar14 + 0x1e);
          local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
        }
        pCVar16 = (CalendarTime *)(*(long *)puVar5 + 0x4060);
        lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        lVar19 = nn::time::ToPosixTimeFromUtc(pCVar16);
        if (lVar19 < lVar14) goto LAB_01f330b4;
      }
      else {
        local_68 = CONCAT17((char)(local_68 >> 0x38),0x1010000);
        local_58 = "VisitPGoHomeCheckCondition";
        local_60 = puVar3 + 0x10;
        iVar10 = FUN_02743000(&local_60);
        if (iVar10 == 0) {
          lVar19 = *(long *)PTR_DAT_04bb39b0;
          pbVar17 = PTR_DAT_04bb32e0;
          if (lVar19 == 0) {
LAB_01f32e3c:
            if (*pbVar17 < 8) goto LAB_01f32eb4;
LAB_01f32e48:
            if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01f32eac:
              pbVar17 = PTR_DAT_04bb5038;
              goto LAB_01f32eb4;
            }
            lVar19 = **(long **)PTR_DAT_04bb27d0;
            bVar18 = *(byte *)(lVar19 + 0x473);
            pbVar17 = PTR_DAT_04bb5038;
            if ((long)(char)bVar18 != 0xffffffffffffffff) {
              puVar1 = (uint *)(lVar19 + 0x48) + ((long)(char)bVar18 & 0xffffffffU) * 0x20;
              if (7 < bVar18) {
                puVar1 = (uint *)(lVar19 + 0x48);
              }
              if ((*puVar1 & 8) != 0) {
                pbVar17 = (byte *)(lVar19 + 0x471);
              }
            }
            bVar18 = *pbVar17;
            bVar7 = 7 < bVar18;
            if (bVar7) {
              bVar18 = 0xff;
            }
            local_60 = (undefined *)CONCAT71(local_60._1_7_,bVar18);
            if (bVar7) goto LAB_01f32eac;
          }
          else {
            if (*(int *)(lVar19 + 0x15c) != 0) {
              pbVar17 = (byte *)(lVar19 + 0x158);
            }
            if (7 < *pbVar17) {
              if ((*(int *)(lVar19 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
                pbVar17 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
                goto LAB_01f32e3c;
              }
              goto LAB_01f32e48;
            }
LAB_01f32eb4:
            bVar18 = *pbVar17;
            if (7 < bVar18) {
              bVar18 = 0xff;
            }
            local_60 = (undefined *)CONCAT71(local_60._1_7_,bVar18);
          }
          uVar11 = FUN_02915598(&local_60);
          puVar4 = PTR_DAT_04bb2720;
          if ((uVar11 & 1) != 0) {
            lVar19 = *(long *)PTR_DAT_04bb2720;
            if ((lVar19 != 0) && (*(long *)(lVar19 + 0x330) != 0)) {
              puVar12 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
              iVar10 = FUN_006bd550(*puVar12,0);
              if ((iVar10 == 0x758f7eaf) &&
                 (((*(long *)puVar4 != 0 &&
                   (lVar19 = *(long *)(*(long *)puVar4 + 0x330), lVar19 != 0)) &&
                  (*(int *)(lVar19 + 0x248) != 0)))) goto LAB_01f32f8c;
            }
            local_68 = uVar6;
            lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
            local_60 = (undefined *)(lVar19 + 10);
            local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
            if (4 < iVar9) {
              pCVar16 = (CalendarTime *)(*(long *)puVar5 + 0x4060);
              lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
              lVar13 = nn::time::ToPosixTimeFromUtc(pCVar16);
              if (lVar19 <= lVar13) goto LAB_01f330c0;
            }
          }
        }
LAB_01f32f8c:
        local_58 = "ExtendStayTimeVisitP";
        local_68 = uVar20;
        local_60 = puVar3 + 0x10;
        iVar9 = FUN_021991a0(&DAT_053fe348 + lVar14,&local_60);
        if (iVar9 == 0) {
          iVar9 = 2;
        }
        else {
          local_58 = "VisitPStayExtendTime";
          local_60 = puVar3 + 0x10;
          iVar9 = FUN_02743000(&local_60);
          iVar9 = iVar9 + 2;
        }
        if ((short)local_68 != 0) {
          local_60 = (undefined *)nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
          if (iVar9 != 0) {
            local_60 = local_60 + ((long)iVar9 * 60000000000) / 1000000000;
          }
          local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
        }
        pCVar16 = (CalendarTime *)(*(long *)puVar5 + 0x4060);
        lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        lVar19 = nn::time::ToPosixTimeFromUtc(pCVar16);
        if (lVar19 < lVar14) {
          local_68 = *(ulong *)PTR_DAT_04bc3a08;
          if ((local_68 & 0xffff) != 0) {
            lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
            local_60 = (undefined *)(lVar14 + 0xe10);
            local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
          }
          pCVar16 = (CalendarTime *)(*(long *)puVar5 + 0x4060);
          lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
          lVar19 = nn::time::ToPosixTimeFromUtc(pCVar16);
          if (lVar19 < lVar14) goto LAB_01f330b4;
        }
      }
LAB_01f330c0:
      nn::time::ToPosixTimeFromUtc(pCVar16);
    }
    uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
    if ((uVar2 < 10) && ((&DAT_053fee41)[(ulong)uVar2 * 0xba0] != '\0')) {
      local_60 = puVar3 + 0x10;
      local_58 = "VisitPNPCGoHomeMyself";
      FUN_02199310(&DAT_053fe348 + (ulong)uVar2 * 0xba0,&local_60,1);
    }
    local_60 = puVar3 + 0x10;
    *(undefined4 *)(param_1 + 0x77f0) = *(undefined4 *)(param_1 + 0x77b0);
    *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) | 0x80;
    local_58 = "SurpriseGoHome";
    FUN_01ea5c80(param_1,PTR_PTR_04bb2238,&local_60,0,0,PTR_DAT_04bb32e0);
    uVar15 = 1;
  }
  return uVar15;
}

