
void FUN_02ce0db8(long param_1,byte *param_2,uint param_3)

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
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  undefined4 uVar14;
  byte bVar15;
  undefined *local_70;
  char *pcStack_68;
  
  uVar5 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar3 = PTR_DAT_04bb37e0[2];
  uVar4 = PTR_DAT_04bb37e0[3];
  uVar14 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *(undefined2 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0xc) = uVar14;
  *(undefined4 *)(param_1 + 0x14) = uVar14;
  *(undefined4 *)(param_1 + 0x1c) = uVar14;
  *(undefined4 *)(param_1 + 0x24) = uVar14;
  *(undefined4 *)(param_1 + 0x2c) = uVar14;
  *(undefined4 *)(param_1 + 0x34) = uVar14;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x4c) = uVar14;
  *(undefined4 *)(param_1 + 0x54) = uVar14;
  *(undefined4 *)(param_1 + 0x5c) = uVar14;
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
      pcStack_68 = "UnlockMyDesignProCategory";
      local_70 = puVar1;
      iVar7 = FUN_0274bce0(param_2,&local_70);
      if (iVar7 == 0) {
        pcStack_68 = "MainmenuUnlockMydesingPro";
        local_70 = puVar1;
        iVar7 = FUN_0274bce0(param_2,&local_70);
        if (iVar7 == 0) {
          uVar14 = 1;
          goto LAB_02ce0f4c;
        }
      }
      uVar14 = 2;
      goto LAB_02ce0f4c;
    }
  }
  uVar14 = 0;
LAB_02ce0f4c:
  *(undefined4 *)(param_1 + 0x40) = uVar14;
  puVar1 = PTR_DAT_04bb4f78;
  bVar15 = *param_2;
  if (7 < bVar15) {
    bVar15 = 0xff;
  }
  local_70 = (undefined *)CONCAT71(local_70._1_7_,bVar15);
  lVar8 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_70,1);
  if ((param_3 < 8) && (lVar8 != 0)) {
    lVar8 = lVar8 + (ulong)param_3 * 0x2450;
    if ((*(long **)(lVar8 + 0x3f28) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x3f28), puVar9 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar9)();
      uVar6 = uVar6 ^ 1;
    }
    uVar10 = FUN_026e9ac0(*(long *)(lVar8 + 0x3f10) + *(long *)(lVar8 + 0x3f08));
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar8 + 0x3f28) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x3f28) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
    if ((uVar10 & 1) != 0) {
      bVar15 = *param_2;
      uVar6 = 1;
      if (7 < bVar15) {
        bVar15 = 0xff;
      }
      local_70 = (undefined *)CONCAT71(local_70._1_7_,bVar15);
      lVar11 = FUN_02583354(*(undefined8 *)puVar1,&local_70,1);
      lVar8 = 0;
      if (lVar11 != 0) {
        lVar8 = lVar11 + (ulong)param_3 * 0x2450 + 0x3f00;
      }
      if (*(long **)(lVar8 + 0x60) != (long *)0x0) {
        puVar9 = (undefined8 *)**(long **)(lVar8 + 0x60);
        if (puVar9 == (undefined8 *)0x0) {
          uVar6 = 1;
        }
        else {
          uVar6 = (**(code **)*puVar9)();
          uVar6 = uVar6 ^ 1;
        }
      }
      uVar12 = FUN_026e85f0(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40));
      uVar10 = FUN_02665700();
      if (((uVar10 & 1) != 0) || (uVar10 = FUN_02cd8f10(uVar12), (uVar10 & 1) != 0)) {
        puVar13 = (undefined2 *)FUN_026e85f0(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40));
        *(undefined2 *)(param_1 + 8) = *puVar13;
        *(undefined1 *)(param_1 + 10) = *(undefined1 *)(puVar13 + 1);
        *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((long)puVar13 + 3);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(puVar13 + 2);
      }
      puVar13 = (undefined2 *)FUN_026e8d10(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40));
      uVar10 = FUN_02665700();
      if (((uVar10 & 1) != 0) || (uVar10 = FUN_02cd8f10(puVar13), (uVar10 & 1) != 0)) {
        uVar10 = FUN_02cd92f0(puVar13);
        puVar2 = (undefined2 *)(param_1 + 0x18);
        if ((uVar10 & 1) == 0) {
          puVar2 = (undefined2 *)(param_1 + 0x10);
        }
        *puVar2 = *puVar13;
        *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar13 + 1);
        *(undefined1 *)((long)puVar2 + 3) = *(undefined1 *)((long)puVar13 + 3);
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar13 + 2);
      }
      if ((((uVar6 & 1) == 0) && (*(long *)(lVar8 + 0x60) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x60) + 8), puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
    }
  }
  return;
}

