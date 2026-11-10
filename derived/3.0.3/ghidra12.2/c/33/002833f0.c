
void FUN_002833f0(undefined8 param_1,long *param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  uVar5 = (uint)param_3;
  *(uint *)((long)param_2 + 0x5f4) = uVar5;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10((param_3 & 0xffffffff) << 3,uVar3);
  if ((uVar5 != 0) && (lVar4 != 0)) {
    uVar6 = param_3 & 3;
    if (uVar5 < 4) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      puVar9 = (undefined8 *)(lVar4 + 0x10);
      do {
        lVar8 = lVar8 + -4;
        puVar9[-2] = 0;
        puVar9[-1] = 0;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9 = puVar9 + 4;
      } while (-lVar8 != (param_3 & 0xfffffffc));
      lVar8 = -lVar8;
    }
    if (uVar6 != 0) {
      puVar9 = (undefined8 *)(lVar4 + lVar8 * 8);
      do {
        uVar6 = uVar6 - 1;
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      } while (uVar6 != 0);
    }
  }
  uVar5 = *(uint *)((long)param_2 + 0x5f4);
  uVar6 = (ulong)uVar5;
  *param_2 = lVar4;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(uVar6 << 3,uVar3);
  if ((uVar5 != 0) && (lVar4 != 0)) {
    uVar7 = uVar6 & 3;
    if (uVar5 < 4) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      puVar9 = (undefined8 *)(lVar4 + 0x10);
      do {
        lVar8 = lVar8 + -4;
        puVar9[-2] = 0;
        puVar9[-1] = 0;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9 = puVar9 + 4;
      } while (-lVar8 != (uVar6 & 0xfffffffc));
      lVar8 = -lVar8;
    }
    if ((uVar5 & 3) != 0) {
      puVar9 = (undefined8 *)(lVar4 + lVar8 * 8);
      do {
        uVar7 = uVar7 - 1;
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      } while (uVar7 != 0);
    }
  }
  uVar5 = *(uint *)((long)param_2 + 0x5f4);
  uVar6 = (ulong)uVar5;
  param_2[1] = lVar4;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(uVar6 << 2,uVar3);
  if ((uVar5 != 0) && (lVar4 != 0)) {
    uVar7 = uVar6 & 3;
    if (uVar5 < 4) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      puVar9 = (undefined8 *)(lVar4 + 8);
      do {
        lVar8 = lVar8 + -4;
        puVar9[-1] = 0;
        *puVar9 = 0;
        puVar9 = puVar9 + 2;
      } while (-lVar8 != (uVar6 & 0xfffffffc));
      lVar8 = -lVar8;
    }
    if ((uVar5 & 3) != 0) {
      puVar10 = (undefined4 *)(lVar4 + lVar8 * 4);
      do {
        uVar7 = uVar7 - 1;
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      } while (uVar7 != 0);
    }
  }
  uVar5 = *(uint *)((long)param_2 + 0x5f4);
  uVar6 = (ulong)uVar5;
  param_2[2] = lVar4;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(uVar6 << 3,uVar3);
  if ((uVar5 != 0) && (lVar4 != 0)) {
    uVar7 = uVar6 & 3;
    if (uVar5 < 4) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      puVar9 = (undefined8 *)(lVar4 + 0x10);
      do {
        lVar8 = lVar8 + -4;
        puVar9[-2] = 0;
        puVar9[-1] = 0;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9 = puVar9 + 4;
      } while (-lVar8 != (uVar6 & 0xfffffffc));
      lVar8 = -lVar8;
    }
    if ((uVar5 & 3) != 0) {
      puVar9 = (undefined8 *)(lVar4 + lVar8 * 8);
      do {
        uVar7 = uVar7 - 1;
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      } while (uVar7 != 0);
    }
  }
  param_2[3] = lVar4;
  if (*(int *)((long)param_2 + 0x5f4) == 0) {
    uVar3 = FUN_0021f454();
    lVar4 = FUN_00285d10(0,uVar3);
  }
  else {
    uVar6 = 0;
    do {
      uVar3 = FUN_0021f454();
      lVar4 = FUN_00285d60(0x5a0,uVar3,4);
      if (lVar4 != 0) {
        lVar8 = 0;
        do {
          lVar1 = lVar4 + 7 + lVar8;
          lVar8 = lVar8 + 0xf;
          *(undefined8 *)(lVar1 + -7) = 0;
          *(undefined4 *)(lVar1 + 1) = 0;
          *(undefined2 *)(lVar1 + 5) = 0;
          *(undefined1 *)(lVar1 + 7) = 0;
        } while (lVar8 != 0x5a0);
      }
      *(long *)(param_2[3] + uVar6 * 8) = lVar4;
      uVar6 = uVar6 + 1;
      uVar5 = *(uint *)((long)param_2 + 0x5f4);
      uVar7 = (ulong)uVar5;
    } while (uVar6 < uVar7);
    uVar3 = FUN_0021f454();
    lVar4 = FUN_00285d10(uVar7 << 2,uVar3);
    if ((uVar5 != 0) && (lVar4 != 0)) {
      uVar6 = uVar7 & 3;
      if (uVar5 < 4) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        puVar9 = (undefined8 *)(lVar4 + 8);
        do {
          lVar8 = lVar8 + -4;
          puVar9[-1] = 0;
          *puVar9 = 0;
          puVar9 = puVar9 + 2;
        } while (-lVar8 != (uVar7 & 0xfffffffc));
        lVar8 = -lVar8;
      }
      if ((uVar5 & 3) != 0) {
        puVar10 = (undefined4 *)(lVar4 + lVar8 * 4);
        do {
          uVar6 = uVar6 - 1;
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        } while (uVar6 != 0);
      }
    }
  }
  uVar5 = *(uint *)((long)param_2 + 0x5f4);
  uVar6 = (ulong)uVar5;
  param_2[4] = lVar4;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(uVar6,uVar3);
  if ((uVar5 != 0) && (lVar4 != 0)) {
    uVar7 = uVar6 & 3;
    if (uVar5 < 4) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      do {
        *(undefined4 *)(lVar4 + uVar11) = 0;
        uVar11 = uVar11 + 4;
      } while ((uVar6 & 0xfffffffc) != uVar11);
    }
    if ((uVar5 & 3) != 0) {
      puVar12 = (undefined1 *)(lVar4 + uVar11);
      do {
        uVar7 = uVar7 - 1;
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      } while (uVar7 != 0);
    }
  }
  uVar5 = *(uint *)((long)param_2 + 0x5f4);
  uVar6 = (ulong)uVar5;
  param_2[5] = lVar4;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(uVar6 * 0x28,uVar3);
  if ((uVar5 != 0) && (lVar4 != 0)) {
    lVar8 = lVar4;
    do {
      FUN_00227258(lVar8);
      uVar6 = uVar6 - 1;
      lVar8 = lVar8 + 0x28;
    } while (uVar6 != 0);
  }
  param_2[6] = lVar4;
  uVar5 = *(uint *)((long)param_2 + 0x5f4);
  uVar6 = (ulong)uVar5;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(uVar6 << 2,uVar3);
  puVar2 = PTR_DAT_04bcb8c8;
  if ((uVar5 != 0) && (lVar4 != 0)) {
    uVar7 = uVar6 & 3;
    lVar8 = 0;
    if (3 < uVar5) {
      puVar10 = (undefined4 *)(lVar4 + 8);
      do {
        lVar8 = lVar8 + -4;
        puVar10[-2] = *(undefined4 *)puVar2;
        puVar10[-1] = *(undefined4 *)puVar2;
        *puVar10 = *(undefined4 *)puVar2;
        puVar10[1] = *(undefined4 *)puVar2;
        puVar10 = puVar10 + 4;
      } while (-lVar8 != (uVar6 & 0xfffffffc));
      lVar8 = -lVar8;
    }
    if ((uVar5 & 3) != 0) {
      puVar10 = (undefined4 *)(lVar4 + lVar8 * 4);
      do {
        uVar7 = uVar7 - 1;
        *puVar10 = *(undefined4 *)puVar2;
        puVar10 = puVar10 + 1;
      } while (uVar7 != 0);
    }
  }
  uVar5 = *(uint *)((long)param_2 + 0x5f4);
  uVar6 = (ulong)uVar5;
  param_2[7] = lVar4;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(uVar6,uVar3);
  if ((uVar5 != 0) && (lVar4 != 0)) {
    uVar7 = uVar6 & 3;
    if (uVar5 < 4) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      do {
        *(undefined4 *)(lVar4 + uVar11) = 0;
        uVar11 = uVar11 + 4;
      } while ((uVar6 & 0xfffffffc) != uVar11);
    }
    if ((uVar5 & 3) != 0) {
      puVar12 = (undefined1 *)(lVar4 + uVar11);
      do {
        uVar7 = uVar7 - 1;
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      } while (uVar7 != 0);
    }
  }
  param_2[8] = lVar4;
  memset((void *)param_2[2],0,8);
  local_44 = 0;
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

