
void FUN_03a4f7f0(long param_1,undefined8 param_2,long param_3,uint param_4,undefined4 param_5,
                 undefined8 param_6,long param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  float *pfVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c4;
  float fStack_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float fStack_ac;
  float *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  uint local_90;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 local_78;
  
  if ((((*(byte *)(param_1 + 0x3c9) ^ 0xff) & 3) == 0) && (DAT_05aea958 != 0)) {
    plVar5 = *(long **)(param_1 + 0x3e0);
    lVar9 = *(long *)(DAT_05aea958 + 0x18);
    uVar3 = 1 << (ulong)(param_4 & 0x1f);
    uVar2 = *(uint *)(plVar5 + 0x21);
    uVar7 = *(uint *)(lVar9 + 0x1b0);
    uVar8 = (ulong)uVar7;
    if (0 < (int)uVar2) {
      if ((int)uVar7 < 1) {
        return;
      }
      uVar10 = 0;
      do {
        lVar13 = (long)*(int *)((long)(plVar5 + 0x11) + uVar10 * 4);
        if ((*(uint *)(*(long *)(lVar9 + 0x1b8) + lVar13 * 4) & uVar3) != 0) goto LAB_03a4f8f0;
        uVar12 = 0;
        puVar11 = (uint *)(*(long *)(lVar9 + 0x1b8) + 0x300 + lVar13 * 4);
        do {
          if (uVar8 - 1 == uVar12) goto LAB_03a4f884;
          uVar14 = *puVar11;
          puVar11 = puVar11 + 0xc0;
          uVar12 = uVar12 + 1;
        } while ((uVar14 & uVar3) == 0);
        if (uVar12 < uVar8) goto LAB_03a4f8f0;
LAB_03a4f884:
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar2);
    }
    if (0 < (int)uVar7) {
      if ((*(uint *)(*(long *)(lVar9 + 0x1b8) + 0xfc) & uVar3) == 0) {
        uVar10 = 0;
        puVar11 = (uint *)(*(long *)(lVar9 + 0x1b8) + 0x3fc);
        do {
          if (uVar8 - 1 == uVar10) {
            return;
          }
          uVar7 = *puVar11;
          puVar11 = puVar11 + 0xc0;
          uVar10 = uVar10 + 1;
        } while ((uVar7 & uVar3) == 0);
        if (uVar8 <= uVar10) {
          return;
        }
      }
LAB_03a4f8f0:
      uVar14 = (uint)*(byte *)(param_1 + 8);
      uVar7 = uVar14;
      if ((*(byte *)(DAT_05aea958 + 0x39c) & 1) == 0) {
        lVar9 = *(long *)(param_3 + 0x10);
        if (*(uint *)(param_3 + 8) <= uVar14) {
          uVar7 = 0;
        }
        lVar13 = lVar9 + (ulong)uVar7 * 0x23c0 + 0x7e8;
      }
      else {
        uVar4 = *(byte *)(param_1 + 0x3c9) >> 3 & 1;
        if (param_4 == 8) {
          uVar4 = 1;
        }
        uVar1 = 2;
        if (param_4 != 0x17) {
          uVar1 = uVar4;
        }
        lVar9 = *(long *)(param_3 + 0x10);
        if (*(uint *)(param_3 + 8) <= uVar14) {
          uVar7 = 0;
        }
        lVar13 = lVar9 + (ulong)uVar7 * 0x23c0 + (ulong)uVar1 * 0x7c0 + 0x8c8;
      }
      *plVar5 = lVar9 + (ulong)uVar7 * 0x23c0 + 0xec8;
      plVar5[1] = lVar13;
      FUN_03b05b60(plVar5,*(undefined8 *)(DAT_05aea958 + 0x18));
      local_78 = *(undefined8 *)(param_1 + 0x3e0);
      local_a0 = 0xffffffff;
      uStack_80 = 3;
      if (param_4 != 8) {
        uStack_80 = 0;
      }
      local_84 = 0;
      if (param_7 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (ulong)*(byte *)(param_7 + 0x39);
      }
      pfVar6 = (float *)(*(long *)(param_1 + 0x18) + uVar8 * 0x410);
      uStack_138 = *(undefined8 *)(pfVar6 + 2);
      local_140 = *(undefined8 *)pfVar6;
      local_a8 = pfVar6 + 0x18;
      uStack_128 = *(undefined8 *)(pfVar6 + 6);
      local_130 = *(undefined8 *)(pfVar6 + 4);
      uStack_118 = *(undefined8 *)(pfVar6 + 10);
      local_120 = *(undefined8 *)(pfVar6 + 8);
      uStack_108 = *(undefined8 *)(pfVar6 + 0x32);
      local_110 = *(undefined8 *)(pfVar6 + 0x30);
      uStack_f8 = *(undefined8 *)(pfVar6 + 0x36);
      local_100 = *(undefined8 *)(pfVar6 + 0x34);
      uStack_e8 = *(undefined8 *)(pfVar6 + 0x3a);
      local_f0 = *(undefined8 *)(pfVar6 + 0x38);
      uStack_d8 = *(undefined8 *)(pfVar6 + 0x3e);
      local_e0 = *(undefined8 *)(pfVar6 + 0x3c);
      fVar15 = pfVar6[3];
      fVar17 = pfVar6[7];
      fVar16 = pfVar6[0xb];
      fStack_cc = (-(pfVar6[5] * fVar17) - fVar15 * pfVar6[1]) - fVar16 * pfVar6[9];
      local_d0 = (-(pfVar6[4] * fVar17) - fVar15 * *pfVar6) - fVar16 * pfVar6[8];
      local_c8 = (-(pfVar6[6] * fVar17) - fVar15 * pfVar6[2]) - fVar16 * pfVar6[10];
      local_c4 = pfVar6[0x50];
      fStack_c0 = pfVar6[0x51];
      local_bc = pfVar6[0x53];
      local_b8 = pfVar6[0x52];
      local_b4 = pfVar6[0x55];
      local_b0 = pfVar6[0x57];
      fStack_ac = pfVar6[0x58];
      local_98 = param_2;
      local_90 = uVar14;
      local_8c = param_4;
      uStack_88 = param_5;
      FUN_03b098f0(DAT_05aea958,param_2,plVar5 + 0x11,(ulong)uVar2,uVar3,&local_140,
                   *(byte *)(param_1 + 0x3c9) >> 2 & 1);
    }
  }
  return;
}

