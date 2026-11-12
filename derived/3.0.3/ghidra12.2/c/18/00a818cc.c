
void FUN_00a818cc(long param_1)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong local_80 [3];
  ulong local_68;
  
  if (*(char *)(param_1 + 0x4084) != '\0' || *(char *)(param_1 + 0x4085) != '\0') {
    return;
  }
  uVar10 = *(int *)(param_1 + 0x4094) - 2;
  if (uVar10 < 5) {
    *(long *)(param_1 + 0x20) =
         *(long *)(param_1 + 0x20) + *(long *)(&DAT_04168140 + (long)(int)uVar10 * 8);
  }
  uVar12 = *(ulong *)(param_1 + 0x4060);
  nn::time::AdjustableUserSystemClock::GetCurrentTime((PosixTime *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0x4094) == 0) {
    lVar9 = *(long *)(param_1 + 0x20) / 1000000000 + *(long *)(param_1 + 8) +
            *(long *)(param_1 + 0x28) / 1000000000 + *(long *)(param_1 + 0x30) / 1000000000;
    *(long *)(param_1 + 0x18) = lVar9;
    lVar1 = *(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x38);
    *(long *)(param_1 + 0x20) = (lVar9 - lVar1) * 1000000000 - *(long *)(param_1 + 0x30);
    *(long *)(param_1 + 0x28) = (lVar1 - *(long *)(param_1 + 8)) * 1000000000;
    cVar2 = *(char *)(param_1 + 0x4098);
  }
  else {
    lVar9 = ((*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x38)) - *(long *)(param_1 + 8))
            * 1000000000;
    *(long *)(param_1 + 0x28) = lVar9;
    *(long *)(param_1 + 0x18) =
         *(long *)(param_1 + 0x20) / 1000000000 + *(long *)(param_1 + 8) +
         *(long *)(param_1 + 0x30) / 1000000000 + lVar9 / 1000000000;
    cVar2 = *(char *)(param_1 + 0x4098);
  }
  if (cVar2 == '\0') goto LAB_00a81afc;
  uVar10 = (uint)*(ushort *)(param_1 + 0x408a);
  bVar3 = *(byte *)(param_1 + 0x408e);
  bVar4 = *(byte *)(param_1 + 0x408f);
  uVar13 = (uint)*(byte *)(param_1 + 0x408c);
  uVar14 = (uint)*(byte *)(param_1 + 0x408d);
  bVar5 = *(byte *)(param_1 + 0x4090);
  uVar7 = nn::time::IsValidDate
                    ((int)(short)*(ushort *)(param_1 + 0x408a),
                     (int)(char)*(byte *)(param_1 + 0x408c),(int)(char)*(byte *)(param_1 + 0x408d));
  if ((uVar7 & 1) != 0) goto LAB_00a81aac;
  if ((short)*(ushort *)(param_1 + 0x408a) < 2000) {
    uVar10 = 2000;
LAB_00a81a34:
    *(short *)(param_1 + 0x408a) = (short)uVar10;
    uVar8 = uVar10;
  }
  else {
    uVar8 = (uint)*(ushort *)(param_1 + 0x408a);
    if (0x833 < uVar8) {
      uVar10 = 0x833;
      goto LAB_00a81a34;
    }
  }
  bVar6 = *(byte *)(param_1 + 0x408c);
  if ((char)bVar6 < '\0') {
    uVar13 = 1;
LAB_00a81a5c:
    *(char *)(param_1 + 0x408c) = (char)uVar13;
    uVar11 = uVar13;
  }
  else {
    uVar11 = (uint)bVar6;
    if (0xc < bVar6) {
      uVar13 = 0xc;
      goto LAB_00a81a5c;
    }
  }
  bVar6 = *(byte *)(param_1 + 0x408d);
  if ((char)bVar6 < '\x01') {
    uVar8 = 1;
LAB_00a81aa4:
    uVar14 = uVar8;
    *(char *)(param_1 + 0x408d) = (char)uVar14;
  }
  else {
    if (uVar11 < 2) {
      uVar11 = 1;
    }
    if ((((uVar8 & 3) == 0) &&
        ((uVar8 & 0xf) == 0 || 0x28f < (uVar8 * 0x170a4000 & 0xffff | uVar8 * 0x5c29 >> 2 & 0x3fff))
        ) && (uVar11 == 2)) {
      if (0x1d < bVar6) {
        uVar8 = 0x1d;
        goto LAB_00a81aa4;
      }
    }
    else {
      uVar8 = (uint)(byte)(&DAT_0416812f)[uVar11];
      if ((byte)(&DAT_0416812f)[uVar11] < bVar6) goto LAB_00a81aa4;
    }
  }
LAB_00a81aac:
  local_80[0] = (ulong)bVar3 << 0x20 | (ulong)bVar4 << 0x28 | (ulong)bVar5 << 0x30 |
                (ulong)uVar14 << 0x18 | (ulong)uVar13 << 0x10 | (ulong)uVar10;
  lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_80);
  *(undefined1 *)(param_1 + 0x4098) = 0;
  *(long *)(param_1 + 0x18) = lVar9;
  *(long *)(param_1 + 0x20) =
       (lVar9 - *(long *)(param_1 + 8)) * 1000000000 -
       (*(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x28));
LAB_00a81afc:
  nn::time::ToCalendarTime
            ((CalendarTime *)&local_68,(CalendarAdditionalInfo *)local_80,
             (PosixTime *)(param_1 + 0x18),(TimeZoneRule *)(param_1 + 0x60));
  uVar7 = nn::time::ToCalendarTimeInUtc((PosixTime *)(param_1 + 0x18));
  *(ulong *)(param_1 + 0x4060) = uVar7;
  local_68 = uVar7;
  lVar9 = nn::os::GetSystemTick();
  if (((uVar12 & 0xffff) == 0) || ((uVar7 & 0xffffffffffffff) != (uVar12 & 0xffffffffffffff))) {
    *(long *)(param_1 + 0x4078) = lVar9;
    *(uint *)(param_1 + 0x4080) = 0;
    if (*(long *)PTR_DAT_04bb27b8 != 0) {
      *(undefined2 *)(*(long *)PTR_DAT_04bb27b8 + 0x1a) = 0;
    }
  }
  else {
    lVar9 = nn::os::ConvertToTimeSpan(lVar9 - *(long *)(param_1 + 0x4078));
    uVar10 = (int)(SUB168(SEXT816(lVar9) * SEXT816(0x431bde82d7b634db),8) >> 0x12) -
             (SUB164(SEXT816(lVar9) * SEXT816(0x431bde82d7b634db),0xc) >> 0x1f);
    if (0x3e6 < (int)uVar10) {
      uVar10 = 999;
    }
    *(uint *)(param_1 + 0x4080) = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
  }
  return;
}

