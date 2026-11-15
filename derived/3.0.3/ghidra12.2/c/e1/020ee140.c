
void FUN_020ee140(char *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar7 = FUN_0265c3e0((long)*param_1);
  if (lVar7 == 0) {
    return;
  }
  lVar11 = *(long *)(lVar7 + 0x28);
  if (lVar11 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 0;
      plVar9 = *(long **)(lVar11 + 0x20);
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      uVar8 = uVar8 & 0xffffffff;
      if (*(long *)(lVar7 + 0x28) == 0) goto LAB_020ee1d4;
      plVar9 = *(long **)(*(long *)(lVar7 + 0x28) + 0x20);
    }
    if (plVar9 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar7 + 8);
      uStack_40 = *(undefined8 *)(lVar7 + 0x10);
      local_38 = 0x13230;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_48);
    }
  }
LAB_020ee1d4:
  lVar11 = *(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8);
  if (param_1[1] < '?') {
    puVar2 = (undefined2 *)(lVar11 + 0x112ec);
    uVar12 = (int)param_1[1];
    do {
      uVar1 = uVar12 + 1;
      puVar3 = puVar2 + (ulong)uVar12 * 0x26;
      if (0x3f < uVar12) {
        puVar3 = puVar2;
      }
      puVar4 = puVar2 + (ulong)uVar1 * 0x26;
      if (0x3f < uVar1) {
        puVar4 = puVar2;
      }
      *puVar3 = *puVar4;
      *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
      *(undefined1 *)((long)puVar3 + 3) = *(undefined1 *)((long)puVar4 + 3);
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar4 + 2);
      if (*(int *)(puVar4 + 4) == 0) {
        *(undefined4 *)(puVar3 + 0x10) = 0;
        *(undefined8 *)(puVar3 + 4) = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        *(undefined8 *)(puVar3 + 0xc) = 0;
      }
      else {
        uVar5 = *(undefined8 *)(puVar4 + 4);
        uVar6 = *(undefined8 *)(puVar4 + 8);
        uVar13 = *(undefined8 *)(puVar4 + 0xc);
        *(undefined4 *)(puVar3 + 0x10) = *(undefined4 *)(puVar4 + 0x10);
        *(undefined8 *)(puVar3 + 4) = uVar5;
        *(undefined8 *)(puVar3 + 8) = uVar6;
        *(undefined8 *)(puVar3 + 0xc) = uVar13;
      }
      if (*(int *)(puVar4 + 0x12) == 0) {
        *(undefined4 *)(puVar3 + 0x1e) = 0;
        *(undefined8 *)(puVar3 + 0x12) = 0;
        *(undefined8 *)(puVar3 + 0x16) = 0;
        *(undefined8 *)(puVar3 + 0x1a) = 0;
      }
      else {
        uVar5 = *(undefined8 *)(puVar4 + 0x12);
        uVar6 = *(undefined8 *)(puVar4 + 0x16);
        uVar13 = *(undefined8 *)(puVar4 + 0x1a);
        *(undefined4 *)(puVar3 + 0x1e) = *(undefined4 *)(puVar4 + 0x1e);
        *(undefined8 *)(puVar3 + 0x12) = uVar5;
        *(undefined8 *)(puVar3 + 0x16) = uVar6;
        *(undefined8 *)(puVar3 + 0x1a) = uVar13;
      }
      *(undefined4 *)(puVar3 + 0x20) = *(undefined4 *)(puVar4 + 0x20);
      *(undefined4 *)(puVar3 + 0x22) = *(undefined4 *)(puVar4 + 0x22);
      *(undefined1 *)(puVar3 + 0x24) = *(undefined1 *)(puVar4 + 0x24);
      uVar12 = uVar1;
    } while (uVar1 != 0x3f);
  }
  *(undefined4 *)(lVar11 + 0x125e8) = 0;
  *(undefined8 *)(lVar11 + 0x125a0) = 0xfffe;
  *(undefined8 *)(lVar11 + 0x125d8) = 0;
  *(undefined8 *)(lVar11 + 0x125e0) = 0;
  *(undefined8 *)(lVar11 + 0x125c8) = 0;
  *(undefined8 *)(lVar11 + 0x125d0) = 0;
  *(undefined8 *)(lVar11 + 0x125b8) = 0;
  *(undefined8 *)(lVar11 + 0x125c0) = 0;
  *(undefined8 *)(lVar11 + 0x125a8) = 0;
  *(undefined8 *)(lVar11 + 0x125b0) = 0;
  FUN_0277d4ac((undefined8 *)(lVar11 + 0x125a0));
  *(undefined1 *)(lVar11 + 0x125e8) = 0;
  *(undefined8 *)(lVar11 + 0x125d8) = 0;
  *(undefined8 *)(lVar11 + 0x125e0) = 0;
  *(undefined8 *)(lVar11 + 0x125c8) = 0;
  *(undefined8 *)(lVar11 + 0x125d0) = 0;
  *(undefined8 *)(lVar11 + 0x125b8) = 0;
  *(undefined8 *)(lVar11 + 0x125c0) = 0;
  *(undefined8 *)(lVar11 + 0x125a8) = 0;
  *(undefined8 *)(lVar11 + 0x125b0) = 0;
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 0x18), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  return;
}

