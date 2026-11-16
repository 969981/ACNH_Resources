
bool FUN_028c90c0(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  uint uVar6;
  short *psVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  ulong uVar11;
  undefined4 local_98 [2];
  undefined8 *local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  ulong local_70;
  undefined8 uStack_68;
  long local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_78 = 0;
  local_84 = 0xd35a9251;
  local_98[0] = 1;
  local_90 = &local_84;
  local_60 = 0;
  lStack_58 = 0;
  local_7c = 0;
  local_70 = 0;
  uStack_68 = 0;
  uVar4 = FUN_0272d760(param_1,&local_78,local_98);
  if ((uVar4 & 1) == 0) {
    return false;
  }
  local_50 = local_70;
  uStack_48 = uStack_68;
  iVar3 = FUN_0272e334(&local_50,&DAT_04b1465f);
  if (iVar3 == -1) {
    return false;
  }
  puVar5 = (uint *)FUN_0272e550(&local_78,local_60,iVar3,0,0);
  if (puVar5 == (uint *)0x0) {
    return false;
  }
  lVar1 = 0;
  if (local_60 != 0) {
    lVar1 = lStack_58 + local_60;
  }
  lVar2 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x18);
  }
  (**(code **)(DAT_0558d470 + 0x18))(&DAT_0558d470);
  local_50 = local_50 & 0xffffff0000000000;
  uVar4 = FUN_03ea9450((undefined8 *)(param_1 + 8),&local_50,DAT_0558d478);
  if (((uVar4 & 1) != 0) && (local_50._4_1_ != -1)) {
    uVar4 = local_50 & 0xffffffff;
    if (local_50._4_1_ == -0x2f) {
      if (-1 < (int)(uint)local_50) {
        uVar4 = (ulong)((uint)local_50 & ((int)(uint)local_50 >> 0x1f ^ 0xffffffffU));
        goto LAB_028c91c8;
      }
    }
    else {
      if (local_50._4_1_ == -0x2d) goto LAB_028c91c8;
      psVar7 = *(short **)(param_1 + 8);
      uVar11 = *(ulong *)((long)psVar7 + uVar4);
      uVar4 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      if (*psVar7 != 0x5942) {
        uVar4 = uVar11;
      }
      if ((local_50._4_1_ == -0x2b) || ((local_50._4_1_ == -0x2c && (-1 < (long)uVar4))))
      goto LAB_028c91c8;
    }
  }
  uVar4 = 0;
LAB_028c91c8:
  uVar4 = ((lVar2 - lVar1) + uVar4) - 4;
  uVar6 = (uint)uVar4;
  if (uVar6 < 4) {
    uVar8 = 0;
  }
  else {
    uVar11 = 0;
    uVar8 = 0;
    do {
      iVar3 = *(int *)(lVar1 + 4 + uVar11);
      uVar8 = (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar8;
      iVar3 = (int)uVar11;
      uVar11 = (ulong)(iVar3 + 4);
      uVar8 = (uVar8 >> 0x13 | uVar8 << 0xd) * 5 + 0xe6546b64;
    } while (iVar3 + 8U <= uVar6);
  }
  uVar9 = uVar6 & 3;
  if ((uVar4 & 3) != 0) {
    puVar10 = (ushort *)((lVar1 + 4 + (uVar4 & 0xffffffff)) - (uVar4 & 3));
    if (uVar9 == 1) {
      uVar9 = (uint)(byte)*puVar10;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)*puVar10;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(byte)puVar10[1] << 0x10 | (uint)*(byte *)((long)puVar10 + 1) << 8 |
              (uint)(byte)*puVar10;
    }
    else {
      uVar9 = 0;
    }
    uVar8 = (uVar9 * 0x16a88000 | uVar9 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar8;
  }
  uVar6 = (uVar8 ^ uVar6 ^ (uVar8 ^ uVar6) >> 0x10) * -0x7a143595;
  uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
  return *puVar5 != (uVar6 ^ uVar6 >> 0x10);
}

