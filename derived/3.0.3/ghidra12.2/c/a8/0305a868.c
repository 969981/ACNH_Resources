
/* WARNING: Removing unreachable block (ram,0x0305a99c) */

void FUN_0305a868(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long local_40 [3];
  undefined4 local_24;
  
  lVar4 = *(long *)(param_1 + 0x248);
  if (lVar4 == 0) goto LAB_0305a9b0;
  lVar3 = *(long *)(param_1 + 0x228);
  lVar5 = *(long *)(lVar3 + 0x578);
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar5 + 0x218);
    lVar8 = *(long *)(lVar6 + 0x18);
    if (lVar8 == 0) goto LAB_0305a8cc;
    if (*(int *)(lVar8 + 0x18) == 0) {
      if (lVar6 != 0) goto LAB_0305a8cc;
    }
    else {
      lVar9 = 0;
      if (**(long **)(lVar8 + 0x20) != 0) {
        lVar9 = *(long *)(**(long **)(lVar8 + 0x20) + 0x10);
      }
      if (lVar9 != lVar6) goto LAB_0305a8cc;
    }
    goto LAB_0305a904;
  }
LAB_0305a8cc:
  lVar5 = *(long *)(lVar3 + 0x580);
  if (lVar5 == 0) {
LAB_0305a900:
    lVar5 = 0;
  }
  else {
    lVar6 = *(long *)(lVar5 + 0x218);
    lVar8 = *(long *)(lVar6 + 0x18);
    if (lVar8 == 0) goto LAB_0305a900;
    if (*(int *)(lVar8 + 0x18) == 0) {
      if (lVar6 != 0) goto LAB_0305a900;
    }
    else {
      lVar9 = 0;
      if (**(long **)(lVar8 + 0x20) != 0) {
        lVar9 = *(long *)(**(long **)(lVar8 + 0x20) + 0x10);
      }
      if (lVar9 != lVar6) goto LAB_0305a900;
    }
  }
LAB_0305a904:
  uVar1 = *(uint *)(lVar4 + 0x28);
  uVar7 = (ulong)uVar1;
  if ((int)uVar1 < 5) {
    if (4 < uVar1) {
      uVar7 = 0;
    }
    *(long *)(lVar4 + uVar7 * 8) = lVar5;
    puVar2 = PTR_DAT_04bb2230;
    *(int *)(lVar4 + 0x28) = *(int *)(lVar4 + 0x28) + 1;
    if (*(long *)(*(long *)puVar2 + 0xd0) != 0) {
      *(undefined1 *)(*(long *)(*(long *)puVar2 + 0xd0) + 0x26c) = 1;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0x210) + 0x48);
    if (((*(int *)(lVar4 + 0x18) != 0) && (lVar4 = **(long **)(lVar4 + 0x20), lVar4 != 0)) &&
       (lVar3 = *(long *)(lVar4 + 0x10), lVar3 != 0)) {
      local_24 = 1;
      *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(lVar3 + 0x14a0);
      *(undefined4 *)(lVar4 + 8) = *(undefined4 *)(lVar3 + 0x14a4);
      local_40[2] = 0;
      local_40[1] = 0;
      local_40[0] = lVar3;
      (*(code *)**(undefined8 **)(lVar3 + 0x40))((undefined8 *)(lVar3 + 0x40),1,local_40);
      *(undefined8 *)(lVar4 + 0x10) = 0;
    }
  }
LAB_0305a9b0:
  if (*(long **)(param_1 + 0x238) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x238) + 0x20))();
  }
  if ((*(long *)(param_1 + 0x228) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x228) + 0x210), lVar4 != 0)) {
    *(undefined1 *)(lVar4 + 0x54) = 1;
  }
  return;
}

