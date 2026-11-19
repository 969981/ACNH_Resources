
void FUN_038e9ac8(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 local_18;
  
  puVar4 = PTR_DAT_04bd0f18;
  if (*PTR_DAT_04bd0f18 == '\0') {
    uVar6 = nn::time::IsInitialized();
    if ((uVar6 & 1) == 0) {
      nn::time::Initialize();
    }
    *puVar4 = 1;
  }
  local_18 = *param_1;
  uVar7 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
  iVar5 = (int)uVar7;
  iVar2 = (iVar5 << 8) >> 0x18;
  *param_2 = (int)(short)uVar7;
  param_2[1] = iVar2;
  iVar1 = iVar2 + 0xc;
  if (0x2ffffff < iVar5 * 0x100) {
    iVar1 = iVar2;
  }
  iVar3 = (int)(short)uVar7 - (uint)(iVar5 * 0x100 < 0x3000000);
  iVar2 = (iVar1 * 0x1a + 0x10) * 0x6667;
  iVar1 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  iVar8 = (int)((ulong)((long)iVar3 * -0x51eb851f) >> 0x20);
  param_2[2] = iVar5 >> 0x18;
  param_2[3] = (iVar3 + (iVar5 >> 0x18) + (iVar1 >> 2) + ((iVar8 >> 5) - (iVar8 >> 0x1f)) +
                iVar3 / 400 + ((iVar2 >> 0x12) - (iVar2 >> 0x1f))) % 7;
  param_2[4] = (int)((ulong)uVar7 >> 8) >> 0x18;
  param_2[5] = (int)((ulong)uVar7 >> 0x10) >> 0x18;
  param_2[6] = (int)((ulong)uVar7 >> 0x18) >> 0x18;
  return;
}

