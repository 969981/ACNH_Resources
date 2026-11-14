
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0169a510(long param_1,uint param_2,ulong param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  uint *puVar3;
  uint *puVar4;
  ulong *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  char *pcVar23;
  uint uVar24;
  undefined8 uVar25;
  uint uVar26;
  undefined1 uVar27;
  char cVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  undefined **local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  ulong local_1ec;
  undefined2 local_1e4;
  undefined2 uStack_1e2;
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined2 local_1c4;
  undefined2 uStack_1c2;
  undefined4 uStack_1c0;
  undefined2 local_1bc;
  undefined1 local_1ba;
  undefined1 local_1b9;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined1 local_1b2;
  undefined1 local_1b1;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined1 local_1aa;
  undefined1 local_1a9;
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined1 local_1a2;
  undefined1 local_1a1;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined1 local_19a;
  undefined1 local_199;
  undefined4 local_198;
  undefined2 local_194;
  undefined1 local_192;
  undefined1 local_191;
  undefined4 local_190;
  undefined2 local_18c;
  undefined1 local_18a;
  undefined1 local_189;
  undefined4 local_188;
  undefined2 local_184;
  undefined1 local_182;
  undefined1 local_181;
  undefined4 local_180;
  undefined2 local_17c;
  undefined1 local_17a;
  undefined1 local_179;
  undefined4 local_178;
  undefined2 local_174;
  undefined1 local_172;
  undefined1 local_171;
  undefined4 local_170;
  undefined2 local_16c;
  undefined1 local_16a;
  undefined1 local_169;
  undefined4 local_168;
  undefined2 local_164;
  undefined1 local_162;
  undefined1 local_161;
  undefined4 local_160;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined1 local_159;
  undefined4 local_158;
  undefined2 local_154;
  undefined1 local_152;
  undefined1 local_151;
  undefined4 local_150;
  undefined2 local_14c;
  undefined1 local_14a;
  undefined1 local_149;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 local_13c;
  undefined8 local_134;
  undefined8 local_12c;
  undefined4 local_124;
  undefined2 local_120;
  undefined1 local_11e;
  undefined1 local_11d;
  undefined4 local_11c;
  undefined2 local_118;
  undefined1 local_116;
  undefined1 local_115;
  undefined4 local_114;
  undefined2 local_110;
  undefined1 local_10e;
  undefined1 local_10d;
  undefined4 local_10c;
  undefined2 local_108;
  undefined1 local_106;
  undefined1 local_105;
  undefined4 local_104;
  undefined8 local_100;
  undefined6 uStack_f8;
  undefined2 local_f2;
  undefined6 uStack_f0;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined4 local_e4;
  undefined2 local_e0;
  undefined1 local_de;
  undefined1 local_dd;
  undefined4 local_dc;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined8 local_94;
  int local_8c;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined8 local_78;
  uint local_6c [3];
  
  lVar19 = param_1 + 0x10 + (ulong)param_2 * 0x160;
  if (7 < param_2) {
    lVar19 = param_1 + 0x10;
  }
  *(long *)(param_1 + 0xb18) = lVar19;
  puVar10 = PTR_DAT_04bb46b0;
  if ((param_3 & 1) == 0) {
    return;
  }
  local_218 = (undefined **)CONCAT44(local_218._4_4_,param_2);
  lVar19 = *(long *)PTR_DAT_04bb46b0;
  local_84 = param_2;
  if (lVar19 != 0) {
    puVar20 = *(undefined8 **)(lVar19 + 0x10);
    if ((*(byte *)(lVar19 + 0x453) & 1) == 0) {
      lVar19 = (**(code **)(*(long *)*puVar20 + 0x38))();
      if (lVar19 != 0) {
        lVar19 = lVar19 + 0x70;
        goto LAB_0169a5b0;
      }
    }
    else if (((puVar20 != (undefined8 *)0x0) && ((long *)puVar20[0x26] != (long *)0x0)) &&
            (lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))(), lVar19 != 0)) {
LAB_0169a5b0:
      if ((uint)local_218 < 8) {
        lVar15 = lVar19 + 0x119228 + ((ulong)local_218 & 0xffffffff) * 0xfa08;
        if (7 < (uint)local_218) {
          lVar15 = lVar19 + 0x119228;
        }
        if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
           (puVar20 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar20 == (undefined8 *)0x0)) {
          cVar28 = *(char *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x289f8);
        }
        else {
          uVar14 = (**(code **)*puVar20)();
          cVar28 = *(char *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x289f8);
          if ((((uVar14 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
             (puVar20 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar20 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar20)();
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(int)cVar28);
        if (cVar28 != -1) {
          local_218 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
          local_210 = "happy_home";
          FUN_026012f4(&local_b0,&local_218,&local_78);
          local_218 = (undefined **)((ulong)local_218 & 0xffffffff00000000);
          puVar1 = PTR_DAT_04bc3308 + 0x10;
          local_b0 = puVar1;
          FUN_016a1790(&local_210);
          lVar19 = *(long *)(param_1 + 0xb18);
          local_218 = (undefined **)CONCAT44(local_218._4_4_,local_84);
          local_208 = *(undefined8 *)(lVar19 + 8);
          local_200 = *(undefined4 *)(lVar19 + 0x10);
          local_1fc = *(undefined4 *)(lVar19 + 0x14);
          local_1f8 = *(undefined4 *)(lVar19 + 0x18);
          local_1f4 = *(undefined4 *)(lVar19 + 0x1c);
          local_1f0 = *(undefined4 *)(lVar19 + 0x20);
          uVar25 = *(undefined8 *)(lVar19 + 0x2c);
          local_1ec = *(undefined8 *)(lVar19 + 0x24);
          local_1e4 = (undefined2)uVar25;
          uStack_1e2 = (undefined2)((ulong)uVar25 >> 0x10);
          uStack_1e0 = (undefined4)((ulong)uVar25 >> 0x20);
          uVar25 = *(undefined8 *)(lVar19 + 0x4c);
          local_1c4 = (undefined2)uVar25;
          uStack_1c2 = (undefined2)((ulong)uVar25 >> 0x10);
          uStack_1c0 = (undefined4)((ulong)uVar25 >> 0x20);
          local_1dc = (undefined4)*(undefined8 *)(lVar19 + 0x34);
          uStack_1d8 = (undefined4)((ulong)*(undefined8 *)(lVar19 + 0x34) >> 0x20);
          local_1d4 = (undefined4)*(undefined8 *)(lVar19 + 0x3c);
          uStack_1d0 = (undefined4)((ulong)*(undefined8 *)(lVar19 + 0x3c) >> 0x20);
          local_1cc = (undefined4)*(undefined8 *)(lVar19 + 0x44);
          uStack_1c8 = (undefined4)((ulong)*(undefined8 *)(lVar19 + 0x44) >> 0x20);
          local_1bc = *(undefined2 *)(lVar19 + 0x54);
          local_1ba = *(undefined1 *)(lVar19 + 0x56);
          local_1b9 = *(undefined1 *)(lVar19 + 0x57);
          local_1b8 = *(undefined4 *)(lVar19 + 0x58);
          local_1b4 = *(undefined2 *)(lVar19 + 0x5c);
          local_1b2 = *(undefined1 *)(lVar19 + 0x5e);
          local_1b1 = *(undefined1 *)(lVar19 + 0x5f);
          local_1b0 = *(undefined4 *)(lVar19 + 0x60);
          local_1ac = *(undefined2 *)(lVar19 + 100);
          local_1aa = *(undefined1 *)(lVar19 + 0x66);
          local_1a9 = *(undefined1 *)(lVar19 + 0x67);
          local_1a8 = *(undefined4 *)(lVar19 + 0x68);
          local_1a4 = *(undefined2 *)(lVar19 + 0x6c);
          local_1a2 = *(undefined1 *)(lVar19 + 0x6e);
          local_1a1 = *(undefined1 *)(lVar19 + 0x6f);
          local_1a0 = *(undefined4 *)(lVar19 + 0x70);
          local_19c = *(undefined2 *)(lVar19 + 0x74);
          local_19a = *(undefined1 *)(lVar19 + 0x76);
          local_199 = *(undefined1 *)(lVar19 + 0x77);
          local_198 = *(undefined4 *)(lVar19 + 0x78);
          local_194 = *(undefined2 *)(lVar19 + 0x7c);
          local_192 = *(undefined1 *)(lVar19 + 0x7e);
          local_191 = *(undefined1 *)(lVar19 + 0x7f);
          local_190 = *(undefined4 *)(lVar19 + 0x80);
          local_18c = *(undefined2 *)(lVar19 + 0x84);
          local_18a = *(undefined1 *)(lVar19 + 0x86);
          local_189 = *(undefined1 *)(lVar19 + 0x87);
          local_188 = *(undefined4 *)(lVar19 + 0x88);
          local_184 = *(undefined2 *)(lVar19 + 0x8c);
          local_182 = *(undefined1 *)(lVar19 + 0x8e);
          local_181 = *(undefined1 *)(lVar19 + 0x8f);
          local_180 = *(undefined4 *)(lVar19 + 0x90);
          local_17c = *(undefined2 *)(lVar19 + 0x94);
          local_17a = *(undefined1 *)(lVar19 + 0x96);
          local_179 = *(undefined1 *)(lVar19 + 0x97);
          local_178 = *(undefined4 *)(lVar19 + 0x98);
          local_174 = *(undefined2 *)(lVar19 + 0x9c);
          local_172 = *(undefined1 *)(lVar19 + 0x9e);
          local_171 = *(undefined1 *)(lVar19 + 0x9f);
          local_170 = *(undefined4 *)(lVar19 + 0xa0);
          local_16c = *(undefined2 *)(lVar19 + 0xa4);
          local_16a = *(undefined1 *)(lVar19 + 0xa6);
          local_169 = *(undefined1 *)(lVar19 + 0xa7);
          local_168 = *(undefined4 *)(lVar19 + 0xa8);
          local_164 = *(undefined2 *)(lVar19 + 0xac);
          local_162 = *(undefined1 *)(lVar19 + 0xae);
          local_161 = *(undefined1 *)(lVar19 + 0xaf);
          local_160 = *(undefined4 *)(lVar19 + 0xb0);
          local_15c = *(undefined2 *)(lVar19 + 0xb4);
          local_15a = *(undefined1 *)(lVar19 + 0xb6);
          local_159 = *(undefined1 *)(lVar19 + 0xb7);
          local_158 = *(undefined4 *)(lVar19 + 0xb8);
          local_154 = *(undefined2 *)(lVar19 + 0xbc);
          local_152 = *(undefined1 *)(lVar19 + 0xbe);
          local_151 = *(undefined1 *)(lVar19 + 0xbf);
          local_150 = *(undefined4 *)(lVar19 + 0xc0);
          local_14c = *(undefined2 *)(lVar19 + 0xc4);
          local_14a = *(undefined1 *)(lVar19 + 0xc6);
          local_149 = *(undefined1 *)(lVar19 + 199);
          local_148 = *(undefined4 *)(lVar19 + 200);
          local_144 = *(undefined8 *)(lVar19 + 0xcc);
          local_12c = *(undefined8 *)(lVar19 + 0xe4);
          local_124 = *(undefined4 *)(lVar19 + 0xec);
          local_13c = *(undefined8 *)(lVar19 + 0xd4);
          local_134 = *(undefined8 *)(lVar19 + 0xdc);
          local_120 = *(undefined2 *)(lVar19 + 0xf0);
          local_11e = *(undefined1 *)(lVar19 + 0xf2);
          local_11d = *(undefined1 *)(lVar19 + 0xf3);
          local_11c = *(undefined4 *)(lVar19 + 0xf4);
          local_118 = *(undefined2 *)(lVar19 + 0xf8);
          local_116 = *(undefined1 *)(lVar19 + 0xfa);
          local_115 = *(undefined1 *)(lVar19 + 0xfb);
          local_114 = *(undefined4 *)(lVar19 + 0xfc);
          local_110 = *(undefined2 *)(lVar19 + 0x100);
          local_10e = *(undefined1 *)(lVar19 + 0x102);
          local_10d = *(undefined1 *)(lVar19 + 0x103);
          local_10c = *(undefined4 *)(lVar19 + 0x104);
          local_108 = *(undefined2 *)(lVar19 + 0x108);
          local_106 = *(undefined1 *)(lVar19 + 0x10a);
          local_105 = *(undefined1 *)(lVar19 + 0x10b);
          local_104 = *(undefined4 *)(lVar19 + 0x10c);
          local_100 = *(undefined8 *)(lVar19 + 0x110);
          uStack_f0 = (undefined6)((ulong)*(undefined8 *)(lVar19 + 0x11e) >> 0x10);
          uStack_f8 = (undefined6)*(undefined8 *)(lVar19 + 0x118);
          local_f2 = (undefined2)((ulong)*(undefined8 *)(lVar19 + 0x118) >> 0x30);
          local_e8 = *(undefined2 *)(lVar19 + 0x128);
          local_e6 = *(undefined1 *)(lVar19 + 0x12a);
          local_e5 = *(undefined1 *)(lVar19 + 299);
          local_e4 = *(undefined4 *)(lVar19 + 300);
          local_e0 = *(undefined2 *)(lVar19 + 0x130);
          local_de = *(undefined1 *)(lVar19 + 0x132);
          local_dd = *(undefined1 *)(lVar19 + 0x133);
          local_dc = *(undefined4 *)(lVar19 + 0x134);
          local_d8 = *(undefined2 *)(lVar19 + 0x138);
          local_d6 = *(undefined1 *)(lVar19 + 0x13a);
          local_d5 = *(undefined1 *)(lVar19 + 0x13b);
          local_d4 = *(undefined4 *)(lVar19 + 0x13c);
          local_d0 = *(undefined4 *)(lVar19 + 0x140);
          local_cc = *(undefined4 *)(lVar19 + 0x144);
          local_c8 = *(undefined4 *)(lVar19 + 0x148);
          local_c4 = *(undefined8 *)(lVar19 + 0x14c);
          uStack_bc = *(undefined8 *)(lVar19 + 0x154);
          FUN_025b0b8c(&local_b0,&local_218);
          local_b0 = puVar1;
          iVar12 = FUN_025b10d0(&local_b0);
          if (iVar12 == -1) {
LAB_0169aa78:
            if (local_8c == 0) {
              local_8c = 1;
            }
          }
          else {
            iVar12 = (**(code **)(local_b0 + 0x20))(&local_b0);
            local_218 = (undefined **)CONCAT44(local_218._4_4_,iVar12);
            if (0xc < iVar12) goto LAB_0169aa78;
          }
          FUN_02601530(&local_b0);
          param_2 = local_84;
        }
      }
    }
  }
  lVar19 = *(long *)puVar10;
  local_218 = (undefined **)CONCAT44(local_218._4_4_,param_2);
  if (lVar19 == 0) {
LAB_0169aaf0:
    iVar12 = -1;
  }
  else {
    puVar20 = *(undefined8 **)(lVar19 + 0x10);
    if ((*(byte *)(lVar19 + 0x453) & 1) != 0) {
      if (((puVar20 != (undefined8 *)0x0) && ((long *)puVar20[0x26] != (long *)0x0)) &&
         (lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))(), lVar19 != 0)) goto LAB_0169aae4;
      goto LAB_0169aaf0;
    }
    lVar19 = (**(code **)(*(long *)*puVar20 + 0x38))();
    if (lVar19 == 0) goto LAB_0169aaf0;
    lVar19 = lVar19 + 0x70;
LAB_0169aae4:
    if (7 < (uint)local_218) goto LAB_0169aaf0;
    lVar15 = lVar19 + 0x119228 + ((ulong)local_218 & 0xffffffff) * 0xfa08;
    if (7 < (uint)local_218) {
      lVar15 = lVar19 + 0x119228;
    }
    if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
       (puVar20 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar20 == (undefined8 *)0x0)) {
      iVar12 = (int)*(char *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x289f8);
    }
    else {
      uVar14 = (**(code **)*puVar20)();
      iVar12 = (int)*(char *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x289f8);
      if ((((uVar14 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
         (puVar20 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar20 != (undefined8 *)0x0)) {
        (**(code **)*puVar20)();
      }
    }
  }
  if (*(long *)puVar10 == 0) {
    lVar19 = 0;
    lVar15 = _DAT_00000098;
    if (_DAT_00000098 != 0) goto LAB_0169ab28;
LAB_0169ab60:
    uVar14 = 0;
  }
  else {
    lVar15 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar10 + 0x10) + 0x30))();
    lVar19 = 0;
    if (lVar15 != 0) {
      lVar19 = lVar15 + 0x276cb0;
    }
    lVar15 = *(long *)(lVar19 + 0x98);
    if (*(long *)(lVar19 + 0x98) == 0) goto LAB_0169ab60;
