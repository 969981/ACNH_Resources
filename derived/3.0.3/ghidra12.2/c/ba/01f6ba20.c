
void FUN_01f6ba20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long *plVar12;
  
  puVar6 = PTR_DAT_04bbc1a0;
  puVar1 = param_1 + 0x2d;
  *param_1 = *param_2;
  puVar2 = PTR_DAT_04bb2e18 + 0x10;
  *(undefined **)(param_1 + 2) = puVar6 + 0x10;
  *(undefined **)(param_1 + 4) = puVar2;
  param_1[6] = param_2[6];
  puVar6 = PTR_DAT_04bb2010;
  uVar5 = param_2[7];
  *(undefined **)(param_1 + 8) = puVar2;
  param_1[7] = uVar5;
  *(undefined **)(param_1 + 4) = puVar6 + 0x10;
  param_1[10] = param_2[10];
  uVar5 = param_2[0xb];
  *(undefined **)(param_1 + 8) = puVar6 + 0x10;
  param_1[0xb] = uVar5;
  uVar7 = *(undefined8 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  *(undefined8 *)(param_1 + 0xc) = uVar7;
  param_1[0xf] = param_2[0xf];
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
  *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
  param_1[0x11] = param_2[0x11];
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x14);
  uVar9 = *(undefined8 *)(param_2 + 0x16);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x16) = uVar9;
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  *(undefined8 *)(param_1 + 0x14) = uVar7;
  *(undefined2 *)(param_1 + 0x1b) = *(undefined2 *)(param_2 + 0x1b);
  *(undefined1 *)((long)param_1 + 0x6e) = *(undefined1 *)((long)param_2 + 0x6e);
  *(undefined1 *)((long)param_1 + 0x6f) = *(undefined1 *)((long)param_2 + 0x6f);
  param_1[0x1c] = param_2[0x1c];
  uVar7 = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)(param_1 + 0x1f) = *(undefined8 *)(param_2 + 0x1f);
  *(undefined8 *)(param_1 + 0x1d) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x21);
  uVar9 = *(undefined8 *)(param_2 + 0x23);
  uVar10 = *(undefined8 *)(param_2 + 0x25);
  uVar5 = param_2[0x27];
  param_1[0x2c] = 0x20;
  *(undefined1 *)((long)param_1 + 0xd3) = 0;
  param_1[0x27] = uVar5;
  *(undefined8 *)(param_1 + 0x25) = uVar10;
  *(undefined8 *)(param_1 + 0x23) = uVar9;
  *(undefined8 *)(param_1 + 0x21) = uVar7;
  puVar2 = PTR_DAT_04bb2a08 + 0x10;
  *(undefined **)(param_1 + 0x28) = puVar2;
  *(undefined4 **)(param_1 + 0x2a) = puVar1;
  plVar12 = (long *)(param_2 + 0x28);
  (**(code **)(*plVar12 + 0x18))(plVar12);
  puVar11 = *(undefined4 **)(param_2 + 0x2a);
  if (puVar1 != puVar11) {
    (**(code **)(*(long *)(param_2 + 0x28) + 0x18))(plVar12);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x2a) + lVar8) == '\0') goto LAB_01f6bbec;
      lVar3 = *(long *)(param_2 + 0x2a) + lVar8;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_01f6bbec;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_01f6bbec;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_01f6bbec:
    iVar4 = (int)lVar8;
    if ((int)param_1[0x2c] <= (int)lVar8) {
      iVar4 = param_1[0x2c] + -1;
    }
    memcpy(puVar1,puVar11,(long)iVar4);
    *(undefined1 *)((long)puVar1 + (long)iVar4) = 0;
  }
  puVar6 = PTR_DAT_04bb2028;
  puVar1 = param_1 + 0x3b;
  param_1[0x3a] = 0x20;
  *(undefined1 *)((long)param_1 + 0x10b) = 0;
  *(undefined **)(param_1 + 0x36) = puVar2;
  *(undefined4 **)(param_1 + 0x38) = puVar1;
  *(undefined **)(param_1 + 0x28) = puVar6 + 0x10;
  plVar12 = (long *)(param_2 + 0x36);
  (**(code **)(*plVar12 + 0x18))(plVar12);
  puVar11 = *(undefined4 **)(param_2 + 0x38);
  if (puVar1 != puVar11) {
    (**(code **)(*(long *)(param_2 + 0x36) + 0x18))(plVar12);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x38) + lVar8) == '\0') goto LAB_01f6bcac;
      lVar3 = *(long *)(param_2 + 0x38) + lVar8;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_01f6bcac;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_01f6bcac;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_01f6bcac:
    iVar4 = (int)lVar8;
    if ((int)param_1[0x3a] <= (int)lVar8) {
      iVar4 = param_1[0x3a] + -1;
    }
    memcpy(puVar1,puVar11,(long)iVar4);
    *(undefined1 *)((long)puVar1 + (long)iVar4) = 0;
  }
  *(undefined **)(param_1 + 0x36) = puVar6 + 0x10;
  return;
}

