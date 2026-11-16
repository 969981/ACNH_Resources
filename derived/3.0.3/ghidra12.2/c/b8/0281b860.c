
void FUN_0281b860(int *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  long lVar10;
  int iVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 *local_68;
  
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
    if ((*(long *)(lVar4 + 0x28) == 0) ||
       (puVar7 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 0x10), puVar7 == (undefined8 *)0x0)) {
      uVar3 = 1;
      iVar2 = *param_1;
    }
    else {
      uVar3 = (**(code **)*puVar7)();
      uVar3 = uVar3 ^ 1;
      iVar2 = *param_1;
    }
    if (iVar2 != 0) {
      lVar10 = *(long *)(param_1 + 2);
      iVar11 = 0;
      do {
        if ((*(long *)(lVar4 + 0x28) != 0) &&
           (plVar5 = *(long **)(*(long *)(lVar4 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
          local_78 = *(undefined8 *)(lVar4 + 8);
          uStack_70 = *(undefined8 *)(lVar4 + 0x10);
          local_68 = &LAB_005b3c40;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
        }
        iVar6 = 0;
        puVar8 = (undefined4 *)(lVar10 + (long)iVar11 * 0x3c + 0x38);
        uVar9 = *puVar8;
        lVar1 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8) + 0x494114;
        do {
          if (*(char *)(lVar1 + iVar6) == (char)uVar9) {
            *(undefined1 *)(lVar1 + iVar6) = 0xfe;
            uVar9 = *puVar8;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x400);
        iVar11 = iVar11 + 1;
      } while (iVar2 != iVar11);
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  return;
}

