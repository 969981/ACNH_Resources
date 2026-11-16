
void FUN_027771d0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar5 = PTR_DAT_04bb46b0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar7 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,param_1);
  if (lVar7 == 0) {
    return;
  }
  lVar11 = lVar7 + 0x194b0;
  if (*(long *)(lVar7 + 0x194b8) == 0) {
    lVar11 = *(long *)(*(long *)puVar5 + 0x20);
  }
  lVar7 = *(long *)(lVar11 + 0x2d128);
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 0;
      plVar9 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar8 = uVar8 & 0xffffffff;
      if (*(long *)(lVar11 + 0x2d128) == 0) goto LAB_0277728c;
      plVar9 = *(long **)(*(long *)(lVar11 + 0x2d128) + 0x20);
    }
    if (plVar9 != (long *)0x0) {
      local_48 = *(long *)(lVar11 + 0x2d108);
      local_40 = *(undefined8 *)(lVar11 + 0x2d110);
      uStack_38 = 0x790;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_48);
    }
  }
LAB_0277728c:
  piVar2 = (int *)(*(long *)(lVar11 + 0x2d110) + *(long *)(lVar11 + 0x2d108));
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
  lVar7 = (ulong)((uVar6 >> 0x10) + 0x7f1cd4ef) << (uVar12 >> 0x20) + 3;
  iVar1 = (int)((ulong)lVar7 >> 0x20) + (int)lVar7;
  *piVar2 = iVar1;
  *(char *)((long)piVar2 + 7) =
       (char)iVar1 + (char)((uint)iVar1 >> 0x10) + (char)((uint)iVar1 >> 0x18) +
       (char)((uint)iVar1 >> 8) + -0x2d;
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar11 + 0x2d128) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar11 + 0x2d128) + 0x18), puVar10 != (undefined8 *)0x0))
  {
    (**(code **)*puVar10)();
  }
  return;
}

