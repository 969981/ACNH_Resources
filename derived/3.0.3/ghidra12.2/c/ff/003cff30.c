
undefined8 FUN_003cff30(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  
  uVar4 = *(int *)(param_2 + 0x7c) + (uint)*(byte *)(param_2 + 0xf8);
  uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  if (0x7e < (int)uVar4) {
    uVar4 = 0x7f;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar5 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    lVar1 = param_1 + 8;
    if (lVar3 != lVar1) {
      do {
        iVar5 = 0;
        lVar6 = lVar3;
        do {
          lVar6 = *(long *)(lVar6 + 8);
          iVar5 = iVar5 + 1;
        } while (lVar6 != lVar1);
        if (iVar5 < *(int *)(param_1 + 0x18)) goto LAB_003d0038;
        uVar9 = 0x80;
        plVar2 = (long *)0x0;
        do {
          plVar7 = (long *)(lVar3 + -0x200);
          uVar8 = *(int *)(lVar3 + -0x184) + (uint)*(byte *)(lVar3 + -0x108);
          lVar3 = *(long *)(lVar3 + 8);
          uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
          if (0x7e < (int)uVar8) {
            uVar8 = 0x7f;
          }
          if ((int)uVar9 <= (int)uVar8) {
            plVar7 = plVar2;
          }
          if ((int)uVar8 <= (int)uVar9) {
            uVar9 = uVar8;
          }
          plVar2 = plVar7;
        } while (lVar3 != lVar1);
        if (plVar7 == (long *)0x0) {
          return 0;
        }
        uVar9 = *(int *)((long)plVar7 + 0x7c) + (uint)*(byte *)(plVar7 + 0x1f);
        uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
        if (0x7e < (int)uVar9) {
          uVar9 = 0x7f;
        }
        if (uVar4 < uVar9) {
          return 0;
        }
        (**(code **)(*plVar7 + 0x20))();
        lVar3 = *(long *)(param_1 + 0x10);
      } while (lVar3 != lVar1);
      iVar5 = *(int *)(param_1 + 0x18);
    }
    if (0 < iVar5) {
LAB_003d0038:
      lVar3 = *(long *)(param_2 + 0x200);
      *(undefined8 *)(param_2 + 0x200) = *(undefined8 *)(param_1 + 8);
      *(long *)(lVar3 + 8) = lVar1;
      *(long *)(*(long *)(param_1 + 8) + 8) = param_2 + 0x200;
      *(long *)(param_1 + 8) = lVar3;
      FUN_003cfae4(param_2,param_1);
      return 1;
    }
  }
  return 0;
}

