
void FUN_03ab35f8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  short sVar6;
  ushort uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined1 auStack_a0 [40];
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  
  lVar8 = *(long *)(param_1 + 8);
  if ((*(char *)(lVar8 + 0xb90) != '\0') &&
     (lVar10 = *(long *)(param_1 + 0x420), *(char *)(lVar8 + 0x650) != '\0' && lVar10 != 0)) {
    lVar12 = *(long *)(param_4 + 0x10);
    uVar11 = (uint)*(byte *)(param_3 + 8);
    uVar9 = uVar11;
    if (*(uint *)(param_4 + 8) <= (uint)*(byte *)(param_3 + 8)) {
      uVar9 = 0;
    }
    uVar2 = *(uint *)(lVar12 + (ulong)uVar9 * 0x23c0 + 8);
    if (*(char *)(lVar8 + 0x1b20) == '\0') {
      if ((uVar2 >> 0xb & 1) == 0) {
        return;
      }
      lVar12 = lVar12 + (ulong)uVar9 * 0x23c0;
      lVar8 = lVar12 + 0x1088;
      lVar12 = lVar12 + 0xdd0;
    }
    else {
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar12 = lVar12 + (ulong)uVar9 * 0x23c0;
      lVar8 = lVar12 + 0x8c8;
      lVar12 = lVar12 + 0x610;
    }
    if (*(uint *)(lVar10 + 0x1d0) <= uVar11) {
      uVar11 = 0;
    }
    *(long *)(*(long *)(lVar10 + 0x1d8) + (ulong)uVar11 * 0x648 + 0x158) = lVar12;
    uVar9 = (uint)*(byte *)(param_3 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x420) + 0x1d0) <= (uint)*(byte *)(param_3 + 8)) {
      uVar9 = 0;
    }
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x420) + 0x1d8) + (ulong)uVar9 * 0x648 + 0x640) =
         0;
    uVar5 = *(ushort *)(lVar8 + 0x30);
    sVar6 = *(short *)(lVar8 + 0x3a);
    uVar7 = *(ushort *)(lVar8 + 0x32);
    uVar11 = (uint)*(byte *)(param_3 + 8);
    uVar9 = uVar11;
    if (*(uint *)(param_4 + 8) <= (uint)*(byte *)(param_3 + 8)) {
      uVar9 = 0;
    }
    lVar12 = *(long *)(param_4 + 0x10) + (ulong)uVar9 * 0x23c0;
    lVar10 = 0;
    if ((*(uint *)(lVar12 + 8) & 0x4000) != 0) {
      lVar10 = lVar12 + 0x22d8;
    }
    if (*(uint *)(*(long *)(param_1 + 0x420) + 0x1d0) <= uVar11) {
      uVar11 = 0;
    }
    *(long *)(*(long *)(*(long *)(param_1 + 0x420) + 0x1d8) + (ulong)uVar11 * 0x648 + 0x558) =
         lVar10;
    lVar10 = *(long *)(param_1 + 0x420);
    if (*(char *)(lVar10 + 0x6c8) != '\0') {
      lVar12 = *(long *)(param_3 + 0x18);
      uVar1 = uVar7;
      if (sVar6 != 3) {
        uVar1 = 1;
      }
      uVar3 = *(undefined1 *)(param_3 + 8);
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      uVar4 = *(undefined1 *)(lVar12 + 0x294);
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      if (uVar5 < 2) {
        uVar5 = 1;
      }
      FUN_038e6ab4(auStack_a0,lVar12 + 0xc0);
      FUN_03ab8bc0(-(fStack_74 - local_78) / (fStack_64 - local_68),
                   -(local_78 + fStack_74) / (local_68 + fStack_64),1.0 / *(float *)(lVar12 + 0xd4),
                   *(float *)(lVar12 + 0xd4) / *(float *)(lVar12 + 0xc0),lVar10,param_2,uVar3,uVar5,
                   uVar1,lVar8,uVar4);
      lVar8 = *(long *)(param_1 + 0x420);
      if (*(char *)(lVar8 + 0x6c8) != '\0') {
        uVar9 = (uint)*(byte *)(param_3 + 8);
        if (*(uint *)(lVar8 + 0x1d0) <= (uint)*(byte *)(param_3 + 8)) {
          uVar9 = 0;
        }
        *(ulong *)(param_3 + 0x98) = *(long *)(lVar8 + 0x1d8) + (ulong)uVar9 * 0x648 + 0x160;
      }
    }
  }
  return;
}

