
void FUN_03a39550(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  byte *pbVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 uVar9;
  long lVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint *puVar16;
  uint uVar17;
  undefined8 uVar18;
  uint uVar19;
  uint *local_130;
  uint *local_128;
  long local_120;
  undefined4 local_118;
  uint local_114;
  uint uStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  uint uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_b8;
  ulong local_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  lVar15 = *(long *)(param_1 + 0x248);
  uVar19 = (uint)*(byte *)(param_3 + 8);
  if (*(uint *)(lVar15 + 8) <= (uint)*(byte *)(param_3 + 8)) {
    uVar19 = 0;
  }
  puVar8 = (uint *)(*(long *)(lVar15 + 0x10) + (ulong)uVar19 * 0x23c0);
  if (*(char *)(*(long *)(param_1 + 8) + 0x990) == '\0') {
    uVar19 = 0;
  }
  else {
    uVar19 = (uint)(0.0 < *(float *)(param_1 + 0xe30) && *(char *)(param_1 + 0xbf8) != '\0');
  }
  puVar16 = puVar8 + 0xe;
  uVar7 = *puVar8;
  lVar10 = *(long *)(param_3 + 1000);
  bVar5 = 0;
  if (lVar10 != 0) {
    bVar5 = 0;
    if (0 < *(int *)(lVar10 + 0x7c)) {
      bVar5 = *(byte *)(lVar10 + 0x5d) >> 5 & 1;
    }
  }
  if ((*(byte *)(param_1 + 0x14c2) >> 6 & 1) == 0) {
    if (((*(byte *)(param_3 + 0x3c9) ^ 0xff) & 3) == 0) {
      bVar2 = false;
      if (DAT_05aea958 == 0) goto LAB_03a396f0;
      lVar10 = *(long *)(DAT_05aea958 + 0x18);
      uVar17 = *(uint *)(*(long *)(param_3 + 0x3e0) + 0x108);
      uVar6 = *(uint *)(lVar10 + 0x1b0);
      uVar12 = (ulong)uVar6;
      if (0 < (int)uVar17) {
        if ((int)uVar6 < 1) goto LAB_03a396ec;
        uVar13 = 0;
        do {
          lVar3 = (long)*(int *)(*(long *)(param_3 + 0x3e0) + 0x88 + uVar13 * 4);
          if ((*(uint *)(*(long *)(lVar10 + 0x1b8) + lVar3 * 4) >> 0x13 & 1) != 0)
          goto LAB_03a396fc;
          uVar14 = 0;
          lVar3 = *(long *)(lVar10 + 0x1b8) + 0x300 + lVar3 * 4;
          do {
            if (uVar12 - 1 == uVar14) goto LAB_03a39660;
            pbVar1 = (byte *)(lVar3 + 2);
            lVar3 = lVar3 + 0x300;
            uVar14 = uVar14 + 1;
          } while ((*pbVar1 >> 3 & 1) == 0);
          if (uVar14 < uVar12) goto LAB_03a396fc;
LAB_03a39660:
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar17);
      }
      if ((int)uVar6 < 1) goto LAB_03a396ec;
      if ((*(byte *)(*(long *)(lVar10 + 0x1b8) + 0xfe) >> 3 & 1) == 0) {
        uVar13 = 0;
        lVar10 = *(long *)(lVar10 + 0x1b8) + 0x3fc;
        do {
          if (uVar12 - 1 == uVar13) {
            uVar13 = uVar12;
            break;
          }
          pbVar1 = (byte *)(lVar10 + 2);
          lVar10 = lVar10 + 0x300;
          uVar13 = uVar13 + 1;
        } while ((*pbVar1 >> 3 & 1) == 0);
        bVar2 = uVar13 < uVar12;
        goto LAB_03a396f0;
      }
    }
    else {
LAB_03a396ec:
      bVar2 = false;
LAB_03a396f0:
      if ((bVar5 | bVar2) != 1) {
        uVar17 = 0;
        goto LAB_03a3970c;
      }
    }
LAB_03a396fc:
    uVar17 = *(byte *)(lVar15 + 0x1a) >> 3 & 1;
  }
  else {
    uVar17 = 1;
  }
LAB_03a3970c:
  puVar8 = puVar8 + 4;
  if ((*(long *)(param_4 + 0x2a8) == 0) || (*(char *)(*(long *)(param_4 + 8) + 0x970) == '\0')) {
    bVar2 = false;
  }
  else if ((*(byte *)(param_3 + 0x3c8) >> 2 & 1) == 0) {
    bVar2 = true;
  }
  else {
    FUN_0392b4a0(*(long *)(param_4 + 0x2a8),param_2);
    bVar2 = *(char *)(*(long *)(param_4 + 0x2a8) + 0x218) != '\0';
  }
  if (*(char *)(*(long *)(param_4 + 8) + 0x950) == '\0' || *(long *)(param_4 + 0x2c0) == 0) {
    bVar5 = *(byte *)(param_3 + 8);
LAB_03a39820:
    FUN_03a9aca8(param_4,bVar5);
    if (!bVar2) {
      uVar17 = 0;
      goto LAB_03a3989c;
    }
    FUN_0392c3e0(*(undefined8 *)(param_4 + 0x2a8),param_2,*(undefined1 *)(param_3 + 8),
                 *(undefined8 *)(param_3 + 0x318));
    uVar17 = 0;
    bVar2 = true;
  }
  else {
    bVar5 = *(byte *)(param_3 + 8);
    if ((*(byte *)(param_4 + 0x280) & 1) != 0) goto LAB_03a39820;
    uVar6 = (uint)bVar5;
    if (*(uint *)(lVar15 + 8) <= (uint)bVar5) {
      uVar6 = 0;
    }
    lVar3 = *(long *)(lVar15 + 0x10) + (ulong)uVar6 * 0x23c0;
    lVar10 = 0;
    if ((*(byte *)(lVar3 + 9) & 0x10) != 0) {
      lVar10 = lVar3 + 0xfa8;
    }
    if (((uVar19 | uVar17) & (uVar7 & 2) >> 1) == 0) {
      lVar3 = *(long *)(lVar15 + 0x10) + (ulong)uVar6 * 0x23c0;
      FUN_03a9ab30(param_4,param_2,param_3,lVar3 + 0x708,lVar3 + 0x7e8,lVar10,lVar3 + 0x8c8,puVar16,
                   puVar8);
    }
    else {
      FUN_03af92d4(lVar15,param_2);
      uVar6 = (uint)*(byte *)(param_3 + 8);
      if (*(uint *)(lVar15 + 8) <= (uint)*(byte *)(param_3 + 8)) {
        uVar6 = 0;
      }
      lVar3 = *(long *)(lVar15 + 0x10) + (ulong)uVar6 * 0x23c0;
      FUN_03a9ab30(param_4,param_2,param_3,lVar3 + 0x708,lVar3 + 0x7e8,lVar10,lVar3 + 0x8c8,
                   *(undefined8 *)(param_3 + 0x318),*(undefined8 *)(param_3 + 800));
      FUN_03af94d0(lVar15,*(undefined1 *)(param_3 + 8));
    }
    uVar17 = uVar17 ^ 1;
    FUN_03a9aca8(param_4,*(undefined1 *)(param_3 + 8));
LAB_03a3989c:
    bVar2 = false;
  }
  local_114 = 0;
  uStack_110 = 0;
  local_118 = 0x2000;
  local_104 = 0xffff;
  uStack_100 = 0xf;
  local_10c = 0;
  uStack_108 = 0;
  local_120 = *(long *)(param_3 + 1000) + 0x40;
  local_128 = (uint *)0x40d716b;
  local_130 = (uint *)(PTR_DAT_04bb2020 + 0x10);
  local_fc = 1;
  uStack_f8 = 0;
  local_f4 = 0xffffffff;
  uStack_f0 = 0xffffffff;
  local_ec = 0;
  local_e8 = &PTR_LAB_04b6bbc0;
  FUN_039eec04(param_3,param_2,&local_130);
  if ((uVar7 & 2) == 0) {
    uVar17 = 1;
  }
  if (uVar19 != 0 || uVar17 != 0) goto joined_r0x03a39a40;
  if (bVar2) {
    uVar7 = *(uint *)(*(long *)(*(long *)(param_3 + 0x318) + 0x20) + 0x58);
    if (uVar7 != 0xffffffff) {
      if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
        uVar17 = uVar7 - *(ushort *)(DAT_05ae78f0 + 0x3da);
        if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar17) {
          uVar17 = 0;
        }
        if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar17 * 0x20 + 4) >> 2 & 1) ==
            0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar7 & 0x3f);
          goto LAB_03a39a30;
        }
      }
      if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
        uVar9 = 0x112;
        uVar11 = 0x12;
      }
      else {
        uVar9 = 0x111;
        uVar11 = 0x11;
      }
      if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
        uVar11 = uVar9;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar11);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
  }
