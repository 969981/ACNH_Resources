
void FUN_0027b6c0(long *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_c0 [128];
  
  FUN_00227770();
  param_1[0xd] = 0;
  puVar2 = PTR_DAT_04bcdbd0;
  *(undefined4 *)(param_1 + 0xe) = 10000;
  param_1[0xb] = 0;
  param_1[0xc] = 0xea6000009c40;
  param_1[0x1e] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  FUN_00220ebc(param_1 + 0x22);
  memset(param_1 + 0x10,0xff,0x20);
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((long)param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((long)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0xe4) = 0;
  uVar1 = *(ushort *)(*(long *)PTR_DAT_04bcd350 + 0x98);
  uVar11 = (ulong)uVar1;
  *(undefined2 *)((long)param_1 + 0xe6) = 0;
  *(ushort *)(param_1 + 0x14) = uVar1;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(uVar11 * 0x30,uVar3);
  if ((uVar11 != 0) && (lVar4 != 0)) {
    lVar10 = lVar4;
    do {
      FUN_00220ebc(lVar10);
      uVar11 = uVar11 - 1;
      lVar10 = lVar10 + 0x30;
    } while (uVar11 != 0);
  }
  uVar11 = (ulong)*(ushort *)(param_1 + 0x14);
  param_1[0xf] = lVar4;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(uVar11 << 7,uVar3);
  if ((uVar11 != 0) && (lVar4 != 0)) {
    lVar10 = lVar4;
    do {
      FUN_002b3fa8(lVar10);
      uVar11 = uVar11 - 1;
      lVar10 = lVar10 + 0x80;
    } while (uVar11 != 0);
  }
  param_1[0x15] = lVar4;
  uVar1 = *(ushort *)(param_1 + 0x14);
  uVar11 = (ulong)uVar1;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(uVar11,uVar3);
  if ((uVar1 != 0) && (lVar4 != 0)) {
    uVar5 = uVar11 & 3;
    if (uVar1 < 4) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      do {
        *(undefined4 *)(lVar4 + uVar6) = 0;
        uVar6 = uVar6 + 4;
      } while ((uVar11 & 0xfffc) != uVar6);
    }
    if ((uVar1 & 3) != 0) {
      puVar9 = (undefined1 *)(lVar4 + uVar6);
      do {
        uVar5 = uVar5 - 1;
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      } while (uVar5 != 0);
    }
  }
  uVar1 = *(ushort *)(param_1 + 0x14);
  uVar11 = (ulong)uVar1;
  param_1[0x16] = lVar4;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(uVar11 << 1,uVar3);
  if ((uVar1 != 0) && (lVar4 != 0)) {
    uVar5 = uVar11 & 3;
    if (uVar1 < 4) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      lVar10 = lVar4 + 4;
      do {
        lVar7 = lVar7 + -4;
        *(undefined8 *)(lVar10 + -4) = 0;
        lVar10 = lVar10 + 8;
      } while (-lVar7 != (uVar11 & 0xfffc));
      lVar7 = -lVar7;
    }
    if ((uVar1 & 3) != 0) {
      puVar8 = (undefined2 *)(lVar4 + lVar7 * 2);
      do {
        uVar5 = uVar5 - 1;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
  }
  uVar11 = (ulong)*(ushort *)(param_1 + 0x14);
  param_1[0x17] = lVar4;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(uVar11 << 7,uVar3);
  if ((uVar11 != 0) && (lVar4 != 0)) {
    lVar10 = lVar4;
    do {
      FUN_002b3fa8(lVar10);
      uVar11 = uVar11 - 1;
      lVar10 = lVar10 + 0x80;
    } while (uVar11 != 0);
  }
  param_1[0x18] = lVar4;
  uVar1 = *(ushort *)(param_1 + 0x14);
  uVar11 = (ulong)uVar1;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(uVar11,uVar3);
  if ((uVar1 != 0) && (lVar4 != 0)) {
    uVar5 = uVar11 & 3;
    if (uVar1 < 4) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      do {
        *(undefined4 *)(lVar4 + uVar6) = 0;
        uVar6 = uVar6 + 4;
      } while ((uVar11 & 0xfffc) != uVar6);
    }
    if ((uVar1 & 3) != 0) {
      puVar9 = (undefined1 *)(lVar4 + uVar6);
      do {
        uVar5 = uVar5 - 1;
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      } while (uVar5 != 0);
    }
  }
  uVar1 = *(ushort *)(param_1 + 0x14);
  uVar11 = (ulong)uVar1;
  param_1[0x19] = lVar4;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(uVar11 << 1,uVar3);
  if ((uVar1 != 0) && (lVar4 != 0)) {
    uVar5 = uVar11 & 3;
    if (uVar1 < 4) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      lVar10 = lVar4 + 4;
      do {
        lVar7 = lVar7 + -4;
        *(undefined8 *)(lVar10 + -4) = 0;
        lVar10 = lVar10 + 8;
      } while (-lVar7 != (uVar11 & 0xfffc));
      lVar7 = -lVar7;
    }
    if ((uVar1 & 3) != 0) {
      puVar8 = (undefined2 *)(lVar4 + lVar7 * 2);
      do {
        uVar5 = uVar5 - 1;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
  }
  uVar1 = *(ushort *)(param_1 + 0x14);
  uVar11 = (ulong)uVar1;
  param_1[0x1a] = lVar4;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(uVar11,uVar3);
  if ((uVar1 != 0) && (lVar4 != 0)) {
    uVar5 = uVar11 & 3;
    if (uVar1 < 4) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      do {
        *(undefined4 *)(lVar4 + uVar6) = 0;
        uVar6 = uVar6 + 4;
      } while ((uVar11 & 0xfffc) != uVar6);
    }
    if ((uVar1 & 3) != 0) {
      puVar9 = (undefined1 *)(lVar4 + uVar6);
      do {
        uVar5 = uVar5 - 1;
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      } while (uVar5 != 0);
    }
  }
  param_1[0x1d] = lVar4;
  FUN_002b3fa8(auStack_c0);
  if ((short)param_1[0x14] != 0) {
    lVar4 = 0;
    uVar11 = 0;
    do {
      FUN_002b415c(param_1[0x15] + lVar4,auStack_c0);
      *(undefined1 *)(param_1[0x16] + uVar11) = 0xfd;
      *(undefined2 *)(param_1[0x17] + uVar11 * 2) = 0xffff;
      FUN_002b415c(param_1[0x18] + lVar4,auStack_c0);
      lVar4 = lVar4 + 0x80;
      *(undefined1 *)(param_1[0x19] + uVar11) = 0xfd;
      *(undefined2 *)(param_1[0x1a] + uVar11 * 2) = 0xffff;
      *(undefined1 *)(param_1[0x1d] + uVar11) = 0;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(ushort *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined2 *)((long)param_1 + 0x105) = 0;
  *(undefined1 *)((long)param_1 + 0x10c) = 1;
  FUN_00220f24(param_1 + 0x22);
  FUN_002b4104(auStack_c0);
  return;
}

