
void FUN_022987c8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  FUN_00a6fcc0(param_1,*(undefined8 *)(param_1 + 0x5b8));
  if ((((**(char **)(param_1 + 0x4b8) != '\0') && (**(char **)(param_1 + 0x460) != '\0')) &&
      (plVar3 = *(long **)(param_1 + 0x60), plVar3 != (long *)0x0)) && (plVar3[0x227] != 0)) {
    FUN_038501b0(0x41200000,plVar3[0x227],0);
    lVar4 = plVar3[0x227];
    if (*(char *)(lVar4 + 0x2c0) != '\0') {
      *(undefined1 *)(lVar4 + 0x2c0) = 0;
      FUN_03855b20(lVar4 + 0xc0,0);
    }
    FUN_0384f8c0(lVar4,param_1 + 0x4b0,0,0);
    (**(code **)(*plVar3 + 0x120))(plVar3,param_1 + 0x4b0,10,0);
  }
  lVar4 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar4 = *(long *)(param_1 + 0x70) + 0x278;
  }
  *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(lVar4 + 8);
  *(undefined4 *)(lVar4 + 0x14) = *(undefined4 *)(lVar4 + 0xc);
  uVar1 = *(uint *)(lVar4 + 0x18);
  *(undefined1 *)(lVar4 + 0x21) = 1;
  *(uint *)(lVar4 + 8) = uVar1;
  *(undefined4 *)(lVar4 + 0xc) = 0;
  if (uVar1 != 0xffffffff) {
    if (*(uint *)(lVar4 + 0x28) <= uVar1) {
      uVar1 = 0;
    }
    puVar2 = *(undefined8 **)(*(long *)(lVar4 + 0x30) + (long)(int)uVar1 * 0x40);
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x022988c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)();
      return;
    }
  }
  return;
}