LAB_0169ab28:
    if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
      uVar14 = 0;
      plVar16 = *(long **)(lVar15 + 0x20);
joined_r0x0169ab70:
      if (plVar16 != (long *)0x0) {
        local_218 = *(undefined ***)(lVar19 + 0x78);
        local_210 = *(char **)(lVar19 + 0x80);
        local_208 = 0x53c;
        (**(code **)(*plVar16 + 0x20))(plVar16,&local_218);
      }
    }
    else {
      uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      uVar14 = uVar14 & 0xffffffff;
      if (*(long *)(lVar19 + 0x98) != 0) {
        plVar16 = *(long **)(*(long *)(lVar19 + 0x98) + 0x20);
        goto joined_r0x0169ab70;
      }
    }
  }
  uVar29 = *(uint *)(*(long *)(lVar19 + 0x80) + *(long *)(lVar19 + 0x78) + 0x238);
  if ((((uVar14 & 1) != 0) && (*(long *)(lVar19 + 0x98) != 0)) &&
     (puVar20 = *(undefined8 **)(*(long *)(lVar19 + 0x98) + 0x18), puVar20 != (undefined8 *)0x0)) {
    (**(code **)*puVar20)();
  }
  uVar26 = local_84;
  lVar19 = *(long *)(param_1 + 0xb18);
  uVar17 = *(uint *)(lVar19 + 0x110);
  if (9999 < (int)uVar17) {
    uVar18 = iVar12 << 2;
    uVar29 = uVar29 >> (ulong)(uVar18 & 0x1f) & 0xf;
    if (uVar17 >> 5 < 0x271) {
      uVar24 = 1;
    }
    else if (uVar17 >> 4 < 0x753) {
      uVar24 = 2;
    }
    else if (uVar17 >> 4 < 0xc35) {
      uVar24 = 3;
    }
    else if (uVar17 < 70000) {
      uVar24 = 4;
    }
    else if (uVar17 >> 5 < 0xc35) {
      uVar24 = 5;
    }
    else {
      uVar24 = 6;
      if (149999 < uVar17) {
        uVar24 = 7;
      }
    }
    if (uVar24 <= uVar29) goto LAB_0169ad48;
    if (*(long *)puVar10 == 0) {
      lVar19 = 0;
      lVar15 = _DAT_00000098;
      if (_DAT_00000098 != 0) goto LAB_0169ad24;
LAB_0169b080:
      uVar14 = 0;
    }
    else {
      lVar15 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar10 + 0x10) + 0x30))();
      lVar19 = 0;
      if (lVar15 != 0) {
        lVar19 = lVar15 + 0x276cb0;
      }
      lVar15 = *(long *)(lVar19 + 0x98);
      if (*(long *)(lVar19 + 0x98) == 0) goto LAB_0169b080;
