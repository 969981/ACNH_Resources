
/* WARNING: Removing unreachable block (ram,0x03753bb0) */
/* WARNING: Removing unreachable block (ram,0x03753be0) */
/* WARNING: Removing unreachable block (ram,0x03753d74) */

bool FUN_03753ab0(long *param_1,long param_2)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  void *__s;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  bool bVar10;
  undefined **local_88;
  undefined2 local_80;
  undefined *local_78;
  long *plStack_70;
  long **local_68;
  long *local_58;
  
  __s = (void *)(**(code **)(*param_1 + 0x18))();
  memset(__s,0,0x754);
  local_78 = &DAT_04b46948;
  local_68 = &local_58;
  plStack_70 = param_1;
  local_58 = param_1;
  lVar4 = FUN_03775b80(param_2);
  if (lVar4 == 0) {
LAB_03753ba4:
    bVar10 = false;
  }
  else {
    if ((*(long **)(lVar4 + 0xa00) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0xa00), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    uVar2 = *(ushort *)(*(long *)(lVar4 + 0x9e8) + *(long *)(lVar4 + 0x9e0) + 0x153c);
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0xa00) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0xa00) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if ((uVar2 & 1) == 0) goto LAB_03753ba4;
    bVar10 = true;
  }
  lVar4 = FUN_03775b80(param_2);
  if (lVar4 != 0) {
    if ((*(long **)(lVar4 + 0x4c0) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x4c0), puVar5 == (undefined8 *)0x0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)*puVar5)();
      uVar6 = uVar6 & 0xffffffff;
    }
    FUN_03753ff8(&local_58,*(long *)(lVar4 + 0x4a8) + *(long *)(lVar4 + 0x4a0));
    plVar9 = *(long **)(lVar4 + 0x4c0);
    if ((uVar6 & 1) == 0) {
LAB_03753c40:
      if (plVar9 == (long *)0x0) goto LAB_03753c94;
LAB_03753c44:
      if ((undefined8 *)*plVar9 == (undefined8 *)0x0) goto LAB_03753c94;
      uVar6 = (*(code *)**(undefined8 **)*plVar9)();
      FUN_03753ff8(&local_58,*(long *)(lVar4 + 0x4a8) + *(long *)(lVar4 + 0x4a0) + 8);
      if ((uVar6 & 1) == 0) goto LAB_03753ca8;
      if (*(long *)(lVar4 + 0x4c0) != 0) {
        puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x4c0) + 8);
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)();
        }
        goto LAB_03753ca8;
      }
    }
    else {
      if (plVar9 != (long *)0x0) {
        if ((undefined8 *)plVar9[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar9[1])();
          plVar9 = *(long **)(lVar4 + 0x4c0);
          goto LAB_03753c40;
        }
        goto LAB_03753c44;
      }
LAB_03753c94:
      FUN_03753ff8(&local_58,*(long *)(lVar4 + 0x4a8) + *(long *)(lVar4 + 0x4a0) + 8);
LAB_03753ca8:
      if ((*(long **)(lVar4 + 0x4c0) != (long *)0x0) &&
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x4c0), puVar5 != (undefined8 *)0x0)) {
        uVar6 = (**(code **)*puVar5)();
        FUN_03753ff8(&local_58,*(long *)(lVar4 + 0x4a8) + *(long *)(lVar4 + 0x4a0) + 0x10);
        if (((uVar6 & 1) != 0) &&
           ((*(long *)(lVar4 + 0x4c0) != 0 &&
            (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x4c0) + 8), puVar5 != (undefined8 *)0x0)))
           ) {
          (**(code **)*puVar5)();
        }
        goto LAB_03753d14;
      }
    }
    FUN_03753ff8(&local_58,*(long *)(lVar4 + 0x4a8) + *(long *)(lVar4 + 0x4a0) + 0x10);
  }
