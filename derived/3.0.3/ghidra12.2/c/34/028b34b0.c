
void FUN_028b34b0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  int *piVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  uint local_68c;
  float local_688 [384];
  undefined8 local_88;
  long local_80 [2];
  
  local_68c = 0;
  uVar5 = FUN_0291e130(local_688,&local_68c,0);
  uVar3 = local_68c;
  puVar2 = PTR_DAT_04bb43c0;
  if (((uVar5 & 1) != 0) && (local_68c != 0)) {
    lVar11 = 0;
    uVar5 = 0;
    uVar12 = 0;
    iVar13 = 0;
    do {
      piVar8 = (int *)(DAT_04da6480 + 0x4068);
      if (*(short *)piVar8 == 0) {
        local_88 = *(undefined8 *)(DAT_04da6480 + 0x4060);
        if ((char)(local_88 >> 0x20) < '\x05') {
          local_80[0] = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
          local_80[0] = local_80[0] + -0x15180;
          local_88 = nn::time::ToCalendarTimeInUtc((PosixTime *)local_80);
        }
        uVar6 = local_88 >> 0x30;
        local_88._0_6_ = CONCAT24(5,(int)local_88);
        local_88 = CONCAT26((short)uVar6,(undefined6)local_88) & 0xff00ffffffffffff;
        piVar8 = (int *)&local_88;
      }
      iVar1 = *piVar8;
      uVar4 = nn::time::GetDayOfWeek((int)(short)iVar1,(iVar1 << 8) >> 0x18,iVar1 >> 0x18);
      lVar14 = *(long *)puVar2;
      lVar9 = param_1 + (ulong)uVar4 * 0x200;
      if (6 < uVar4) {
        lVar9 = param_1;
      }
      local_80[0] = *(long *)(lVar9 + lVar11);
      uVar4 = FUN_0277d6c4(local_80);
      if (*(long *)puVar2 != 0) {
        lVar9 = *(long *)(lVar14 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
           (uVar6 = FUN_028b3790(param_1,local_80), (uVar6 & 1) != 0)) {
          if (DAT_05574040 == 0) {
LAB_028b3660:
            lVar9 = 0;
          }
          else {
            puVar10 = *(undefined8 **)(DAT_05574040 + 0x10);
            if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
              lVar14 = (**(code **)(*(long *)*puVar10 + 0x38))();
              lVar9 = 0;
              if (lVar14 != 0) {
                lVar9 = lVar14 + 0x70;
              }
            }
            else {
              if (puVar10 == (undefined8 *)0x0) goto LAB_028b3660;
              lVar9 = 0;
              if ((long *)puVar10[0x26] != (long *)0x0) {
                lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
              }
            }
          }
          if (*(long **)(lVar9 + 0x1a0b70) == (long *)0x0) {
            uVar6 = 0;
          }
          else {
            puVar10 = (undefined8 *)**(long **)(lVar9 + 0x1a0b70);
            uVar6 = 0;
            if (puVar10 != (undefined8 *)0x0) {
              uVar6 = (**(code **)*puVar10)();
            }
          }
          uVar4 = *(uint *)(*(long *)(lVar9 + 0x1a0b58) + *(long *)(lVar9 + 0x1a0b50));
          if (3 < uVar4) {
            uVar4 = 0;
          }
          local_88 = CONCAT44(local_88._4_4_,uVar4);
          if ((((uVar6 & 1) != 0) && (*(long *)(lVar9 + 0x1a0b70) != 0)) &&
             (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x1a0b70) + 8),
             puVar10 != (undefined8 *)0x0)) {
            (**(code **)*puVar10)();
          }
          if (uVar4 < 2) {
            bVar7 = true;
          }
          else if ((uVar4 == 2) || (uVar4 == 3)) {
            bVar7 = 1 < (int)uVar12;
          }
          else {
            bVar7 = false;
          }
          FUN_028b2ad4(param_1,local_80,(int)((local_688[(long)iVar13 * 3] + 2.5) / 5.0),
                       (int)((local_688[(long)iVar13 * 3 + 2] + 2.5) / 5.0),bVar7);
          uVar12 = uVar12 + 1;
        }
      }
      iVar13 = iVar13 + 1;
      if (iVar13 == 0x80) {
        return;
      }
      if (0x3e < uVar5) {
        return;
      }
      uVar5 = uVar5 + 1;
      lVar11 = lVar11 + 8;
    } while (uVar12 < uVar3);
  }
  return;
}