LAB_0169ad24:
      if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
        uVar14 = 0;
LAB_0169b08c:
        plVar16 = *(long **)(lVar15 + 0x20);
        if (plVar16 != (long *)0x0) {
          local_218 = *(undefined ***)(lVar19 + 0x78);
          local_210 = *(char **)(lVar19 + 0x80);
          local_208 = 0x53c;
          (**(code **)(*plVar16 + 0x20))(plVar16,&local_218);
        }
      }
      else {
        uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
        lVar15 = *(long *)(lVar19 + 0x98);
        uVar14 = uVar14 & 0xffffffff;
        if (lVar15 != 0) goto LAB_0169b08c;
      }
    }
    iVar12 = uVar29 + 1;
    if (uVar29 != 0xf) {
      lVar15 = *(long *)(lVar19 + 0x80) + *(long *)(lVar19 + 0x78);
      *(uint *)(lVar15 + 0x238) =
           *(uint *)(lVar15 + 0x238) & (0xf << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU) |
           iVar12 << (ulong)(uVar18 & 0x1f);
    }
    if ((((uVar14 & 1) != 0) && (*(long *)(lVar19 + 0x98) != 0)) &&
       (puVar20 = *(undefined8 **)(*(long *)(lVar19 + 0x98) + 0x18), puVar20 != (undefined8 *)0x0))
    {
      (**(code **)*puVar20)();
    }
    lVar19 = *(long *)puVar10;
    local_218 = (undefined **)CONCAT44(local_218._4_4_,param_2);
    if (lVar19 == 0) {
      return;
    }
    puVar20 = *(undefined8 **)(lVar19 + 0x10);
    if ((*(byte *)(lVar19 + 0x453) & 1) == 0) {
      lVar19 = (**(code **)(*(long *)*puVar20 + 0x38))();
      if (lVar19 == 0) {
        return;
      }
      lVar19 = lVar19 + 0x70;
    }
    else {
      if (puVar20 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar20[0x26] == (long *)0x0) {
        return;
      }
      lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))();
      if (lVar19 == 0) {
        return;
      }
    }
    if (7 < (uint)local_218) {
      return;
    }
    lVar15 = lVar19 + 0x119228 + ((ulong)local_218 & 0xffffffff) * 0xfa08;
    if (7 < (uint)local_218) {
      lVar15 = lVar19 + 0x119228;
    }
    if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
       (puVar20 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar20 == (undefined8 *)0x0)) {
      cVar28 = *(char *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x289f8);
    }
    else {
      uVar14 = (**(code **)*puVar20)();
      cVar28 = *(char *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x289f8);
      if ((((uVar14 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
         (puVar20 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar20 != (undefined8 *)0x0)) {
        (**(code **)*puVar20)();
      }
    }
    uVar29 = (uint)cVar28;
    local_78 = CONCAT44(local_78._4_4_,uVar29);
    if (cVar28 == -1) {
      return;
    }
    if (*(int *)(*(long *)(param_1 + 0xb18) + 8) == 0) {
      local_218 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_210 = "GetSRankonHHA";
      FUN_0279ac70(&local_78,&local_218,1);
    }
    uVar14 = *(ulong *)(param_1 + 8);
    local_b0 = (undefined *)uVar14;
    iVar13 = nn::time::GetDayOfWeek
                       ((int)(short)uVar14,(int)(char)(uVar14 >> 0x10),(int)(char)(uVar14 >> 0x18));
    local_218 = (undefined **)CONCAT44(local_218._4_4_,iVar13);
    if (iVar13 == 0) {
      uVar17 = (uint)(uVar14 >> 0x10);
      uVar26 = (uint)(uVar14 >> 0x18);
    }
    else {
      do {
        lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
        local_218 = (undefined **)(lVar19 + -0x15180);
        local_b0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_218);
        iVar13 = nn::time::GetDayOfWeek
                           ((int)(short)local_b0,((int)local_b0 << 8) >> 0x18,(int)local_b0 >> 0x18)
        ;
        local_218 = (undefined **)CONCAT44(local_218._4_4_,iVar13);
      } while (iVar13 != 0);
      uVar14 = (ulong)local_b0 & 0xffff;
      uVar17 = (uint)local_b0._2_1_;
      uVar26 = (uint)local_b0._3_1_;
    }
    uVar18 = (uint)uVar14 & 0xffff;
    uVar14 = nn::time::IsValidDate(uVar18,uVar17 & 0xff,uVar26 & 0xff);
    uVar24 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar24 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar24 ^ DAT_05582b7c;
    FUN_01b8f0d0(&local_b0,0xc,iVar12,uVar29);
    FUN_01b46be0(&local_218);
    uStack_1e0 = 0;
    local_1dc = 0;
    local_218 = &PTR_LAB_049bb368;
    uVar7 = *(undefined4 *)(*(long *)(param_1 + 0xb18) + 8);
    uVar8 = *(undefined4 *)(*(long *)(param_1 + 0xb18) + 0x110);
    if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar13 != 0)) {
      FUN_00dd5f80(PTR_DAT_04bb8aa0);
      __cxa_guard_release(PTR_DAT_04bb8aa8);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
      uVar21 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar21 * 4) == 0x50) goto LAB_0169b4c0;
        uVar21 = uVar21 + 1;
      } while (*(uint *)PTR_DAT_04bb8aa0 != uVar21);
    }
    uVar21 = 0;
LAB_0169b4c0:
    local_1f0 = CONCAT31(local_1f0._1_3_,(char)iVar12);
    local_1f8 = (undefined4)uVar21;
    local_1f4 = 0xc;
    uVar18 = uVar26 << 0x18 | (uVar17 & 0xff) << 0x10 | uVar18;
    if ((uVar14 & 1) == 0) {
      uVar18 = 0;
    }
    local_1ec = (ulong)local_b0;
    local_1e4 = 0x100;
    uVar25 = *(undefined8 *)PTR_DAT_04bc0580;
    uStack_1e0 = uVar7;
    local_1dc = uVar8;
LAB_0169c8f4:
    local_210 = (char *)CONCAT44(uVar18,uVar29);
    lVar19 = (*(code *)local_218[4])(&local_218,uVar25);
joined_r0x0169c440:
    if (lVar19 == 0) {
      return;
    }
    goto LAB_0169c908;
  }
  if (999 < (int)uVar17) {
LAB_0169ad48:
    if ((*(byte *)(lVar19 + 0x140) & 1) != 0) {
      ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_210 = "HappyHomeMission1";
      local_218 = ppuVar2;
      iVar12 = FUN_0274ce10(lVar19 + 0x158,&local_218);
      if (iVar12 == 0) {
        uVar14 = FUN_016a0dc0(param_1,uVar26,0);
        local_210 = "HappyHomeMission1";
        local_218 = ppuVar2;
        FUN_0274d104(*(long *)(param_1 + 0xb18) + 0x158,&local_218,1);
        if ((uVar14 & 1) != 0) {
          return;
        }
      }
    }
    if ((*(byte *)(*(long *)(param_1 + 0xb18) + 0x140) >> 1 & 1) != 0) {
      ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_210 = "HappyHomeMission2";
      local_218 = ppuVar2;
      iVar12 = FUN_0274ce10(*(long *)(param_1 + 0xb18) + 0x158,&local_218);
      if (iVar12 == 0) {
        uVar14 = FUN_016a0dc0(param_1,uVar26,1);
        local_210 = "HappyHomeMission2";
        local_218 = ppuVar2;
        FUN_0274d104(*(long *)(param_1 + 0xb18) + 0x158,&local_218,1);
        if ((uVar14 & 1) != 0) {
          return;
        }
      }
    }
    if ((*(byte *)(*(long *)(param_1 + 0xb18) + 0x140) >> 2 & 1) != 0) {
      ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_210 = "HappyHomeMission3";
      local_218 = ppuVar2;
      iVar12 = FUN_0274ce10(*(long *)(param_1 + 0xb18) + 0x158,&local_218);
      if (iVar12 == 0) {
        uVar14 = FUN_016a0dc0(param_1,uVar26,2);
        local_210 = "HappyHomeMission3";
        local_218 = ppuVar2;
        FUN_0274d104(*(long *)(param_1 + 0xb18) + 0x158,&local_218,1);
        if ((uVar14 & 1) != 0) {
          return;
        }
      }
    }
    if ((*(byte *)(*(long *)(param_1 + 0xb18) + 0x140) >> 3 & 1) != 0) {
      ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_210 = "HappyHomeMission4";
      local_218 = ppuVar2;
      iVar12 = FUN_0274ce10(*(long *)(param_1 + 0xb18) + 0x158,&local_218);
      if (iVar12 == 0) {
        uVar14 = FUN_016a0dc0(param_1,uVar26,3);
        local_210 = "HappyHomeMission4";
        local_218 = ppuVar2;
        FUN_0274d104(*(long *)(param_1 + 0xb18) + 0x158,&local_218,1);
        if ((uVar14 & 1) != 0) {
          return;
        }
      }
    }
    if ((*(byte *)(*(long *)(param_1 + 0xb18) + 0x140) >> 4 & 1) != 0) {
      ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_210 = "HappyHomeMission5";
      local_218 = ppuVar2;
      iVar12 = FUN_0274ce10(*(long *)(param_1 + 0xb18) + 0x158,&local_218);
      if (iVar12 == 0) {
        uVar14 = FUN_016a0dc0(param_1,uVar26,4);
        local_210 = "HappyHomeMission5";
        local_218 = ppuVar2;
        FUN_0274d104(*(long *)(param_1 + 0xb18) + 0x158,&local_218,1);
        if ((uVar14 & 1) != 0) {
          return;
        }
      }
    }
    if ((*(byte *)(*(long *)(param_1 + 0xb18) + 0x140) >> 5 & 1) != 0) {
      ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_210 = "HappyHomeMission6";
      local_218 = ppuVar2;
      iVar12 = FUN_0274ce10(*(long *)(param_1 + 0xb18) + 0x158,&local_218);
      if (iVar12 == 0) {
        uVar14 = FUN_016a0dc0(param_1,uVar26,5);
        local_210 = "HappyHomeMission6";
        local_218 = ppuVar2;
        FUN_0274d104(*(long *)(param_1 + 0xb18) + 0x158,&local_218,1);
        if ((uVar14 & 1) != 0) {
          return;
        }
      }
    }
  }
  local_218 = (undefined **)CONCAT44(local_218._4_4_,local_84);
  lVar19 = *(long *)puVar10;
  if (lVar19 != 0) {
    puVar20 = *(undefined8 **)(lVar19 + 0x10);
    if ((*(byte *)(lVar19 + 0x453) & 1) != 0) {
      if (((puVar20 != (undefined8 *)0x0) && ((long *)puVar20[0x26] != (long *)0x0)) &&
         (lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))(), lVar19 != 0)) goto LAB_0169aff8;
      goto LAB_0169b62c;
    }
    lVar19 = (**(code **)(*(long *)*puVar20 + 0x38))();
    if (lVar19 == 0) goto LAB_0169b62c;
    lVar19 = lVar19 + 0x70;
