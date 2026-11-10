
void FUN_002e9870(long param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  
  if (*(int *)(param_1 + 0x10) == param_2) {
    puVar1 = (undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(undefined8 **)(param_1 + 0x20) != puVar1) {
      puVar5 = *(undefined8 **)(param_1 + 0x20);
      do {
        iVar2 = *(int *)(param_1 + 0x44);
        puVar7 = (undefined8 *)puVar5[1];
        *puVar5 = 0;
        puVar5[1] = 0;
        FUN_002236e0(param_1 + 0x30,param_1 + 0x30,(long)iVar2 + (long)puVar5);
        puVar5 = puVar7;
      } while (puVar7 != puVar1);
    }
    FUN_002236b0(puVar1);
    iVar2 = *(int *)(param_1 + 0x658);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x658);
  }
  if (iVar2 == param_2) {
    puVar1 = (undefined8 *)(param_1 + 0x660);
    *(undefined4 *)(param_1 + 0x658) = 0;
    if (*(undefined8 **)(param_1 + 0x668) != puVar1) {
      puVar5 = *(undefined8 **)(param_1 + 0x668);
      do {
        iVar2 = *(int *)(param_1 + 0x68c);
        puVar7 = (undefined8 *)puVar5[1];
        *puVar5 = 0;
        puVar5[1] = 0;
        FUN_002236e0(param_1 + 0x678,param_1 + 0x678,(long)iVar2 + (long)puVar5);
        puVar5 = puVar7;
      } while (puVar7 != puVar1);
    }
    FUN_002236b0(puVar1);
    iVar2 = *(int *)(param_1 + 0xca0);
  }
  else {
    iVar2 = *(int *)(param_1 + 0xca0);
  }
  if (iVar2 == param_2) {
    puVar1 = (undefined8 *)(param_1 + 0xca8);
    *(undefined4 *)(param_1 + 0xca0) = 0;
    if (*(undefined8 **)(param_1 + 0xcb0) != puVar1) {
      puVar5 = *(undefined8 **)(param_1 + 0xcb0);
      do {
        iVar2 = *(int *)(param_1 + 0xcd4);
        puVar7 = (undefined8 *)puVar5[1];
        *puVar5 = 0;
        puVar5[1] = 0;
        FUN_002236e0(param_1 + 0xcc0,param_1 + 0xcc0,(long)iVar2 + (long)puVar5);
        puVar5 = puVar7;
      } while (puVar7 != puVar1);
    }
    FUN_002236b0(puVar1);
    iVar2 = *(int *)(param_1 + 0x12e8);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x12e8);
  }
  if (iVar2 == param_2) {
    *(undefined4 *)(param_1 + 0x12e8) = 0;
    puVar1 = (undefined8 *)(param_1 + 0x12f0);
    if (*(undefined8 **)(param_1 + 0x12f8) != puVar1) {
      puVar5 = *(undefined8 **)(param_1 + 0x12f8);
      do {
        iVar2 = *(int *)(param_1 + 0x131c);
        puVar7 = (undefined8 *)puVar5[1];
        *puVar5 = 0;
        puVar5[1] = 0;
        FUN_002236e0(param_1 + 0x1308,param_1 + 0x1308,(long)iVar2 + (long)puVar5);
        puVar5 = puVar7;
      } while (puVar7 != puVar1);
    }
    FUN_002236b0(puVar1);
    iVar2 = *(int *)(param_1 + 0x1930);
    uVar3 = *(uint *)(param_1 + 0x1934);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1930);
    uVar3 = *(uint *)(param_1 + 0x1934);
  }
  if (iVar2 == 0) {
    *(int *)(param_1 + ((ulong)uVar3 & 7) * 4 + 0x1938) = param_2;
  }
  else {
    iVar6 = 0;
    do {
      iVar4 = *(int *)(param_1 + (ulong)(uVar3 + iVar6 & 7) * 4 + 0x1938);
      if (iVar4 != 0 && iVar4 == param_2) {
        return;
      }
      iVar6 = iVar6 + 1;
    } while (iVar2 != iVar6);
    *(int *)(param_1 + (ulong)(uVar3 + iVar2 & 7) * 4 + 0x1938) = param_2;
    if (iVar2 == 8) {
      *(uint *)(param_1 + 0x1934) = uVar3 + 1 & 7;
      return;
    }
  }
  *(int *)(param_1 + 0x1930) = iVar2 + 1;
  return;
}

