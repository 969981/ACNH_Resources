
void FUN_02c8f4f0(int *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined *local_78;
  char *pcStack_70;
  uint local_64;
  
  if (0 < *param_1) {
    lVar5 = 0;
    puVar6 = *(undefined8 **)(param_1 + 4);
    do {
      puVar11 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar5 * 8);
      lVar5 = lVar5 + 1;
      *puVar11 = puVar6;
      *(undefined8 **)(param_1 + 4) = puVar11;
      puVar6 = puVar11;
    } while (lVar5 < *param_1);
  }
  puVar2 = PTR_DAT_04bb2020;
  *param_1 = 0;
  uVar4 = 0;
  do {
    uVar9 = uVar4;
    if (1 < uVar4) {
      uVar9 = 0;
    }
    pcStack_70 = (char *)(&DAT_05662ac8)[(long)(int)uVar9 * 2];
    if ((*pcStack_70 == '\0') ||
       (local_78 = puVar2 + 0x10, local_64 = uVar4, iVar3 = FUN_0274bce0(param_2,&local_78),
       iVar3 != 0)) {
      if (param_1[1] <= *param_1) {
        return;
      }
      puVar6 = *(undefined8 **)(param_1 + 4);
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 4) = *puVar6;
      }
      *(undefined4 *)puVar6 = 0;
      if (*param_1 < param_1[1]) {
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar6;
        *param_1 = *param_1 + 1;
      }
      uVar8 = 6;
      if ((uVar4 & DAT_05662afc) == 0) {
        uVar8 = 0;
      }
      *(undefined4 *)puVar6 = uVar8;
      if (param_1[1] <= *param_1) {
        return;
      }
      puVar7 = *(uint **)(param_1 + 4);
      if (puVar7 != (uint *)0x0) {
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar7;
      }
      *puVar7 = 0;
      if (*param_1 < param_1[1]) {
        *(uint **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar7;
        *param_1 = *param_1 + 1;
      }
      uVar9 = 5;
      if (DAT_05662b00 == '\0') {
        uVar9 = 0;
      }
      if (uVar4 == 0) {
        uVar9 = (uint)DAT_05662ae0;
      }
      *puVar7 = uVar9;
      if (param_1[1] <= *param_1) {
        return;
      }
      puVar6 = *(undefined8 **)(param_1 + 4);
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 4) = *puVar6;
      }
      *(undefined4 *)puVar6 = 0;
      if (*param_1 < param_1[1]) {
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar6;
        *param_1 = *param_1 + 1;
      }
      uVar8 = 10;
      if (DAT_05662b04 == '\0') {
        uVar8 = 0;
      }
      uVar10 = 2;
      if (DAT_05662ae4 == '\0') {
        uVar10 = 0;
      }
      if (uVar4 == 0) {
        uVar8 = uVar10;
      }
      *(undefined4 *)puVar6 = uVar8;
      if (param_1[1] <= *param_1) {
        return;
      }
      puVar6 = *(undefined8 **)(param_1 + 4);
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 4) = *puVar6;
      }
      *(undefined4 *)puVar6 = 0;
      if (*param_1 < param_1[1]) {
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar6;
        *param_1 = *param_1 + 1;
      }
      uVar8 = 7;
      if (DAT_05662b08 == '\0') {
        uVar8 = 0;
      }
      uVar10 = 3;
      if (DAT_05662ae8 == '\0') {
        uVar10 = 0;
      }
      if (uVar4 == 0) {
        uVar8 = uVar10;
      }
      *(undefined4 *)puVar6 = uVar8;
      if (param_1[1] <= *param_1) {
        return;
      }
      puVar6 = *(undefined8 **)(param_1 + 4);
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 4) = *puVar6;
      }
      *(undefined4 *)puVar6 = 0;
      if (*param_1 < param_1[1]) {
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar6;
        *param_1 = *param_1 + 1;
      }
      uVar8 = 0xb;
      if (DAT_05662b0c == '\0') {
        uVar8 = 0;
      }
      uVar10 = 8;
      if (DAT_05662aec == '\0') {
        uVar10 = 0;
      }
      if (uVar4 == 0) {
        uVar8 = uVar10;
      }
      *(undefined4 *)puVar6 = uVar8;
      if (param_1[1] <= *param_1) {
        return;
      }
      puVar6 = *(undefined8 **)(param_1 + 4);
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 4) = *puVar6;
      }
      *(undefined4 *)puVar6 = 0;
      if (*param_1 < param_1[1]) {
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar6;
        *param_1 = *param_1 + 1;
      }
      uVar8 = 0xe;
      if (DAT_05662b10 == '\0') {
        uVar8 = 0;
      }
      uVar10 = 9;
      if (DAT_05662af0 == '\0') {
        uVar10 = 0;
      }
      if (uVar4 == 0) {
        uVar8 = uVar10;
      }
      *(undefined4 *)puVar6 = uVar8;
      if (param_1[1] <= *param_1) {
        return;
      }
      puVar6 = *(undefined8 **)(param_1 + 4);
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 4) = *puVar6;
      }
      *(undefined4 *)puVar6 = 0;
      if (*param_1 < param_1[1]) {
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar6;
        *param_1 = *param_1 + 1;
      }
      uVar8 = 0xc;
      if (DAT_05662b14 == '\0') {
        uVar8 = 0;
      }
      uVar10 = 4;
      if (DAT_05662af4 == '\0') {
        uVar10 = 0;
      }
      if (uVar4 == 0) {
        uVar8 = uVar10;
      }
      *(undefined4 *)puVar6 = uVar8;
      if (param_1[1] <= *param_1) {
        return;
      }
      puVar6 = *(undefined8 **)(param_1 + 4);
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 4) = *puVar6;
      }
      *(undefined4 *)puVar6 = 0;
      if (*param_1 < param_1[1]) {
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar6;
        *param_1 = *param_1 + 1;
      }
      uVar8 = 0xd;
      if (DAT_05662b18 == '\0') {
        uVar8 = 0;
      }
      uVar10 = 0xf;
      if (DAT_05662af8 == '\0') {
        uVar10 = 0;
      }
      if (uVar4 == 0) {
        uVar8 = uVar10;
      }
      *(undefined4 *)puVar6 = uVar8;
    }
    bVar1 = uVar4 != 0;
    uVar4 = 1;
    if (bVar1) {
      return;
    }
  } while( true );
}

