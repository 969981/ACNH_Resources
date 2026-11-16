
void FUN_026805e0(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar3 = FUN_0266c580();
  if (lVar3 == 0) {
    return;
  }
  if (*(long **)(lVar3 + 0x28) == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar4 = (undefined8 *)**(long **)(lVar3 + 0x28);
    uVar5 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      uVar5 = (**(code **)*puVar4)();
    }
  }
  iVar10 = 0;
  lVar7 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8);
  uVar2 = *(uint *)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x17) != 0 ||
       (((ulong)uVar2 != 0 || *(ushort *)(lVar7 + 0x14) != 0) || *(byte *)(lVar7 + 0x16) != 0)) &&
     ((uint)*(byte *)(lVar7 + 0x17) ==
      ((uVar2 + (uVar2 >> 0x10) + (uVar2 >> 0x18) + (uVar2 >> 8)) - 0x2d & 0xff))) {
    lVar8 = (ulong)uVar2 << ((ulong)(0x1d - *(byte *)(lVar7 + 0x16)) & 0x3f);
    iVar10 = ((int)lVar8 - (uint)*(ushort *)(lVar7 + 0x14)) + -0x7f1cd4ef +
             (int)((ulong)lVar8 >> 0x20);
  }
  lVar8 = *(long *)(lVar3 + 0x28);
  if ((uVar5 & 1) == 0) {
LAB_026806bc:
    if (lVar8 != 0) goto LAB_026806c0;
    lVar7 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8);
LAB_0268074c:
    FUN_0285dd6c(lVar7 + 0x10,param_2);
LAB_02680758:
    if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar4 == (undefined8 *)0x0))
    goto LAB_0268077c;
    uVar2 = (**(code **)*puVar4)();
    uVar2 = uVar2 ^ 1;
  }
  else {
    if (lVar8 == 0) goto LAB_0268074c;
    if (*(undefined8 **)(lVar8 + 8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar8 + 8))();
      lVar8 = *(long *)(lVar3 + 0x28);
      goto LAB_026806bc;
    }
LAB_026806c0:
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar6 = *(long **)(lVar8 + 0x20);
joined_r0x026808c8:
      if (plVar6 != (long *)0x0) {
        local_58 = *(undefined8 *)(lVar3 + 8);
        uStack_50 = *(undefined8 *)(lVar3 + 0x10);
        local_48 = 0x28a28;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
      }
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar3 + 0x28) != 0) {
        plVar6 = *(long **)(*(long *)(lVar3 + 0x28) + 0x20);
        goto joined_r0x026808c8;
      }
    }
    FUN_0285dd6c(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x10,param_2);
    if ((uVar5 & 1) == 0) goto LAB_02680758;
    if (*(long *)(lVar3 + 0x28) != 0) {
      puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 0x18);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)();
      }
      goto LAB_02680758;
    }
LAB_0268077c:
    uVar2 = 1;
  }
  iVar9 = 0;
  lVar7 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8);
  uVar1 = *(uint *)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x17) != 0 ||
       (((ulong)uVar1 != 0 || *(ushort *)(lVar7 + 0x14) != 0) || *(byte *)(lVar7 + 0x16) != 0)) &&
     ((uint)*(byte *)(lVar7 + 0x17) ==
      ((uVar1 + (uVar1 >> 0x10) + (uVar1 >> 0x18) + (uVar1 >> 8)) - 0x2d & 0xff))) {
    lVar8 = (ulong)uVar1 << ((ulong)(0x1d - *(byte *)(lVar7 + 0x16)) & 0x3f);
    iVar9 = ((int)lVar8 - (uint)*(ushort *)(lVar7 + 0x14)) + -0x7f1cd4ef +
            (int)((ulong)lVar8 >> 0x20);
  }
  lVar8 = *(long *)(lVar3 + 0x28);
  if ((uVar2 & 1) == 0) {
    if (lVar8 == 0) goto LAB_02680898;
    if (*(undefined8 **)(lVar8 + 8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar8 + 8))();
      lVar8 = *(long *)(lVar3 + 0x28);
      goto LAB_02680804;
    }
  }
  else {
LAB_02680804:
    if (lVar8 == 0) {
      lVar7 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8);
LAB_02680898:
      FUN_0285dc20(lVar7 + 0x18,iVar10 - iVar9,0x7fffffff);
      return;
    }
  }
  if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
    uVar5 = 0;
    plVar6 = *(long **)(lVar8 + 0x20);
  }
  else {
    uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    uVar5 = uVar5 & 0xffffffff;
    if (*(long *)(lVar3 + 0x28) == 0) goto LAB_02680854;
    plVar6 = *(long **)(*(long *)(lVar3 + 0x28) + 0x20);
  }
  if (plVar6 != (long *)0x0) {
    local_58 = *(undefined8 *)(lVar3 + 8);
    uStack_50 = *(undefined8 *)(lVar3 + 0x10);
    local_48 = 0x28a28;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
  }
LAB_02680854:
  FUN_0285dc20(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x18,iVar10 - iVar9,0x7fffffff);
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

