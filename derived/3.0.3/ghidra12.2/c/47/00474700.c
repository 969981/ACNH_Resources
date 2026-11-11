
long FUN_00474700(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = *puVar4;
    *(undefined8 *)(param_1 + 0x40) = puVar4[2];
    *(long *)(param_1 + 0x48) = puVar4[2] + *(long *)(param_1 + 8) * puVar4[3];
    *puVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 **)(param_1 + 0x18) = puVar4;
    lVar5 = *(long *)(param_1 + 0x68);
    lVar1 = *(long *)(param_1 + 0x40);
    goto LAB_004748b0;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 == 0) {
    uVar6 = *(ulong *)(param_1 + 8);
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = 0x100 / uVar6;
    }
    if (0x100 < uVar6) {
      uVar3 = 1;
    }
    lVar5 = 0x20;
    if (0x10 < *(ulong *)(param_1 + 0x30)) {
      lVar5 = *(ulong *)(param_1 + 0x30) + 0x10;
    }
    lVar5 = lVar5 + uVar3 * uVar6;
    *(long *)(param_1 + 0x28) = lVar5;
    plVar2 = *(long **)(param_1 + 0x58);
    if (plVar2 == (long *)0x0) goto LAB_0047480c;
LAB_00474764:
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,0x20,0);
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    lVar5 = *(long *)(param_1 + 0x28);
    uVar3 = (**(code **)(**(long **)(param_1 + 0x50) + 0x10))(*(long **)(param_1 + 0x50),lVar5,0);
    if (uVar3 == 0) {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x18))(*(long **)(param_1 + 0x58),puVar4,0x20);
      return 0;
    }
    puVar4[1] = uVar3;
    uVar6 = (uVar3 + *(long *)(param_1 + 0x30)) - 1 & -*(long *)(param_1 + 0x30);
    if ((uVar3 == uVar6) && (lVar5 == *(long *)(param_1 + 0x28))) {
      uVar7 = *(ulong *)(param_1 + 0x38);
      uVar6 = uVar3;
    }
    else {
      uVar7 = 0;
      if (*(ulong *)(param_1 + 8) != 0) {
        uVar7 = ((uVar3 + lVar5) - uVar6) / *(ulong *)(param_1 + 8);
      }
    }
  }
  else {
    plVar2 = *(long **)(param_1 + 0x58);
    if (plVar2 != (long *)0x0) goto LAB_00474764;
LAB_0047480c:
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)(param_1 + 0x50) + 0x10))(*(long **)(param_1 + 0x50),lVar5,0);
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    lVar1 = *(long *)(param_1 + 0x30);
    puVar4[1] = 0;
    uVar6 = (long)puVar4 + lVar1 + 0x1f & -lVar1;
    uVar7 = 0;
    if (*(ulong *)(param_1 + 8) != 0) {
      uVar7 = ((long)puVar4 + (lVar5 - uVar6)) / *(ulong *)(param_1 + 8);
    }
  }
  puVar4[2] = uVar6;
  puVar4[3] = uVar7;
  *(ulong *)(param_1 + 0x40) = uVar6;
  *(long *)(param_1 + 0x48) = puVar4[2] + *(long *)(param_1 + 8) * puVar4[3];
  *puVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar4;
  lVar1 = *(long *)(param_1 + 0x40);
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + puVar4[3];
  lVar5 = puVar4[3] + *(long *)(param_1 + 0x68);
LAB_004748b0:
  *(long *)(param_1 + 0x68) = lVar5 + -1;
  *(long *)(param_1 + 0x40) = lVar1 + *(long *)(param_1 + 8);
  return lVar1;
}