LAB_0169aff8:
    if (7 < (uint)local_218) goto LAB_0169b62c;
    lVar15 = lVar19 + 0x119228 + ((ulong)local_218 & 0xffffffff) * 0xfa08;
    if (7 < (uint)local_218) {
      lVar15 = lVar19 + 0x119228;
    }
    if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
       (puVar20 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar20 == (undefined8 *)0x0)) {
      cVar28 = *(char *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x289f8);
    }
    else {
      uVar14 = (**(code **)*puVar20)();
      cVar28 = *(char *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x289f8);
      if ((((uVar14 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
         (puVar20 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar20 != (undefined8 *)0x0)) {
        (**(code **)*puVar20)();
      }
    }
    if (cVar28 == -1) goto LAB_0169b62c;
    lVar19 = *(long *)(param_1 + 0xb18);
    uVar29 = (uint)cVar28;
    local_6c[0] = uVar29;
    if (*(char *)(lVar19 + 0x114) != -1) {
LAB_0169b234:
      if (*(int *)(lVar19 + 0x30) == 0) {
        local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar29);
        local_218 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_210 = "HappyHomeMission2";
        iVar12 = FUN_0274ce10(&local_b0,&local_218);
        if (iVar12 == 0) {
          uVar27 = 2;
          goto LAB_0169b528;
        }
        lVar19 = *(long *)(param_1 + 0xb18);
      }
      if (*(char *)(lVar19 + 0x116) == -1) {
        local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar29);
        local_218 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_210 = "HappyHomeMission3";
        iVar12 = FUN_0274ce10(&local_b0,&local_218);
        if (iVar12 == 0) {
          uVar27 = 3;
          goto LAB_0169b528;
        }
        lVar19 = *(long *)(param_1 + 0xb18);
      }
      if (*(int *)(lVar19 + 0x3c) == 0) {
        local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar29);
        local_218 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_210 = "HappyHomeMission4";
        iVar12 = FUN_0274ce10(&local_b0,&local_218);
        if (iVar12 == 0) {
          uVar27 = 4;
          goto LAB_0169b528;
        }
        lVar19 = *(long *)(param_1 + 0xb18);
      }
      if (*(int *)(lVar19 + 0x38) == 0) {
        local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar29);
        local_218 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_210 = "HappyHomeMission5";
        iVar12 = FUN_0274ce10(&local_b0,&local_218);
        if (iVar12 == 0) {
          uVar27 = 5;
          goto LAB_0169b528;
        }
      }
      goto LAB_0169b62c;
    }
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar29);
    local_218 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_210 = "HappyHomeMission1";
    iVar12 = FUN_0274ce10(&local_b0,&local_218);
    if (iVar12 != 0) {
      lVar19 = *(long *)(param_1 + 0xb18);
      goto LAB_0169b234;
    }
    uVar27 = 1;
LAB_0169b528:
    uVar17 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar17 = uVar17 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar17 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar17;
    if ((uint)((ulong)uVar17 * 100 >> 0x20) < 0x32) goto LAB_0169b62c;
    if (*(int *)(*(long *)(param_1 + 0xb18) + 8) == 0) {
      local_218 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_210 = "GetSRankonHHA";
      FUN_0279ac70(local_6c,&local_218,1);
    }
    FUN_01b46be0(&local_218);
    uVar14 = *(ulong *)(param_1 + 8);
    local_218 = &PTR_LAB_049bb368;
    uStack_1e0 = 0;
    local_1dc = 0;
    local_78 = uVar14;
    iVar12 = nn::time::GetDayOfWeek
                       ((int)(short)uVar14,(int)(char)(uVar14 >> 0x10),(int)(char)(uVar14 >> 0x18));
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar12);
    if (iVar12 == 0) {
      uVar17 = (uint)(uVar14 >> 0x10);
      uVar26 = (uint)(uVar14 >> 0x18);
    }
    else {
      do {
        lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
        local_b0 = (undefined *)(lVar19 + -0x15180);
        local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b0);
        iVar12 = nn::time::GetDayOfWeek
                           ((int)(short)local_78,((int)local_78 << 8) >> 0x18,(int)local_78 >> 0x18)
        ;
        local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar12);
      } while (iVar12 != 0);
      uVar14 = local_78 & 0xffff;
      uVar17 = (uint)local_78._2_1_;
      uVar26 = (uint)local_78._3_1_;
    }
    uVar18 = (uint)uVar14 & 0xffff;
    uVar14 = nn::time::IsValidDate(uVar18,uVar17 & 0xff,uVar26 & 0xff);
    uVar7 = *(undefined4 *)(*(long *)(param_1 + 0xb18) + 8);
    uVar8 = *(undefined4 *)(*(long *)(param_1 + 0xb18) + 0x110);
    if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar12 != 0)) {
      FUN_00dd5f80(PTR_DAT_04bb8aa0);
      __cxa_guard_release(PTR_DAT_04bb8aa8);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
      uVar21 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar21 * 4) == 0x50) goto LAB_0169c3e8;
        uVar21 = uVar21 + 1;
      } while (*(uint *)PTR_DAT_04bb8aa0 != uVar21);
    }
    uVar21 = 0;
LAB_0169c3e8:
    local_1f0 = CONCAT31(local_1f0._1_3_,uVar27);
    uVar18 = uVar26 << 0x18 | (uVar17 & 0xff) << 0x10 | uVar18;
    if ((uVar14 & 1) == 0) {
      uVar18 = 0;
    }
    local_210 = (char *)CONCAT44(uVar18,uVar29);
    local_1f8 = (undefined4)uVar21;
    local_1f4 = 0xd;
    local_1e4 = 0;
    local_1ec = *(ulong *)PTR_DAT_04bb37e0;
    uStack_1e0 = uVar7;
    local_1dc = uVar8;
    lVar19 = (*(code *)local_218[4])(&local_218,*(undefined8 *)PTR_DAT_04bc0580);
    goto joined_r0x0169c440;
  }
LAB_0169b62c:
  uVar29 = local_84;
  lVar19 = *(long *)(param_1 + 0xb18);
  if (*(int *)(lVar19 + 0x50) < 0) {
    uVar17 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    uVar17 = uVar17 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar17 ^ DAT_05582b7c;
    if ((uint)((ulong)uVar17 * 100 >> 0x20) < 0x50) {
LAB_0169b74c:
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      DAT_05582b78 = DAT_05582b7c;
      goto LAB_0169b750;
    }
    bVar11 = *(short *)(lVar19 + 0xf8) != -2;
    uVar26 = (uint)bVar11 << 1;
    if (*(short *)(lVar19 + 0x100) != -2) {
      uVar26 = (uint)bVar11 << 1 | 4;
    }
    uVar18 = *(uint *)(lVar19 + 0x140) >> 0xb & 8;
    uVar24 = uVar18 | uVar26;
    uVar26 = uVar24 - ((uVar18 | uVar26 & 0xfffffffa) >> 1);
    uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
    uVar26 = uVar26 + (uVar26 >> 4) & 0xf0f0f0f;
    uVar26 = uVar26 + (uVar26 >> 8);
    uVar26 = uVar26 + (uVar26 >> 0x10) & 0x3f;
    if (uVar26 == 0) goto LAB_0169b74c;
    uVar29 = DAT_05582b74 ^ DAT_05582b74 << 0xb;
    DAT_05582b70 = DAT_05582b78;
    DAT_05582b74 = DAT_05582b7c;
    DAT_05582b7c = uVar29 >> 8 ^ uVar17 >> 0x13 ^ uVar29 ^ uVar17;
    if (uVar24 == 0) {
      uVar18 = 0xffffffff;
    }
    else {
      uVar18 = 0xffffffff;
      iVar12 = (int)((ulong)uVar26 * (ulong)DAT_05582b7c >> 0x20) + 2;
      do {
        iVar12 = iVar12 + -1;
        if (iVar12 < 2) {
          uVar29 = uVar24 - 1 & (uVar24 ^ 0xffffffff);
          uVar29 = uVar29 - (uVar29 >> 1 & 0x55555555);
          uVar29 = (uVar29 >> 2 & 0x33333333) + (uVar29 & 0x33333333);
          uVar29 = uVar29 + (uVar29 >> 4) & 0xf0f0f0f;
          uVar29 = uVar29 + (uVar29 >> 8);
          uVar18 = uVar29 + (uVar29 >> 0x10) & 0x3f;
          break;
        }
        uVar24 = uVar24 - 1 & uVar24;
      } while (uVar24 != 0);
    }
    lVar19 = *(long *)puVar10;
    local_218 = (undefined **)CONCAT44(local_218._4_4_,local_84);
    DAT_05582b78 = uVar17;
    if (lVar19 == 0) {
LAB_0169bd24:
      uVar29 = 0xffffffff;
    }
    else {
      puVar20 = *(undefined8 **)(lVar19 + 0x10);
      if ((*(byte *)(lVar19 + 0x453) & 1) != 0) {
        if (((puVar20 != (undefined8 *)0x0) && ((long *)puVar20[0x26] != (long *)0x0)) &&
           (lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))(), lVar19 != 0))
        goto LAB_0169bd18;
        goto LAB_0169bd24;
      }
      lVar19 = (**(code **)(*(long *)*puVar20 + 0x38))();
      if (lVar19 == 0) goto LAB_0169bd24;
      lVar19 = lVar19 + 0x70;
