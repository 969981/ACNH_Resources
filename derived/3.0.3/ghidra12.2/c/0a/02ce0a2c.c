
void FUN_02ce0a2c(long param_1,byte *param_2)

{
  undefined *puVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined2 *puVar12;
  undefined4 uVar13;
  byte local_54 [4];
  undefined *local_50;
  char *pcStack_48;
  
  uVar5 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar3 = PTR_DAT_04bb37e0[2];
  uVar4 = PTR_DAT_04bb37e0[3];
  uVar13 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *(undefined2 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0xc) = uVar13;
  *(undefined4 *)(param_1 + 0x14) = uVar13;
  *(undefined4 *)(param_1 + 0x1c) = uVar13;
  *(undefined4 *)(param_1 + 0x24) = uVar13;
  *(undefined4 *)(param_1 + 0x2c) = uVar13;
  *(undefined4 *)(param_1 + 0x34) = uVar13;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x4c) = uVar13;
  *(undefined4 *)(param_1 + 0x54) = uVar13;
  *(undefined4 *)(param_1 + 0x5c) = uVar13;
  *(undefined2 *)(param_1 + 8) = uVar5;
  *(undefined1 *)(param_1 + 10) = uVar3;
  *(undefined1 *)(param_1 + 0xb) = uVar4;
  *(undefined1 *)(param_1 + 0x12) = uVar3;
  *(undefined1 *)(param_1 + 0x13) = uVar4;
  *(undefined1 *)(param_1 + 0x1a) = uVar3;
  *(undefined1 *)(param_1 + 0x1b) = uVar4;
  *(undefined2 *)(param_1 + 0x20) = uVar5;
  *(undefined1 *)(param_1 + 0x22) = uVar3;
  *(undefined1 *)(param_1 + 0x23) = uVar4;
  *(undefined2 *)(param_1 + 0x10) = uVar5;
  *(undefined2 *)(param_1 + 0x28) = uVar5;
  *(undefined1 *)(param_1 + 0x2a) = uVar3;
  *(undefined1 *)(param_1 + 0x2b) = uVar4;
  *(undefined2 *)(param_1 + 0x30) = uVar5;
  *(undefined1 *)(param_1 + 0x32) = uVar3;
  *(undefined1 *)(param_1 + 0x33) = uVar4;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined2 *)(param_1 + 0x48) = uVar5;
  *(undefined1 *)(param_1 + 0x4a) = uVar3;
  *(undefined1 *)(param_1 + 0x4b) = uVar4;
  *(undefined2 *)(param_1 + 0x50) = uVar5;
  *(undefined1 *)(param_1 + 0x52) = uVar3;
  *(undefined1 *)(param_1 + 0x53) = uVar4;
  *(undefined2 *)(param_1 + 0x58) = uVar5;
  *(undefined1 *)(param_1 + 0x5a) = uVar3;
  *(undefined1 *)(param_1 + 0x5b) = uVar4;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0xff;
  if (7 < *param_2) {
    return;
  }
  uVar6 = FUN_02f5a2f0(2);
  if (-1 < (int)uVar6) {
    if (0x11 < uVar6) {
      uVar6 = 0;
    }
    if ((*(char *)(&DAT_056c6838)[(ulong)uVar6 * 7] == '\0') ||
       (iVar7 = FUN_0274bce0(param_2,&DAT_056c6830 + (ulong)uVar6 * 7), iVar7 != 0)) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "UnlockMyDesignProCategory";
      local_50 = puVar1;
      iVar7 = FUN_0274bce0(param_2,&local_50);
      if (iVar7 == 0) {
        pcStack_48 = "MainmenuUnlockMydesingPro";
        local_50 = puVar1;
        iVar7 = FUN_0274bce0(param_2,&local_50);
        if (iVar7 == 0) {
          uVar13 = 1;
          goto LAB_02ce0bb4;
        }
      }
      uVar13 = 2;
      goto LAB_02ce0bb4;
    }
  }
  uVar13 = 0;
LAB_02ce0bb4:
  *(undefined4 *)(param_1 + 0x40) = uVar13;
  local_54[0] = *param_2;
  if (7 < local_54[0]) {
    local_54[0] = 0xff;
  }
  lVar8 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_54,1);
  if (lVar8 != 0) {
    if ((*(long **)(lVar8 + 0x178) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x178), puVar9 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar9)();
      uVar6 = uVar6 ^ 1;
    }
    uVar10 = FUN_026e85f0(*(long *)(lVar8 + 0x160) + *(long *)(lVar8 + 0x158));
    uVar11 = FUN_02665700();
    if (((uVar11 & 1) != 0) || (uVar11 = FUN_02cd8f10(uVar10), (uVar11 & 1) != 0)) {
      puVar12 = (undefined2 *)FUN_026e85f0(*(long *)(lVar8 + 0x160) + *(long *)(lVar8 + 0x158));
      *(undefined2 *)(param_1 + 8) = *puVar12;
      *(undefined1 *)(param_1 + 10) = *(undefined1 *)(puVar12 + 1);
      *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((long)puVar12 + 3);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(puVar12 + 2);
    }
    puVar12 = (undefined2 *)FUN_02815540(*(long *)(lVar8 + 0x160) + *(long *)(lVar8 + 0x158));
    uVar11 = FUN_02665700();
    if (((uVar11 & 1) != 0) || (uVar11 = FUN_02cd8f10(puVar12), (uVar11 & 1) != 0)) {
      uVar11 = FUN_02cd92f0(puVar12);
      puVar2 = (undefined2 *)(param_1 + 0x18);
      if ((uVar11 & 1) == 0) {
        puVar2 = (undefined2 *)(param_1 + 0x10);
      }
      *puVar2 = *puVar12;
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar12 + 1);
      *(undefined1 *)((long)puVar2 + 3) = *(undefined1 *)((long)puVar12 + 3);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar12 + 2);
    }
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar8 + 0x178) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x178) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
  }
  return;
}

