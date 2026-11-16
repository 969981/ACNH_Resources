
void FUN_027692f0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  short *psVar12;
  undefined4 local_128 [2];
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined4 local_c8 [2];
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long lStack_48;
  
  puVar5 = PTR_DAT_04bc3858;
  local_70 = 0;
  local_100 = (undefined *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = PTR_DAT_04bc3858 + 0x10;
  local_b0 = DAT_0417b88c;
  uStack_a8 = 0;
  local_98 = 0;
  local_c8[0] = 2;
  local_c0 = &local_b8;
  local_80 = 0;
  local_78 = 0;
  local_b8 = 0x6622bd46;
  local_e8 = 0;
  local_e0 = 0;
  local_f8 = 0;
  local_f0 = 0;
  FUN_0272d760(param_1 + 8,&local_100,local_c8);
  if ((local_100 != (undefined *)0x0) && (*(int *)((long)local_100 + 0x2c) == 1)) {
    if (*(long *)(param_1 + 0x30) != 0) {
      local_98 = (ulong)local_100;
      local_90 = local_f8;
      local_88 = local_f0;
      local_80 = local_e8;
      local_78 = local_e0;
      local_70 = *(long *)(param_1 + 0x30);
    }
  }
  lVar6 = FUN_027ebd78(&local_a0);
  (**(code **)(DAT_0558d470 + 0x18))(&DAT_0558d470);
  local_100 = (undefined *)((ulong)local_100 & 0xffffff0000000000);
  uVar7 = FUN_03ea9450((undefined8 *)(lVar6 + 8),&local_100,DAT_0558d478);
  if (((uVar7 & 1) == 0) || (local_100._4_1_ == -1)) {
LAB_0276945c:
    lVar6 = 0;
  }
  else {
    uVar7 = (ulong)local_100 & 0xffffffff;
    if (local_100._4_1_ == -0x2f) {
      if ((int)(uint)local_100 < 0) goto LAB_0276945c;
      uVar7 = (ulong)((uint)local_100 & ((int)(uint)local_100 >> 0x1f ^ 0xffffffffU));
    }
    else if (local_100._4_1_ != -0x2d) {
      psVar12 = *(short **)(lVar6 + 8);
      uVar10 = *(ulong *)((long)psVar12 + uVar7);
      uVar7 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      if (*psVar12 != 0x5942) {
        uVar7 = uVar10;
      }
      if ((local_100._4_1_ != -0x2b) && ((local_100._4_1_ != -0x2c || ((long)uVar7 < 0))))
      goto LAB_0276945c;
    }
    if (uVar7 != 0x1b00) goto LAB_0276945c;
    lVar6 = 0;
    if (local_70 != 0) {
      lVar6 = local_78 + local_70;
    }
  }
  local_100 = puVar5 + 0x10;
  local_f8 = 0;
  local_d0 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_68 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_110 = DAT_0417b8a4;
  uStack_108 = 0;
  local_128[0] = 2;
  local_120 = &local_118;
  local_118 = 0x6622bd46;
  local_50 = 0;
  lStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_0272d760(param_1 + 8,&local_68,local_128);
  if ((local_68 != 0) && (*(int *)(local_68 + 0x2c) == 1)) {
    if (*(long *)(param_1 + 0x30) != 0) {
      local_f8 = local_68;
      local_f0 = local_60;
      local_e8 = uStack_58;
      local_e0 = local_50;
      local_d8 = lStack_48;
      local_d0 = *(long *)(param_1 + 0x30);
    }
  }
  lVar8 = FUN_027ebd78(&local_100);
  (**(code **)(DAT_0558d470 + 0x18))(&DAT_0558d470);
  local_68 = local_68 & 0xffffff0000000000;
  uVar7 = FUN_03ea9450((undefined8 *)(lVar8 + 8),&local_68,DAT_0558d478);
  if (((uVar7 & 1) != 0) && (local_68._4_1_ != -1)) {
    uVar7 = local_68 & 0xffffffff;
    if (local_68._4_1_ == -0x2f) {
      if ((int)(uint)local_68 < 0) goto LAB_0276959c;
      uVar7 = (ulong)((uint)local_68 & ((int)(uint)local_68 >> 0x1f ^ 0xffffffffU));
    }
    else if (local_68._4_1_ != -0x2d) {
      psVar12 = *(short **)(lVar8 + 8);
      uVar10 = *(ulong *)((long)psVar12 + uVar7);
      uVar7 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      if (*psVar12 != 0x5942) {
        uVar7 = uVar10;
      }
      if ((local_68._4_1_ != -0x2b) && ((local_68._4_1_ != -0x2c || ((long)uVar7 < 0))))
      goto LAB_0276959c;
    }
    if (uVar7 == 0x1b00) {
      lVar8 = 0;
      if (local_d0 != 0) {
        lVar8 = local_d8 + local_d0;
      }
      goto LAB_027695a0;
    }
  }
LAB_0276959c:
  lVar8 = 0;
LAB_027695a0:
  uVar11 = 0xa7ff;
  do {
    uVar7 = (ulong)(uVar11 >> 5);
    uVar9 = *(uint *)(lVar6 + uVar7 * 4);
    uVar1 = uVar11 + (DAT_05581570 - DAT_05581538);
    uVar2 = uVar11 + ((uVar11 >> 5) / 7) * 0x40 + DAT_0558153c * -0x120 + DAT_05581574 * 0x120 +
            (DAT_05581570 - DAT_05581538);
    uVar3 = 1 << (ulong)(uVar11 & 0x1f);
    if ((uVar9 & uVar3) != 0) {
      if (uVar2 >> 0xb < 0x1b) {
        lVar4 = (ulong)(uVar2 >> 5) * 4;
        *(uint *)(lVar6 + lVar4) = *(uint *)(lVar6 + lVar4) | 1 << (ulong)(uVar1 & 0x1f);
        uVar9 = *(uint *)(lVar6 + uVar7 * 4);
      }
      *(uint *)(lVar6 + uVar7 * 4) = uVar9 & (uVar3 ^ 0xffffffff);
    }
    uVar9 = *(uint *)(lVar8 + uVar7 * 4);
    if ((uVar9 & uVar3) != 0) {
      if (uVar2 >> 0xb < 0x1b) {
        lVar4 = (ulong)(uVar2 >> 5) * 4;
        *(uint *)(lVar8 + lVar4) = *(uint *)(lVar8 + lVar4) | 1 << (ulong)(uVar1 & 0x1f);
        uVar9 = *(uint *)(lVar8 + uVar7 * 4);
      }
      *(uint *)(lVar8 + uVar7 * 4) = uVar9 & (uVar3 ^ 0xffffffff);
    }
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0xffffffff);
  return;
}

