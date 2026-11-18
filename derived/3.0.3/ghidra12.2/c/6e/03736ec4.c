
void FUN_03736ec4(long param_1)

{
  uint *puVar1;
  byte bVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  long *local_180;
  char local_177;
  undefined *local_170;
  int local_168;
  undefined *local_160;
  undefined1 *puStack_158;
  undefined4 local_150;
  undefined1 local_14c [15];
  undefined1 local_13d;
  undefined2 local_138;
  undefined4 local_134;
  undefined2 local_130;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined4 local_12c;
  undefined2 local_128;
  undefined1 local_126;
  undefined1 local_125;
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
  undefined2 local_100;
  undefined1 local_fe;
  undefined1 local_fd;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined1 local_f5;
  undefined4 local_f4;
  undefined2 local_f0;
  undefined1 local_ee;
  undefined1 local_ed;
  undefined4 local_ec;
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
  undefined2 local_d0;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined1 local_be;
  undefined1 local_bd;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined2 local_5c;
  undefined8 local_58;
  long local_50;
  undefined1 local_48;
  undefined2 local_46;
  int local_24;
  
  puVar4 = PTR_DAT_04bb27c0;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
    return;
  }
  local_170 = (undefined *)CONCAT44(local_170._4_4_,0x1a);
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
  if (0xff < (uint)(int)sVar3) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 0x1a & 1) == 0) {
    return;
  }
  local_48 = 0;
  local_50 = 0;
  local_46 = *(undefined2 *)PTR_DAT_04bb3170;
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  if (lVar11 == 0) {
    uVar9 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_03736fbc;
LAB_03737028:
    if (*(long *)PTR_DAT_04bb4718 == 0) goto LAB_03737044;
    uVar13 = *(uint *)(*(long *)PTR_DAT_04bb4718 + uVar9 * 4 + 0xde8);
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar11 + 0x158);
    }
    uVar9 = (ulong)*pbVar10;
    if ((*pbVar10 < 8) ||
       (((*(int *)(lVar11 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (bVar2 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), uVar9 = (ulong)bVar2, bVar2 < 8))))
    goto LAB_03737028;
LAB_03736fbc:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar11 = **(long **)PTR_DAT_04bb27d0;
      bVar2 = *(byte *)(lVar11 + 0x473);
      pbVar10 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar1 = (uint *)(lVar11 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar10 = (byte *)(lVar11 + 0x471);
        }
      }
      uVar9 = (ulong)*pbVar10;
      if (*pbVar10 < 8) goto LAB_03737028;
    }
    uVar9 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_03737028;
LAB_03737044:
    uVar13 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar13 == 0) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return;
  }
  plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) + ((ulong)(uVar13 >> 0x11) & 0x7ff8)
                      );
  if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar12 + 0x46) != uVar13)) {
    plVar12 = (long *)0x0;
  }
  if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar4;
    iVar6 = (**(code **)(*plVar8 + 0x60))();
    if (iVar6 < 0x11) {
      uVar13 = 1;
      goto joined_r0x03737100;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x03737100;
    }
  }
  uVar13 = 0;
