
byte FUN_016c7db8(uint *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  bool bVar9;
  uint uVar10;
  
  uVar10 = *param_1;
  uVar2 = uVar10 & 0x38;
  if (uVar2 == 0x18) {
    iVar4 = FUN_0252d29c();
    if (DAT_05574040 != 0) {
      puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar5 = (**(code **)(*(long *)*puVar7 + 0x38))();
        if (lVar5 == 0) {
          return 0;
        }
        lVar5 = lVar5 + 0x70;
      }
      else {
        if (puVar7 == (undefined8 *)0x0) {
          return 0;
        }
        if ((long *)puVar7[0x26] == (long *)0x0) {
          return 0;
        }
        lVar5 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
        if (lVar5 == 0) {
          return 0;
        }
      }
      lVar5 = lVar5 + (long)iVar4 * 0xcb0;
      puVar1 = (undefined1 *)(lVar5 + 0x211c58);
      plVar8 = *(long **)(lVar5 + 0x211c80);
joined_r0x016c7f0c:
      if ((plVar8 == (long *)0x0) || ((undefined8 *)*plVar8 == (undefined8 *)0x0)) {
        return *(byte *)(*(long *)(puVar1 + 0x10) + *(long *)(puVar1 + 8)) >> 1 & 1;
      }
      uVar6 = (*(code *)**(undefined8 **)*plVar8)();
      bVar3 = *(byte *)(*(long *)(puVar1 + 0x10) + *(long *)(puVar1 + 8)) >> 1 & 1;
      if ((uVar6 & 1) == 0) {
        return bVar3;
      }
      if (*(long *)(puVar1 + 0x28) == 0) {
        return bVar3;
      }
      puVar7 = *(undefined8 **)(*(long *)(puVar1 + 0x28) + 8);
      if (puVar7 == (undefined8 *)0x0) {
        return bVar3;
      }
      (**(code **)*puVar7)();
      return bVar3;
    }
  }
  else if (uVar10 != DAT_04cb0c60) {
    if (uVar2 == 0) {
      uVar10 = uVar10 >> 6 & 0x3ff;
      if (7 < uVar10) {
        return 0;
      }
      bVar9 = true;
    }
    else {
      if (uVar2 != 8) {
        return 0;
      }
      bVar9 = false;
      uVar10 = uVar10 & 7;
    }
    if (DAT_05574040 != 0) {
      puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar5 = (**(code **)(*(long *)*puVar7 + 0x38))();
        if (lVar5 == 0) {
          return 0;
        }
        lVar5 = lVar5 + 0x70;
      }
      else {
        if (puVar7 == (undefined8 *)0x0) {
          return 0;
        }
        if ((long *)puVar7[0x26] == (long *)0x0) {
          return 0;
        }
        lVar5 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
        if (lVar5 == 0) {
          return 0;
        }
      }
      puVar1 = &LAB_002057b0 + lVar5 + (ulong)uVar10 * 0xc40;
      if (!bVar9) {
        puVar1 = (undefined1 *)(lVar5 + (ulong)uVar10 * 0xc40 + 0x20b9e8);
      }
      plVar8 = *(long **)(puVar1 + 0x28);
      goto joined_r0x016c7f0c;
    }
  }
  return 0;
}

