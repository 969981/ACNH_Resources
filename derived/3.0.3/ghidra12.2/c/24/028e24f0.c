
void FUN_028e24f0(ulong *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  undefined **local_78;
  undefined1 *local_70;
  uint local_64;
  
  if (DAT_05574040 != 0) {
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar4 == 0) {
        return;
      }
      lVar4 = lVar4 + 0x70;
    }
    else {
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar7[0x26] == (long *)0x0) {
        return;
      }
      lVar4 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      if (lVar4 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar4 + 0xe7178) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar4 + 0xe7178), puVar7 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar7)();
      uVar3 = uVar3 ^ 1;
    }
    puVar8 = (ulong *)(*(long *)(lVar4 + 0xe7160) + *(long *)(lVar4 + 0xe7158));
    uVar11 = *puVar8;
    lVar13 = *(long *)PTR_DAT_04bb30a0;
    local_78 = &PTR_LAB_048f9770;
    local_70 = &DAT_040bc248;
    if (*(int *)(lVar13 + 0x653a0) < 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      uVar14 = 0;
      do {
        if (uVar12 < *(uint *)(lVar13 + 0x100)) {
          lVar5 = *(long *)(*(long *)(lVar13 + 0x108) + (long)(int)uVar12 * 8);
        }
        else {
          lVar5 = 0;
        }
        local_64 = uVar12;
        plVar6 = (long *)(**(code **)(*(long *)(lVar5 + 0x30) + 0xf0))();
        (*(code *)local_78[3])(&local_78);
        (*(code *)local_78[3])(&local_78);
        puVar1 = local_70;
        (**(code **)(*plVar6 + 0x18))(plVar6);
        puVar9 = (undefined1 *)plVar6[1];
        if (puVar1 == puVar9) goto LAB_028e2710;
        uVar10 = 0;
        bVar2 = true;
        do {
          if (local_70[uVar10] != puVar9[uVar10]) break;
          if (local_70[uVar10] == '\0') {
            if (bVar2) goto LAB_028e2710;
            break;
          }
          if (local_70[uVar10 + 1] != puVar9[uVar10 + 1]) break;
          if (local_70[uVar10 + 1] == '\0') goto LAB_028e2710;
          if (local_70[uVar10 + 2] != puVar9[uVar10 + 2]) break;
          if (local_70[uVar10 + 2] == '\0') goto LAB_028e2710;
          bVar2 = uVar10 < 0x7fffe;
          uVar10 = uVar10 + 3;
        } while (uVar10 != 0x80001);
        uVar14 = uVar14 + 1;
        uVar12 = uVar14 & 0xff;
      } while ((int)uVar12 < *(int *)(lVar13 + 0x653a0));
      uVar12 = 0;
LAB_028e2710:
      puVar8 = (ulong *)(*(long *)(lVar4 + 0xe7160) + *(long *)(lVar4 + 0xe7158));
    }
    uVar14 = *(uint *)((long)puVar8 + 0x14);
    *(undefined4 *)(param_1 + 0x29) = 0x34;
    *param_1 = uVar11 & 0xffff0000 | 0x5000007e4;
    if (1 < uVar14) {
      uVar14 = 0;
    }
    *(uint *)(param_1 + 1) = uVar12;
    *(uint *)((long)param_1 + 0xc) = uVar12;
    *(uint *)(param_1 + 2) = uVar12;
    *(uint *)((long)param_1 + 0x14) = uVar14;
    local_64 = uVar12;
    memset(param_1 + 3,0,0x124);
    FUN_028e27c0(param_1);
    *(undefined2 *)((long)param_1 + 0x144) = 0;
    *(undefined1 *)((long)param_1 + 0x146) = 0;
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0xe7178) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar4 + 0xe7178) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  return;
}