joined_r0x03737100:
  if (plVar12 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar7 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3770);
    puVar4 = PTR_DAT_04bb37a0;
    if (((uVar13 & uVar7) == 1) && (plVar12 = (long *)plVar12[0xc], plVar12 != (long *)0x0)) {
      if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37a0);
      }
      puVar5 = PTR_DAT_04bb3798;
      uVar9 = (**(code **)(*plVar12 + 0x10))(plVar12,PTR_DAT_04bb3798);
      if ((uVar9 & 1) != 0) {
        local_50 = plVar12[0x1835];
        local_48 = (undefined1)plVar12[0x1836];
        local_46 = *(undefined2 *)((long)plVar12 + 0xc1b2);
        local_150 = 0x10;
        local_13d = 0;
        local_14c[0] = 0;
        puStack_158 = local_14c;
        local_170 = PTR_DAT_04bcacd8 + 0x10;
        local_138 = 0xffff;
        local_160 = PTR_DAT_04bb2ab0 + 0x10;
        local_168 = *(int *)PTR_DAT_04bb3238;
        local_134 = 3;
        local_58 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_5c = 0;
        local_6c = 0;
        uStack_64 = 0;
        local_130 = *(undefined2 *)PTR_DAT_04bb37e0;
        local_12e = PTR_DAT_04bb37e0[2];
        local_12d = PTR_DAT_04bb37e0[3];
        local_12c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        local_a0 = 0xffffffff;
        uStack_98 = 0xffffffff00000000;
        local_90 = 0xffffffff;
        uStack_88 = 0xffffffffffffffff;
        local_70 = 0x244db4da;
        if (*(int *)(param_1 + 0xe0) != 0) {
          plVar12 = *(long **)(param_1 + 0xe8);
          lVar11 = (long)*(int *)(param_1 + 0xe0) << 3;
          do {
            if ((*(ushort *)(*plVar12 + 0x114) & 1) != 0) {
              local_128 = local_130;
              local_126 = local_12e;
              local_125 = local_12d;
              local_124 = local_12c;
              local_120 = local_130;
              local_11e = local_12e;
              local_11d = local_12d;
              local_11c = local_12c;
              local_118 = local_130;
              local_116 = local_12e;
              local_115 = local_12d;
              local_114 = local_12c;
              local_110 = local_130;
              local_10e = local_12e;
              local_10d = local_12d;
              local_10c = local_12c;
              local_108 = local_130;
              local_106 = local_12e;
              local_105 = local_12d;
              local_104 = local_12c;
              local_100 = local_130;
              local_fe = local_12e;
              local_fd = local_12d;
              local_fc = local_12c;
              local_f8 = local_130;
              local_f6 = local_12e;
              local_f5 = local_12d;
              local_f4 = local_12c;
              local_f0 = local_130;
              local_ee = local_12e;
              local_ed = local_12d;
              local_ec = local_12c;
              local_e8 = local_130;
              local_e6 = local_12e;
              local_e5 = local_12d;
              local_e4 = local_12c;
              local_e0 = local_130;
              local_de = local_12e;
              local_dd = local_12d;
              local_dc = local_12c;
              local_d8 = local_130;
              local_d6 = local_12e;
              local_d5 = local_12d;
              local_d4 = local_12c;
              local_d0 = local_130;
              local_ce = local_12e;
              local_cd = local_12d;
              local_cc = local_12c;
              local_c8 = local_130;
              local_c6 = local_12e;
              local_c5 = local_12d;
              local_c4 = local_12c;
              local_c0 = local_130;
              local_be = local_12e;
              local_bd = local_12d;
              local_bc = local_12c;
              local_b8 = local_130;
              local_b6 = local_12e;
              local_b5 = local_12d;
              local_b4 = local_12c;
              local_b0 = local_130;
              local_ae = local_12e;
              local_ad = local_12d;
              local_ac = local_12c;
              local_a8 = local_130;
              local_a6 = local_12e;
              local_a5 = local_12d;
              local_a4 = local_12c;
              FUN_0373b290(&local_170);
              local_24 = local_168;
              if (local_168 == 0) {
                return;
              }
              FUN_0071c7c4(&local_180,&local_24,0);
              plVar12 = local_180;
              if (local_180 != (long *)0x0) {
                if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
                  *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
                  __cxa_guard_release(PTR_DAT_04bb37d8);
                }
                uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
                if ((uVar9 & 1) == 0) {
                  local_177 = '\0';
                }
              }
              if (local_177 == '\0') {
                return;
              }
              if (local_180 == (long *)0x0) {
                return;
              }
              plVar12 = (long *)local_180[0xc];
              if (plVar12 == (long *)0x0) {
                return;
              }
              if (((*puVar4 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar6 != 0)) {
                *(undefined **)puVar5 = PTR_DAT_04bb37a8 + 0x10;
                __cxa_guard_release(PTR_DAT_04bb37a0);
              }
              uVar9 = (**(code **)(*plVar12 + 0x10))(plVar12,PTR_DAT_04bb3798);
              if ((uVar9 & 1) == 0) {
                return;
              }
              FUN_02346fe0(plVar12,&local_50);
              return;
            }
            plVar12 = plVar12 + 1;
            lVar11 = lVar11 + -8;
          } while (lVar11 != 0);
        }
      }
    }
  }
  return;
}

