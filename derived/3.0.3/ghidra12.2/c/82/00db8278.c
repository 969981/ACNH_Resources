
byte FUN_00db8278(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  byte bVar13;
  long lVar14;
  ulong uVar15;
  undefined4 local_a0 [2];
  long *local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  uint local_5c;
  uint local_58;
  
  if (DAT_05574040 == 0) {
    return 0;
  }
  uVar15 = (ulong)param_2;
  lVar14 = *(long *)PTR_DAT_04bb8460;
  puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar4 = (**(code **)(*(long *)*puVar9 + 0x38))();
    lVar5 = 0;
    if (lVar4 != 0) {
      lVar5 = lVar4 + 0x70;
    }
  }
  else {
    if (puVar9 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar9[0x26] == (long *)0x0) {
      return 0;
    }
    lVar5 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
  }
  if (lVar14 == 0) {
    return 0;
  }
  if (lVar5 == 0) {
    return 0;
  }
  if ((*(long **)(lVar5 + 0xe7140) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar5 + 0xe7140), puVar9 == (undefined8 *)0x0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)*puVar9)();
    uVar6 = uVar6 & 0xffffffff;
  }
  if (7 < param_2) goto LAB_00db8508;
  plVar10 = (long *)(*(long *)(lVar5 + 0xe7128) + *(long *)(lVar5 + 0xe7120) + uVar15 * 0x48);
  if (*plVar10 == 0 && plVar10[1] == 0) goto LAB_00db8508;
  plVar8 = &DAT_0417bad0;
  if (*plVar10 != 0 || plVar10[1] != 0) {
    plVar8 = plVar10;
  }
  cVar3 = FUN_006b7b00(plVar8);
  if (cVar3 == '\x01') {
    FUN_006b7b50(plVar8,0);
  }
  if ((DAT_05574040 != 0) &&
     (lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))(), lVar4 != 0))
  {
    plVar10 = (long *)(lVar4 + 0x27f618);
    lVar11 = *(long *)(lVar4 + 0x27f638);
    if (lVar11 == 0) {
      uVar7 = 0;
    }
    else {
      if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        lVar11 = *(long *)(lVar4 + 0x27f638);
        uVar7 = uVar7 & 0xffffffff;
        if (lVar11 == 0) goto LAB_00db8430;
      }
      plVar8 = *(long **)(lVar11 + 0x20);
      if (plVar8 != (long *)0x0) {
        local_90 = *plVar10;
        local_88 = *(long *)(lVar4 + 0x27f620);
        local_80 = 0x10;
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_90);
      }
    }
LAB_00db8430:
    lVar11 = *plVar10;
    lVar12 = *(long *)(lVar4 + 0x27f620);
    puVar9 = (undefined8 *)(lVar12 + lVar11);
    bVar13 = *(byte *)(puVar9 + 1);
    if (bVar13 < 8) {
      if ((*(long *)(lVar4 + 0x27f638) != 0) &&
         (plVar8 = *(long **)(*(long *)(lVar4 + 0x27f638) + 0x20), plVar8 != (long *)0x0)) {
        local_80 = 0x10;
        local_90 = lVar11;
        local_88 = lVar12;
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_90);
        lVar11 = *plVar10;
        lVar12 = *(long *)(lVar4 + 0x27f620);
        puVar9 = (undefined8 *)(lVar12 + lVar11);
        bVar13 = *(byte *)(puVar9 + 1);
      }
      if (7 < bVar13) {
        bVar13 = 0xff;
      }
      if (param_2 == (int)(char)bVar13) {
        if ((*(long *)(lVar4 + 0x27f638) != 0) &&
           (plVar8 = *(long **)(*(long *)(lVar4 + 0x27f638) + 0x20), plVar8 != (long *)0x0)) {
          local_80 = 0x10;
          local_90 = lVar11;
          local_88 = lVar12;
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_90);
          puVar9 = (undefined8 *)(*(long *)(lVar4 + 0x27f620) + *plVar10);
        }
        *puVar9 = 0;
        *(undefined1 *)(puVar9 + 1) = 0xff;
      }
    }
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar4 + 0x27f638) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar4 + 0x27f638) + 0x18), puVar9 != (undefined8 *)0x0))
    {
      (**(code **)*puVar9)();
    }
  }
  lVar4 = *(long *)(lVar5 + 0xe7128) + *(long *)(lVar5 + 0xe7120);
  plVar10 = (long *)(lVar4 + uVar15 * 0x48);
  if (*plVar10 != 0 || plVar10[1] != 0) {
    lVar4 = lVar4 + uVar15 * 0x48;
    local_90 = *(long *)(lVar4 + 0x10);
    local_88 = *(undefined8 *)(lVar4 + 0x18);
    local_80 = *(undefined8 *)(lVar4 + 0x20);
    local_78 = *(undefined1 *)(lVar4 + 0x28);
    local_74 = *(undefined8 *)(lVar4 + 0x2c);
    local_6c = *(undefined8 *)(lVar4 + 0x34);
    local_64 = *(undefined8 *)(lVar4 + 0x3c);
    local_5c = *(uint *)(lVar4 + 0x44);
    local_a0[0] = 1;
    if (1 < local_5c) {
      local_5c = 0;
    }
    local_98 = &local_90;
    local_58 = param_2;
    FUN_0281cb30(local_a0);
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar5 + 0xe7140) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar5 + 0xe7140) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
    puVar2 = PTR_DAT_04bc3880;
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x164) = 0;
    *(uint *)(param_1 + 0x160) = param_2;
    puVar1 = puVar2 + 0x10;
    *(undefined **)(param_1 + 0x120) = puVar1;
    *(undefined **)(param_1 + 0x140) = puVar1;
    *(undefined8 *)(param_1 + 0x110) = 0x1580;
    FUN_0283d404(lVar14,param_1 + 0x110);
    if ((*(byte *)(param_1 + 0x164) & 1) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x118) == 1) {
      FUN_026cb020(0);
      puVar2 = puVar2 + 0x10;
      *(undefined4 *)(param_1 + 0x118) = 0;
      *(undefined **)(param_1 + 0x120) = puVar2;
      *(undefined **)(param_1 + 0x140) = puVar2;
      *(undefined8 *)(param_1 + 0x160) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x110) = 0x410;
      FUN_0283d404(lVar14,param_1 + 0x110);
      return *(byte *)(param_1 + 0x164) & *(int *)(param_1 + 0x118) == 1;
    }
    return 0;
  }
LAB_00db8508:
  if (((uVar6 & 1) != 0) && (*(long *)(lVar5 + 0xe7140) != 0)) {
    puVar9 = *(undefined8 **)(*(long *)(lVar5 + 0xe7140) + 8);
    if (puVar9 == (undefined8 *)0x0) {
      return 0;
    }
    (**(code **)*puVar9)();
  }
  return 0;
}

