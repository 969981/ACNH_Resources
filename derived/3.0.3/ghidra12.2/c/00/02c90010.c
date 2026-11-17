
/* WARNING: Removing unreachable block (ram,0x02c90088) */
/* WARNING: Removing unreachable block (ram,0x02c90388) */

void FUN_02c90010(uint *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined **local_48;
  byte *pbStack_40;
  undefined4 local_34;
  
  if (0 < (int)*param_1) {
    lVar3 = 0;
    puVar4 = *(undefined8 **)(param_1 + 4);
    do {
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar3 * 8);
      lVar3 = lVar3 + 1;
      *puVar7 = puVar4;
      *(undefined8 **)(param_1 + 4) = puVar7;
      puVar4 = puVar7;
    } while (lVar3 < (int)*param_1);
  }
  *param_1 = 0;
  local_34 = 0;
  pbStack_40 = DAT_05662be8;
  local_48 = &PTR_LAB_048f9770;
  uVar2 = (uint)*DAT_05662be8;
  if (*DAT_05662be8 != 0) {
    iVar1 = FUN_0274bce0(param_2,&local_48);
    if (iVar1 == 0) goto LAB_02c90374;
    uVar2 = *param_1;
  }
  if ((int)param_1[1] <= (int)uVar2) {
    return;
  }
  puVar4 = *(undefined8 **)(param_1 + 4);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 4) = *puVar4;
  }
  *(undefined4 *)puVar4 = 0;
  if ((int)*param_1 < (int)param_1[1]) {
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = puVar4;
    *param_1 = *param_1 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  if ((int)param_1[1] <= (int)*param_1) {
    return;
  }
  puVar5 = *(uint **)(param_1 + 4);
  if (puVar5 != (uint *)0x0) {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar5;
  }
  *puVar5 = 0;
  if ((int)*param_1 < (int)param_1[1]) {
    *(uint **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = puVar5;
    *param_1 = *param_1 + 1;
  }
  *puVar5 = (uint)DAT_05662c00;
  if ((int)param_1[1] <= (int)*param_1) {
    return;
  }
  puVar4 = *(undefined8 **)(param_1 + 4);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 4) = *puVar4;
  }
  *(undefined4 *)puVar4 = 0;
  if ((int)*param_1 < (int)param_1[1]) {
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = puVar4;
    *param_1 = *param_1 + 1;
  }
  uVar6 = 2;
  if (DAT_05662c04 == '\0') {
    uVar6 = 0;
  }
  *(undefined4 *)puVar4 = uVar6;
  if ((int)param_1[1] <= (int)*param_1) {
    return;
  }
  puVar4 = *(undefined8 **)(param_1 + 4);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 4) = *puVar4;
  }
  *(undefined4 *)puVar4 = 0;
  if ((int)*param_1 < (int)param_1[1]) {
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = puVar4;
    *param_1 = *param_1 + 1;
  }
  uVar6 = 3;
  if (DAT_05662c08 == '\0') {
    uVar6 = 0;
  }
  *(undefined4 *)puVar4 = uVar6;
  if ((int)param_1[1] <= (int)*param_1) {
    return;
  }
  puVar4 = *(undefined8 **)(param_1 + 4);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 4) = *puVar4;
  }
  *(undefined4 *)puVar4 = 0;
  if ((int)*param_1 < (int)param_1[1]) {
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = puVar4;
    *param_1 = *param_1 + 1;
  }
  uVar6 = 4;
  if (DAT_05662c0c == '\0') {
    uVar6 = 0;
  }
  *(undefined4 *)puVar4 = uVar6;
  if ((int)param_1[1] <= (int)*param_1) {
    return;
  }
  puVar4 = *(undefined8 **)(param_1 + 4);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 4) = *puVar4;
  }
  *(undefined4 *)puVar4 = 0;
  if ((int)*param_1 < (int)param_1[1]) {
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = puVar4;
    *param_1 = *param_1 + 1;
  }
  uVar6 = 5;
  if (DAT_05662c10 == '\0') {
    uVar6 = 0;
  }
  *(undefined4 *)puVar4 = uVar6;
  if ((int)param_1[1] <= (int)*param_1) {
    return;
  }
  puVar4 = *(undefined8 **)(param_1 + 4);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 4) = *puVar4;
  }
  *(undefined4 *)puVar4 = 0;
  if ((int)*param_1 < (int)param_1[1]) {
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = puVar4;
    *param_1 = *param_1 + 1;
  }
  uVar6 = 6;
  if (DAT_05662c14 == '\0') {
    uVar6 = 0;
  }
  *(undefined4 *)puVar4 = uVar6;
  if ((int)param_1[1] <= (int)*param_1) {
    return;
  }
  puVar4 = *(undefined8 **)(param_1 + 4);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 4) = *puVar4;
  }
  *(undefined4 *)puVar4 = 0;
  if ((int)*param_1 < (int)param_1[1]) {
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = puVar4;
    *param_1 = *param_1 + 1;
  }
  uVar6 = 7;
  if (DAT_05662c18 == '\0') {
    uVar6 = 0;
  }
  *(undefined4 *)puVar4 = uVar6;
LAB_02c90374:
  local_34 = 1;
  pbStack_40 = (byte *)DAT_05662bf8;
  local_48 = &PTR_LAB_048f9770;
  if (((*DAT_05662bf8 == '\0') || (iVar1 = FUN_0274bce0(param_2,&local_48), iVar1 != 0)) &&
     ((int)*param_1 < (int)param_1[1])) {
    puVar4 = *(undefined8 **)(param_1 + 4);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 4) = *puVar4;
    }
    *(undefined4 *)puVar4 = 0;
    if ((int)*param_1 < (int)param_1[1]) {
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = puVar4;
      *param_1 = *param_1 + 1;
    }
    *(undefined4 *)puVar4 = DAT_05662c1c;
    if ((int)*param_1 < (int)param_1[1]) {
      puVar4 = *(undefined8 **)(param_1 + 4);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 4) = *puVar4;
      }
      *(undefined4 *)puVar4 = 0;
      if ((int)*param_1 < (int)param_1[1]) {
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = puVar4;
        *param_1 = *param_1 + 1;
      }
      *(undefined4 *)puVar4 = DAT_05662c20;
      if ((int)*param_1 < (int)param_1[1]) {
        puVar4 = *(undefined8 **)(param_1 + 4);
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 4) = *puVar4;
        }
        *(undefined4 *)puVar4 = 0;
        if ((int)*param_1 < (int)param_1[1]) {
          *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = puVar4;
          *param_1 = *param_1 + 1;
        }
        *(undefined4 *)puVar4 = DAT_05662c24;
        if ((int)*param_1 < (int)param_1[1]) {
          puVar4 = *(undefined8 **)(param_1 + 4);
          if (puVar4 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 4) = *puVar4;
          }
          *(undefined4 *)puVar4 = 0;
          if ((int)*param_1 < (int)param_1[1]) {
            *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = puVar4;
            *param_1 = *param_1 + 1;
          }
          *(undefined4 *)puVar4 = DAT_05662c28;
        }
      }
    }
  }
  return;
}

