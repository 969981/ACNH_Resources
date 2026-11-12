
void FUN_008138dc(long param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  int local_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int local_50;
  byte local_4c [4];
  PosixTime aPStack_48 [8];
  
  if (*(char *)(param_1 + 0x98) != '\0' || *(int *)(param_1 + 0x30) == -1) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  if (lVar11 == 0) {
    pbVar9 = &DAT_0548e140;
LAB_0081396c:
    if (7 < *pbVar9) {
LAB_00813978:
      if (DAT_0537d558 != (long *)0x0) {
        lVar11 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar11 + 0x473);
        pbVar9 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar11 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar9 = (byte *)(lVar11 + 0x471);
          }
        }
        local_4c[0] = *pbVar9;
        if (local_4c[0] < 8) goto LAB_008139f8;
      }
      pbVar9 = &DAT_0548e168;
    }
  }
  else {
    pbVar9 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar11 + 0x158);
    }
    if (7 < *pbVar9) {
      if ((*(int *)(lVar11 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar9 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0081396c;
      }
      goto LAB_00813978;
    }
  }
  local_4c[0] = *pbVar9;
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
LAB_008139f8:
  lVar11 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_4c,1);
  if (lVar11 != 0) {
    lVar13 = lVar11 + 0x194b0;
    lVar10 = lVar13;
    if (*(long *)(lVar11 + 0x194b8) == 0) {
      lVar10 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar10 + 0x2a798) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar10 + 0x2a798), puVar6 == (undefined8 *)0x0)) {
      *(undefined8 *)(param_1 + 0x80) =
           *(undefined8 *)(*(long *)(lVar10 + 0x2a780) + *(long *)(lVar10 + 0x2a778));
    }
    else {
      uVar7 = (**(code **)*puVar6)();
      *(undefined8 *)(param_1 + 0x80) =
           *(undefined8 *)(*(long *)(lVar10 + 0x2a780) + *(long *)(lVar10 + 0x2a778));
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar10 + 0x2a798) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0x2a798) + 8), puVar6 != (undefined8 *)0x0))
      {
        (**(code **)*puVar6)();
      }
    }
    puVar6 = DAT_04ccc690;
    puVar14 = *(undefined8 **)(param_1 + 0x78);
    if (*(char *)(DAT_04ccc690 + 1) == '\0') {
      uVar8 = nn::oe::GetProgramTotalActiveTime();
      *puVar6 = uVar8;
      *(undefined1 *)(puVar6 + 1) = 1;
    }
    else {
      uVar8 = *DAT_04ccc690;
    }
    *puVar14 = uVar8;
    if (*(long *)(lVar11 + 0x194b8) == 0) {
      lVar13 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar13 + 0x2a7d0) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar13 + 0x2a7d0), puVar6 == (undefined8 *)0x0)) {
      *(undefined8 *)(param_1 + 0x90) =
           *(undefined8 *)(*(long *)(lVar13 + 0x2a7b8) + *(long *)(lVar13 + 0x2a7b0));
    }
    else {
      uVar7 = (**(code **)*puVar6)();
      *(undefined8 *)(param_1 + 0x90) =
           *(undefined8 *)(*(long *)(lVar13 + 0x2a7b8) + *(long *)(lVar13 + 0x2a7b0));
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar13 + 0x2a7d0) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar13 + 0x2a7d0) + 8), puVar6 != (undefined8 *)0x0))
      {
        (**(code **)*puVar6)();
      }
    }
    puVar6 = DAT_04ccc690;
    puVar14 = *(undefined8 **)(param_1 + 0x88);
    if (*(char *)(DAT_04ccc690 + 1) == '\0') {
      uVar8 = nn::oe::GetProgramTotalActiveTime();
      *puVar6 = uVar8;
      *(undefined1 *)(puVar6 + 1) = 1;
    }
    else {
      uVar8 = *DAT_04ccc690;
    }
    *puVar14 = uVar8;
  }
  iVar5 = nn::time::StandardNetworkSystemClock::GetCurrentTime(aPStack_48);
  if (iVar5 == 0) {
    uVar8 = nn::time::ToCalendarTimeInUtc(aPStack_48);
    iStack_64 = (int)(char)((ulong)uVar8 >> 0x10);
    local_68 = (int)(short)uVar8;
    iVar5 = iStack_64 + 0xc;
    if (2 < iStack_64) {
      iVar5 = iStack_64;
    }
    iVar4 = local_68 - (uint)(iStack_64 < 3);
    iVar3 = (iVar5 * 0x1a + 0x10) * 0x6667;
    local_60 = (int)uVar8 >> 0x18;
    iVar5 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar5 = iVar4;
    }
    iVar12 = (int)((ulong)((long)iVar4 * -0x51eb851f) >> 0x20);
    iStack_5c = (iVar4 + local_60 + (iVar5 >> 2) + ((iVar12 >> 5) - (iVar12 >> 0x1f)) + iVar4 / 400
                + ((iVar3 >> 0x12) - (iVar3 >> 0x1f))) % 7;
    local_58 = (int)((ulong)uVar8 >> 8) >> 0x18;
    iStack_54 = (int)((ulong)uVar8 >> 0x10) >> 0x18;
    local_50 = (int)((ulong)uVar8 >> 0x18) >> 0x18;
    FUN_00813c8c(param_1,0,&local_68);
  }
  *(undefined1 *)(param_1 + 0x98) = 1;
  return;
}

