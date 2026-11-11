
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d3fc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_58;
  
  FUN_0053d160();
  *param_1 = &PTR_LAB_048df9e0;
  lVar1 = FUN_0068a620(param_3);
  lVar11 = *(long *)(*(long *)(lVar1 + 0x18) + (long)param_4 * 8);
  lVar1 = *(long *)(lVar11 + 0x18);
  lVar4 = (long)*(int *)(lVar1 + 0x88);
  if (*(int *)(lVar1 + 0x88) < 1) {
    lVar7 = 0;
    lVar10 = 0;
    lVar6 = 0;
  }
  else {
    lVar9 = *(long *)(lVar1 + 0x80);
    lVar6 = 0;
    lVar10 = lVar9;
    do {
      if (*(short *)(lVar10 + 6) == 1) goto LAB_005d404c;
      lVar6 = lVar6 + 1;
      lVar10 = lVar10 + 0x18;
    } while (lVar6 < lVar4);
    lVar10 = 0;
LAB_005d404c:
    lVar7 = 0;
    lVar6 = lVar9;
    do {
      if (*(short *)(lVar6 + 6) == 4) goto LAB_005d4074;
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar7 < lVar4);
    lVar6 = 0;
LAB_005d4074:
    lVar8 = 0;
    lVar7 = lVar9;
    do {
      if (*(short *)(lVar7 + 6) == 8) goto LAB_005d409c;
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x18;
    } while (lVar8 < lVar4);
    lVar7 = 0;
LAB_005d409c:
    lVar8 = 0;
    do {
      if (*(short *)(lVar9 + 6) == 0x10) goto LAB_005d40d0;
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x18;
    } while (lVar8 < lVar4);
  }
  lVar9 = 0;
LAB_005d40d0:
  uVar2 = FUN_00689900(lVar1,lVar10);
  param_1[3] = uVar2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(long *)(lVar11 + 0x18) + 0x68);
  *(char *)((long)param_1 + 0x24) = (char)*(undefined4 *)(lVar10 + 8);
  *(undefined4 *)(param_1 + 5) = 1;
  lVar1 = **(long **)(lVar11 + 0x20);
  if (*(char *)(lVar1 + 0x18) == '\x02') {
    if (*(int *)(lVar1 + 0x28) < 1) {
      *(undefined1 *)((long)param_1 + 0x3d) = 0;
      param_1[6] = *(undefined8 *)(lVar1 + 0x30);
      iVar3 = *(int *)(lVar1 + 0x38) + -2;
      uVar5 = 4;
    }
    else {
      *(undefined1 *)((long)param_1 + 0x3d) = 1;
      param_1[6] = *(undefined8 *)(lVar1 + 0x20);
      iVar3 = *(int *)(lVar1 + 0x28) + -2;
      uVar5 = 2;
    }
  }
  else {
    if (*(char *)(lVar1 + 0x18) != '\x01') goto LAB_005d41d0;
    if (*(int *)(lVar1 + 0x28) < 1) {
      *(undefined1 *)((long)param_1 + 0x3d) = 0;
      param_1[6] = *(undefined8 *)(lVar1 + 0x30);
      iVar3 = *(int *)(lVar1 + 0x38) / 3;
      uVar5 = 0xc;
    }
    else {
      *(undefined1 *)((long)param_1 + 0x3d) = 1;
      param_1[6] = *(undefined8 *)(lVar1 + 0x20);
      iVar3 = *(int *)(lVar1 + 0x28) / 3;
      uVar5 = 6;
    }
  }
  *(int *)(param_1 + 7) = iVar3;
  *(undefined1 *)((long)param_1 + 0x3c) = uVar5;
LAB_005d41d0:
  if (lVar6 == 0) {
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    *(undefined1 *)((long)param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
  }
  else {
    uVar2 = FUN_00689900(*(undefined8 *)(lVar11 + 0x18),lVar6);
    param_1[8] = uVar2;
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(*(long *)(lVar11 + 0x18) + 0x68);
    *(char *)((long)param_1 + 0x4c) = (char)*(undefined4 *)(lVar6 + 8);
    *(undefined4 *)(param_1 + 10) = 1;
  }
  if (lVar7 == 0) {
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined1 *)((long)param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  else {
    uVar2 = FUN_00689900(*(undefined8 *)(lVar11 + 0x18),lVar7);
    param_1[0xb] = uVar2;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(long *)(lVar11 + 0x18) + 0x68);
    *(char *)((long)param_1 + 100) = (char)*(undefined4 *)(lVar7 + 8);
    *(undefined4 *)(param_1 + 0xd) = 1;
  }
  if (lVar9 == 0) {
    uVar5 = 0;
    param_1[0xe] = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
  }
  else {
    uVar2 = FUN_00689900(*(undefined8 *)(lVar11 + 0x18),lVar9);
    param_1[0xe] = uVar2;
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(*(long *)(lVar11 + 0x18) + 0x68);
    uVar5 = (undefined1)*(undefined4 *)(lVar9 + 8);
  }
  *(undefined1 *)((long)param_1 + 0x7c) = uVar5;
  *(uint *)(param_1 + 0x10) = (uint)(lVar9 != 0);
  FUN_00687fa0(param_2,param_3,param_1 + 0x12,0);
  local_58 = _DAT_0413f520;
  FUN_004d0d50(param_1 + 0x1a,param_1 + 0x12,&local_58);
  return;
}

