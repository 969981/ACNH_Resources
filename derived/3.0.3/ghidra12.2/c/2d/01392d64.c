
undefined4 FUN_01392d64(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  
  puVar4 = PTR_DAT_04bbc218;
  uVar2 = *(uint *)((long)param_1 + 0xc);
  lVar7 = *(long *)PTR_DAT_04bbc218;
  puVar1 = (uint *)(lVar7 + 0x20) + (ulong)*(uint *)(param_1 + 1) * 4;
  if (0x1d < *(uint *)(param_1 + 1)) {
    puVar1 = (uint *)(lVar7 + 0x20);
  }
  if (*puVar1 <= uVar2) {
    uVar2 = 0;
  }
  lVar8 = *(long *)(puVar1 + 2) + (long)(int)uVar2 * 0x30;
  uVar2 = *(uint *)(lVar8 + 8);
  uVar3 = *(uint *)(lVar8 + 0xc);
  if (*(uint *)(lVar7 + 0x10) <= uVar2) {
    uVar2 = 0;
  }
  if (uVar3 < *(uint *)(*(long *)(lVar7 + 0x18) + (long)(int)uVar2 * 0x18 + 8)) {
    lVar7 = *(long *)(*(long *)(lVar7 + 0x18) + (long)(int)uVar2 * 0x18 + 0x10);
    if ((*(uint *)(lVar8 + 0x10) < *(uint *)(lVar7 + (long)(int)uVar3 * 0x10)) &&
       (lVar7 = *(long *)(lVar7 + (long)(int)uVar3 * 0x10 + 8), lVar7 != 0)) {
      uVar6 = *(undefined4 *)(lVar7 + (long)(int)*(uint *)(lVar8 + 0x10) * 0x518 + 0x2c);
      goto LAB_01392e30;
    }
  }
  uVar6 = 0;
LAB_01392e30:
  iVar5 = (**(code **)(*param_1 + 0x20))(param_1,uVar6);
  if (iVar5 == 2) {
    uVar2 = *(uint *)((long)param_1 + 0xc);
    lVar7 = *(long *)puVar4;
    puVar1 = (uint *)(lVar7 + 0x20) + (ulong)*(uint *)(param_1 + 1) * 4;
    if (0x1d < *(uint *)(param_1 + 1)) {
      puVar1 = (uint *)(lVar7 + 0x20);
    }
    if (*puVar1 <= uVar2) {
      uVar2 = 0;
    }
    lVar8 = *(long *)(puVar1 + 2) + (long)(int)uVar2 * 0x30;
    uVar2 = *(uint *)(lVar8 + 8);
    uVar3 = *(uint *)(lVar8 + 0xc);
    if (*(uint *)(lVar7 + 0x10) <= uVar2) {
      uVar2 = 0;
    }
    if (uVar3 < *(uint *)(*(long *)(lVar7 + 0x18) + (long)(int)uVar2 * 0x18 + 8)) {
      lVar7 = *(long *)(*(long *)(lVar7 + 0x18) + (long)(int)uVar2 * 0x18 + 0x10);
      if ((*(uint *)(lVar8 + 0x10) < *(uint *)(lVar7 + (long)(int)uVar3 * 0x10)) &&
         (lVar7 = *(long *)(lVar7 + (long)(int)uVar3 * 0x10 + 8), lVar7 != 0)) {
        FUN_013964cc(lVar7 + (long)(int)*(uint *)(lVar8 + 0x10) * 0x518);
      }
    }
  }
  if (iVar5 == 3) {
    uVar6 = 3;
  }
  else {
    uVar6 = 1;
    if (iVar5 != 1) {
      uVar6 = 2;
    }
  }
  return uVar6;
}

