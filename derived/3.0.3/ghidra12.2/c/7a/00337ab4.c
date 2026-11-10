
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00337ab4(long *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *param_1;
  if ((*(char *)(*(long *)(lVar5 + 0xa0) + 0x792) == '\0') &&
     (plVar2 = (long *)(**(code **)(**(long **)(lVar5 + 0x9b0) + 0x10))
                                 (*(long **)(lVar5 + 0x9b0),0x80,0x80), plVar2 != (long *)0x0)) {
    *(long *)(lVar5 + 0x9b8) = *(long *)(lVar5 + 0x9b8) + 0x80;
    *(int *)(lVar5 + 0x9c0) = *(int *)(lVar5 + 0x9c0) + 1;
    plVar2[0xe] = 0;
    plVar2[0xf] = 0;
    plVar2[0xc] = 0;
    plVar2[0xd] = 0;
    plVar2[10] = 0;
    plVar2[0xb] = 0;
    plVar2[8] = 0;
    plVar2[9] = 0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[2] = 0;
    plVar2[3] = 0;
    *plVar2 = 0;
    plVar2[1] = 0;
    *(long **)(*param_1 + 0x4a8) = plVar2;
    lVar5 = _DAT_04102880;
    plVar2[0xf] = _UNK_04102888;
    plVar2[0xe] = lVar5;
    *(int *)(plVar2 + 0xb) = (int)*(float *)(*(long *)(*param_1 + 0x240) + 0x424);
    *(undefined4 *)((long)plVar2 + 0x5c) = *(undefined4 *)(*(long *)(*param_1 + 0x240) + 0x420);
    lVar5 = *(long *)(*(long *)(*param_1 + 0x240) + 0x348);
    *(undefined4 *)(plVar2 + 4) = *(undefined4 *)(lVar5 + 0x20);
    *(undefined4 *)((long)plVar2 + 0x24) = *(undefined4 *)(lVar5 + 0x24);
    *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(lVar5 + 0x5c);
    *(undefined4 *)((long)plVar2 + 0x2c) = *(undefined4 *)(lVar5 + 0x60);
    uVar3 = FUN_0031d9e0(*param_1,4,0x60);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    lVar6 = *(long *)(*(long *)(*param_1 + 0x240) + 0x348);
    iVar4 = (int)*(float *)(lVar6 + 0x18);
    iVar1 = FUN_003376c0(*param_1,iVar4);
    lVar5 = (long)*(int *)(*param_1 + 0x230) + (long)iVar1;
    *(int *)(plVar2 + 10) = (int)lVar5;
    iVar4 = iVar4 + *(int *)(lVar6 + 0x28) * (iVar4 + -1);
    *(int *)(plVar2 + 9) = iVar4;
    lVar6 = *(long *)(**(long **)(*param_1 + 0x4d0) + 8);
    uVar3 = (lVar6 + lVar5 * iVar4 * 0x50) - 1U & -lVar6;
    plVar2[8] = uVar3;
    lVar5 = *(long *)(*param_1 + 0x790);
    lVar6 = uVar3 * (long)*(int *)**(undefined8 **)(*param_1 + 0x4d0);
    plVar2[2] = lVar5;
    plVar2[3] = lVar6;
    lVar5 = FUN_0031e790(lVar5,lVar6,*(undefined8 *)(lVar5 + 0x1c8));
    *plVar2 = lVar5;
    if (lVar5 != 0) {
      plVar2[1] = 0;
      uVar3 = (lVar6 + *(long *)(plVar2[2] + 0x1c8)) - 1U & -*(long *)(plVar2[2] + 0x1c8);
      lVar6 = 0;
      if (uVar3 <= (ulong)plVar2[3]) {
        plVar2[1] = uVar3;
        lVar6 = lVar5;
      }
      plVar2[6] = lVar6;
      return 1;
    }
  }
  return 0;
}