LAB_0169bd18:
      if (7 < (uint)local_218) goto LAB_0169bd24;
      lVar15 = lVar19 + 0x119228 + ((ulong)local_218 & 0xffffffff) * 0xfa08;
      if (7 < (uint)local_218) {
        lVar15 = lVar19 + 0x119228;
      }
      if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
         (puVar20 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar20 == (undefined8 *)0x0)) {
        uVar29 = (uint)*(char *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x289f8);
      }
      else {
        uVar14 = (**(code **)*puVar20)();
        uVar29 = (uint)*(char *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x289f8);
        if ((((uVar14 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
           (puVar20 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar20 != (undefined8 *)0x0))
        {
          (**(code **)*puVar20)();
        }
      }
    }
    local_6c[0] = uVar29;
    if (*(int *)(*(long *)(param_1 + 0xb18) + 8) == 0) {
      local_218 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_210 = "GetSRankonHHA";
      FUN_0279ac70(local_6c,&local_218,1);
    }
    if (uVar29 == 0xffffffff) {
      return;
    }
    local_78 = CONCAT44(local_78._4_4_,uVar18);
    if (uVar18 == 3) {
      uVar27 = 0x60;
      pcVar23 = (char *)(*(long *)(param_1 + 0xb18) + 0x122);
LAB_0169c01c:
      lVar19 = (long)*pcVar23;
    }
    else if (uVar18 == 2) {
      if ('\x01' < *(char *)(*(long *)(param_1 + 0xb18) + 0x154)) {
        pcVar23 = (char *)(*(long *)(param_1 + 0xb18) + 0x121);
        uVar27 = 0x5f;
        goto LAB_0169c01c;
      }
      lVar19 = 0;
      uVar27 = 0x5e;
    }
    else {
      if (uVar18 != 1) {
        return;
      }
      if ('\x01' < *(char *)(*(long *)(param_1 + 0xb18) + 0x154)) {
        pcVar23 = (char *)(*(long *)(param_1 + 0xb18) + 0x120);
        uVar27 = 0x5d;
        goto LAB_0169c01c;
      }
      lVar19 = 0;
      uVar27 = 0x5c;
    }
    uVar14 = *(ulong *)(param_1 + 8);
    local_b0 = (undefined *)uVar14;
    iVar12 = nn::time::GetDayOfWeek
                       ((int)(short)uVar14,(int)(char)(uVar14 >> 0x10),(int)(char)(uVar14 >> 0x18));
    local_218 = (undefined **)CONCAT44(local_218._4_4_,iVar12);
    if (iVar12 == 0) {
      uVar17 = (uint)(uVar14 >> 0x10);
      uVar26 = (uint)(uVar14 >> 0x18);
    }
    else {
      do {
        lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
        local_218 = (undefined **)(lVar15 + -0x15180);
        local_b0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_218);
        iVar12 = nn::time::GetDayOfWeek
                           ((int)(short)local_b0,((int)local_b0 << 8) >> 0x18,(int)local_b0 >> 0x18)
        ;
        local_218 = (undefined **)CONCAT44(local_218._4_4_,iVar12);
      } while (iVar12 != 0);
      uVar14 = (ulong)local_b0 & 0xffff;
      uVar17 = (uint)local_b0._2_1_;
      uVar26 = (uint)local_b0._3_1_;
    }
    uVar18 = (uint)uVar14 & 0xffff;
    uVar14 = nn::time::IsValidDate(uVar18,uVar17 & 0xff,uVar26 & 0xff);
    uVar7 = *(undefined4 *)(&DAT_041769c0 + lVar19 * 4);
    FUN_01b46be0(&local_218);
    uStack_1c0 = 0;
    local_218 = &PTR_LAB_049bb3c8;
    uStack_1d0 = 0;
    local_1cc = 0;
    uStack_1c8 = 0;
    uStack_1c2 = 0;
    local_1c4 = 0xfffe;
    uStack_1e0 = 0;
    local_1dc = 0;
    uStack_1d8 = 0;
    local_1d4 = 0;
    FUN_0277d4ac(&local_1c4);
    local_a0 = 0;
    local_b0 = (undefined *)0x0;
    local_a8 = 0;
    local_94 = 0xfffe;
    FUN_0277d4ac(&local_94);
    lVar19 = *(long *)(param_1 + 0xb18);
    local_b0 = *(undefined **)(lVar19 + 8);
    local_a0 = *(undefined4 *)(lVar19 + 0x18);
    local_a8 = CONCAT44(*(undefined4 *)(lVar19 + 0x20),*(undefined4 *)(lVar19 + 0x14));
    uStack_98 = *(undefined4 *)(lVar19 + 0x110);
    puVar5 = (ulong *)(lVar19 + 0xf0) + (local_78 & 0xffffffff);
    if (3 < (uint)local_78) {
      puVar5 = (ulong *)(lVar19 + 0xf0);
    }
    local_94 = *puVar5;
    local_9c = uVar7;
    if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar12 != 0)) {
      FUN_00dd5f80(PTR_DAT_04bb8aa0);
      __cxa_guard_release(PTR_DAT_04bb8aa8);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
      uVar21 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar21 * 4) == 0x50) goto LAB_0169c30c;
        uVar21 = uVar21 + 1;
      } while (*(uint *)PTR_DAT_04bb8aa0 != uVar21);
    }
    uVar21 = 0;
LAB_0169c30c:
    local_1f8 = (undefined4)uVar21;
    local_1f0 = CONCAT31(local_1f0._1_3_,uVar27);
    uVar18 = uVar26 << 0x18 | (uVar17 & 0xff) << 0x10 | uVar18;
    if ((uVar14 & 1) == 0) {
      uVar18 = 0;
    }
    local_1ec = *(ulong *)PTR_DAT_04bb37e0;
    uStack_1e0 = SUB84(local_b0,0);
    local_1dc = (undefined4)((ulong)local_b0 >> 0x20);
    uStack_1d8 = (undefined4)local_a8;
    local_1d4 = (undefined4)((ulong)local_a8 >> 0x20);
LAB_0169c8e8:
    local_1e4 = 0;
    local_1f4 = 0xb;
    local_1c4 = (undefined2)(undefined4)local_94;
    uStack_1c2 = (undefined2)((uint)(undefined4)local_94 >> 0x10);
    uVar25 = *(undefined8 *)PTR_DAT_04bc0580;
    uStack_1d0 = local_a0;
    local_1cc = local_9c;
    uStack_1c8 = uStack_98;
    uStack_1c0 = local_94._4_4_;
    goto LAB_0169c8f4;
  }
  uVar17 = DAT_05582b7c;
LAB_0169b750:
  uVar26 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
  DAT_05582b7c = uVar26 >> 8 ^ uVar17 >> 0x13 ^ uVar26 ^ uVar17;
  iVar12 = *(int *)(lVar19 + 8);
  puVar3 = &DAT_041769e4;
  if (iVar12 != 1) {
    puVar3 = &DAT_041769f0;
  }
  puVar4 = &DAT_041769d8;
  if (iVar12 != 0) {
    puVar4 = puVar3;
  }
  uVar26 = (uint)((ulong)DAT_05582b7c * 100 >> 0x20);
  DAT_05582b70 = DAT_05582b74;
  if (*puVar4 <= uVar26) {
    uVar18 = DAT_05582b78;
    if (uVar26 < puVar4[1] + *puVar4) {
      DAT_05582b74 = DAT_05582b78;
      DAT_05582b78 = uVar17;
      uVar14 = FUN_016a0790(param_1,local_84);
      uVar18 = DAT_05582b74;
      uVar17 = DAT_05582b78;
      if ((uVar14 & 1) != 0) {
        return;
      }
    }
LAB_0169b990:
    DAT_05582b78 = uVar17;
    DAT_05582b74 = uVar18;
    lVar19 = *(long *)puVar10;
    local_218 = (undefined **)CONCAT44(local_218._4_4_,local_84);
    if (lVar19 == 0) {
LAB_0169b9ec:
      uVar29 = 0xffffffff;
    }
    else {
      puVar20 = *(undefined8 **)(lVar19 + 0x10);
      if ((*(byte *)(lVar19 + 0x453) & 1) != 0) {
        if (((puVar20 != (undefined8 *)0x0) && ((long *)puVar20[0x26] != (long *)0x0)) &&
           (lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))(), lVar19 != 0))
        goto LAB_0169b9e0;
        goto LAB_0169b9ec;
      }
      lVar19 = (**(code **)(*(long *)*puVar20 + 0x38))();
      if (lVar19 == 0) goto LAB_0169b9ec;
      lVar19 = lVar19 + 0x70;
