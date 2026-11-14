
void FUN_016c7f78(uint *param_1,ulong param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  byte bVar8;
  bool bVar9;
  uint uVar10;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar10 = *param_1;
  uVar2 = uVar10 & 0x38;
  if (uVar2 == 0x18) {
    iVar3 = FUN_0252d29c();
    if (DAT_05574040 == 0) {
      return;
    }
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
    lVar4 = lVar4 + (long)iVar3 * 0xcb0;
    puVar1 = (undefined1 *)(lVar4 + 0x211c58);
    lVar4 = *(long *)(lVar4 + 0x211c80);
  }
  else {
    if (uVar10 == DAT_04cb0c60) {
      return;
    }
    if (uVar2 == 0) {
      uVar10 = uVar10 >> 6 & 0x3ff;
      if (7 < uVar10) {
        return;
      }
      bVar9 = true;
    }
    else {
      if (uVar2 != 8) {
        return;
      }
      bVar9 = false;
      uVar10 = uVar10 & 7;
    }
    if (DAT_05574040 == 0) {
      return;
    }
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
    puVar1 = &LAB_002057b0 + lVar4 + (ulong)uVar10 * 0xc40;
    if (!bVar9) {
      puVar1 = (undefined1 *)(lVar4 + (ulong)uVar10 * 0xc40 + 0x20b9e8);
    }
    lVar4 = *(long *)(puVar1 + 0x28);
  }
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
      lVar4 = *(long *)(puVar1 + 0x28);
      uVar5 = uVar5 & 0xffffffff;
      if (lVar4 == 0) goto LAB_016c8130;
    }
    plVar6 = *(long **)(lVar4 + 0x20);
    if (plVar6 != (long *)0x0) {
      local_48 = *(undefined8 *)(puVar1 + 8);
      uStack_40 = *(undefined8 *)(puVar1 + 0x10);
      local_38 = 0x158c;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    }
  }
LAB_016c8130:
  bVar8 = 2;
  if ((param_2 & 1) == 0) {
    bVar8 = 0;
  }
  *(byte *)(*(long *)(puVar1 + 0x10) + *(long *)(puVar1 + 8)) =
       *(byte *)(*(long *)(puVar1 + 0x10) + *(long *)(puVar1 + 8)) & 0xfd | bVar8;
  if ((((uVar5 & 1) != 0) && (*(long *)(puVar1 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(puVar1 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

