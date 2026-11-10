
void FUN_00262e80(long *param_1)

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
  undefined4 local_24;
  
  FUN_00227770();
  param_1[0xb] = 0;
  puVar2 = PTR_DAT_04bcd9f8;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined2 *)((long)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x8e) = 0;
  *(undefined1 *)((long)param_1 + 0x8c) = 3;
  *(undefined1 *)((long)param_1 + 0x92) = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  local_24 = 0;
  *param_1 = (long)(puVar2 + 0x10);
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 0x15),(Result *)&local_24);
  *(undefined4 *)((long)param_1 + 0xb4) = 0xffffffff;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_00220ebc(param_1 + 0x19);
  *(undefined2 *)((long)param_1 + 0x89) = 0;
  *(undefined1 *)((long)param_1 + 0x8b) = 0;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(0x30,uVar3);
  if (lVar4 != 0) {
    FUN_00220ebc(lVar4);
  }
  param_1[0xc] = lVar4;
  uVar11 = (ulong)*(ushort *)(DAT_04c603c8 + 0x98);
  *(ushort *)((long)param_1 + 0x6e) = *(ushort *)(DAT_04c603c8 + 0x98);
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
  param_1[0xe] = lVar4;
  uVar1 = *(ushort *)((long)param_1 + 0x6e);
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
  uVar1 = *(ushort *)((long)param_1 + 0x6e);
  uVar11 = (ulong)uVar1;
  param_1[0xf] = lVar4;
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
  uVar1 = *(ushort *)((long)param_1 + 0x6e);
  uVar11 = (ulong)uVar1;
  param_1[0x10] = lVar4;
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
  uVar1 = *(ushort *)((long)param_1 + 0x6e);
  param_1[0x13] = lVar4;
  if (uVar1 != 0) {
    uVar11 = (ulong)uVar1 & 3;
    if (uVar1 < 4) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        *(undefined4 *)(lVar4 + uVar5) = 0;
        uVar5 = uVar5 + 4;
      } while (((ulong)uVar1 & 0xfffc) != uVar5);
    }
    if ((uVar1 & 3) != 0) {
      puVar9 = (undefined1 *)(lVar4 + uVar5);
      do {
        uVar11 = uVar11 - 1;
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      } while (uVar11 != 0);
    }
  }
  return;
}