LAB_0169b9e0:
      if (7 < (uint)local_218) goto LAB_0169b9ec;
      lVar15 = lVar19 + 0x119228 + ((ulong)local_218 & 0xffffffff) * 0xfa08;
      if (7 < (uint)local_218) {
        lVar15 = lVar19 + 0x119228;
      }
      if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
         (puVar20 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar20 == (undefined8 *)0x0)) {
        uVar29 = (uint)*(char *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x289f8);
      }
      else {
        uVar14 = (**(code **)*puVar20)();
        uVar29 = (uint)*(char *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x289f8);
        if ((((uVar14 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
           (puVar20 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar20 != (undefined8 *)0x0))
        {
          (**(code **)*puVar20)();
        }
      }
    }
    lVar19 = *(long *)(param_1 + 0xb18);
    local_80 = 1;
    local_7c = uVar29;
    if (*(int *)(lVar19 + 8) != 1) {
      if (*(int *)(lVar19 + 8) == 0) {
        local_80 = 0;
        local_218 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_210 = "GetSRankonHHA";
        FUN_0279ac70(&local_7c,&local_218,1);
        lVar19 = *(long *)(param_1 + 0xb18);
      }
      else {
        local_80 = 2;
      }
    }
    iVar13 = *(int *)(lVar19 + 0x150);
    iVar12 = iVar13 + 3;
    if (-1 < iVar13) {
      iVar12 = iVar13;
    }
    fVar31 = ((float)(iVar12 >> 2) / (float)*(int *)(lVar19 + 0x14c)) * 100.0;
    if (50.0 <= fVar31) {
      uVar17 = 3;
    }
    else if (20.0 <= fVar31) {
      uVar17 = 4;
    }
    else {
      uVar17 = 5;
    }
    uVar26 = 1 << (ulong)(local_80 & 0x1f);
    local_218 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_210 = "HappyHomeMission1";
    local_80 = uVar17;
    iVar12 = FUN_0274ce10(&local_7c,&local_218);
    if ((iVar12 != 0) || (local_80 == 5)) {
      uVar26 = 1 << (ulong)(local_80 & 0x1f) | uVar26;
    }
    lVar19 = *(long *)(param_1 + 0xb18);
    if (*(short *)(lVar19 + 0x138) != -2) {
      local_80 = 6;
      uVar26 = uVar26 | 0x40;
    }
    if (*(short *)(lVar19 + 0x130) != -2) {
      local_80 = 7;
      uVar26 = uVar26 | 0x80;
    }
    if ('\x01' < *(char *)(lVar19 + 0x154)) {
      *(undefined1 *)(lVar19 + 0x155) = 0xff;
      *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0x156) = 0xff;
      lVar19 = *(long *)(param_1 + 0xb18);
      if ('\0' < *(char *)(lVar19 + 0x154)) {
        iVar12 = *(int *)(lVar19 + 0xd8);
        if (iVar12 < 1) {
          *(undefined1 *)(lVar19 + 0x156) = 0;
          iVar13 = 0;
        }
        else {
          *(undefined1 *)(lVar19 + 0x155) = 0;
          iVar13 = iVar12;
          iVar12 = 1000000000;
        }
        lVar19 = *(long *)(param_1 + 0xb18);
        if ('\x01' < *(char *)(lVar19 + 0x154)) {
          iVar6 = *(int *)(lVar19 + 0xdc);
          if (iVar13 < iVar6) {
            *(undefined1 *)(lVar19 + 0x155) = 1;
            iVar13 = iVar6;
          }
          else if (iVar6 < iVar12) {
            *(undefined1 *)(lVar19 + 0x156) = 1;
            iVar12 = iVar6;
          }
          lVar19 = *(long *)(param_1 + 0xb18);
          if ('\x02' < *(char *)(lVar19 + 0x154)) {
            iVar6 = *(int *)(lVar19 + 0xe0);
            if (iVar13 < iVar6) {
              *(undefined1 *)(lVar19 + 0x155) = 2;
              iVar13 = iVar6;
            }
            else if (iVar6 < iVar12) {
              *(undefined1 *)(lVar19 + 0x156) = 2;
              iVar12 = iVar6;
            }
            lVar19 = *(long *)(param_1 + 0xb18);
            if ('\x03' < *(char *)(lVar19 + 0x154)) {
              iVar6 = *(int *)(lVar19 + 0xe4);
              if (iVar13 < iVar6) {
                *(undefined1 *)(lVar19 + 0x155) = 3;
                iVar13 = iVar6;
              }
              else if (iVar6 < iVar12) {
                *(undefined1 *)(lVar19 + 0x156) = 3;
                iVar12 = iVar6;
              }
              lVar19 = *(long *)(param_1 + 0xb18);
              if ('\x04' < *(char *)(lVar19 + 0x154)) {
                iVar6 = *(int *)(lVar19 + 0xe8);
                if (iVar13 < iVar6) {
                  *(undefined1 *)(lVar19 + 0x155) = 4;
                  iVar13 = iVar6;
                }
                else if (iVar6 < iVar12) {
                  *(undefined1 *)(lVar19 + 0x156) = 4;
                  iVar12 = iVar6;
                }
                lVar19 = *(long *)(param_1 + 0xb18);
                if ('\x05' < *(char *)(lVar19 + 0x154)) {
                  iVar6 = *(int *)(lVar19 + 0xec);
                  if (iVar13 < iVar6) {
                    *(undefined1 *)(lVar19 + 0x155) = 5;
                    iVar13 = iVar6;
                  }
                  else if (iVar6 < iVar12) {
                    *(undefined1 *)(lVar19 + 0x156) = 5;
                    iVar12 = iVar6;
                  }
                  lVar19 = *(long *)(param_1 + 0xb18);
                  if ('\x06' < *(char *)(lVar19 + 0x154)) {
                    lVar15 = 6;
                    do {
                      iVar6 = *(int *)(lVar19 + 0xd8);
                      if (iVar13 < iVar6) {
                        *(char *)(lVar19 + 0x155) = (char)lVar15;
                        iVar13 = iVar6;
                      }
                      else {
                        if (iVar6 < iVar12) {
                          *(char *)(lVar19 + 0x156) = (char)lVar15;
                          iVar12 = iVar6;
                        }
                      }
                      lVar19 = *(long *)(param_1 + 0xb18);
                      lVar15 = lVar15 + 1;
                    } while (lVar15 < *(char *)(lVar19 + 0x154));
                  }
                }
              }
            }
          }
        }
      }
      if (*(char *)(lVar19 + 0x155) != -1) {
        local_80 = 8;
        uVar26 = uVar26 | 0x100;
      }
      if (*(char *)(lVar19 + 0x156) != -1) {
        local_80 = 9;
        uVar26 = uVar26 | 0x200;
      }
    }
    if (*(char *)(lVar19 + 0x157) != -1) {
      uVar26 = uVar26 | 0x400;
    }
    uVar26 = uVar26 | 0x7800;
    uVar17 = uVar26 - (uVar26 >> 1 & 0x55555555);
    uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33332333);
    uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
    uVar18 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    uVar17 = uVar17 + (uVar17 >> 8);
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar18 = uVar18 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar18 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    iVar12 = (int)((ulong)(uVar17 + (uVar17 >> 0x10) & 0x3f) * (ulong)uVar18 >> 0x20) + 2;
    local_6c[0] = 0xffffffff;
    do {
      iVar12 = iVar12 + -1;
      if (iVar12 < 2) {
        uVar17 = uVar26 - 1 & (uVar26 ^ 0xffffffff);
        uVar17 = uVar17 - (uVar17 >> 1 & 0x55555555);
        uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
        uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
        uVar17 = uVar17 + (uVar17 >> 8);
        local_6c[0] = uVar17 + (uVar17 >> 0x10) & 0x3f;
        break;
      }
      uVar26 = uVar26 - 1 & uVar26;
    } while (uVar26 != 0);
    local_78 = 0xfffe;
    DAT_05582b7c = uVar18;
    FUN_0277d4ac(&local_78);
    cVar28 = '\0';
    uVar27 = 0x28;
    switch(local_6c[0]) {
    case 0:
      break;
    case 1:
      cVar28 = '\0';
      uVar27 = 0x29;
      break;
    case 2:
      cVar28 = '\0';
      uVar27 = 0x2a;
      break;
    case 3:
      cVar28 = '\0';
      uVar27 = 0x2c;
      break;
    case 4:
      cVar28 = '\0';
      uVar27 = 0x2d;
      break;
    case 5:
      cVar28 = '\0';
      uVar27 = 0x2e;
      break;
    case 6:
      uVar27 = 0x30;
      cVar28 = *(char *)(*(long *)(param_1 + 0xb18) + 0x125);
      local_78 = *(ulong *)(*(long *)(param_1 + 0xb18) + 0x138);
      break;
    default:
      goto switchD_0169bfa4_default;
    case 8:
      uVar27 = 0x33;
      cVar28 = *(char *)(*(long *)(param_1 + 0xb18) + 0x155);
      break;
    case 9:
      uVar27 = 0x34;
      cVar28 = *(char *)(*(long *)(param_1 + 0xb18) + 0x156);
      break;
    case 10:
      uVar27 = 0x35;
      cVar28 = *(char *)(*(long *)(param_1 + 0xb18) + 0x157);
      break;
    case 0xb:
      cVar28 = '\0';
      uVar27 = 0x36;
      break;
    case 0xc:
      cVar28 = '\0';
      uVar27 = 0x37;
      break;
    case 0xd:
      cVar28 = '\0';
      uVar27 = 0x38;
      break;
    case 0xe:
      cVar28 = '\0';
      uVar27 = 0x39;
    }
    uVar14 = *(ulong *)(param_1 + 8);
    local_b0 = (undefined *)uVar14;
    iVar12 = nn::time::GetDayOfWeek
                       ((int)(short)uVar14,(int)(char)(uVar14 >> 0x10),(int)(char)(uVar14 >> 0x18));
    local_218 = (undefined **)CONCAT44(local_218._4_4_,iVar12);
    if (iVar12 == 0) {
      uVar17 = (uint)(uVar14 >> 0x10);
      uVar26 = (uint)(uVar14 >> 0x18);
    }
    else {
      do {
        lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
        local_218 = (undefined **)(lVar19 + -0x15180);
        local_b0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_218);
        iVar12 = nn::time::GetDayOfWeek
                           ((int)(short)local_b0,((int)local_b0 << 8) >> 0x18,(int)local_b0 >> 0x18)
        ;
        local_218 = (undefined **)CONCAT44(local_218._4_4_,iVar12);
      } while (iVar12 != 0);
      uVar14 = (ulong)local_b0 & 0xffff;
      uVar17 = (uint)local_b0._2_1_;
      uVar26 = (uint)local_b0._3_1_;
    }
    uVar18 = (uint)uVar14 & 0xffff;
    uVar14 = nn::time::IsValidDate(uVar18,uVar17 & 0xff,uVar26 & 0xff);
    uVar7 = *(undefined4 *)(&DAT_041769c0 + (long)cVar28 * 4);
    FUN_01b46be0(&local_218);
    uStack_1c0 = 0;
    local_218 = &PTR_LAB_049bb3c8;
    uStack_1d0 = 0;
    local_1cc = 0;
    uStack_1c8 = 0;
    uStack_1c2 = 0;
    local_1c4 = 0xfffe;
    uStack_1e0 = 0;
    local_1dc = 0;
    uStack_1d8 = 0;
    local_1d4 = 0;
    FUN_0277d4ac(&local_1c4);
    local_a0 = 0;
    local_b0 = (undefined *)0x0;
    local_a8 = 0;
    local_94 = 0xfffe;
    FUN_0277d4ac(&local_94);
    lVar19 = *(long *)(param_1 + 0xb18);
    local_b0 = *(undefined **)(lVar19 + 8);
    local_a0 = *(undefined4 *)(lVar19 + 0x18);
    uStack_98 = *(undefined4 *)(lVar19 + 0x110);
    local_a8 = CONCAT44(*(undefined4 *)(lVar19 + 0x20),*(undefined4 *)(lVar19 + 0x14));
    local_94 = local_78;
    local_9c = uVar7;
    if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar12 != 0)) {
      FUN_00dd5f80(PTR_DAT_04bb8aa0);
      __cxa_guard_release(PTR_DAT_04bb8aa8);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
      uVar21 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar21 * 4) == 0x50) goto LAB_0169c88c;
        uVar21 = uVar21 + 1;
      } while (*(uint *)PTR_DAT_04bb8aa0 != uVar21);
    }
    uVar21 = 0;
