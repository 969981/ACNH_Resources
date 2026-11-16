
void FUN_0280ecd0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ushort *puVar10;
  int iVar11;
  ulong local_70;
  long local_68;
  
  lVar9 = *(long *)PTR_DAT_04bb32e8;
  local_68 = *(long *)(lVar9 + 0x20) / 1000000000 + *(long *)(lVar9 + 8) +
             (((*(long *)(lVar9 + 0x10) + (long)*(int *)(lVar9 + 0x38)) - *(long *)(lVar9 + 8)) *
             1000000000) / 1000000000;
  uVar3 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
  uVar8 = (uint)(uVar3 >> 0x18) & 0xff;
  uVar1 = (uint)uVar3 & 0xffff;
  uVar2 = (uint)uVar3 >> 0x10 & 0xff;
  nn::time::IsValidDate(uVar1,uVar2,uVar8);
  iVar11 = 0;
  do {
    puVar10 = (ushort *)(param_1 + (long)iVar11 * 0x4058);
    uVar4 = nn::time::IsValidDate
                      ((uint)*puVar10,(uint)(byte)puVar10[1],(uint)*(byte *)((long)puVar10 + 3));
    if (((uVar4 & 1) != 0) &&
       (uVar4 = nn::time::IsValidDate
                          ((uint)*puVar10,(uint)(byte)puVar10[1],(uint)*(byte *)((long)puVar10 + 3))
       , (uVar4 & 1) != 0)) {
      local_68 = FUN_0272eca4(puVar10,0);
      uVar4 = nn::time::IsValidDate(uVar1,uVar2,uVar8);
      if ((uVar4 & 1) == 0) {
        local_70 = 0x10107d0;
      }
      else {
        uVar4 = nn::time::IsValidDate(uVar1,uVar2,uVar8);
        uVar5 = nn::time::IsValidDate(uVar1,uVar2,uVar8);
        uVar6 = nn::time::IsValidDate(uVar1,uVar2,uVar8);
        local_70 = uVar3 & 0xff000000;
        if ((uVar6 & 1) == 0) {
          local_70 = 0x1000000;
        }
        uVar6 = uVar3 & 0xff0000;
        if ((uVar5 & 1) == 0) {
          uVar6 = 0x10000;
        }
        uVar5 = uVar3 & 0xffff;
        if ((uVar4 & 1) == 0) {
          uVar5 = 2000;
        }
        local_70 = uVar6 | uVar5 | local_70;
      }
      lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      if (((lVar7 < lVar9) ||
          (lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70), lVar7 == lVar9)) &&
         ((((param_2 & 1) != 0 ||
           (((uVar4 = nn::time::IsValidDate
                                ((uint)*puVar10,(uint)(byte)puVar10[1],
                                 (uint)*(byte *)((long)puVar10 + 3)), (uVar4 & 1) == 0 ||
             (*puVar10 != uVar1)) || ((byte)puVar10[1] != uVar2)))) ||
          (*(byte *)((long)puVar10 + 3) != uVar8)))) {
        puVar10[0x1c] = 0;
        puVar10[0x1d] = 0;
        lVar7 = param_1 + (long)iVar11 * 0x4058;
        lVar9 = 0x200;
        puVar10[0] = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[0x14] = 0;
        puVar10[0x15] = 0;
        puVar10[0x16] = 0;
        puVar10[0x17] = 0;
        puVar10[0x18] = 0;
        puVar10[0x19] = 0;
        puVar10[0x1a] = 0;
        puVar10[0x1b] = 0;
        *(undefined4 *)(lVar7 + 0x58) = 0;
        *(undefined8 *)(lVar7 + 0x40) = 0;
        *(undefined8 *)(lVar7 + 0xb0) = 0;
        *(undefined2 *)(lVar7 + 0xb8) = 0;
        *(undefined8 *)(lVar7 + 0xd0) = 0;
        *(undefined4 *)(lVar7 + 0xd8) = 0;
        *(undefined2 *)(lVar7 + 0x138) = 0;
        *(undefined8 *)(lVar7 + 0xe0) = 0;
        *(undefined4 *)(lVar7 + 0x158) = 0;
        *(undefined8 *)(lVar7 + 0x140) = 0;
        *(undefined2 *)(lVar7 + 0x1b8) = 0;
        *(undefined8 *)(lVar7 + 0x160) = 0;
        *(undefined4 *)(lVar7 + 0x1d8) = 0;
        *(undefined8 *)(lVar7 + 0x1c0) = 0;
        *(undefined8 *)(lVar7 + 0x200) = 0;
        *(undefined8 *)(lVar7 + 0x208) = 0;
        *(undefined8 *)(lVar7 + 0x210) = 0;
        *(undefined8 *)(lVar7 + 0x218) = 0;
        *(undefined8 *)(lVar7 + 0x220) = 0;
        *(undefined8 *)(lVar7 + 0x228) = 0;
        *(undefined8 *)(lVar7 + 0x230) = 0;
        *(undefined2 *)(lVar7 + 0x238) = 0;
        *(undefined8 *)(lVar7 + 0x240) = 0;
        *(undefined8 *)(lVar7 + 0x248) = 0;
        *(undefined8 *)(lVar7 + 0x250) = 0;
        *(undefined4 *)(lVar7 + 600) = 0;
        *(undefined2 *)(lVar7 + 0x2b8) = 0;
        *(undefined8 *)(lVar7 + 0x2b0) = 0;
        *(undefined8 *)(lVar7 + 0x2a8) = 0;
        *(undefined8 *)(lVar7 + 0x2a0) = 0;
        *(undefined8 *)(lVar7 + 0x298) = 0;
        *(undefined8 *)(lVar7 + 0x290) = 0;
        *(undefined8 *)(lVar7 + 0x288) = 0;
        *(undefined8 *)(lVar7 + 0x280) = 0;
        *(undefined8 *)(lVar7 + 0x278) = 0;
        *(undefined8 *)(lVar7 + 0x270) = 0;
        *(undefined8 *)(lVar7 + 0x268) = 0;
        *(undefined8 *)(lVar7 + 0x260) = 0;
        *(undefined4 *)(lVar7 + 0x2d8) = 0;
        *(undefined8 *)(lVar7 + 0x2d0) = 0;
        *(undefined8 *)(lVar7 + 0x2c8) = 0;
        *(undefined8 *)(lVar7 + 0x2c0) = 0;
        *(undefined2 *)(lVar7 + 0x338) = 0;
        *(undefined8 *)(lVar7 + 0x330) = 0;
        *(undefined8 *)(lVar7 + 0x328) = 0;
        *(undefined8 *)(lVar7 + 800) = 0;
        *(undefined8 *)(lVar7 + 0x318) = 0;
        *(undefined8 *)(lVar7 + 0x310) = 0;
        *(undefined8 *)(lVar7 + 0x308) = 0;
        *(undefined8 *)(lVar7 + 0x300) = 0;
        *(undefined8 *)(lVar7 + 0x2f8) = 0;
        *(undefined8 *)(lVar7 + 0x2f0) = 0;
        *(undefined8 *)(lVar7 + 0x2e8) = 0;
        *(undefined8 *)(lVar7 + 0x2e0) = 0;
        *(undefined4 *)(lVar7 + 0x358) = 0;
        *(undefined8 *)(lVar7 + 0x350) = 0;
        *(undefined8 *)(lVar7 + 0x348) = 0;
        *(undefined8 *)(lVar7 + 0x340) = 0;
        *(undefined2 *)(lVar7 + 0x3b8) = 0;
        *(undefined8 *)(lVar7 + 0x3b0) = 0;
        *(undefined8 *)(lVar7 + 0x3a8) = 0;
        *(undefined8 *)(lVar7 + 0x3a0) = 0;
        *(undefined8 *)(lVar7 + 0x398) = 0;
        *(undefined8 *)(lVar7 + 0x390) = 0;
        *(undefined8 *)(lVar7 + 0x388) = 0;
        *(undefined8 *)(lVar7 + 0x380) = 0;
        *(undefined8 *)(lVar7 + 0x378) = 0;
        *(undefined8 *)(lVar7 + 0x370) = 0;
        *(undefined8 *)(lVar7 + 0x368) = 0;
        *(undefined8 *)(lVar7 + 0x360) = 0;
        *(undefined4 *)(lVar7 + 0x3d8) = 0;
        *(undefined8 *)(lVar7 + 0x3d0) = 0;
        *(undefined8 *)(lVar7 + 0x3c8) = 0;
        *(undefined8 *)(lVar7 + 0x3c0) = 0;
        *(undefined2 *)(lVar7 + 0x438) = 0;
        *(undefined8 *)(lVar7 + 0x430) = 0;
        *(undefined8 *)(lVar7 + 0x428) = 0;
        *(undefined8 *)(lVar7 + 0x420) = 0;
        *(undefined8 *)(lVar7 + 0x418) = 0;
        *(undefined8 *)(lVar7 + 0x410) = 0;
        *(undefined8 *)(lVar7 + 0x408) = 0;
        *(undefined8 *)(lVar7 + 0x400) = 0;
        *(undefined8 *)(lVar7 + 0x3f8) = 0;
        *(undefined8 *)(lVar7 + 0x3f0) = 0;
        *(undefined8 *)(lVar7 + 1000) = 0;
        *(undefined8 *)(lVar7 + 0x3e0) = 0;
        *(undefined4 *)(lVar7 + 0x450) = 0xffffffff;
        *(undefined8 *)(lVar7 + 0x448) = 0xffffffffffffffff;
        *(undefined8 *)(lVar7 + 0x440) = 0xffffffffffffffff;
        *(undefined8 *)(lVar7 + 0x48) = 0;
        *(undefined8 *)(lVar7 + 0x50) = 0;
        *(undefined8 *)(lVar7 + 0x60) = 0;
        *(undefined8 *)(lVar7 + 0x68) = 0;
        *(undefined8 *)(lVar7 + 0x70) = 0;
        *(undefined8 *)(lVar7 + 0x78) = 0;
        *(undefined8 *)(lVar7 + 0x80) = 0;
        *(undefined8 *)(lVar7 + 0x88) = 0;
        *(undefined8 *)(lVar7 + 0x90) = 0;
        *(undefined8 *)(lVar7 + 0x98) = 0;
        *(undefined8 *)(lVar7 + 0xa0) = 0;
        *(undefined8 *)(lVar7 + 0xa8) = 0;
        *(undefined8 *)(lVar7 + 0xc0) = 0;
        *(undefined8 *)(lVar7 + 200) = 0;
        *(undefined8 *)(lVar7 + 0x128) = 0;
        *(undefined8 *)(lVar7 + 0x130) = 0;
        *(undefined8 *)(lVar7 + 0x118) = 0;
        *(undefined8 *)(lVar7 + 0x120) = 0;
        *(undefined8 *)(lVar7 + 0x108) = 0;
        *(undefined8 *)(lVar7 + 0x110) = 0;
        *(undefined8 *)(lVar7 + 0xf8) = 0;
        *(undefined8 *)(lVar7 + 0x100) = 0;
        *(undefined8 *)(lVar7 + 0xe8) = 0;
        *(undefined8 *)(lVar7 + 0xf0) = 0;
        *(undefined8 *)(lVar7 + 0x148) = 0;
        *(undefined8 *)(lVar7 + 0x150) = 0;
        *(undefined8 *)(lVar7 + 0x1a8) = 0;
        *(undefined8 *)(lVar7 + 0x1b0) = 0;
        *(undefined8 *)(lVar7 + 0x198) = 0;
        *(undefined8 *)(lVar7 + 0x1a0) = 0;
        *(undefined8 *)(lVar7 + 0x188) = 0;
        *(undefined8 *)(lVar7 + 400) = 0;
        *(undefined8 *)(lVar7 + 0x178) = 0;
        *(undefined8 *)(lVar7 + 0x180) = 0;
        *(undefined8 *)(lVar7 + 0x168) = 0;
        *(undefined8 *)(lVar7 + 0x170) = 0;
        *(undefined8 *)(lVar7 + 0x1c8) = 0;
        *(undefined8 *)(lVar7 + 0x1d0) = 0;
        *(undefined8 *)(lVar7 + 0x1e0) = 0;
        *(undefined8 *)(lVar7 + 0x1e8) = 0;
        *(undefined8 *)(lVar7 + 0x1f0) = 0;
        *(undefined8 *)(lVar7 + 0x1f8) = 0;
        puVar10[0xc] = 0;
        puVar10[0xd] = 0;
        puVar10[0xe] = 0;
        puVar10[0xf] = 0;
        puVar10[0x10] = 0;
        puVar10[0x11] = 0;
        puVar10[0x12] = 0;
        puVar10[0x13] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[8] = 0;
        puVar10[9] = 0;
        puVar10[10] = 0;
        puVar10[0xb] = 0;
        do {
          *(undefined2 *)(lVar7 + 0x454) = 0xffff;
          lVar9 = lVar9 + -4;
          *(undefined8 *)(lVar7 + 0x456) = 0;
          *(undefined8 *)(lVar7 + 0x45e) = 0;
          *(undefined8 *)(lVar7 + 0x466) = 0;
          *(undefined4 *)(lVar7 + 0x46e) = 0;
          *(undefined2 *)(lVar7 + 0x472) = 0xffff;
          *(undefined4 *)(lVar7 + 0x48c) = 0;
          *(undefined8 *)(lVar7 + 0x484) = 0;
          *(undefined2 *)(lVar7 + 0x490) = 0xffff;
          *(undefined2 *)(lVar7 + 0x4ae) = 0xffff;
          *(undefined4 *)(lVar7 + 0x4c8) = 0;
          *(undefined8 *)(lVar7 + 0x4c0) = 0;
          *(undefined8 *)(lVar7 + 0x4b8) = 0;
          *(undefined8 *)(lVar7 + 0x4b0) = 0;
          *(undefined8 *)(lVar7 + 0x474) = 0;
          *(undefined8 *)(lVar7 + 0x47c) = 0;
          *(undefined8 *)(lVar7 + 0x4a2) = 0;
          *(undefined4 *)(lVar7 + 0x4aa) = 0;
          *(undefined8 *)(lVar7 + 0x492) = 0;
          *(undefined8 *)(lVar7 + 0x49a) = 0;
          lVar7 = lVar7 + 0x78;
        } while (lVar9 != 0);
      }
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 != 10);
  return;
}