LAB_03a39a30:
  FUN_03af8fe0(lVar15,param_2,*(undefined1 *)(param_3 + 8));
joined_r0x03a39a40:
  if (uVar19 != 0) {
    bVar5 = *(byte *)(param_3 + 8);
    uStack_110 = uStack_110 & 0xffffff00;
    uStack_108 = 0;
    local_104 = 0;
    uStack_100 = uStack_100 & 0xffffff00;
    uVar7 = (uint)bVar5;
    if (*(uint *)(lVar15 + 8) <= (uint)bVar5) {
      uVar7 = 0;
    }
    uStack_f8 = 0;
    local_f4 = 0;
    uStack_f0 = 0;
    local_ec = 0;
    local_120 = *(long *)(lVar15 + 0x10) + (ulong)uVar7 * 0x23c0 + 0x708;
    local_118 = 0;
    local_114 = 0;
    uVar12 = (ulong)local_e8 >> 0x20;
    local_e8 = (undefined **)CONCAT44((int)uVar12,0x3f800000);
    local_130 = puVar16;
    local_128 = puVar8;
    FUN_03a3e230(param_1 + 0x4a8,param_2,bVar5,&local_130);
  }
  if ((param_5 & 1) != 0) {
    FUN_038e4cec(&local_130);
    local_114 = local_114 | 0xf;
    local_130 = (uint *)((ulong)local_130 & 0xfffffffeffff0000);
    FUN_038e4d90(&local_130,param_2);
    plVar4 = *(long **)(param_3 + 0x318);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
      FUN_038e77e4(*(undefined8 *)(param_3 + 800),param_2,*(undefined8 *)(param_3 + 0x318));
    }
    lVar10 = *(long *)(lVar15 + 0x10);
    uVar7 = (uint)*(byte *)(param_3 + 8);
    if (*(uint *)(lVar15 + 8) <= (uint)*(byte *)(param_3 + 8)) {
      uVar7 = 0;
    }
    uVar18 = *(undefined8 *)
              (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x120) + 8) + 0x28)
    ;
    FUN_03907810(uVar18,param_2);
    FUN_0394a420(param_2,uVar18,lVar10 + (ulong)uVar7 * 0x23c0 + 0x7e8);
    if (uVar19 != 0) {
      bVar5 = *(byte *)(param_3 + 8);
      local_98 = 0;
      local_b0 = *(ulong *)(param_3 + 800);
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_b8 = *(undefined8 *)(param_3 + 0x318);
      uVar19 = (uint)bVar5;
      if (*(uint *)(lVar15 + 8) <= (uint)bVar5) {
        uVar19 = 0;
      }
      local_a8 = *(long *)(lVar15 + 0x10) + (ulong)uVar19 * 0x23c0 + 0x708;
      uStack_a0 = 0;
      local_70 = 0x3f800000;
      FUN_03a3e230(param_1 + 0x4a8,param_2,bVar5,&local_b8);
    }
    (**(code **)(*(long *)puVar16 + 0x38))(puVar16,param_2);
    FUN_038e77e4(puVar8,param_2,puVar16);
    local_114 = local_114 & 0xfffffff0 | 8;
    FUN_038e4d90(&local_130,param_2);
    local_b0 = local_b0 & 0xffffffff00000000;
    uVar19 = (uint)*(byte *)(param_3 + 8);
    if (*(uint *)(lVar15 + 8) <= (uint)*(byte *)(param_3 + 8)) {
      uVar19 = 0;
    }
    local_b8 = 0x3f800000;
    FUN_0394c770(param_2,*(long *)(lVar15 + 0x10) + (ulong)uVar19 * 0x23c0 + 0x708,&local_b8);
  }
  FUN_03af4c6c(lVar15,*(undefined1 *)(param_3 + 8));
  FUN_03a3a270(param_1 + 0x250,param_2,*(undefined1 *)(param_3 + 8),puVar16,puVar8);
  return;
}

