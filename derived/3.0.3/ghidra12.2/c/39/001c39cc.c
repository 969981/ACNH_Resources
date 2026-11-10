
undefined8 FUN_001c39cc(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  
  plVar9 = (long *)(param_1 + 0x90);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  if (*(long *)(param_1 + 0x78) == 0) {
    uVar10 = 0;
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
    goto LAB_001c3b9c;
  }
  plVar13 = *(long **)(param_1 + 0xe0);
  if (plVar13 == (long *)0x0) {
    plVar13 = (long *)FUN_00185a6c(0x38);
    if (plVar13 != (long *)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 0x88);
      *plVar13 = (long)(PTR_DAT_04bcbc48 + 0x10);
      *(undefined4 *)(plVar13 + 1) = 1;
      *(undefined1 *)((long)plVar13 + 0xc) = 0;
      *plVar13 = (long)&PTR_FUN_048393d8;
      FUN_00196a24(plVar13,uVar2,0);
LAB_001c3b10:
      lVar4 = *(long *)(param_1 + 0x78);
      lVar5 = *(long *)(param_1 + 0x70) * 8;
      uVar1 = *(long *)(param_1 + 0x70) + 1;
      puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x50) + lVar5);
      *(undefined8 *)(*(long *)(param_1 + 0x50) + lVar5) = 0;
      uVar7 = *(ulong *)(param_1 + 0x80);
      uVar3 = 0;
      if (uVar7 != 0) {
        uVar3 = uVar1 / uVar7;
      }
      *(ulong *)(param_1 + 0x70) = uVar1 - uVar3 * uVar7;
      *(long *)(param_1 + 0x78) = lVar4 + -1;
      FUN_00196f20(plVar13,param_2);
      *puVar12 = plVar13;
      FUN_001e15a8(puVar12 + 1,param_3);
      lVar4 = *(long *)(param_1 + 0x28);
      uVar10 = 1;
      *(undefined8 **)(*(long *)(param_1 + 0x10) + lVar4 * 8) = puVar12;
      uVar1 = lVar4 + 1;
      lVar4 = *(long *)(param_1 + 0x38);
      uVar3 = *(ulong *)(param_1 + 0x40);
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar7 = uVar1 / uVar3;
      }
      *(ulong *)(param_1 + 0x38) = lVar4 + 1U;
      *(ulong *)(param_1 + 0x28) = uVar1 - uVar7 * uVar3;
      *param_1 = 0;
      param_1[1] = lVar4 + 1U == uVar3;
      goto LAB_001c3b9c;
    }
  }
  else {
    plVar11 = plVar13 + 1;
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar4 = *plVar13;
    lVar5 = *(long *)(lVar4 + 0x30);
    if (lVar5 == 0) {
      *(int *)(plVar13 + 10) = (int)plVar13[10] + 1;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    else {
      lVar8 = *(long *)(lVar4 + 0x28) * 8;
      lVar6 = *(long *)(lVar4 + 8);
      uVar1 = *(long *)(lVar4 + 0x28) + 1;
      plVar13 = *(long **)(lVar6 + lVar8);
      plVar13[3] = 0;
      *(undefined8 *)(lVar6 + lVar8) = 0;
      uVar7 = *(ulong *)(lVar4 + 0x38);
      uVar3 = 0;
      if (uVar7 != 0) {
        uVar3 = uVar1 / uVar7;
      }
      plVar13[5] = 0;
      *(ulong *)(lVar4 + 0x28) = uVar1 - uVar3 * uVar7;
      *(long *)(lVar4 + 0x30) = lVar5 + -1;
      *(undefined2 *)((long)plVar13 + 0x31) = 0;
      *(byte *)(plVar13 + 6) = *(byte *)(plVar13 + 6) & 4;
      (**(code **)(*plVar11 + 0x20))(plVar11);
      if (plVar13 != (long *)0x0) goto LAB_001c3b10;
    }
  }
  uVar10 = 0;
LAB_001c3b9c:
  (**(code **)(*plVar9 + 0x20))(plVar9);
  return uVar10;
}

