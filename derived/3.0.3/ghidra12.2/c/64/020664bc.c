
void FUN_020664bc(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined2 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  
  if (*(int *)((long)param_1 + 0xdc) != 3) {
    if (*(int *)((long)param_1 + 0xdc) == 1) {
      iVar2 = *(int *)((long)param_1 + 0xc4);
      if ((int)param_1[0x19] != -1) {
        iVar2 = (int)param_1[0x19] + 10;
      }
      FUN_02066960(param_1,(long)param_1 + 0x84,iVar2);
      (**(code **)(*param_1 + 0x28))(param_1,(long)param_1 + 0x84);
    }
    if ((int)param_1[4] == 2) {
      if ((int)param_1[6] == 3) {
        fVar18 = -50.0;
      }
      else {
        if ((int)param_1[6] != 4) goto LAB_02066574;
        fVar18 = -5.0;
      }
      fVar18 = fVar18 + *(float *)((long)param_1 + 0x24);
      fVar21 = 100.0;
      if (fVar18 <= 100.0) {
        fVar21 = fVar18;
      }
      fVar19 = 0.0;
      if (0.0 <= fVar18) {
        fVar19 = fVar21;
      }
      *(float *)((long)param_1 + 0x24) = fVar19;
    }
LAB_02066574:
    *(undefined1 *)((long)param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)(param_1 + 5) = 0xbf800000;
    if ((int)param_1[8] == 2) {
      if ((int)param_1[10] == 3) {
        fVar18 = -50.0;
      }
      else {
        if ((int)param_1[10] != 4) goto LAB_020665dc;
        fVar18 = -5.0;
      }
      fVar18 = fVar18 + *(float *)((long)param_1 + 0x44);
      fVar21 = 100.0;
      if (fVar18 <= 100.0) {
        fVar21 = fVar18;
      }
      fVar19 = 0.0;
      if (0.0 <= fVar18) {
        fVar19 = fVar21;
      }
      *(float *)((long)param_1 + 0x44) = fVar19;
    }
LAB_020665dc:
    *(undefined1 *)((long)param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 9) = 0xbf800000;
    if ((int)param_1[0xc] == 2) {
      if ((int)param_1[0xe] == 3) {
        fVar18 = -50.0;
      }
      else {
        if ((int)param_1[0xe] != 4) goto LAB_02066640;
        fVar18 = -5.0;
      }
      fVar18 = fVar18 + *(float *)((long)param_1 + 100);
      fVar21 = 100.0;
      if (fVar18 <= 100.0) {
        fVar21 = fVar18;
      }
      fVar19 = 0.0;
      if (0.0 <= fVar18) {
        fVar19 = fVar21;
      }
      *(float *)((long)param_1 + 100) = fVar19;
    }
LAB_02066640:
    *(undefined1 *)((long)param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0xd) = 0xbf800000;
  }
  uVar3 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((long)param_1 + 0x84) = uVar4;
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x11) = uVar5;
  uVar20 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((long)param_1 + 0x8c) = uVar20;
  uVar22 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x12) = uVar22;
  uVar23 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)((long)param_1 + 0x94) = uVar23;
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x15) = uVar6;
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)((long)param_1 + 0xac) = uVar7;
  uVar8 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x17) = uVar8;
  uVar9 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)((long)param_1 + 0xbc) = uVar9;
  uVar10 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x18) = uVar10;
  uVar14 = *(undefined1 *)(param_2 + 0x54);
  *(undefined8 *)((long)param_1 + 0xc4) = *(undefined8 *)(param_2 + 0x4c);
  *(undefined1 *)((long)param_1 + 0xcc) = uVar14;
  uVar17 = *(undefined2 *)(param_2 + 0x58);
  *(undefined2 *)(param_1 + 0x1a) = uVar17;
  uVar14 = *(undefined1 *)(param_2 + 0x5a);
  *(undefined1 *)((long)param_1 + 0xd2) = uVar14;
  uVar15 = *(undefined1 *)(param_2 + 0x5b);
  *(undefined1 *)((long)param_1 + 0xd3) = uVar15;
  uVar11 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)((long)param_1 + 0xd4) = uVar11;
  uVar24 = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x1b) = uVar24;
  uVar12 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)((long)param_1 + 0xdc) = uVar12;
  uVar16 = *(undefined1 *)(param_2 + 0x68);
  *(undefined1 *)(param_1 + 0x1c) = uVar16;
  uVar13 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)((long)param_1 + 0xe4) = uVar13;
  if (*(int *)(param_2 + 100) == 0) {
    *(undefined4 *)(param_1 + 0x1e) = uVar3;
    *(undefined4 *)((long)param_1 + 0xf4) = uVar4;
    *(undefined4 *)(param_1 + 0x1f) = uVar5;
    *(undefined4 *)((long)param_1 + 0xfc) = uVar20;
    *(undefined4 *)(param_1 + 0x20) = uVar22;
    *(undefined4 *)((long)param_1 + 0x104) = uVar23;
    *(undefined4 *)(param_1 + 0x23) = uVar6;
    *(undefined4 *)((long)param_1 + 0x11c) = uVar7;
    *(undefined4 *)(param_1 + 0x25) = uVar8;
    *(undefined4 *)((long)param_1 + 300) = uVar9;
    *(undefined4 *)(param_1 + 0x26) = uVar10;
    *(undefined8 *)((long)param_1 + 0x134) = *(undefined8 *)((long)param_1 + 0xc4);
    *(undefined2 *)(param_1 + 0x28) = uVar17;
    *(undefined1 *)((long)param_1 + 0x142) = uVar14;
    *(undefined1 *)((long)param_1 + 0x143) = uVar15;
    *(undefined4 *)((long)param_1 + 0x144) = uVar11;
    *(undefined4 *)(param_1 + 0x29) = uVar24;
    *(undefined4 *)((long)param_1 + 0x14c) = uVar12;
    *(undefined1 *)(param_1 + 0x2a) = uVar16;
    *(undefined4 *)((long)param_1 + 0x154) = uVar13;
    *(undefined1 *)((long)param_1 + 0x13c) = *(undefined1 *)((long)param_1 + 0xcc);
  }
  else if (*(int *)(param_2 + 0x6c) == 0) goto LAB_02066770;
  *(undefined4 *)(param_1 + 2) = 100;
LAB_02066770:
  plVar1 = param_1 + 0xf;
  FUN_020e9020(param_1 + 3,plVar1);
  FUN_020e9020(param_1 + 7,plVar1);
  FUN_020e9020(param_1 + 0xb,plVar1);
  *(undefined1 *)((long)param_1 + 0x16c) = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0x708;
  return;
}

