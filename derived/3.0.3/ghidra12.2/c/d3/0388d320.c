
void FUN_0388d320(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = *(uint *)(param_1 + 0x168);
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  *(undefined2 *)(param_1 + 0x1a4) = 0;
  *(undefined1 *)(param_1 + 0x1a6) = 0;
  if (0 < (int)uVar6) {
    uVar2 = 0;
    do {
      uVar8 = uVar2;
      if (uVar6 <= uVar2) {
        uVar8 = 0;
      }
      *(undefined1 *)(*(long *)(param_1 + 0x170) + (ulong)uVar8) = 0xff;
      uVar6 = uVar2;
      if (*(uint *)(param_1 + 0x158) <= uVar2) {
        uVar6 = 0;
      }
      uVar2 = uVar2 + 1;
      *(undefined1 *)(*(long *)(param_1 + 0x160) + (ulong)uVar6) = 0xff;
      uVar6 = *(uint *)(param_1 + 0x168);
    } while ((int)uVar2 < (int)uVar6);
  }
  lVar5 = *(long *)(*(long *)(DAT_05ae6a60 + 0x90) + 0xc0);
  if (*(char *)(lVar5 + 0x518) != '\0') {
    if (0 < *(int *)(lVar5 + 0x568)) {
      lVar7 = 0;
      puVar9 = *(undefined8 **)(lVar5 + 0x578);
      do {
        puVar10 = *(undefined8 **)(*(long *)(lVar5 + 0x570) + lVar7 * 8);
        lVar7 = lVar7 + 1;
        *puVar10 = puVar9;
        *(undefined8 **)(lVar5 + 0x578) = puVar10;
        puVar9 = puVar10;
      } while (lVar7 < *(int *)(lVar5 + 0x568));
    }
    *(undefined4 *)(lVar5 + 0x568) = 0;
    if (*(char *)(lVar5 + 0x5a0) != '\0') {
      uVar6 = 0;
      do {
        uVar2 = uVar6;
        if (*(uint *)(lVar5 + 0x508) <= uVar6) {
          uVar2 = 0;
        }
        uVar6 = uVar6 + 1;
        puVar9 = (undefined8 *)(*(long *)(lVar5 + 0x510) + (ulong)uVar2 * 0x10);
        *puVar9 = 0;
        *(undefined2 *)(puVar9 + 1) = 0;
      } while (uVar6 < *(byte *)(lVar5 + 0x5a0));
    }
  }
  if (*(ushort *)(lVar5 + 0x538) != 0) {
    uVar6 = *(ushort *)(lVar5 + 0x538) + 1;
    uVar2 = uVar6 >> 1;
    if (uVar2 == 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        uVar1 = uVar8;
        if (*(uint *)(lVar5 + 0x520) <= uVar8) {
          uVar1 = 0;
        }
        *(undefined1 *)(*(long *)(lVar5 + 0x528) + (ulong)uVar1) = 0xff;
        uVar1 = 0;
        if (uVar8 + 1 < *(uint *)(lVar5 + 0x520)) {
          uVar1 = uVar8 + 1;
        }
        uVar8 = uVar8 + 2;
        *(undefined1 *)(*(long *)(lVar5 + 0x528) + (ulong)uVar1) = 0xff;
      } while (uVar8 != (uVar2 & 0xfffe));
    }
    if ((uVar6 >> 1 & 1) != 0) {
      if (*(uint *)(lVar5 + 0x520) <= uVar8) {
        uVar8 = 0;
      }
      *(undefined1 *)(*(long *)(lVar5 + 0x528) + (ulong)uVar8) = 0xff;
    }
  }
  lVar7 = DAT_05ae6a60;
  *(undefined1 *)(lVar5 + 0x518) = 0;
  *(undefined1 *)(*(long *)(*(long *)(lVar7 + 0x90) + 0xc0) + 0x560) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    plVar3 = *(long **)(param_1 + 0x10);
    do {
      *(undefined1 *)(*plVar3 + 0x30) = 0;
      plVar4 = plVar3 + 1;
      *(undefined1 *)(*plVar3 + 0x22) = 0xff;
      plVar3 = plVar4;
    } while (plVar4 != (long *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8));
  }
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  return;
}