LAB_0169c88c:
    local_1f8 = (undefined4)uVar21;
    local_1f0 = CONCAT31(local_1f0._1_3_,uVar27);
    uVar18 = uVar26 << 0x18 | (uVar17 & 0xff) << 0x10 | uVar18;
    if ((uVar14 & 1) == 0) {
      uVar18 = 0;
    }
    local_1ec = *(ulong *)PTR_DAT_04bb37e0;
    uStack_1e0 = SUB84(local_b0,0);
    local_1dc = (undefined4)((ulong)local_b0 >> 0x20);
    uStack_1d8 = (undefined4)local_a8;
    local_1d4 = (undefined4)((ulong)local_a8 >> 0x20);
    goto LAB_0169c8e8;
  }
  local_7c = 0;
  if (*(int *)(lVar19 + 0x28) < 1) {
    uVar26 = 0;
  }
  else {
    local_7c = (uint)(7 < *(int *)(lVar19 + 0x10));
    uVar26 = 1 << (ulong)local_7c;
  }
  if (0 < *(int *)(lVar19 + 0x2c)) {
    local_7c = 2;
    uVar26 = uVar26 | 4;
  }
  uVar18 = *(uint *)(lVar19 + 0x140);
  if ((uVar18 >> 7 & 1) != 0) {
    local_7c = 5;
    uVar26 = uVar26 | 0x20;
  }
  if ((uVar18 >> 8 & 1) != 0) {
    local_7c = 3;
    uVar26 = uVar26 | 8;
  }
  if ((uVar18 >> 9 & 1) != 0) {
    local_7c = 4;
    uVar26 = uVar26 | 0x10;
  }
  if (0 < *(int *)(lVar19 + 0x38)) {
    local_7c = 6;
    uVar26 = uVar26 | 0x40;
  }
  if (0 < *(int *)(lVar19 + 0x3c)) {
    local_7c = 7;
    uVar26 = uVar26 | 0x80;
  }
  if (0 < *(int *)(lVar19 + 0x40)) {
    local_7c = 8;
    uVar26 = uVar26 | 0x100;
  }
  if (0 < *(int *)(lVar19 + 0x4c)) {
    local_7c = 9;
    uVar26 = uVar26 | 0x200;
  }
  uVar18 = uVar26 - (uVar26 >> 1 & 0x55555555);
  uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
  uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
  uVar18 = uVar18 + (uVar18 >> 8);
  uVar24 = uVar18 + (uVar18 >> 0x10) & 0x3f;
  uVar18 = DAT_05582b78;
  if (uVar24 == 0) goto LAB_0169b990;
  uVar18 = DAT_05582b74;
  DAT_05582b70 = DAT_05582b78;
  if (iVar12 == 0) {
    lVar19 = *(long *)puVar10;
    local_218 = (undefined **)CONCAT44(local_218._4_4_,local_84);
    DAT_05582b70 = DAT_05582b74;
    uVar18 = DAT_05582b78;
    if (lVar19 == 0) {
LAB_0169bdcc:
      DAT_05582b78 = uVar17;
      DAT_05582b74 = uVar18;
      iVar12 = -1;
    }
    else {
      puVar20 = *(undefined8 **)(lVar19 + 0x10);
      if ((*(byte *)(lVar19 + 0x453) & 1) != 0) {
        uVar18 = DAT_05582b78;
        if (puVar20 != (undefined8 *)0x0) {
          uVar18 = DAT_05582b78;
          if ((long *)puVar20[0x26] != (long *)0x0) {
            DAT_05582b74 = DAT_05582b78;
            DAT_05582b78 = uVar17;
            lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))();
            uVar18 = DAT_05582b74;
            uVar17 = DAT_05582b78;
            if (lVar19 != 0) goto LAB_0169bdc0;
          }
        }
        goto LAB_0169bdcc;
      }
      DAT_05582b74 = DAT_05582b78;
      DAT_05582b78 = uVar17;
      lVar19 = (**(code **)(*(long *)*puVar20 + 0x38))();
      uVar18 = DAT_05582b74;
      uVar17 = DAT_05582b78;
      if (lVar19 == 0) goto LAB_0169bdcc;
      lVar19 = lVar19 + 0x70;
