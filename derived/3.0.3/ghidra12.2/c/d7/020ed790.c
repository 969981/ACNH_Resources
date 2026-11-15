
void FUN_020ed790(char *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined2 *puVar12;
  undefined8 uVar13;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar5 = FUN_0265c3e0((long)*param_1);
  if (lVar5 == 0) {
    return;
  }
  lVar9 = *(long *)(lVar5 + 0x28);
  if (lVar9 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
      plVar7 = *(long **)(lVar9 + 0x20);
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      uVar6 = uVar6 & 0xffffffff;
      if (*(long *)(lVar5 + 0x28) == 0) goto LAB_020ed828;
      plVar7 = *(long **)(*(long *)(lVar5 + 0x28) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar5 + 8);
      uStack_50 = *(undefined8 *)(lVar5 + 0x10);
      local_48 = 0x13230;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
    }
  }
LAB_020ed828:
  lVar9 = *(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8);
  uVar4 = FUN_0268f390(lVar9,param_1 + 4,param_1 + 0xc,*(undefined4 *)(param_1 + 0x28),param_1[0x2c]
                       ,0,0);
  if (-1 < (int)uVar4) {
    uVar11 = 0x20;
    uVar1 = uVar4 - 0x18;
    if (uVar4 < 0x18) {
      uVar11 = 0x18;
      uVar1 = uVar4;
    }
    if (uVar1 < uVar11) {
      lVar10 = lVar9 + 0x10d6c;
      if (uVar4 < 0x18) {
        lVar10 = lVar9 + 0x1094c;
      }
      puVar12 = (undefined2 *)(lVar10 + (ulong)uVar1 * 0x2c);
      *puVar12 = *(undefined2 *)(param_1 + 4);
      *(char *)(puVar12 + 1) = param_1[6];
      *(char *)((long)puVar12 + 3) = param_1[7];
      *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(param_1 + 8);
      if (*(int *)(param_1 + 0xc) == 0) {
        *(undefined4 *)(puVar12 + 0x10) = 0;
        *(undefined8 *)(puVar12 + 4) = 0;
        *(undefined8 *)(puVar12 + 8) = 0;
        *(undefined8 *)(puVar12 + 0xc) = 0;
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + 0xc);
        uVar3 = *(undefined8 *)(param_1 + 0x14);
        uVar13 = *(undefined8 *)(param_1 + 0x1c);
        *(undefined4 *)(puVar12 + 0x10) = *(undefined4 *)(param_1 + 0x24);
        *(undefined8 *)(puVar12 + 4) = uVar2;
        *(undefined8 *)(puVar12 + 8) = uVar3;
        *(undefined8 *)(puVar12 + 0xc) = uVar13;
      }
      lVar10 = lVar10 + (ulong)uVar1 * 0x2c;
      *(undefined4 *)(lVar10 + 0x24) = *(undefined4 *)(param_1 + 0x28);
      *(char *)(lVar10 + 0x28) = param_1[0x2c];
      *(char *)(lVar10 + 0x29) = param_1[0x2d];
      *(char *)(lVar10 + 0x2b) = param_1[0x2f];
    }
  }
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

