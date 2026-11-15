
bool FUN_020781c8(long *param_1,int *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  puVar6 = PTR_DAT_04bb32e0;
  iVar3 = *param_2;
  iVar4 = *(int *)(*param_1 + 0x230);
  if (iVar3 == iVar4) goto LAB_02078314;
  *(undefined2 *)((long)param_1 + 0x1d1) = 0;
  *(undefined1 *)((long)param_1 + 0x1d3) = 0;
  *(undefined1 *)((long)param_1 + 0x1ce) = 0;
  bVar8 = *puVar6;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  *(undefined8 *)(param_1[2] + 0x38) = 0;
  *(byte *)(param_1 + 0x14) = bVar8;
  iVar5 = *param_2;
  param_1[0x2f] = 0;
  *(int *)((long)param_1 + 0xa4) = iVar5;
  lVar7 = *(long *)(*param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(lVar7 + 0x278);
  *(undefined4 *)((long)param_1 + 0x194) = *(undefined4 *)(lVar7 + 0x27c);
  uVar9 = *(undefined4 *)(lVar7 + 0x280);
  *(undefined4 *)((long)param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0x3c;
  *(undefined8 *)((long)param_1 + 0x19c) = 0;
  *(bool *)(param_1 + 0x3a) = param_3 != (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x33) = uVar9;
  if (param_3 == (undefined8 *)0x0) {
    if (*(char *)((long)param_1 + 0x1ce) == '\0') {
      uVar9 = 0xbf800000;
      uVar10 = 0x41c80000;
      uVar11 = 0x41800000;
      uVar12 = 0xbf800000;
      uVar13 = 0xbf800000;
      goto LAB_020782d0;
    }
  }
  else {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)(param_3 + 2);
    *(undefined8 *)((long)param_1 + 0x34) = uVar2;
    *(undefined8 *)((long)param_1 + 0x2c) = uVar1;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((long)param_3 + 0x14);
    *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(param_3 + 3);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)((long)param_3 + 0x1c);
    if (*(char *)((long)param_1 + 0x1ce) == '\0') {
      uVar11 = *(undefined4 *)((long)param_1 + 0x2c);
      uVar10 = (undefined4)param_1[6];
      uVar13 = *(undefined4 *)((long)param_1 + 0x3c);
      uVar9 = *(undefined4 *)((long)param_1 + 0x34);
      uVar12 = (undefined4)param_1[7];
LAB_020782d0:
      *(undefined4 *)(param_1 + 3) = uVar11;
      *(undefined4 *)((long)param_1 + 0x1c) = uVar10;
      *(undefined4 *)(param_1 + 4) = uVar9;
      *(undefined4 *)((long)param_1 + 0x24) = uVar12;
      *(undefined4 *)(param_1 + 5) = uVar13;
      *(undefined2 *)((long)param_1 + 0x1ce) = 1;
    }
  }
  if (*(char *)((long)param_1 + 0x1cf) == '\0') {
    uVar9 = FUN_0207a578();
  }
  else {
    uVar9 = FUN_02079c40();
  }
  FUN_03ebb160(param_1 + 10,uVar9);
LAB_02078314:
  return iVar3 != iVar4;
}

