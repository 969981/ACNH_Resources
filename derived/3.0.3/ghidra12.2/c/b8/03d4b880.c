
void FUN_03d4b880(long param_1,long param_2,ulong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_80;
  long local_78;
  long *plStack_70;
  long local_68;
  
  bVar4 = true;
  if (((param_3 & 1) == 0) && (*(char *)(param_1 + 0x54) == '\0')) {
    bVar4 = (*(uint *)(param_1 + 0x58) & *(uint *)(*(long *)(DAT_05af83f0 + 0x418) + 0x10)) != 0;
  }
  plVar8 = (long *)(param_1 + 0x68);
  uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
  if (((uVar5 & 1) != 0) && (uVar6 = *(uint *)(param_2 + 8), local_68 = param_2, 0 < (int)uVar6)) {
    uVar9 = 0;
    do {
      uVar7 = uVar9;
      if (uVar6 <= uVar9) {
        uVar7 = 0;
      }
      local_80._0_5_ = CONCAT14(bVar4,uVar9);
      local_78 = param_2 + 0x18;
      plStack_70 = &local_68;
      (**(code **)*plVar8)(plVar8,*(long *)(param_2 + 0x10) + (ulong)uVar7 * 0x48,&local_80);
      uVar6 = *(uint *)(param_2 + 8);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar6);
  }
  lVar12 = param_2 + 0x18;
  if (*(char *)(param_1 + 100) != '\0') {
    lVar12 = param_1 + 0x5c;
  }
  if (*(long *)(param_1 + 8) != param_1) {
    lVar11 = (long)*(int *)(param_1 + 0x14);
    lVar10 = *(long *)(param_1 + 8) - lVar11;
    do {
      if (*(char *)(lVar10 + 0x3c) == '\0') {
        FUN_03d4bea8(lVar10,param_2,lVar12,bVar4);
      }
      lVar10 = *(long *)(lVar10 + lVar11 + 8) - lVar11;
    } while (lVar10 != param_1 - lVar11);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_03d48c70(*(long *)(param_1 + 0x48),param_2,lVar12,bVar4);
  }
  if (*(long *)(param_1 + 0x20) != param_1 + 0x18) {
    lVar11 = (long)*(int *)(param_1 + 0x2c);
    lVar10 = *(long *)(param_1 + 0x20) - lVar11;
    do {
      FUN_03d4b20c(lVar10,param_2,lVar12,bVar4);
      lVar10 = *(long *)(lVar10 + lVar11 + 8) - lVar11;
    } while (lVar10 != (param_1 + 0x18) - lVar11);
  }
  if (*(long *)(param_1 + 0x38) != param_1 + 0x30) {
    lVar10 = (long)*(int *)(param_1 + 0x44);
    lVar12 = *(long *)(param_1 + 0x38) - lVar10;
    do {
      uVar6 = *(uint *)(lVar12 + 0x10);
      if (*(uint *)(param_2 + 8) <= uVar6) {
        uVar6 = 0;
      }
      if ((*(char *)(lVar12 + 0x40) == '\0') ||
         ((*(uint *)(*(long *)(param_2 + 0x10) + (long)(int)uVar6 * 0x48 + 0x40) >>
           (ulong)(*(uint *)(lVar12 + 0x14) & 0x1f) & 1) != 0)) {
        *(undefined8 *)(lVar12 + 0x38) = 0;
        cVar3 = *(char *)(lVar12 + 0x41);
      }
      else {
        puVar1 = (undefined4 *)(*(long *)(param_2 + 0x10) + (long)(int)uVar6 * 0x48 + 4);
        puVar2 = puVar1 + (ulong)*(uint *)(lVar12 + 0x14) * 2;
        if (3 < *(uint *)(lVar12 + 0x14)) {
          puVar2 = puVar1;
        }
        *(undefined4 *)(lVar12 + 0x38) = *puVar2;
        *(undefined4 *)(lVar12 + 0x3c) = puVar2[1];
        local_80 = lVar12;
        (*(code *)**(undefined8 **)(lVar12 + 0x18))
                  ((undefined8 *)(lVar12 + 0x18),(undefined4 *)(lVar12 + 0x38),&local_80);
        cVar3 = *(char *)(lVar12 + 0x41);
      }
      if (cVar3 != '\0') {
        uVar6 = *(uint *)(lVar12 + 0x10);
        uVar5 = (ulong)local_80 >> 0x20;
        local_80 = CONCAT44((int)uVar5,*(uint *)(lVar12 + 0x14));
        if (*(uint *)(param_2 + 8) <= uVar6) {
          uVar6 = 0;
        }
        lVar11 = *(long *)(param_2 + 0x10) + (long)(int)uVar6 * 0x48;
        *(uint *)(lVar11 + 0x40) =
             *(uint *)(lVar11 + 0x40) | 1 << (ulong)(*(uint *)(lVar12 + 0x14) & 0x1f);
      }
      lVar12 = *(long *)(lVar12 + lVar10 + 8) - lVar10;
    } while (lVar12 != (param_1 + 0x30) - lVar10);
  }
  uVar6 = *(uint *)(param_2 + 8);
  if (0 < (int)uVar6) {
    uVar7 = *(uint *)(param_1 + 0x50);
    uVar9 = 0;
    do {
      if ((uVar7 >> (ulong)(uVar9 & 0x1f) & 1) != 0) {
        uVar7 = uVar9;
        if (uVar6 <= uVar9) {
          uVar7 = 0;
        }
        *(undefined4 *)(*(long *)(param_2 + 0x10) + (ulong)uVar7 * 0x48 + 0x3c) = 0xffffffff;
        uVar6 = uVar9;
        if (*(uint *)(param_2 + 8) <= uVar9) {
          uVar6 = 0;
        }
        *(undefined4 *)(*(long *)(param_2 + 0x10) + (ulong)uVar6 * 0x48 + 0x40) = 0xffffffff;
        uVar6 = uVar9;
        if (*(uint *)(param_2 + 8) <= uVar9) {
          uVar6 = 0;
        }
        *(undefined1 *)(*(long *)(param_2 + 0x10) + (ulong)uVar6 * 0x48 + 0x44) = 1;
        uVar6 = *(uint *)(param_2 + 8);
        uVar7 = *(uint *)(param_1 + 0x50);
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar6);
  }
  plVar8 = (long *)(param_1 + 0x88);
  uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
  if (((uVar5 & 1) != 0) && (uVar6 = *(uint *)(param_2 + 8), 0 < (int)uVar6)) {
    uVar9 = 0;
    local_68 = param_2;
    do {
      uVar7 = uVar9;
      if (uVar6 <= uVar9) {
        uVar7 = 0;
      }
      local_80._0_5_ = CONCAT14(bVar4,uVar9);
      local_78 = param_2 + 0x18;
      plStack_70 = &local_68;
      (**(code **)*plVar8)(plVar8,*(long *)(param_2 + 0x10) + (ulong)uVar7 * 0x48,&local_80);
      uVar6 = *(uint *)(param_2 + 8);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar6);
  }
  return;
}

