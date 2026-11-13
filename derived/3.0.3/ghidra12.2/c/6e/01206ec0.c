
void FUN_01206ec0(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c8 [8];
  long local_c0;
  undefined1 auStack_b8 [8];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  uint local_88;
  uint uStack_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  undefined8 local_68;
  
  local_68 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if ((char)(local_68 >> 0x20) < '\x05') {
    lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    local_80 = (undefined *)(lVar10 + -0x15180);
    local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
  }
  uVar5 = local_68 >> 0x30;
  local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
  local_68 = CONCAT26((short)uVar5,(undefined6)local_68) & 0xff00ffffffffffff;
  local_78 = 0;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar8 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  local_74 = *(undefined4 *)(puVar13 + 7);
  local_70 = FUN_017baf44();
  local_70 = local_70 & 1;
  local_80 = PTR_DAT_04bb6268 + 0x10;
  lVar10 = FUN_01a4fa00(&local_80);
  local_90 = (undefined *)local_68;
  uVar14 = *(undefined8 *)PTR_DAT_04bb30a0;
  if ((char)(local_68 >> 0x20) < '\x05') {
    local_c0 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
    local_c0 = local_c0 + -0x15180;
    local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c0);
  }
  uVar5 = (ulong)local_90;
  uVar11 = (ulong)local_90 >> 0x10;
  uVar12 = (ulong)local_90 >> 0x18;
  local_90._7_1_ = SUB81(uVar5,7);
  local_90._0_7_ = (uint7)CONCAT24(5,(undefined4)local_90);
  cVar7 = FUN_00a8ae20(uVar14,uVar11,uVar12,6);
  puVar6 = PTR_DAT_04bbbc68;
  uVar1 = *(int *)(lVar10 + 0x24) + 1;
  uVar16 = *(uint *)(lVar10 + 0x14);
  if (uVar1 != uVar16) {
    uVar4 = *(uint *)(lVar10 + 0x10);
    puVar2 = PTR_DAT_04bbbad8 + 0x10;
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    uVar9 = uVar4;
    uVar17 = uVar4;
    do {
      if (((uVar17 | uVar16) & 1) == 0) {
        uStack_98 = 0;
        local_a0 = puVar3;
        local_90 = puVar2;
        local_88 = uVar17;
        uStack_84 = uVar16;
        FUN_01a5033c(&local_a8,&local_80,0,&local_90,&local_a0);
        lVar15 = *(long *)puVar6;
        if (((((lVar15 != 0) && (*(long *)(lVar15 + 0xb0) != 0)) &&
             (*(long *)(*(long *)(lVar15 + 0xb0) + 8) != 0)) &&
            ((*(long *)(lVar15 + 0x488) != 0 && (*(long *)(*(long *)(lVar15 + 0x488) + 8) != 0))))
           && ((*(long *)(lVar15 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar15 + 0x2b0) + 8) != 0))))
        {
          uVar9 = FUN_0277d6c4(&local_a8);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            FUN_0124c030(&local_c0,&local_a8);
            iVar8 = FUN_0123db50(auStack_b8,local_b0);
            if (iVar8 - 0x18U < 7) {
              local_d0 = local_a8;
              uStack_cc = uStack_a4;
              FUN_01201bc0(auStack_c8,&local_d0,(int)cVar7);
              FUN_011f3390(&local_80,0,auStack_c8,&local_a0);
            }
          }
        }
        uVar9 = *(uint *)(lVar10 + 0x10);
      }
      if ((int)uVar17 < *(int *)(lVar10 + 0x20)) {
        uVar17 = uVar17 + 1;
      }
      else {
        uVar16 = uVar16 + 1;
        uVar17 = uVar9;
      }
    } while (uVar4 != uVar17 || uVar1 != uVar16);
  }
  return;
}