LAB_03753d14:
  local_88 = &PTR_LAB_04942240;
  local_80 = *(undefined2 *)(param_2 + 8);
  FUN_0375fb10(&local_78,&local_88,0);
  if (!bVar10) goto LAB_03753ec8;
  lVar4 = FUN_03775b80(param_2);
  if (lVar4 != 0) {
    if ((*(long **)(lVar4 + 0xb18) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0xb18), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    FUN_03753ff8(&local_58,*(long *)(lVar4 + 0xb00) + *(long *)(lVar4 + 0xaf8));
    plVar9 = *(long **)(lVar4 + 0xb18);
    if ((uVar3 & 1) == 0) {
      if (plVar9 != (long *)0x0) {
        if ((undefined8 *)plVar9[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar9[1])();
          plVar9 = *(long **)(lVar4 + 0xb18);
          goto LAB_03753dd4;
        }
        goto LAB_03753dd8;
      }
LAB_03753e28:
      FUN_03753ff8(&local_58,*(long *)(lVar4 + 0xb00) + *(long *)(lVar4 + 0xaf8) + 8);
LAB_03753e3c:
      if ((*(long **)(lVar4 + 0xb18) != (long *)0x0) &&
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0xb18), puVar5 != (undefined8 *)0x0)) {
        uVar6 = (**(code **)*puVar5)();
        FUN_03753ff8(&local_58,*(long *)(lVar4 + 0xb00) + *(long *)(lVar4 + 0xaf8) + 0x10);
        if (((uVar6 & 1) != 0) &&
           ((*(long *)(lVar4 + 0xb18) != 0 &&
            (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0xb18) + 8), puVar5 != (undefined8 *)0x0)))
           ) {
          (**(code **)*puVar5)();
        }
        goto LAB_03753ea8;
      }
    }
    else {
LAB_03753dd4:
      if (plVar9 == (long *)0x0) goto LAB_03753e28;
LAB_03753dd8:
      if ((undefined8 *)*plVar9 == (undefined8 *)0x0) goto LAB_03753e28;
      uVar6 = (*(code *)**(undefined8 **)*plVar9)();
      FUN_03753ff8(&local_58,*(long *)(lVar4 + 0xb00) + *(long *)(lVar4 + 0xaf8) + 8);
      if ((uVar6 & 1) == 0) goto LAB_03753e3c;
      if (*(long *)(lVar4 + 0xb18) != 0) {
        puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0xb18) + 8);
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)();
        }
        goto LAB_03753e3c;
      }
    }
    FUN_03753ff8(&local_58,*(long *)(lVar4 + 0xb00) + *(long *)(lVar4 + 0xaf8) + 0x10);
  }
LAB_03753ea8:
  local_88 = &PTR_LAB_04942240;
  local_80 = *(undefined2 *)(param_2 + 8);
  FUN_0375fb10(&local_78,&local_88,1);
LAB_03753ec8:
  local_78 = (undefined *)0x134b;
  FUN_0277d4ac(&local_78);
  lVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar3 = FUN_0277d6c4(&local_78);
  if ((uVar3 >> 3 & 0x1fff) < 0x753) {
    lVar7 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
    *(uint *)(lVar4 + lVar7) = *(uint *)(lVar4 + lVar7) & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU)
    ;
  }
  local_78 = (undefined *)0x139b;
  FUN_0277d4ac(&local_78);
  lVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar3 = FUN_0277d6c4(&local_78);
  if ((uVar3 >> 3 & 0x1fff) < 0x753) {
    lVar7 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
    *(uint *)(lVar4 + lVar7) = *(uint *)(lVar4 + lVar7) & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU)
    ;
  }
  lVar7 = (**(code **)(*param_1 + 0x20))(param_1);
  lVar4 = 0;
  iVar8 = 0;
  do {
    puVar1 = (uint *)(lVar7 + lVar4);
    lVar4 = lVar4 + 4;
    uVar3 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
    uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
    uVar3 = uVar3 + (uVar3 >> 8);
    iVar8 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + iVar8;
  } while (lVar4 != 0x754);
  return iVar8 != 0;
}

