
void FUN_03a67ba0(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  undefined *puVar11;
  bool bVar12;
  undefined4 *in_x5;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint local_108;
  uint local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined **local_90;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  undefined8 local_74;
  
  uVar7 = *(ushort *)(in_x5 + 0xc);
  uVar6 = *(ushort *)((long)in_x5 + 0x32);
  uVar13 = (uint)uVar7;
  if (uVar7 < 2) {
    uVar13 = 1;
  }
  uVar8 = uVar13 >> 1;
  uVar2 = (uint)uVar6;
  if (*(short *)((long)in_x5 + 0x3a) != 3) {
    uVar2 = 1;
  }
  if (uVar2 == uVar6 || uVar2 < uVar6) {
    uVar2 = (uint)uVar6;
  }
  uVar6 = *(ushort *)(param_1 + 0x80);
  uVar9 = uVar2 >> 1;
  uVar14 = (uint)uVar6;
  if (uVar6 < 2) {
    uVar14 = 1;
  }
  if (uVar14 == uVar8) {
    uVar6 = *(ushort *)(param_1 + 0x82);
    uVar14 = (uint)uVar6;
    if (*(short *)(param_1 + 0x8a) != 3) {
      uVar14 = 1;
    }
    if (uVar14 == uVar6 || uVar14 < uVar6) {
      uVar14 = (uint)uVar6;
    }
    if (((uVar14 == uVar9) && (*(short *)(param_1 + 0xe8) == *(short *)(in_x5 + 0x26))) &&
       (bVar5 = *(byte *)(param_1 + 0x9e), bVar5 == *(byte *)(*(long *)(param_1 + 0x318) + 0x4e)))
    goto LAB_03a67c94;
  }
  FUN_0390a734(param_1 + 0x50,1,*(undefined2 *)(in_x5 + 0x26),uVar8,uVar9,1,1,
               *(undefined1 *)(*(long *)(param_1 + 0x318) + 0x4e),0,1);
  bVar5 = *(byte *)(param_1 + 0x9e);
LAB_03a67c94:
  local_108 = *(uint *)(param_1 + 800);
  local_104 = *(uint *)(param_1 + 0x324);
  *(uint *)(param_1 + 0x50) = local_108;
  *(uint *)(param_1 + 0x54) = local_104;
  local_100 = *(undefined8 *)(param_1 + 0x328);
  uStack_f8 = *(undefined8 *)(param_1 + 0x330);
  *(undefined8 *)(param_1 + 0x58) = local_100;
  *(undefined8 *)(param_1 + 0x60) = uStack_f8;
  if ((bVar5 >> 1 & 1) == 0) {
    bVar12 = false;
  }
  else {
    bVar12 = 0x11 < *(ushort *)(param_1 + 0xe8) && *(ushort *)(param_1 + 0xe8) - 0x59 < 0xffffffd6;
  }
  FUN_038fd3e0(param_1 + 0xa0,&local_108,(ushort *)(param_1 + 0x80),0,
               *(undefined8 *)(param_1 + 0xe0),bVar12,1);
  FUN_01560750(param_1 + 0x158,param_1 + 0x50,*(undefined1 *)(param_1 + 0x216),
               *(undefined2 *)(param_1 + 0x214));
  fVar18 = (float)uVar8;
  *(long *)(param_1 + 0x110) = param_1 + 0x158;
  puVar11 = PTR_DAT_04bd0ea8;
  fVar21 = (float)uVar9;
  local_88 = 0x7f7fffff7f7fffff;
  local_80 = 0xff7fffffff7fffff;
  local_90 = &PTR_LAB_04b65888;
  local_74 = 0x3f80000000000000;
  fVar23 = fVar18;
  if (1 < uVar13) {
    fVar23 = 0.0;
  }
  fVar19 = 0.0;
  if (1 < uVar13) {
    fVar19 = fVar18;
  }
  *(float *)(param_1 + 0xf8) = fVar18;
  *(float *)(param_1 + 0xfc) = fVar21;
  local_78 = *(uint *)puVar11;
  *(float *)(param_1 + 0x100) = fVar23;
  fVar23 = fVar21;
  if (1 < uVar2) {
    fVar23 = 0.0;
  }
  fVar22 = 0.0;
  if (1 < uVar2) {
    fVar22 = fVar21;
  }
  *(float *)(param_1 + 0x108) = fVar19;
  *(float *)(param_1 + 0x104) = fVar23;
  *(float *)(param_1 + 0x10c) = fVar22;
  if (local_78 < 6) {
    if ((1 << (ulong)(local_78 & 0x1f) & 0x39U) == 0) {
      fVar23 = fVar21;
      if (1 < uVar2) {
        fVar23 = 0.0;
      }
      fVar19 = 0.0;
      if (1 < uVar2) {
        fVar19 = fVar21;
      }
      fVar22 = fVar18;
      if (1 < uVar13) {
        fVar22 = 0.0;
      }
      fVar20 = 0.0;
      if (1 < uVar13) {
        fVar20 = fVar18;
      }
    }
    else {
      fVar23 = fVar18;
      if (1 < uVar13) {
        fVar23 = 0.0;
      }
      fVar19 = 0.0;
      if (1 < uVar13) {
        fVar19 = fVar18;
      }
      fVar22 = fVar21;
      if (1 < uVar2) {
        fVar22 = 0.0;
      }
      fVar20 = 0.0;
      if (1 < uVar2) {
        fVar20 = fVar21;
      }
    }
    local_88 = CONCAT44(fVar22,fVar23);
    local_80 = CONCAT44(fVar20,fVar19);
  }
  FUN_038e77e4(&local_90,param_2,param_1 + 0xf0);
  (**(code **)(*(long *)(param_1 + 0xf0) + 0x38))(param_1 + 0xf0,param_2);
  *(undefined4 *)(param_1 + 0x238) = *in_x5;
  *(undefined4 *)(param_1 + 0x23c) = in_x5[1];
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(in_x5 + 2);
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(in_x5 + 4);
  *(undefined4 *)(param_1 + 0x250) = in_x5[6];
  *(undefined4 *)(param_1 + 0x254) = in_x5[7];
  *(undefined8 *)(param_1 + 600) = *(undefined8 *)(in_x5 + 8);
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(in_x5 + 10);
  uVar17 = *(undefined8 *)(in_x5 + 0x10);
  uVar3 = *(undefined8 *)(in_x5 + 0xc);
  uVar4 = *(undefined8 *)(in_x5 + 0xe);
  *(undefined8 *)(param_1 + 0x27f) = *(undefined8 *)((long)in_x5 + 0x47);
  *(undefined8 *)(param_1 + 0x278) = uVar17;
  *(undefined8 *)(param_1 + 0x270) = uVar4;
  *(undefined8 *)(param_1 + 0x268) = uVar3;
  FUN_038fd1e0(param_1 + 0x288);
  FUN_038fd2f0(param_1 + 0x288,in_x5 + 0x14);
  uVar16 = in_x5[0x26];
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(in_x5 + 0x24);
  puVar1 = (uint *)(param_1 + 0x30c);
  *(undefined4 *)(param_1 + 0x2d0) = uVar16;
  do {
    cVar10 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = *puVar1 | 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0x3f80000000000000;
  do {
    cVar10 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = *puVar1 & 0xfffffff7 | 8;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  *(undefined1 *)(param_1 + 0x2fe) = 0;
  *(undefined2 *)(param_1 + 0x2fc) = 0x101;
  do {
    cVar10 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  FUN_038e4cec(&local_108);
  local_108 = local_108 & 0xffff0000;
  local_104 = local_104 & 0xfffffffe;
  FUN_038e4d90(&local_108,param_2);
  FUN_0394abf0(0x3f800000,param_2,param_1 + 0x238,&local_90,1,PTR_DAT_04bb2f48);
  uVar13 = *(uint *)(param_1 + 0x1b0);
  if (uVar13 != 0xffffffff) {
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
      uVar2 = uVar13 - *(ushort *)(DAT_05ae78f0 + 0x3da);
      if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar2) {
        uVar2 = 0;
      }
      if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0)
      {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar13 & 0x3f);
        return;
      }
    }
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
      uVar15 = 0x112;
      uVar16 = 0x12;
    }
    else {
      uVar15 = 0x111;
      uVar16 = 0x11;
    }
    if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
      uVar16 = uVar15;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar16);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  return;
}

