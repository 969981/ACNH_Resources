
void FUN_003602d4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  ushort uVar13;
  long local_a8 [11];
  
  FUN_00360014();
  *(undefined4 *)((long)param_1 + 0x6f) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar12 = param_3[1];
  uVar7 = (ulong)*(ushort *)(lVar12 + 0xe);
  if (*(ushort *)(lVar12 + 0xe) != 0) {
    uVar4 = *(uint *)(lVar12 + 0x10);
    uVar8 = 0;
    do {
      lVar9 = lVar12 + (ulong)*(uint *)(lVar12 + (ulong)uVar4 + uVar8 * 4);
      if (*(char *)(lVar9 + 0x1d) == '\0') {
        uVar7 = FUN_003608c0(lVar9,param_2 + 0x16);
        if ((uVar7 & 1) != 0) goto LAB_003603b8;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0xe);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  lVar9 = 0;
LAB_003603b8:
  bVar5 = (**(code **)(*param_2 + 0x50))(param_2);
  if (bVar5 == 0) {
    if (lVar9 == 0) {
      return;
    }
    uVar13 = 1;
    uVar11 = *param_3;
    uVar2 = param_3[1];
    uVar1 = param_3[2];
    uVar3 = param_3[3];
    param_1[4] = lVar9;
    *(undefined1 *)((long)param_1 + 0x72) = 0;
    param_1[2] = uVar1;
    param_1[3] = uVar3;
    *param_1 = uVar11;
    param_1[1] = uVar2;
  }
  else {
    uVar7 = 0;
    uVar13 = (ushort)(lVar9 != 0);
    do {
      lVar6 = (**(code **)(*param_2 + 0x58))(param_2,uVar7 & 0xffffffff);
      uVar8 = (ulong)*(ushort *)(lVar12 + 0xe);
      if (*(ushort *)(lVar12 + 0xe) != 0) {
        uVar4 = *(uint *)(lVar12 + 0x10);
        uVar10 = 0;
        uVar11 = *(undefined8 *)(lVar6 + 0x28);
        do {
          lVar6 = lVar12 + (ulong)*(uint *)(lVar12 + (ulong)uVar4 + uVar10 * 4);
          if (*(char *)(lVar6 + 0x1d) == '\x01') {
            uVar8 = FUN_003608c0(lVar6,uVar11);
            if ((uVar8 & 1) != 0) goto LAB_003603f4;
            uVar8 = (ulong)*(ushort *)(lVar12 + 0xe);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar8);
      }
      lVar6 = 0;
LAB_003603f4:
      if (lVar6 != 0) {
        uVar13 = uVar13 + 1;
      }
      local_a8[uVar7] = lVar6;
      uVar7 = uVar7 + 1;
    } while (uVar7 != bVar5);
    if (uVar13 == 0) {
      return;
    }
    uVar11 = *param_3;
    uVar2 = param_3[1];
    uVar1 = param_3[2];
    uVar3 = param_3[3];
    param_1[4] = lVar9;
    *(byte *)((long)param_1 + 0x72) = bVar5;
    param_1[2] = uVar1;
    param_1[3] = uVar3;
    *param_1 = uVar11;
    param_1[1] = uVar2;
    if (bVar5 != 0) {
      memcpy(param_1 + 5,local_a8,(ulong)bVar5 << 3);
    }
  }
  *(ushort *)(param_1 + 0xe) = uVar13;
  return;
}

