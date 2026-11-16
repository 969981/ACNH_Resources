
void FUN_02680020(byte *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  byte local_14 [4];
  
  local_14[0] = *param_1;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar6 = FUN_02583354(DAT_055021a0,local_14,1);
  if (lVar6 == 0) {
    return;
  }
  lVar10 = lVar6 + 0x194b0;
  if (*(long *)(lVar6 + 0x194b8) == 0) {
    lVar10 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar6 = *(long *)(lVar10 + 0x2ac68);
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
      plVar8 = *(long **)(lVar6 + 0x20);
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar7 = uVar7 & 0xffffffff;
      if (*(long *)(lVar10 + 0x2ac68) == 0) goto LAB_026800f8;
      plVar8 = *(long **)(*(long *)(lVar10 + 0x2ac68) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_48 = *(long *)(lVar10 + 0x2ac48);
      local_40 = *(undefined8 *)(lVar10 + 0x2ac50);
      uStack_38 = 8;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
    }
  }
LAB_026800f8:
  piVar2 = (int *)(*(long *)(lVar10 + 0x2ac50) + *(long *)(lVar10 + 0x2ac48));
  uVar5 = nn::os::GetSystemTick();
  uVar3 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  uVar5 = uVar3 ^ uVar3 * 0x800;
  uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
  uVar3 = uVar4 ^ uVar4 * 0x800;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
  uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
  *(short *)(piVar2 + 1) = (short)(uVar5 >> 0x10);
  uVar11 = (ulong)(uVar3 >> 8 ^ uVar5 >> 0x13 ^ uVar3 ^ uVar5) * 0x1b;
  *(char *)((long)piVar2 + 6) = (char)(uVar11 >> 0x20);
  lVar6 = (ulong)((uVar5 >> 0x10) + 0x7f1cd4ef) << (uVar11 >> 0x20) + 3;
  iVar1 = (int)((ulong)lVar6 >> 0x20) + (int)lVar6;
  *piVar2 = iVar1;
  *(char *)((long)piVar2 + 7) =
       (char)iVar1 + (char)((uint)iVar1 >> 0x10) + (char)((uint)iVar1 >> 0x18) +
       (char)((uint)iVar1 >> 8) + -0x2d;
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar10 + 0x2ac68) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0x2ac68) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return;
}

