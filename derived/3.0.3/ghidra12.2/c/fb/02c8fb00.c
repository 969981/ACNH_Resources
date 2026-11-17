
void FUN_02c8fb00(int *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined *local_78;
  char *pcStack_70;
  uint local_64;
  
  if (0 < *param_1) {
    lVar6 = 0;
    puVar7 = *(undefined8 **)(param_1 + 4);
    do {
      puVar11 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar6 * 8);
      lVar6 = lVar6 + 1;
      *puVar11 = puVar7;
      *(undefined8 **)(param_1 + 4) = puVar11;
      puVar7 = puVar11;
    } while (lVar6 < *param_1);
  }
  puVar3 = PTR_DAT_04bb2020;
  *param_1 = 0;
  uVar5 = 0;
  do {
    uVar9 = uVar5;
    if (1 < uVar5) {
      uVar9 = 0;
    }
    pcStack_70 = (char *)(&DAT_05662b90)[(long)(int)uVar9 * 2];
    if ((*pcStack_70 == '\0') ||
       (local_78 = puVar3 + 0x10, local_64 = uVar5, iVar4 = FUN_0274bce0(param_2,&local_78),
       iVar4 != 0)) {
      if (param_1[1] <= *param_1) {
        return;
      }
      puVar7 = *(undefined8 **)(param_1 + 4);
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 4) = *puVar7;
      }
      *(undefined4 *)puVar7 = 0;
      if (*param_1 < param_1[1]) {
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar7;
        *param_1 = *param_1 + 1;
      }
      uVar10 = DAT_05662bbc;
      if (uVar5 == 0) {
        uVar10 = 0;
      }
      *(undefined4 *)puVar7 = uVar10;
      if (param_1[1] <= *param_1) {
        return;
      }
      puVar8 = *(uint **)(param_1 + 4);
      if (puVar8 != (uint *)0x0) {
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar8;
      }
      *puVar8 = 0;
      if (*param_1 < param_1[1]) {
        *(uint **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar8;
        *param_1 = *param_1 + 1;
      }
      uVar9 = DAT_05662bc0;
      if (uVar5 == 0) {
        uVar9 = (uint)DAT_05662ba8;
      }
      *puVar8 = uVar9;
      if (param_1[1] <= *param_1) {
        return;
      }
      puVar7 = *(undefined8 **)(param_1 + 4);
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 4) = *puVar7;
      }
      *(undefined4 *)puVar7 = 0;
      if (*param_1 < param_1[1]) {
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar7;
        *param_1 = *param_1 + 1;
      }
      uVar10 = 2;
      if (DAT_05662bac == '\0') {
        uVar10 = 0;
      }
      uVar2 = DAT_05662bc4;
      if (uVar5 == 0) {
        uVar2 = uVar10;
      }
      *(undefined4 *)puVar7 = uVar2;
      if (param_1[1] <= *param_1) {
        return;
      }
      puVar7 = *(undefined8 **)(param_1 + 4);
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 4) = *puVar7;
      }
      *(undefined4 *)puVar7 = 0;
      if (*param_1 < param_1[1]) {
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar7;
        *param_1 = *param_1 + 1;
      }
      uVar10 = 3;
      if (DAT_05662bb0 == '\0') {
        uVar10 = 0;
      }
      uVar2 = DAT_05662bc8;
      if (uVar5 == 0) {
        uVar2 = uVar10;
      }
      *(undefined4 *)puVar7 = uVar2;
      if (param_1[1] <= *param_1) {
        return;
      }
      puVar7 = *(undefined8 **)(param_1 + 4);
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 4) = *puVar7;
      }
      *(undefined4 *)puVar7 = 0;
      if (*param_1 < param_1[1]) {
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar7;
        *param_1 = *param_1 + 1;
      }
      uVar10 = 4;
      if (DAT_05662bb4 == '\0') {
        uVar10 = 0;
      }
      uVar2 = DAT_05662bcc;
      if (uVar5 == 0) {
        uVar2 = uVar10;
      }
      *(undefined4 *)puVar7 = uVar2;
      if (param_1[1] <= *param_1) {
        return;
      }
      puVar7 = *(undefined8 **)(param_1 + 4);
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 4) = *puVar7;
      }
      *(undefined4 *)puVar7 = 0;
      if (*param_1 < param_1[1]) {
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar7;
        *param_1 = *param_1 + 1;
      }
      uVar10 = 5;
      if (DAT_05662bb8 == '\0') {
        uVar10 = 0;
      }
      uVar2 = DAT_05662bd0;
      if (uVar5 == 0) {
        uVar2 = uVar10;
      }
      *(undefined4 *)puVar7 = uVar2;
    }
    bVar1 = uVar5 != 0;
    uVar5 = 1;
    if (bVar1) {
      return;
    }
  } while( true );
}

