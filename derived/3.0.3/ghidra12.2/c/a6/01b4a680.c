
undefined8 FUN_01b4a680(undefined2 *param_1,undefined4 *param_2,byte *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  byte local_44 [4];
  
  local_44[0] = *param_3;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  lVar4 = FUN_02583354(DAT_055021a0,local_44,1);
  if (lVar4 == 0) {
    return 0;
  }
  if ((*(long **)(lVar4 + 0x17bb0) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x17bb0), puVar5 == (undefined8 *)0x0)) {
    uVar3 = 1;
    if (*(long *)(lVar4 + 0x194b8) == 0) goto LAB_01b4a70c;
LAB_01b4a72c:
    lVar9 = lVar4 + 0x194b0;
  }
  else {
    uVar3 = (**(code **)*puVar5)();
    uVar3 = uVar3 ^ 1;
    if (*(long *)(lVar4 + 0x194b8) != 0) goto LAB_01b4a72c;
LAB_01b4a70c:
    lVar9 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar10 = *(long *)(lVar9 + 0x8528);
  if (lVar10 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
      plVar7 = *(long **)(lVar10 + 0x20);
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      uVar6 = uVar6 & 0xffffffff;
      if (*(long *)(lVar9 + 0x8528) == 0) goto LAB_01b4a7b0;
      plVar7 = *(long **)(*(long *)(lVar9 + 0x8528) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_78 = *(long *)(lVar9 + 0x8508);
      local_70 = *(undefined8 *)(lVar9 + 0x8510);
      uStack_68 = 0xeab4;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
    }
  }
LAB_01b4a7b0:
  lVar10 = *(long *)(lVar9 + 0x8510) + *(long *)(lVar9 + 0x8508);
  puVar15 = (undefined4 *)(lVar10 + 0xcd7c);
  uVar8 = FUN_02829aa0(puVar15);
  if ((uVar8 & 1) != 0) {
    puVar15 = (undefined4 *)(lVar10 + 0xd068);
    uVar8 = FUN_02829aa0(puVar15);
    if ((uVar8 & 1) != 0) {
      puVar15 = (undefined4 *)(lVar10 + 0xd354);
      uVar8 = FUN_02829aa0(puVar15);
      if ((uVar8 & 1) != 0) {
        puVar15 = (undefined4 *)(lVar10 + 0xd640);
        uVar8 = FUN_02829aa0(puVar15);
        if ((uVar8 & 1) != 0) {
          puVar15 = (undefined4 *)(lVar10 + 0xd92c);
          uVar8 = FUN_02829aa0(puVar15);
          if ((uVar8 & 1) != 0) {
            uVar14 = 0;
            goto LAB_01b4a8b0;
          }
        }
      }
    }
  }
  lVar10 = *(long *)(lVar4 + 0x17b90);
  lVar1 = *(long *)(lVar4 + 0x17b98);
  uVar14 = 1;
  *puVar15 = 1;
  puVar5 = (undefined8 *)(lVar1 + lVar10);
  *(undefined2 *)(puVar15 + 1) = *param_1;
  *(undefined1 *)((long)puVar15 + 6) = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)((long)puVar15 + 7) = *(undefined1 *)((long)param_1 + 3);
  puVar15[2] = *(undefined4 *)(param_1 + 2);
  puVar15[3] = *param_2;
  memset(puVar15 + 4,0,0x2a1);
  uVar11 = puVar5[1];
  uVar12 = puVar5[2];
  uVar13 = *puVar5;
  *(undefined1 *)(puVar15 + 0xb3) = *(undefined1 *)(puVar5 + 3);
  *(undefined8 *)(puVar15 + 0xad) = uVar13;
  *(undefined8 *)(puVar15 + 0xaf) = uVar11;
  *(undefined8 *)(puVar15 + 0xb1) = uVar12;
  uVar11 = *(undefined8 *)((long)puVar5 + 0x1c);
  uVar12 = *(undefined8 *)((long)puVar5 + 0x24);
  *(undefined8 *)(puVar15 + 0xb8) = *(undefined8 *)((long)puVar5 + 0x2c);
  *(undefined8 *)(puVar15 + 0xb6) = uVar12;
  *(undefined8 *)(puVar15 + 0xb4) = uVar11;
  uVar2 = *(uint *)((long)puVar5 + 0x34);
  if (1 < uVar2) {
    uVar2 = 0;
  }
  puVar15[0xba] = uVar2;
LAB_01b4a8b0:
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar9 + 0x8528) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar9 + 0x8528) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x17bb0) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17bb0) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return uVar14;
}

