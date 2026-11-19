
void FUN_03b067d8(long param_1,uint param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if ((*(byte *)(param_1 + 0xf4) & 1) == 0) {
    return;
  }
  if (6 < param_2) {
    return;
  }
  lVar1 = *(long *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  lVar14 = *(long *)(param_1 + 0xe8);
  bVar3 = *(byte *)(lVar1 + 8);
  lVar13 = *(long *)(lVar14 + 0x3420);
  uVar12 = (uint)bVar3;
  switch(param_2) {
  case 0:
    uVar6 = 0;
    break;
  case 1:
    uVar6 = 1;
    break;
  case 2:
    uVar6 = 2;
    break;
  case 3:
    if (*(uint *)(lVar13 + 8) <= uVar12) {
      uVar12 = 0;
    }
    if (((*(byte *)(*(long *)(lVar13 + 0x10) + (ulong)uVar12 * 0x23c0 + 6) >> 6 & 1) != 0) &&
       (uVar11 = FUN_03af9e80(lVar13,uVar2,bVar3), (uVar11 & 1) != 0)) {
      FUN_03a4f7f0(lVar1,uVar2,lVar13,0x17,0,0,param_3);
      FUN_03afa1e0(*(undefined8 *)(lVar14 + 0x3420),uVar2,*(undefined1 *)(lVar1 + 8));
    }
    if (*(code **)(param_1 + 0xf8) != (code *)0x0) {
      (**(code **)(param_1 + 0xf8))(uVar2,lVar13,lVar1,bVar3,param_3);
    }
    uVar6 = 8;
    break;
  case 4:
    if (*(int *)(param_3 + 0x1a0) == 1) {
      if (*(long *)(lVar1 + 0x198) != 0) {
        *(long *)(lVar1 + 0x40) = *(long *)(lVar1 + 0x198);
        *(undefined8 *)(lVar1 + 0x198) = 0;
      }
      FUN_03a4f7f0(lVar1,uVar2,lVar13,0xc,0,0,param_3);
      FUN_03a4f7f0(lVar1,uVar2,lVar13,0xd,0,0,param_3);
      if ((*(byte *)(DAT_05aea958 + 0x39c) >> 3 & 1) != 0) {
        FUN_03a4f7f0(lVar1,uVar2,lVar13,0x14,0,0,param_3);
        FUN_03a4f7f0(lVar1,uVar2,lVar13,0x15,0,0,param_3);
      }
      if (*(char *)(*(long *)(*(long *)(param_1 + 0xe8) + 0x1600) + 0x5f0) == '\0') {
        return;
      }
      lVar13 = *(long *)(*(long *)(param_1 + 0xe8) + 0x1a28);
      if (lVar13 == 0) {
        return;
      }
      if (*(char *)(lVar13 + 0x468) == '\0') {
        return;
      }
      lVar14 = *(long *)(lVar13 + 0x1d8);
      if (*(uint *)(lVar13 + 0x1d0) <= uVar12) {
        uVar12 = 0;
      }
      *(undefined8 *)(lVar1 + 0x198) = *(undefined8 *)(lVar1 + 0x40);
      *(ulong *)(lVar1 + 0x40) = lVar14 + (ulong)uVar12 * 0x1340 + 0xf00;
      return;
    }
    if (*(int *)(param_3 + 0x1a0) != 3) {
      return;
    }
    if (*(uint *)(lVar13 + 8) <= uVar12) {
      uVar12 = 0;
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0x10) + (ulong)uVar12 * 0x23c0 + 0x1fa8);
    if (((*(uint *)(lVar13 + 0x498) | *(uint *)(lVar13 + 0xa70)) & 0x1f) == 0) {
      if (*(long *)(lVar1 + 0x198) != 0) {
        *(long *)(lVar1 + 0x40) = *(long *)(lVar1 + 0x198);
        *(undefined8 *)(lVar1 + 0x198) = 0;
      }
      lVar14 = *(long *)(lVar1 + 0x18);
      FUN_03a4faf0(*(undefined4 *)(lVar14 + 0x140),*(undefined4 *)(lVar14 + 0x144),lVar1,uVar2,0x14,
                   1,lVar14,lVar14 + 0xc0,lVar14 + 0x60,0xffffffff);
      lVar13 = *(long *)(lVar1 + 0x18);
      FUN_03a4faf0(*(undefined4 *)(lVar14 + 0x140),*(undefined4 *)(lVar13 + 0x144),lVar1,uVar2,0x15,
                   1,lVar13,lVar13 + 0xc0,lVar14 + 0x60,0xffffffff);
      lVar13 = *(long *)(lVar1 + 0x18);
      FUN_03a4faf0(*(undefined4 *)(lVar13 + 0x140),*(undefined4 *)(lVar13 + 0x144),lVar1,uVar2,0x11,
                   2,lVar13,lVar13 + 0xc0,lVar13 + 0x60,0xffffffff);
      FUN_03a4faf0(*(undefined4 *)(lVar13 + 0x140),*(undefined4 *)(lVar13 + 0x144),lVar1,uVar2,0x12,
                   2,*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x18) + 0xc0,lVar13 + 0x60,0xffffffff
                  );
    }
    lVar13 = *(long *)(lVar1 + 0x18);
    lVar9 = lVar13 + 0x60;
    FUN_03a4faf0(*(undefined4 *)(lVar13 + 0x140),*(undefined4 *)(lVar13 + 0x144),lVar1,uVar2,0xc,3,
                 lVar13,lVar13 + 0xc0,lVar9,0xffffffff);
    uVar15 = *(undefined4 *)(lVar13 + 0x140);
    uVar6 = 0xd;
    lVar7 = *(long *)(lVar1 + 0x18);
    uVar5 = 3;
    uVar16 = *(undefined4 *)(lVar13 + 0x144);
    uVar8 = 0xffffffff;
    lVar10 = lVar7 + 0xc0;
    goto LAB_03b06bb0;
  case 5:
    uVar8 = *(int *)(param_3 + 0x1a0) - 9;
    uVar11 = (ulong)uVar8;
    if ((2 < uVar8) || ((*(ushort *)(lVar14 + 0x1a34) >> 8 & 1) != 0)) {
      return;
    }
    lVar13 = (ulong)(*(int *)(param_3 + 0x1a0) - 8) * 4;
    lVar4 = uVar11 * 4;
    if (*(uint *)(lVar14 + 0x1a70) <= uVar12) {
      uVar12 = 0;
    }
    lVar14 = *(long *)(lVar14 + 0x1a78) + (ulong)uVar12 * 0xfc8;
    uVar12 = uVar8;
    if (*(uint *)(lVar14 + 0x370) <= uVar8) {
      uVar12 = 0;
    }
    lVar9 = *(long *)(lVar14 + 0x378) + (ulong)uVar12 * 0x5d0;
    FUN_03a4faf0(*(undefined4 *)(*(long *)(lVar14 + 0x318) + lVar4),
                 *(undefined4 *)(*(long *)(lVar14 + 0x318) + lVar13),lVar1,uVar2,0xc,4,lVar9 + 0x270
                 ,lVar9 + 0x2a0,0,uVar11);
    uVar12 = uVar8;
    if (*(uint *)(lVar14 + 0x370) <= uVar8) {
      uVar12 = 0;
    }
    lVar9 = *(long *)(lVar14 + 0x378) + (ulong)uVar12 * 0x5d0;
    FUN_03a4faf0(*(undefined4 *)(*(long *)(lVar14 + 0x318) + lVar4),
                 *(undefined4 *)(*(long *)(lVar14 + 0x318) + lVar13),lVar1,uVar2,0x14,4,
                 lVar9 + 0x270,lVar9 + 0x2a0,0,uVar11);
    uVar6 = 0x11;
    uVar5 = 4;
    lVar9 = 0;
    uVar12 = uVar8;
    if (*(uint *)(lVar14 + 0x370) <= uVar8) {
      uVar12 = 0;
    }
    lVar10 = *(long *)(lVar14 + 0x378) + (ulong)uVar12 * 0x5d0;
    lVar7 = lVar10 + 0x270;
    lVar10 = lVar10 + 0x2a0;
    uVar15 = *(undefined4 *)(*(long *)(lVar14 + 0x318) + lVar4);
    uVar16 = *(undefined4 *)(*(long *)(lVar14 + 0x318) + lVar13);
LAB_03b06bb0:
    FUN_03a4faf0(uVar15,uVar16,lVar1,uVar2,uVar6,uVar5,lVar7,lVar10,lVar9,uVar8);
    return;
  case 6:
    uVar6 = 0x13;
    param_3 = 0;
  }
  FUN_03a4f7f0(lVar1,uVar2,lVar13,uVar6,0,0,param_3);
  return;
}

