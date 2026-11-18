
void FUN_03737980(undefined2 *param_1,long param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  undefined *local_150;
  undefined4 local_148;
  undefined *local_140;
  undefined1 *puStack_138;
  undefined4 local_130;
  undefined1 local_12c [15];
  undefined1 local_11d;
  undefined2 local_118;
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
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_94;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined2 local_3c;
  undefined8 local_38;
  
  local_11d = 0;
  local_12c[0] = 0;
  local_130 = 0x10;
  local_118 = 0xffff;
  local_114 = 3;
  local_150 = PTR_DAT_04bcacd8 + 0x10;
  local_148 = *(undefined4 *)PTR_DAT_04bb3238;
  puStack_138 = local_12c;
  local_140 = PTR_DAT_04bb2ab0 + 0x10;
  local_60 = 0;
  uStack_58 = 0;
  local_38 = 0;
  local_4c = 0;
  uStack_44 = 0;
  local_110 = *(undefined2 *)PTR_DAT_04bb37e0;
  local_10e = PTR_DAT_04bb37e0[2];
  local_10d = PTR_DAT_04bb37e0[3];
  local_10c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_3c = 0;
  local_80 = 0xffffffff;
  uStack_78 = 0xffffffff00000000;
  local_70 = 0xffffffff;
  uStack_68 = 0xffffffffffffffff;
  local_50 = 0x244db4da;
  local_108 = local_110;
  local_106 = local_10e;
  local_105 = local_10d;
  local_104 = local_10c;
  local_100 = local_110;
  local_fe = local_10e;
  local_fd = local_10d;
  local_fc = local_10c;
  local_f8 = local_110;
  local_f6 = local_10e;
  local_f5 = local_10d;
  local_f4 = local_10c;
  local_f0 = local_110;
  local_ee = local_10e;
  local_ed = local_10d;
  local_ec = local_10c;
  local_e8 = local_110;
  local_e6 = local_10e;
  local_e5 = local_10d;
  local_e4 = local_10c;
  local_e0 = local_110;
  local_de = local_10e;
  local_dd = local_10d;
  local_dc = local_10c;
  local_d8 = local_110;
  local_d6 = local_10e;
  local_d5 = local_10d;
  local_d4 = local_10c;
  local_d0 = local_110;
  local_ce = local_10e;
  local_cd = local_10d;
  local_cc = local_10c;
  local_c8 = local_110;
  local_c6 = local_10e;
  local_c5 = local_10d;
  local_c4 = local_10c;
  local_c0 = local_110;
  local_be = local_10e;
  local_bd = local_10d;
  local_bc = local_10c;
  local_b8 = local_110;
  local_b6 = local_10e;
  local_b5 = local_10d;
  local_b4 = local_10c;
  local_b0 = local_110;
  local_ae = local_10e;
  local_ad = local_10d;
  local_ac = local_10c;
  local_a8 = local_110;
  local_a6 = local_10e;
  local_a5 = local_10d;
  local_a4 = local_10c;
  local_a0 = local_110;
  local_9e = local_10e;
  local_9d = local_10d;
  local_9c = local_10c;
  local_98 = local_110;
  local_96 = local_10e;
  local_95 = local_10d;
  local_94 = local_10c;
  local_90 = local_110;
  local_8e = local_10e;
  local_8d = local_10d;
  local_8c = local_10c;
  local_88 = local_110;
  local_86 = local_10e;
  local_85 = local_10d;
  local_84 = local_10c;
  if (*(int *)(param_2 + 0xe0) != 0) {
    plVar7 = *(long **)(param_2 + 0xe8);
    lVar8 = (long)*(int *)(param_2 + 0xe0) << 3;
    do {
      if ((*(ushort *)(*plVar7 + 0x114) & 1) != 0) {
        FUN_0373b290(&local_150);
        puVar3 = PTR_DAT_04bb27c0;
        lVar8 = *(long *)PTR_DAT_04bb39b0;
        if (lVar8 == 0) {
          uVar9 = (ulong)(byte)*PTR_DAT_04bb32e0;
          if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_03737c28;
LAB_03737c94:
          if (*(long *)PTR_DAT_04bb4718 == 0) goto LAB_03737cb0;
          uVar11 = *(uint *)(*(long *)PTR_DAT_04bb4718 + uVar9 * 4 + 0xde8);
        }
        else {
          pbVar10 = PTR_DAT_04bb32e0;
          if (*(int *)(lVar8 + 0x15c) != 0) {
            pbVar10 = (byte *)(lVar8 + 0x158);
          }
          uVar9 = (ulong)*pbVar10;
          if ((*pbVar10 < 8) ||
             (((*(int *)(lVar8 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
              (bVar2 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), uVar9 = (ulong)bVar2,
              bVar2 < 8)))) goto LAB_03737c94;
LAB_03737c28:
          if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
            lVar8 = **(long **)PTR_DAT_04bb27d0;
            bVar2 = *(byte *)(lVar8 + 0x473);
            pbVar10 = PTR_DAT_04bb5038;
            if ((long)(char)bVar2 != 0xffffffffffffffff) {
              puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
              if (7 < bVar2) {
                puVar1 = (uint *)(lVar8 + 0x48);
              }
              if ((*puVar1 & 8) != 0) {
                pbVar10 = (byte *)(lVar8 + 0x471);
              }
            }
            uVar9 = (ulong)*pbVar10;
            if (*pbVar10 < 8) goto LAB_03737c94;
          }
          uVar9 = (ulong)(byte)*PTR_DAT_04bb5038;
          if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_03737c94;
LAB_03737cb0:
          uVar11 = *(uint *)PTR_DAT_04bb3238;
        }
        if ((uVar11 != 0) && (lVar8 = *(long *)PTR_DAT_04bb27c0, lVar8 != 0)) {
          plVar7 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                             ((ulong)(uVar11 >> 0x11) & 0x7ff8));
          if ((plVar7 == (long *)0x0) ||
             (((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar7 + 0x46) != uVar11)))) {
            plVar7 = (long *)0x0;
          }
          if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
            plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            lVar8 = *(long *)puVar3;
            iVar4 = (**(code **)(*plVar6 + 0x60))();
            if (iVar4 < 0x11) {
              uVar11 = 1;
            }
            else {
              if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_03737d60;
              uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_03737d60:
            uVar11 = 0;
          }
          if (plVar7 != (long *)0x0) {
            if (((*PTR_DAT_04bb3778 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
              *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb3778);
            }
            uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3770);
            if (((uVar11 & uVar5) != 0) && (plVar7 = (long *)plVar7[0xc], plVar7 != (long *)0x0)) {
              if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar4 != 0)) {
                *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
                __cxa_guard_release(PTR_DAT_04bb37a0);
              }
              uVar9 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bb3798);
              if ((uVar9 & 1) != 0) {
                *param_1 = *(undefined2 *)((long)plVar7 + 0xc1b2);
                return;
              }
            }
          }
        }
        break;
      }
      plVar7 = plVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  FUN_007ef010(param_1,PTR_DAT_04bb3170);
  return;
}

