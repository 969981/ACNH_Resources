
void FUN_020ee3b0(byte *param_1)

{
  CalendarTime *pCVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long local_28;
  
  puVar4 = PTR_DAT_04bb32e8;
  uVar7 = (ulong)*param_1;
  if ((9 < uVar7) || ((&DAT_053fee41)[uVar7 * 0xba0] == '\0')) {
    return;
  }
  if ((char)param_1[1] == 0) {
    lVar3 = uVar7 * 0xba0;
    (&DAT_053fe830)[uVar7 * 0x2e8] = 0;
    *(undefined2 *)(&DAT_053fe834 + lVar3) = 0;
    (&DAT_053fe83a)[lVar3] = 0;
    (&DAT_053fe83c)[lVar3] = 0;
    *(undefined4 *)(&DAT_053fe836 + lVar3) = 0x101;
  }
  else {
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x78855454) {
      return;
    }
    iVar2 = *(int *)(param_1 + 4);
    (&DAT_053fe830)[uVar7 * 0x2e8] = (int)(char)param_1[1];
    pCVar1 = (CalendarTime *)(&DAT_053fe834 + uVar7 * 0xba0);
    uVar6 = *(ulong *)(*(long *)puVar4 + 0x4060);
    *(ulong *)pCVar1 = uVar6;
    if ((uVar6 & 0xffff) != 0) {
      local_28 = nn::time::ToPosixTimeFromUtc(pCVar1);
      local_28 = local_28 + iVar2;
      uVar5 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      *(undefined8 *)pCVar1 = uVar5;
    }
    (&DAT_053fe83c)[uVar7 * 0xba0] = (byte)((ulong)(long)iVar2 >> 0x1f) & 1;
  }
  *(undefined4 *)(&DAT_053febe0 + uVar7 * 0xba0) = 0xffffffff;
  (&DAT_053febe4)[uVar7 * 0xba0] = 0xff;
  FUN_0219be30(&DAT_053fe348 + uVar7 * 0xba0);
  return;
}

