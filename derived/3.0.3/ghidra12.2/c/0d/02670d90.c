
void FUN_02670d90(undefined2 *param_1)

{
  undefined2 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar5 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4();
  if (*(long *)puVar5 == 0) {
    return;
  }
  lVar13 = *(long *)(lVar13 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if (*(uint *)(lVar13 + 0x1d8) <= uVar6) {
    return;
  }
  if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return;
  }
  if (DAT_05574040 == 0) {
LAB_02670e48:
    lVar13 = 0;
  }
  else {
    puVar11 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar8 = (**(code **)(*(long *)*puVar11 + 0x38))();
      lVar13 = 0;
      if (lVar8 != 0) {
        lVar13 = lVar8 + 0x70;
      }
    }
    else {
      if (puVar11 == (undefined8 *)0x0) goto LAB_02670e48;
      lVar13 = 0;
      if ((long *)puVar11[0x26] != (long *)0x0) {
        lVar13 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
      }
    }
  }
  lVar8 = *(long *)(&LAB_00205180 + lVar13);
  if (lVar8 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
      plVar10 = *(long **)(lVar8 + 0x20);
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar9 = uVar9 & 0xffffffff;
      if (*(long *)(&LAB_00205180 + lVar13) == 0) goto LAB_02670ec0;
      plVar10 = *(long **)(*(long *)(&LAB_00205180 + lVar13) + 0x20);
    }
    if (plVar10 != (long *)0x0) {
      local_48 = *(long *)(&LAB_00205160 + lVar13);
      local_40 = *(undefined8 *)(&LAB_00205168 + lVar13);
      uStack_38 = 8;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_48);
    }
  }
LAB_02670ec0:
  puVar1 = (undefined2 *)(*(long *)(&LAB_00205168 + lVar13) + *(long *)(&LAB_00205160 + lVar13));
  *puVar1 = *param_1;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)((long)puVar1 + 3) = *(undefined1 *)((long)param_1 + 3);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 2);
  if ((((uVar9 & 1) != 0) && (*(long *)(&LAB_00205180 + lVar13) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(&LAB_00205180 + lVar13) + 0x18),
     puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  iVar7 = FUN_02670960();
  lVar8 = *(long *)(&LAB_00205148 + lVar13);
  if (lVar8 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
      plVar10 = *(long **)(lVar8 + 0x20);
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar9 = uVar9 & 0xffffffff;
      if (*(long *)(&LAB_00205148 + lVar13) == 0) goto LAB_02670f7c;
      plVar10 = *(long **)(*(long *)(&LAB_00205148 + lVar13) + 0x20);
    }
    if (plVar10 != (long *)0x0) {
      local_48 = *(long *)(&LAB_00205128 + lVar13);
      local_40 = *(undefined8 *)(&LAB_00205130 + lVar13);
      uStack_38 = 8;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_48);
    }
  }
LAB_02670f7c:
  piVar2 = (int *)(*(long *)(&LAB_00205130 + lVar13) + *(long *)(&LAB_00205128 + lVar13));
  uVar6 = nn::os::GetSystemTick();
  uVar3 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
  uVar6 = uVar3 ^ uVar3 * 0x800;
  uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
  uVar3 = uVar4 ^ uVar4 * 0x800;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
  uVar6 = uVar6 >> 8 ^ uVar4 >> 0x13 ^ uVar6 ^ uVar4;
  *(short *)(piVar2 + 1) = (short)(uVar6 >> 0x10);
  uVar12 = (ulong)(uVar3 >> 8 ^ uVar6 >> 0x13 ^ uVar3 ^ uVar6) * 0x1b;
  *(char *)((long)piVar2 + 6) = (char)(uVar12 >> 0x20);
  lVar8 = (ulong)(iVar7 + 0x7f1cd4ef + (uVar6 >> 0x10)) << (uVar12 >> 0x20) + 3;
  iVar7 = (int)((ulong)lVar8 >> 0x20) + (int)lVar8;
  *piVar2 = iVar7;
  *(char *)((long)piVar2 + 7) =
       (char)iVar7 + (char)((uint)iVar7 >> 0x10) + (char)((uint)iVar7 >> 0x18) +
       (char)((uint)iVar7 >> 8) + -0x2d;
  if ((((uVar9 & 1) != 0) && (*(long *)(&LAB_00205148 + lVar13) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(&LAB_00205148 + lVar13) + 0x18),
     puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  DAT_05564320 = 0;
  return;
}

