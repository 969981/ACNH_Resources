
void FUN_0026e930(int *param_1,long *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined8 local_50;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bc1510;
  uVar2 = *(short *)(*(long *)PTR_DAT_04bc1510 + 0x58) - 1;
  *(ushort *)((long)param_2 + 0x8a) = uVar2;
  uVar4 = FUN_0021f454();
  uVar12 = (ulong)uVar2;
  lVar5 = FUN_00285d10(uVar12 * 0x6b0,uVar4);
  if (uVar2 != 0 && lVar5 != 0) {
    lVar7 = lVar5;
    do {
      FUN_002ad9a0(lVar7);
      uVar12 = uVar12 - 1;
      lVar7 = lVar7 + 0x6b0;
    } while (uVar12 != 0);
  }
  param_2[0x12] = lVar5;
  if (*(short *)((long)param_2 + 0x8a) != 0) {
    lVar5 = 0;
    uVar12 = 0;
    do {
      lVar7 = param_2[0x12];
      uVar6 = (**(code **)(*param_2 + 0x20))(param_2);
      FUN_002adbec(param_1,lVar7 + lVar5,4,4,(uVar6 & 0xff) << 0x18 | 1);
      if (*param_1 != 0) {
        FUN_0026ebf0(param_2);
        return;
      }
      uVar12 = uVar12 + 1;
      lVar5 = lVar5 + 0x6b0;
    } while (uVar12 < *(ushort *)((long)param_2 + 0x8a));
  }
  uVar2 = *(short *)(*(long *)puVar3 + 0x58) - 1;
  *(ushort *)((long)param_2 + 0xba) = uVar2;
  uVar4 = FUN_0021f454();
  uVar12 = (ulong)uVar2;
  lVar5 = FUN_00285d10(uVar12 << 3,uVar4);
  if (uVar2 != 0 && lVar5 != 0) {
    uVar6 = uVar12 & 3;
    if (uVar2 < 4) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      puVar9 = (undefined8 *)(lVar5 + 0x10);
      do {
        lVar7 = lVar7 + -4;
        puVar9[-2] = 0;
        puVar9[-1] = 0;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9 = puVar9 + 4;
      } while (-lVar7 != (uVar12 & 0xfffc));
      lVar7 = -lVar7;
    }
    if ((uVar2 & 3) != 0) {
      puVar9 = (undefined8 *)(lVar5 + lVar7 * 8);
      do {
        uVar6 = uVar6 - 1;
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      } while (uVar6 != 0);
    }
  }
  param_2[0x18] = lVar5;
  if (*(short *)((long)param_2 + 0xba) != 0) {
    uVar12 = 0;
    do {
      local_50 = 0;
      FUN_002282f0(&local_50);
      *(ulong *)(param_2[0x18] + uVar12 * 8) = local_50;
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(ushort *)((long)param_2 + 0xba));
  }
  lVar5 = (ulong)*(ushort *)(*(long *)puVar3 + 0x58) * 0x44 + 0x10;
  *(int *)((long)param_2 + 0x9c) = (int)lVar5;
  *(int *)((long)param_2 + 0xac) = (int)lVar5;
  uVar4 = FUN_0021f454();
  lVar7 = FUN_00285d60(lVar5,uVar4,4);
  if (lVar7 != 0) {
    lVar8 = lVar7 + 3;
    do {
      *(undefined4 *)(lVar8 + -3) = 0;
      lVar8 = lVar8 + 4;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  uVar1 = *(uint *)((long)param_2 + 0xac);
  uVar12 = (ulong)uVar1;
  param_2[0x14] = lVar7;
  uVar4 = FUN_0021f454();
  lVar5 = FUN_00285d60(uVar12,uVar4,4);
  if ((uVar1 != 0) && (lVar5 != 0)) {
    uVar6 = uVar12 & 3;
    if (uVar1 < 4) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        *(undefined4 *)(lVar5 + uVar10) = 0;
        uVar10 = uVar10 + 4;
      } while ((uVar12 & 0xfffffffc) != uVar10);
    }
    if ((uVar1 & 3) != 0) {
      puVar11 = (undefined1 *)(lVar5 + uVar10);
      do {
        uVar6 = uVar6 - 1;
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      } while (uVar6 != 0);
    }
  }
  param_2[0x16] = lVar5;
  *(undefined1 *)(param_2 + 0x15) = 0;
  local_50 = local_50 & 0xffffffff00000000;
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_50 + 4),(Result *)&local_34);
  FUN_002296c4(param_1,&local_50);
  return;
}