LAB_0169bdc0:
      uVar18 = DAT_05582b74;
      uVar17 = DAT_05582b78;
      if (7 < (uint)local_218) goto LAB_0169bdcc;
      lVar15 = lVar19 + 0x119228 + ((ulong)local_218 & 0xffffffff) * 0xfa08;
      if (7 < (uint)local_218) {
        lVar15 = lVar19 + 0x119228;
      }
      if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
         (puVar20 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar20 == (undefined8 *)0x0)) {
        iVar12 = (int)*(char *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x289f8);
      }
      else {
        uVar14 = (**(code **)*puVar20)();
        iVar12 = (int)*(char *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x289f8);
        if ((((uVar14 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
           (puVar20 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar20 != (undefined8 *)0x0))
        {
          (**(code **)*puVar20)();
        }
      }
    }
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar12);
    local_218 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_210 = "GetSRankonHHA";
    FUN_0279ac70(&local_b0,&local_218,1);
    uVar18 = DAT_05582b70;
    DAT_05582b70 = DAT_05582b74;
    uVar17 = DAT_05582b78;
  }
  uVar18 = uVar18 ^ uVar18 << 0xb;
  uVar18 = uVar18 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar18 ^ DAT_05582b7c;
  if (uVar26 == 0) {
    uVar30 = 0xffffffff;
  }
  else {
    uVar30 = 0xffffffff;
    iVar12 = (int)((ulong)uVar18 * (ulong)uVar24 >> 0x20) + 2;
    do {
      iVar12 = iVar12 + -1;
      if (iVar12 < 2) {
        uVar26 = uVar26 - 1 & (uVar26 ^ 0xffffffff);
        uVar26 = uVar26 - (uVar26 >> 1 & 0x55555555);
        uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
        uVar26 = uVar26 + (uVar26 >> 4) & 0xf0f0f0f;
        uVar26 = uVar26 + (uVar26 >> 8);
        uVar30 = uVar26 + (uVar26 >> 0x10) & 0x3f;
        break;
      }
      uVar26 = uVar26 - 1 & uVar26;
    } while (uVar26 != 0);
  }
  lVar19 = *(long *)puVar10;
  local_218 = (undefined **)CONCAT44(local_218._4_4_,uVar29);
  if (lVar19 == 0) {
    DAT_05582b74 = uVar17;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar18;
    return;
  }
  puVar20 = *(undefined8 **)(lVar19 + 0x10);
  DAT_05582b74 = uVar17;
  DAT_05582b78 = DAT_05582b7c;
  if ((*(byte *)(lVar19 + 0x453) & 1) == 0) {
    DAT_05582b7c = uVar18;
    lVar19 = (**(code **)(*(long *)*puVar20 + 0x38))();
    if (lVar19 == 0) {
      return;
    }
    lVar19 = lVar19 + 0x70;
  }
  else {
    if (puVar20 == (undefined8 *)0x0) {
      DAT_05582b7c = uVar18;
      return;
    }
    if ((long *)puVar20[0x26] == (long *)0x0) {
      DAT_05582b7c = uVar18;
      return;
    }
    DAT_05582b7c = uVar18;
    lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))();
    if (lVar19 == 0) {
      return;
    }
  }
  if (7 < (uint)local_218) {
    return;
  }
  lVar15 = lVar19 + 0x119228 + ((ulong)local_218 & 0xffffffff) * 0xfa08;
  if (7 < (uint)local_218) {
    lVar15 = lVar19 + 0x119228;
  }
  if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
     (puVar20 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar20 == (undefined8 *)0x0)) {
    cVar28 = *(char *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x289f8);
  }
  else {
    uVar14 = (**(code **)*puVar20)();
    cVar28 = *(char *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x289f8);
    if ((((uVar14 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
       (puVar20 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar20 != (undefined8 *)0x0)) {
      (**(code **)*puVar20)();
    }
  }
  if (cVar28 == -1) {
    return;
  }
  local_78 = 0xfffe;
  local_6c[0] = uVar30;
  FUN_0277d4ac(&local_78);
  switch(local_6c[0]) {
  case 0:
    lVar19 = *(long *)(param_1 + 0xb18);
    uVar27 = 1;
    goto LAB_0169c964;
  case 1:
    lVar19 = *(long *)(param_1 + 0xb18);
    uVar27 = 2;
LAB_0169c964:
    pcVar23 = (char *)(lVar19 + 0xcd);
    puVar20 = (undefined8 *)(lVar19 + 0x5c);
    break;
  case 2:
    uVar27 = 5;
    pcVar23 = (char *)(*(long *)(param_1 + 0xb18) + 0xce);
    puVar20 = (undefined8 *)(*(long *)(param_1 + 0xb18) + 100);
    break;
  case 3:
    uVar27 = 10;
    pcVar23 = (char *)(*(long *)(param_1 + 0xb18) + 0x11c);
    puVar20 = (undefined8 *)(*(long *)(param_1 + 0xb18) + 0xbc);
    break;
  case 4:
    uVar27 = 0xb;
    pcVar23 = (char *)(*(long *)(param_1 + 0xb18) + 0x11d);
    puVar20 = (undefined8 *)(*(long *)(param_1 + 0xb18) + 0xc4);
    break;
  case 5:
    uVar27 = 0xc;
    pcVar23 = (char *)(*(long *)(param_1 + 0xb18) + 0x11b);
    puVar20 = (undefined8 *)(*(long *)(param_1 + 0xb18) + 0xb4);
    break;
  case 6:
    uVar27 = 0xf;
    pcVar23 = (char *)(*(long *)(param_1 + 0xb18) + 0xd1);
    puVar20 = (undefined8 *)(*(long *)(param_1 + 0xb18) + 0x7c);
    break;
  case 7:
    uVar27 = 0x14;
    pcVar23 = (char *)(*(long *)(param_1 + 0xb18) + 0xd2);
    puVar20 = (undefined8 *)(*(long *)(param_1 + 0xb18) + 0x84);
    break;
  case 8:
    uVar27 = 0x19;
    pcVar23 = (char *)(*(long *)(param_1 + 0xb18) + 0xd3);
    puVar20 = (undefined8 *)(*(long *)(param_1 + 0xb18) + 0x8c);
    break;
  case 9:
    uVar27 = 0x1e;
    pcVar23 = (char *)(*(long *)(param_1 + 0xb18) + 0xd6);
    puVar20 = (undefined8 *)(*(long *)(param_1 + 0xb18) + 0xa4);
    break;
  default:
    goto switchD_0169bfa4_default;
  }
  uVar14 = *(ulong *)(param_1 + 8);
  local_78 = *puVar20;
  cVar9 = *pcVar23;
  local_b0 = (undefined *)uVar14;
  iVar12 = nn::time::GetDayOfWeek
                     ((int)(short)uVar14,(int)(char)(uVar14 >> 0x10),(int)(char)(uVar14 >> 0x18));
  local_218 = (undefined **)CONCAT44(local_218._4_4_,iVar12);
  if (iVar12 == 0) {
    uVar29 = (uint)(uVar14 >> 0x10);
    uVar17 = (uint)(uVar14 >> 0x18);
  }
  else {
    do {
      lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
      local_218 = (undefined **)(lVar19 + -0x15180);
      local_b0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_218);
      iVar12 = nn::time::GetDayOfWeek
                         ((int)(short)local_b0,((int)local_b0 << 8) >> 0x18,(int)local_b0 >> 0x18);
      local_218 = (undefined **)CONCAT44(local_218._4_4_,iVar12);
    } while (iVar12 != 0);
    uVar14 = (ulong)local_b0 & 0xffff;
    uVar29 = (uint)local_b0._2_1_;
    uVar17 = (uint)local_b0._3_1_;
  }
  uVar26 = (uint)uVar14 & 0xffff;
  uVar14 = nn::time::IsValidDate(uVar26,uVar29 & 0xff,uVar17 & 0xff);
  uVar7 = *(undefined4 *)(&DAT_041769c0 + (long)cVar9 * 4);
  FUN_01b46be0(&local_218);
  uStack_1c0 = 0;
  local_218 = &PTR_LAB_049bb3c8;
  uStack_1d0 = 0;
  local_1cc = 0;
  uStack_1c8 = 0;
  uStack_1c2 = 0;
  local_1c4 = 0xfffe;
  uStack_1e0 = 0;
  local_1dc = 0;
  uStack_1d8 = 0;
  local_1d4 = 0;
  FUN_0277d4ac(&local_1c4);
  local_a0 = 0;
  local_b0 = (undefined *)0x0;
  local_a8 = 0;
  local_94 = 0xfffe;
  FUN_0277d4ac(&local_94);
  lVar19 = *(long *)(param_1 + 0xb18);
  local_b0 = *(undefined **)(lVar19 + 8);
  local_a8._4_4_ = *(undefined4 *)(lVar19 + 0x20);
  local_a8._0_4_ = *(undefined4 *)(lVar19 + 0x14);
  local_a0 = *(undefined4 *)(lVar19 + 0x18);
  uStack_98 = *(undefined4 *)(lVar19 + 0x110);
  local_94._0_4_ = (undefined4)local_78;
  local_94._4_4_ = local_78._4_4_;
  local_9c = uVar7;
  if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar12 != 0)) {
    FUN_00dd5f80(PTR_DAT_04bb8aa0);
    __cxa_guard_release(PTR_DAT_04bb8aa8);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
    uVar21 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar21 * 4) == 0x50) goto LAB_0169cb8c;
      uVar21 = uVar21 + 1;
    } while (*(uint *)PTR_DAT_04bb8aa0 != uVar21);
  }
  uVar21 = 0;
LAB_0169cb8c:
  local_1f8 = (undefined4)uVar21;
  local_1f4 = 0xb;
  local_1f0 = CONCAT31(local_1f0._1_3_,uVar27);
  uVar26 = uVar17 << 0x18 | (uVar29 & 0xff) << 0x10 | uVar26;
  local_1e4 = 0;
  if ((uVar14 & 1) == 0) {
    uVar26 = 0;
  }
  local_1ec = *(ulong *)PTR_DAT_04bb37e0;
  uStack_1e0 = SUB84(local_b0,0);
  local_1dc = (undefined4)((ulong)local_b0 >> 0x20);
  uStack_1d8 = (undefined4)local_a8;
  local_1d4 = local_a8._4_4_;
  uStack_1d0 = local_a0;
  local_1cc = local_9c;
  uStack_1c8 = uStack_98;
  local_210 = (char *)CONCAT44(uVar26,(int)cVar28);
  local_1c4 = (undefined2)(undefined4)local_94;
  uStack_1c2 = (undefined2)((uint)(undefined4)local_94 >> 0x10);
  uStack_1c0 = local_94._4_4_;
  lVar19 = (*(code *)local_218[4])(&local_218,*(undefined8 *)PTR_DAT_04bc0580);
  if (lVar19 != 0) {
LAB_0169c908:
    plVar22 = *(long **)PTR_DAT_04bb4fa8;
    lVar15 = *plVar22;
    plVar16 = (long *)(*(int *)((long)plVar22 + 0x14) + lVar19);
    *plVar22 = (long)plVar16;
    *plVar16 = lVar15;
    plVar16[1] = (long)plVar22;
    if (lVar15 != 0) {
      *(long **)(lVar15 + 8) = plVar16;
    }
    *(int *)(plVar22 + 2) = (int)plVar22[2] + 1;
  }
switchD_0169bfa4_default:
  return;
}

