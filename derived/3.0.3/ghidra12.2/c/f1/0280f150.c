
void FUN_0280f150(long param_1,ushort *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  ulong local_70;
  undefined8 local_68;
  
  uVar3 = *param_2;
  bVar1 = (byte)param_2[1];
  bVar2 = *(byte *)((long)param_2 + 3);
  nn::time::IsValidDate((uint)uVar3,(uint)bVar1,(uint)bVar2);
  iVar13 = 0;
  do {
    puVar12 = (ushort *)(param_1 + (long)iVar13 * 0x4058);
    uVar5 = nn::time::IsValidDate
                      ((uint)*puVar12,(uint)(byte)puVar12[1],(uint)*(byte *)((long)puVar12 + 3));
    if ((uVar5 & 1) != 0) {
      uVar5 = nn::time::IsValidDate
                        ((uint)*puVar12,(uint)(byte)puVar12[1],(uint)*(byte *)((long)puVar12 + 3));
      if ((uVar5 & 1) != 0) {
        local_68 = FUN_0272eca4(puVar12,0);
        uVar9 = (uint)uVar3;
        uVar10 = (uint)bVar1;
        uVar11 = (uint)bVar2;
        uVar5 = nn::time::IsValidDate((uint)uVar3,(uint)bVar1,(uint)bVar2);
        if ((uVar5 & 1) == 0) {
          local_70 = 0x10107d0;
        }
        else {
          uVar4 = nn::time::IsValidDate(uVar9,uVar10,uVar11);
          uVar5 = nn::time::IsValidDate(uVar9,uVar10,uVar11);
          uVar6 = nn::time::IsValidDate(uVar9,uVar10,uVar11);
          local_70 = (ulong)bVar2 << 0x18;
          if ((uVar6 & 1) == 0) {
            local_70 = 0x1000000;
          }
          uVar6 = (ulong)bVar1 << 0x10;
          if ((uVar5 & 1) == 0) {
            uVar6 = 0x10000;
          }
          uVar5 = (ulong)uVar3;
          if ((uVar4 & 1) == 0) {
            uVar5 = 2000;
          }
          local_70 = uVar6 | uVar5 | local_70;
        }
        lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
        if ((lVar8 < lVar7) ||
           (lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70), lVar8 == lVar7))
        goto LAB_0280f1b0;
      }
      lVar7 = 0x200;
      puVar12[0x1c] = 0;
      puVar12[0x1d] = 0;
      lVar8 = param_1 + (long)iVar13 * 0x4058;
      puVar12[0x14] = 0;
      puVar12[0x15] = 0;
      puVar12[0x16] = 0;
      puVar12[0x17] = 0;
      puVar12[0x18] = 0;
      puVar12[0x19] = 0;
      puVar12[0x1a] = 0;
      puVar12[0x1b] = 0;
      puVar12[0] = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      *(undefined4 *)(lVar8 + 0x58) = 0;
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *(undefined8 *)(lVar8 + 0xb0) = 0;
      *(undefined2 *)(lVar8 + 0xb8) = 0;
      *(undefined8 *)(lVar8 + 0xd0) = 0;
      *(undefined4 *)(lVar8 + 0xd8) = 0;
      *(undefined2 *)(lVar8 + 0x138) = 0;
      *(undefined8 *)(lVar8 + 0xe0) = 0;
      *(undefined4 *)(lVar8 + 0x158) = 0;
      *(undefined8 *)(lVar8 + 0x140) = 0;
      *(undefined2 *)(lVar8 + 0x1b8) = 0;
      *(undefined8 *)(lVar8 + 0x160) = 0;
      *(undefined4 *)(lVar8 + 0x1d8) = 0;
      *(undefined8 *)(lVar8 + 0x1c0) = 0;
      *(undefined8 *)(lVar8 + 0x200) = 0;
      *(undefined8 *)(lVar8 + 0x208) = 0;
      *(undefined8 *)(lVar8 + 0x210) = 0;
      *(undefined8 *)(lVar8 + 0x218) = 0;
      *(undefined8 *)(lVar8 + 0x220) = 0;
      *(undefined8 *)(lVar8 + 0x228) = 0;
      *(undefined8 *)(lVar8 + 0x230) = 0;
      *(undefined2 *)(lVar8 + 0x238) = 0;
      *(undefined8 *)(lVar8 + 0x240) = 0;
      *(undefined8 *)(lVar8 + 0x248) = 0;
      *(undefined8 *)(lVar8 + 0x250) = 0;
      *(undefined4 *)(lVar8 + 600) = 0;
      *(undefined2 *)(lVar8 + 0x2b8) = 0;
      *(undefined8 *)(lVar8 + 0x2b0) = 0;
      *(undefined8 *)(lVar8 + 0x2a8) = 0;
      *(undefined8 *)(lVar8 + 0x2a0) = 0;
      *(undefined8 *)(lVar8 + 0x298) = 0;
      *(undefined8 *)(lVar8 + 0x290) = 0;
      *(undefined8 *)(lVar8 + 0x288) = 0;
      *(undefined8 *)(lVar8 + 0x280) = 0;
      *(undefined8 *)(lVar8 + 0x278) = 0;
      *(undefined8 *)(lVar8 + 0x270) = 0;
      *(undefined8 *)(lVar8 + 0x268) = 0;
      *(undefined8 *)(lVar8 + 0x260) = 0;
      *(undefined4 *)(lVar8 + 0x2d8) = 0;
      *(undefined8 *)(lVar8 + 0x2d0) = 0;
      *(undefined8 *)(lVar8 + 0x2c8) = 0;
      *(undefined8 *)(lVar8 + 0x2c0) = 0;
      *(undefined2 *)(lVar8 + 0x338) = 0;
      *(undefined8 *)(lVar8 + 0x330) = 0;
      *(undefined8 *)(lVar8 + 0x328) = 0;
      *(undefined8 *)(lVar8 + 800) = 0;
      *(undefined8 *)(lVar8 + 0x318) = 0;
      *(undefined8 *)(lVar8 + 0x310) = 0;
      *(undefined8 *)(lVar8 + 0x308) = 0;
      *(undefined8 *)(lVar8 + 0x300) = 0;
      *(undefined8 *)(lVar8 + 0x2f8) = 0;
      *(undefined8 *)(lVar8 + 0x2f0) = 0;
      *(undefined8 *)(lVar8 + 0x2e8) = 0;
      *(undefined8 *)(lVar8 + 0x2e0) = 0;
      *(undefined4 *)(lVar8 + 0x358) = 0;
      *(undefined8 *)(lVar8 + 0x350) = 0;
      *(undefined8 *)(lVar8 + 0x348) = 0;
      *(undefined8 *)(lVar8 + 0x340) = 0;
      *(undefined2 *)(lVar8 + 0x3b8) = 0;
      *(undefined8 *)(lVar8 + 0x3b0) = 0;
      *(undefined8 *)(lVar8 + 0x3a8) = 0;
      *(undefined8 *)(lVar8 + 0x3a0) = 0;
      *(undefined8 *)(lVar8 + 0x398) = 0;
      *(undefined8 *)(lVar8 + 0x390) = 0;
      *(undefined8 *)(lVar8 + 0x388) = 0;
      *(undefined8 *)(lVar8 + 0x380) = 0;
      *(undefined8 *)(lVar8 + 0x378) = 0;
      *(undefined8 *)(lVar8 + 0x370) = 0;
      *(undefined8 *)(lVar8 + 0x368) = 0;
      *(undefined8 *)(lVar8 + 0x360) = 0;
      *(undefined4 *)(lVar8 + 0x3d8) = 0;
      *(undefined8 *)(lVar8 + 0x3d0) = 0;
      *(undefined8 *)(lVar8 + 0x3c8) = 0;
      *(undefined8 *)(lVar8 + 0x3c0) = 0;
      *(undefined2 *)(lVar8 + 0x438) = 0;
      *(undefined8 *)(lVar8 + 0x430) = 0;
      *(undefined8 *)(lVar8 + 0x428) = 0;
      *(undefined8 *)(lVar8 + 0x420) = 0;
      *(undefined8 *)(lVar8 + 0x418) = 0;
      *(undefined8 *)(lVar8 + 0x410) = 0;
      *(undefined8 *)(lVar8 + 0x408) = 0;
      *(undefined8 *)(lVar8 + 0x400) = 0;
      *(undefined8 *)(lVar8 + 0x3f8) = 0;
      *(undefined8 *)(lVar8 + 0x3f0) = 0;
      *(undefined8 *)(lVar8 + 1000) = 0;
      *(undefined8 *)(lVar8 + 0x3e0) = 0;
      *(undefined4 *)(lVar8 + 0x450) = 0xffffffff;
      *(undefined8 *)(lVar8 + 0x448) = 0xffffffffffffffff;
      *(undefined8 *)(lVar8 + 0x440) = 0xffffffffffffffff;
      *(undefined8 *)(lVar8 + 0x48) = 0;
      *(undefined8 *)(lVar8 + 0x50) = 0;
      *(undefined8 *)(lVar8 + 0x60) = 0;
      *(undefined8 *)(lVar8 + 0x68) = 0;
      *(undefined8 *)(lVar8 + 0x70) = 0;
      *(undefined8 *)(lVar8 + 0x78) = 0;
      *(undefined8 *)(lVar8 + 0x80) = 0;
      *(undefined8 *)(lVar8 + 0x88) = 0;
      *(undefined8 *)(lVar8 + 0x90) = 0;
      *(undefined8 *)(lVar8 + 0x98) = 0;
      *(undefined8 *)(lVar8 + 0xa0) = 0;
      *(undefined8 *)(lVar8 + 0xa8) = 0;
      *(undefined8 *)(lVar8 + 0xc0) = 0;
      *(undefined8 *)(lVar8 + 200) = 0;
      *(undefined8 *)(lVar8 + 0x128) = 0;
      *(undefined8 *)(lVar8 + 0x130) = 0;
      *(undefined8 *)(lVar8 + 0x118) = 0;
      *(undefined8 *)(lVar8 + 0x120) = 0;
      *(undefined8 *)(lVar8 + 0x108) = 0;
      *(undefined8 *)(lVar8 + 0x110) = 0;
      *(undefined8 *)(lVar8 + 0xf8) = 0;
      *(undefined8 *)(lVar8 + 0x100) = 0;
      *(undefined8 *)(lVar8 + 0xe8) = 0;
      *(undefined8 *)(lVar8 + 0xf0) = 0;
      *(undefined8 *)(lVar8 + 0x148) = 0;
      *(undefined8 *)(lVar8 + 0x150) = 0;
      *(undefined8 *)(lVar8 + 0x1a8) = 0;
      *(undefined8 *)(lVar8 + 0x1b0) = 0;
      *(undefined8 *)(lVar8 + 0x198) = 0;
      *(undefined8 *)(lVar8 + 0x1a0) = 0;
      *(undefined8 *)(lVar8 + 0x188) = 0;
      *(undefined8 *)(lVar8 + 400) = 0;
      *(undefined8 *)(lVar8 + 0x178) = 0;
      *(undefined8 *)(lVar8 + 0x180) = 0;
      *(undefined8 *)(lVar8 + 0x168) = 0;
      *(undefined8 *)(lVar8 + 0x170) = 0;
      *(undefined8 *)(lVar8 + 0x1c8) = 0;
      *(undefined8 *)(lVar8 + 0x1d0) = 0;
      *(undefined8 *)(lVar8 + 0x1e0) = 0;
      *(undefined8 *)(lVar8 + 0x1e8) = 0;
      *(undefined8 *)(lVar8 + 0x1f0) = 0;
      *(undefined8 *)(lVar8 + 0x1f8) = 0;
      puVar12[0xc] = 0;
      puVar12[0xd] = 0;
      puVar12[0xe] = 0;
      puVar12[0xf] = 0;
      puVar12[0x10] = 0;
      puVar12[0x11] = 0;
      puVar12[0x12] = 0;
      puVar12[0x13] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar12[10] = 0;
      puVar12[0xb] = 0;
      do {
        *(undefined2 *)(lVar8 + 0x454) = 0xffff;
        lVar7 = lVar7 + -4;
        *(undefined8 *)(lVar8 + 0x456) = 0;
        *(undefined8 *)(lVar8 + 0x45e) = 0;
        *(undefined8 *)(lVar8 + 0x466) = 0;
        *(undefined4 *)(lVar8 + 0x46e) = 0;
        *(undefined2 *)(lVar8 + 0x472) = 0xffff;
        *(undefined4 *)(lVar8 + 0x48c) = 0;
        *(undefined8 *)(lVar8 + 0x484) = 0;
        *(undefined2 *)(lVar8 + 0x490) = 0xffff;
        *(undefined2 *)(lVar8 + 0x4ae) = 0xffff;
        *(undefined4 *)(lVar8 + 0x4c8) = 0;
        *(undefined8 *)(lVar8 + 0x4c0) = 0;
        *(undefined8 *)(lVar8 + 0x4b8) = 0;
        *(undefined8 *)(lVar8 + 0x4b0) = 0;
        *(undefined8 *)(lVar8 + 0x474) = 0;
        *(undefined8 *)(lVar8 + 0x47c) = 0;
        *(undefined8 *)(lVar8 + 0x4a2) = 0;
        *(undefined4 *)(lVar8 + 0x4aa) = 0;
        *(undefined8 *)(lVar8 + 0x492) = 0;
        *(undefined8 *)(lVar8 + 0x49a) = 0;
        lVar8 = lVar8 + 0x78;
      } while (lVar7 != 0);
    }
LAB_0280f1b0:
    iVar13 = iVar13 + 1;
    if (iVar13 == 10) {
      return;
    }
  } while( true );
}

