
undefined8 FUN_0027bda0(long param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined2 uVar8;
  uint uVar9;
  ushort uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 auStack_60 [16];
  
  if (param_3 < 0xc) {
    return 0;
  }
  bVar5 = *(byte *)(param_2 + 1);
  bVar6 = *(byte *)(param_2 + 2);
  uVar9 = FUN_00228490(param_2 + 4);
  uVar10 = *(ushort *)(param_1 + 0xa0);
  if (uVar10 < bVar5) {
    return 0;
  }
  if ((ushort)bVar5 < (ushort)bVar6) {
    return 0;
  }
  uVar12 = (uint)bVar5;
  if (*(char *)(param_2 + 8) == '\x02') {
    bVar7 = *(byte *)(param_2 + 9);
    if (*(char *)(param_1 + 0xd8) == '\0' && *(char *)(param_1 + 0xd9) == '\0') {
      *(ushort *)(param_1 + 0xda) = (ushort)bVar5;
      *(byte *)(param_1 + 0xdc) = bVar6;
      *(uint *)(param_1 + 0xe0) = uVar9;
      *(undefined1 *)(param_1 + 0xe4) = 2;
    }
    else {
      if ((((*(ushort *)(param_1 + 0xda) != (ushort)bVar5) || (*(byte *)(param_1 + 0xdc) != bVar6))
          || (*(uint *)(param_1 + 0xe0) != uVar9)) || (*(char *)(param_1 + 0xe4) != '\x02')) {
        if (uVar9 <= *(uint *)(param_1 + 0xe0)) {
          return 2;
        }
        *(ushort *)(param_1 + 0xda) = (ushort)bVar5;
        *(byte *)(param_1 + 0xdc) = bVar6;
        *(uint *)(param_1 + 0xe0) = uVar9;
        *(undefined1 *)(param_1 + 0xe4) = 2;
        *(undefined2 *)(param_1 + 0xd8) = 0;
      }
      if (*(char *)(param_1 + (ulong)bVar7 + 0xd8) != '\0') {
        return 1;
      }
    }
    bVar5 = *(byte *)(param_2 + 10);
    bVar6 = *(byte *)(param_2 + 0xb);
    if (uVar12 < (uint)bVar6 + (uint)bVar5) {
      return 0;
    }
    if ((uint)bVar5 * 0x44 + 0xc != param_3) {
      return 0;
    }
    if (bVar5 != 0) {
      uVar10 = 0;
      param_2 = param_2 + 0x4d;
      do {
        if (0x1f < *(byte *)(param_2 + -1)) {
          return 0;
        }
        lVar1 = (ulong)bVar6 + (ulong)uVar10;
        plVar3 = (long *)(*(long *)(param_1 + 0xa8) + lVar1 * 0x80);
        (**(code **)(*plVar3 + 0x18))(auStack_60,plVar3,param_2 + -0x41);
        *(undefined1 *)(*(long *)(param_1 + 0xb0) + lVar1) = *(undefined1 *)(param_2 + -1);
        uVar8 = FUN_002284b0(param_2);
        uVar10 = uVar10 + 1;
        param_2 = param_2 + 0x44;
        *(undefined2 *)(*(long *)(param_1 + 0xb8) + lVar1 * 2) = uVar8;
      } while (uVar10 < bVar5);
    }
    *(undefined1 *)(param_1 + 0xd8 + (ulong)bVar7) = 1;
    if (*(char *)(param_1 + 0xd8) == '\0') {
      return 1;
    }
    if (*(char *)(param_1 + 0xd9) == '\0') {
      return 1;
    }
    uVar4 = *(undefined4 *)(param_1 + 0xe0);
    *(undefined1 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined1 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0x100) = uVar4;
    *(undefined2 *)(param_1 + 0xe6) = *(undefined2 *)(param_1 + 0xda);
    if (*(short *)(param_1 + 0xa0) != 0) {
      uVar11 = 0;
      do {
        *(undefined1 *)(*(long *)(param_1 + 0xe8) + uVar11) = 0;
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(param_1 + 0xa0));
    }
  }
  else {
    if (((*(char *)(param_2 + 8) != '\x01') || ((uint)uVar10 * 0x44 + 0xc != param_3)) ||
       ((*(char *)(param_2 + 9) != '\0' ||
        ((*(byte *)(param_2 + 10) != uVar12 || (*(char *)(param_2 + 0xb) != '\0')))))) {
      return 0;
    }
    if (*(char *)(param_1 + 0xd8) != '\0' || *(char *)(param_1 + 0xd9) != '\0') {
      if (uVar9 < *(uint *)(param_1 + 0xe0)) {
        return 2;
      }
      *(undefined1 *)(param_1 + 0xdc) = 0;
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined1 *)(param_1 + 0xe4) = 0;
      *(undefined4 *)(param_1 + 0xd8) = 0;
    }
    if (uVar12 != 0) {
      uVar11 = 0;
      param_2 = param_2 + 0x4d;
      do {
        bVar6 = *(byte *)(param_2 + -1);
        if (0x1f < bVar6) {
          return 0;
        }
        uVar13 = uVar11 & 0xffff;
        plVar3 = (long *)(*(long *)(param_1 + 0xa8) + uVar13 * 0x80);
        (**(code **)(*plVar3 + 0x18))(auStack_60,plVar3,param_2 + -0x41);
        *(byte *)(*(long *)(param_1 + 0xb0) + uVar13) = bVar6;
        uVar8 = FUN_002284b0(param_2);
        uVar2 = (int)uVar11 + 1;
        uVar11 = (ulong)uVar2;
        param_2 = param_2 + 0x44;
        *(undefined2 *)(*(long *)(param_1 + 0xb8) + uVar13 * 2) = uVar8;
      } while ((uVar2 & 0xffff) < uVar12);
      uVar10 = *(ushort *)(param_1 + 0xa0);
    }
    *(uint *)(param_1 + 0x100) = uVar9;
    *(ushort *)(param_1 + 0xe6) = (ushort)bVar5;
    if (uVar10 != 0) {
      uVar11 = 0;
      do {
        *(undefined1 *)(*(long *)(param_1 + 0xe8) + uVar11) = 0;
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(param_1 + 0xa0));
    }
  }
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(*(long *)PTR_DAT_04bcb8c0 + 0x30);
  return 4;
}

