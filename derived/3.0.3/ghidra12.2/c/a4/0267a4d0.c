
void FUN_0267a4d0(uint *param_1,byte *param_2)

{
  short sVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  short *psVar9;
  uint uVar10;
  short *psVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  byte local_1ac [4];
  byte local_1a8 [4];
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  
  _local_1a8 = 0xfffe;
  FUN_0277d4ac(local_1a8);
  local_1a0 = 0xfffe;
  FUN_0277d4ac(&local_1a0);
  local_198 = 0xfffe;
  FUN_0277d4ac(&local_198);
  local_190 = 0xfffe;
  FUN_0277d4ac(&local_190);
  local_188 = 0xfffe;
  FUN_0277d4ac(&local_188);
  local_180 = 0xfffe;
  FUN_0277d4ac(&local_180);
  local_178 = 0xfffe;
  FUN_0277d4ac(&local_178);
  local_170 = 0xfffe;
  FUN_0277d4ac(&local_170);
  local_168 = 0xfffe;
  FUN_0277d4ac(&local_168);
  local_160 = 0xfffe;
  FUN_0277d4ac(&local_160);
  local_158 = 0xfffe;
  FUN_0277d4ac(&local_158);
  local_150 = 0xfffe;
  FUN_0277d4ac(&local_150);
  local_148 = 0xfffe;
  FUN_0277d4ac(&local_148);
  local_140 = 0xfffe;
  FUN_0277d4ac(&local_140);
  local_138 = 0xfffe;
  FUN_0277d4ac(&local_138);
  local_130 = 0xfffe;
  FUN_0277d4ac(&local_130);
  local_128 = 0xfffe;
  FUN_0277d4ac(&local_128);
  local_120 = 0xfffe;
  FUN_0277d4ac(&local_120);
  local_118 = 0xfffe;
  FUN_0277d4ac(&local_118);
  local_110 = 0xfffe;
  FUN_0277d4ac(&local_110);
  local_108 = 0xfffe;
  FUN_0277d4ac(&local_108);
  local_100 = 0xfffe;
  FUN_0277d4ac(&local_100);
  local_f8 = 0xfffe;
  FUN_0277d4ac(&local_f8);
  local_f0 = 0xfffe;
  FUN_0277d4ac(&local_f0);
  local_e8 = 0xfffe;
  FUN_0277d4ac(&local_e8);
  local_e0 = 0xfffe;
  FUN_0277d4ac(&local_e0);
  local_d8 = 0xfffe;
  FUN_0277d4ac(&local_d8);
  local_d0 = 0xfffe;
  FUN_0277d4ac(&local_d0);
  local_c8 = 0xfffe;
  FUN_0277d4ac(&local_c8);
  local_c0 = 0xfffe;
  FUN_0277d4ac(&local_c0);
  local_b8 = 0xfffe;
  FUN_0277d4ac(&local_b8);
  local_b0 = 0xfffe;
  FUN_0277d4ac(&local_b0);
  local_a8 = 0xfffe;
  FUN_0277d4ac(&local_a8);
  local_a0 = 0xfffe;
  FUN_0277d4ac(&local_a0);
  local_98 = 0xfffe;
  FUN_0277d4ac(&local_98);
  local_90 = 0xfffe;
  FUN_0277d4ac(&local_90);
  local_88 = 0xfffe;
  FUN_0277d4ac(&local_88);
  local_80 = 0xfffe;
  FUN_0277d4ac(&local_80);
  local_78 = 0xfffe;
  FUN_0277d4ac(&local_78);
  local_70[0] = 0xfffe;
  FUN_0277d4ac(local_70);
  local_1ac[0] = *param_2;
  if (7 < local_1ac[0]) {
    local_1ac[0] = 0xff;
  }
  lVar5 = FUN_025830c0(DAT_055021a0,local_1ac,1);
  if (lVar5 == 0) {
LAB_0267a908:
    uVar14 = 0;
  }
  else {
    lVar13 = lVar5 + 0x194b0;
    if (*(long *)(lVar5 + 0x194b8) == 0) {
      lVar13 = *(long *)(DAT_05574040 + 0x20);
      plVar7 = *(long **)(lVar13 + 0x98);
      if (plVar7 != (long *)0x0) goto LAB_0267a74c;
LAB_0267a768:
      uVar12 = 0;
    }
    else {
      plVar7 = *(long **)(lVar5 + 0x19548);
      if (plVar7 == (long *)0x0) goto LAB_0267a768;
LAB_0267a74c:
      if ((undefined8 *)*plVar7 == (undefined8 *)0x0) goto LAB_0267a768;
      uVar12 = (*(code *)**(undefined8 **)*plVar7)();
      uVar12 = uVar12 & 0xffffffff;
    }
    uVar3 = FUN_027f9664(param_2);
    if ((int)uVar3 < 1) {
      if ((((uVar12 & 1) != 0) && (*(long *)(lVar13 + 0x98) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar13 + 0x98) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
      goto LAB_0267a908;
    }
    uVar15 = 0;
    uVar14 = (ulong)uVar3;
    lVar5 = 0;
    do {
      lVar2 = DAT_053274a0;
      lVar8 = *(long *)(lVar13 + 0x80) + *(long *)(lVar13 + 0x78);
      uVar4 = *(uint *)(lVar8 + 0x158);
      if (0x13 < uVar4) {
        uVar4 = 0x14;
      }
      psVar9 = &DAT_05586008;
      if ((uint)uVar15 < uVar4) {
        psVar11 = (short *)(lVar8 + lVar5 + 0xb8);
        sVar1 = *psVar11;
LAB_0267a83c:
        psVar9 = psVar11;
        if (sVar1 != -2) {
          uVar4 = FUN_0277d6c4(psVar11);
          if (DAT_053274a0 == 0) {
            psVar9 = &DAT_05586008;
          }
          else {
            lVar8 = *(long *)(lVar2 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            psVar9 = &DAT_05586008;
            if (uVar4 < *(uint *)(lVar8 + 0x1d8)) {
              if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0) {
                psVar9 = psVar11;
              }
            }
          }
        }
      }
      else {
        uVar10 = (uint)(uVar15 + -uVar4);
        if (-1 < (int)uVar10) {
          uVar16 = *(uint *)(lVar8 + 0xa0);
          if (0x13 < uVar16) {
            uVar16 = 0x14;
          }
          if (uVar10 < uVar16) {
            psVar11 = (short *)(lVar8 + (uVar15 + -uVar4 & 0xffffffff) * 8);
            sVar1 = *psVar11;
            goto LAB_0267a83c;
          }
        }
      }
      uVar15 = uVar15 + 1;
      *(short *)(local_1ac + lVar5 + 4) = *psVar9;
      local_1ac[lVar5 + 6] = *(byte *)(psVar9 + 1);
      local_1ac[lVar5 + 7] = *(byte *)((long)psVar9 + 3);
      *(undefined4 *)(local_1ac + lVar5 + 8) = *(undefined4 *)(psVar9 + 2);
      lVar5 = lVar5 + 8;
    } while (uVar14 != uVar15);
    if ((((uVar12 & 1) != 0) && (*(long *)(lVar13 + 0x98) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar13 + 0x98) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    if (0x27 < uVar3) goto LAB_0267a940;
  }
  lVar5 = uVar14 << 3;
  do {
    lVar13 = lVar5 + 8;
    *(undefined2 *)(local_1ac + lVar5 + 4) = DAT_05586008;
    local_1ac[lVar5 + 6] = DAT_0558600a;
    local_1ac[lVar5 + 7] = DAT_0558600b;
    *(undefined4 *)(local_1ac + lVar5 + 8) = DAT_0558600c;
    lVar5 = lVar13;
  } while (lVar13 != 0x140);
LAB_0267a940:
  uVar12 = 0;
  uVar3 = 0;
  do {
    lVar5 = uVar12 + 4;
    uVar12 = uVar12 + 4;
    uVar3 = (*(int *)(local_1ac + lVar5) * 0x16a88000 |
            (uint)(*(int *)(local_1ac + lVar5) * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar3;
    uVar3 = (uVar3 >> 0x13 | uVar3 << 0xd) * 5 + 0xe6546b64;
  } while (uVar12 < 0x13d);
  uVar3 = (uVar3 ^ uVar3 >> 0x10 ^ 0x140) * -0x7a143595;
  uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
  *param_1 = uVar3 ^ uVar3 >> 0x10;
  return;
}

