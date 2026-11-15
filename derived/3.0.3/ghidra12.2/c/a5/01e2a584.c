
/* WARNING: Removing unreachable block (ram,0x01e2a8b8) */
/* WARNING: Removing unreachable block (ram,0x01e2a828) */
/* WARNING: Removing unreachable block (ram,0x01e2a798) */
/* WARNING: Removing unreachable block (ram,0x01e2a708) */
/* WARNING: Removing unreachable block (ram,0x01e2a678) */
/* WARNING: Removing unreachable block (ram,0x01e2a6c0) */
/* WARNING: Removing unreachable block (ram,0x01e2a750) */
/* WARNING: Removing unreachable block (ram,0x01e2a7e0) */
/* WARNING: Removing unreachable block (ram,0x01e2a870) */
/* WARNING: Removing unreachable block (ram,0x01e2a900) */

void FUN_01e2a584(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  short sVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  lVar8 = **(long **)PTR_DAT_04bb27d0;
  if (1 < *(byte *)(lVar8 + 0x476)) {
    bVar4 = *(byte *)(lVar8 + 0x473);
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      pbVar2 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
      if (7 < bVar4) {
        pbVar2 = (byte *)(lVar8 + 0x48);
      }
      if (((*pbVar2 >> 3 & 1) != 0) && (*(byte *)(lVar8 + 0x472) != bVar4)) goto LAB_01e2a5f0;
    }
    FUN_01e2a2b0(param_1,1);
  }
LAB_01e2a5f0:
  uVar6 = FUN_0290d828();
  sVar5 = DAT_04c487d4;
  if ((((uVar6 & 1) != 0) && (DAT_05292338 != 0)) && (DAT_04c487d4 != -1)) {
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 7 & 1) != 0) {
      lVar8 = *(long *)PTR_DAT_04bb4760;
      uVar1 = (uint)*(byte *)(lVar8 + 4) | (*(byte *)(lVar8 + 5) & 3) << 8;
      if (0x1ff < uVar1) {
        uVar1 = uVar1 | 0xfffffc00;
      }
      uVar7 = (uint)DAT_04c487d4;
      if (uVar1 == uVar7) {
        *(ushort *)(param_1 + 0x590) = *(ushort *)(param_1 + 0x590) | 1;
      }
      uVar1 = (uint)*(byte *)(lVar8 + 0x19) | (*(byte *)(lVar8 + 0x1a) & 3) << 8;
      if (0x1ff < uVar1) {
        uVar1 = uVar1 | 0xfffffc00;
      }
      if (uVar1 == uVar7) {
        *(ushort *)(param_1 + 0x590) = *(ushort *)(param_1 + 0x590) | 2;
      }
      uVar1 = (uint)*(byte *)(lVar8 + 0x2e) | (*(byte *)(lVar8 + 0x2f) & 3) << 8;
      if (0x1ff < uVar1) {
        uVar1 = uVar1 | 0xfffffc00;
      }
      if (uVar1 == uVar7) {
        *(ushort *)(param_1 + 0x590) = *(ushort *)(param_1 + 0x590) | 4;
      }
      uVar1 = (uint)*(byte *)(lVar8 + 0x43) | (*(byte *)(lVar8 + 0x44) & 3) << 8;
      if (0x1ff < uVar1) {
        uVar1 = uVar1 | 0xfffffc00;
      }
      if (uVar1 == uVar7) {
        *(ushort *)(param_1 + 0x590) = *(ushort *)(param_1 + 0x590) | 8;
      }
      uVar1 = (uint)*(byte *)(lVar8 + 0x58) | (*(byte *)(lVar8 + 0x59) & 3) << 8;
      if (0x1ff < uVar1) {
        uVar1 = uVar1 | 0xfffffc00;
      }
      uVar7 = (uint)sVar5;
      if (uVar1 == uVar7) {
        *(ushort *)(param_1 + 0x590) = *(ushort *)(param_1 + 0x590) | 0x10;
      }
      uVar1 = (uint)*(byte *)(lVar8 + 0x6d) | (*(byte *)(lVar8 + 0x6e) & 3) << 8;
      if (0x1ff < uVar1) {
        uVar1 = uVar1 | 0xfffffc00;
      }
      if (uVar1 == uVar7) {
        *(ushort *)(param_1 + 0x590) = *(ushort *)(param_1 + 0x590) | 0x20;
      }
      uVar1 = (uint)*(byte *)(lVar8 + 0x82) | (*(byte *)(lVar8 + 0x83) & 3) << 8;
      if (0x1ff < uVar1) {
        uVar1 = uVar1 | 0xfffffc00;
      }
      if (uVar1 == uVar7) {
        *(ushort *)(param_1 + 0x590) = *(ushort *)(param_1 + 0x590) | 0x40;
      }
      uVar1 = (uint)*(byte *)(lVar8 + 0x97) | (*(byte *)(lVar8 + 0x98) & 3) << 8;
      if (0x1ff < uVar1) {
        uVar1 = uVar1 | 0xfffffc00;
      }
      if (uVar1 == uVar7) {
        *(ushort *)(param_1 + 0x590) = *(ushort *)(param_1 + 0x590) | 0x80;
      }
      uVar1 = (uint)*(byte *)(lVar8 + 0xac) | (*(byte *)(lVar8 + 0xad) & 3) << 8;
      if (0x1ff < uVar1) {
        uVar1 = uVar1 | 0xfffffc00;
      }
      if (uVar1 == uVar7) {
        *(ushort *)(param_1 + 0x590) = *(ushort *)(param_1 + 0x590) | 0x100;
      }
      uVar1 = (uint)*(byte *)(lVar8 + 0xc1) | (*(byte *)(lVar8 + 0xc2) & 3) << 8;
      if (0x1ff < uVar1) {
        uVar1 = uVar1 | 0xfffffc00;
      }
      if (uVar1 == uVar7) {
        *(ushort *)(param_1 + 0x590) = *(ushort *)(param_1 + 0x590) | 0x200;
      }
    }
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x6622bd46) {
    *(undefined8 *)(param_1 + 0x588) = 0x6ffffffff;
  }
  return;
}

