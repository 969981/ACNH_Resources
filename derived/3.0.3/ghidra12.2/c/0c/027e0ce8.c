
undefined8 FUN_027e0ce8(long param_1,uint param_2,byte *param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  byte bVar9;
  byte bVar10;
  byte *pbVar11;
  uint uVar12;
  undefined8 local_70;
  char *pcStack_68;
  uint local_5c;
  undefined8 local_58;
  
  if (2 < param_2) {
    return 0;
  }
  bVar2 = *(byte *)(param_1 + (ulong)param_2 + 0x1e3363);
  if (bVar2 < 10) {
    uVar12 = (uint)bVar2;
    pbVar11 = (byte *)(param_1 + (ulong)uVar12 * 0x13230);
    uVar8 = (ulong)*pbVar11;
    if (((uVar8 < 0x23) && (pbVar11[1] <= (byte)PTR_DAT_04bc27f0[uVar8])) &&
       (((uint)(&DAT_053e6eb8)[uVar8] >> (ulong)(pbVar11[1] & 0x1f) & 1) != 0)) {
      local_70 = &PTR_LAB_048f9770;
      pcStack_68 = "ForceMoveOut";
      local_5c = uVar12;
      iVar3 = FUN_02749340(param_1 + (ulong)uVar12 * 0x13230 + 0x1267c,&local_70);
      if (iVar3 == 0) {
        bVar9 = *param_3;
        if (7 < bVar9) {
          bVar9 = 0xff;
        }
        local_70 = (undefined **)CONCAT71(local_70._1_7_,bVar9);
        lVar6 = FUN_025830c0(DAT_055021a0,&local_70,1);
        if (lVar6 != 0) {
          if ((*(long **)(lVar6 + 0x17bb0) == (long *)0x0) ||
             (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x17bb0), puVar7 == (undefined8 *)0x0)) {
            uVar4 = 1;
          }
          else {
            uVar4 = (**(code **)*puVar7)();
            uVar4 = uVar4 ^ 1;
          }
          uVar5 = FUN_026b318c(pbVar11,*(long *)(lVar6 + 0x17b98) + *(long *)(lVar6 + 0x17b90) +
                                       0x1c);
          if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x17bb0) != 0)) &&
             (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x17bb0) + 8), puVar7 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar7)();
          }
          if (-1 < (int)uVar5) {
            lVar6 = param_1 + (ulong)uVar12 * 0x13230 + 4;
            lVar1 = lVar6 + (ulong)uVar5 * 0x5f0;
            if (7 < uVar5) {
              lVar1 = lVar6;
            }
            local_70 = &PTR_LAB_048f9770;
            pcStack_68 = "TalkDIY";
            iVar3 = FUN_02746e10(lVar1 + 0x38,&local_70);
            if (iVar3 != 0) {
              return 0;
            }
          }
        }
        if ((&DAT_053fee41)[(ulong)bVar2 * 0xba0] != '\0') {
          uVar8 = *(ulong *)(DAT_04da6480 + 0x4060);
          local_58 = uVar8;
          if ((uVar8 & 0xffff) != 0) {
            lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
            local_70 = (undefined **)(lVar6 + 0x2a30);
            uVar8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
          }
          bVar10 = (byte)(uVar8 >> 0x20);
          bVar9 = bVar10 + 0x18;
          if ('\a' < (char)bVar10) {
            bVar9 = bVar10;
          }
          pbVar11[0x13151] = bVar9;
          pbVar11[0x13152] = (byte)(uVar8 >> 0x28);
          if ('\x1c' < (char)bVar9) {
            pbVar11[0x13152] = 0;
            pbVar11[0x13151] = 0x1d;
          }
          pbVar11[0x13153] = 0;
          FUN_0219d4d4(&DAT_053fe348 + (ulong)bVar2 * 0xba0);
          *(char *)(param_1 + 0x1e3366) = (char)param_2;
          local_70._0_4_ = 1;
          FUN_021dafb0(&local_5c,&local_70,0,0,1,1);
          local_70 = (undefined **)((ulong)local_70._7_1_ << 0x38);
          local_70 = (undefined **)CONCAT26(local_70._6_2_,0xff0000000000);
          local_58._0_3_ =
               CONCAT21(*(undefined2 *)(param_1 + (ulong)bVar2 * 0x13230 + 0x13151),(char)param_2);
          if (-1 < DAT_053d0ef0) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0ef0,&local_70,&local_58,3,0);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

