
undefined8 FUN_02645880(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 != 0) {
    if (*(long **)(lVar8 + 0x28) == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar4 = (undefined8 *)**(long **)(lVar8 + 0x28);
      uVar5 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        uVar5 = (**(code **)*puVar4)();
      }
    }
    lVar7 = 0;
    plVar1 = (long *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
    do {
      uVar3 = *(uint *)((long)plVar1 + lVar7 + 0xaf00);
      plVar2 = plVar1 + (ulong)uVar3 * 0xe;
      if (399 < uVar3) {
        plVar2 = plVar1;
      }
      if (((*plVar2 != 0) && (*(int *)((long)plVar2 + 0x2c) != 0 && (int)plVar2[2] != 0)) &&
         ((*(byte *)((long)plVar2 + 0x6e) & 1) != 0)) {
        if (((uVar5 & 1) == 0) || (*(long *)(lVar8 + 0x28) == 0)) {
          return 1;
        }
        puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8);
        uVar9 = 1;
        uVar6 = 1;
        goto joined_r0x0264592c;
      }
      lVar7 = lVar7 + 4;
    } while (lVar7 != 0x640);
    if (((uVar5 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) {
      puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8);
      uVar9 = 0;
      uVar6 = 0;
joined_r0x0264592c:
      if (puVar4 == (undefined8 *)0x0) {
        return uVar6;
      }
      (**(code **)*puVar4)(puVar4);
      return uVar9;
    }
  }
  return 0;
}

