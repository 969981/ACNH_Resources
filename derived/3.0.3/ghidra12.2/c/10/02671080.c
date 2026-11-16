
void FUN_02671080(void)

{
  int iVar1;
  undefined2 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (DAT_05574040 == 0) {
LAB_026710ec:
    lVar9 = 0;
  }
  else {
    puVar12 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar8 = (**(code **)(*(long *)*puVar12 + 0x38))();
      lVar9 = 0;
      if (lVar8 != 0) {
        lVar9 = lVar8 + 0x70;
      }
    }
    else {
      if (puVar12 == (undefined8 *)0x0) goto LAB_026710ec;
      lVar9 = 0;
      if ((long *)puVar12[0x26] != (long *)0x0) {
        lVar9 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
      }
    }
  }
  lVar8 = *(long *)(&LAB_00205180 + lVar9);
  if (lVar8 == 0) {
    uVar10 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar10 = 0;
      plVar11 = *(long **)(lVar8 + 0x20);
    }
    else {
      uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar10 = uVar10 & 0xffffffff;
      if (*(long *)(&LAB_00205180 + lVar9) == 0) goto LAB_02671164;
      plVar11 = *(long **)(*(long *)(&LAB_00205180 + lVar9) + 0x20);
    }
    if (plVar11 != (long *)0x0) {
      local_48 = *(long *)(&LAB_00205160 + lVar9);
      local_40 = *(undefined8 *)(&LAB_00205168 + lVar9);
      uStack_38 = 8;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_48);
    }
  }
LAB_02671164:
  puVar6 = PTR_DAT_04bb37e0;
  puVar2 = (undefined2 *)(*(long *)(&LAB_00205168 + lVar9) + *(long *)(&LAB_00205160 + lVar9));
  *puVar2 = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)(puVar2 + 1) = puVar6[2];
  *(undefined *)((long)puVar2 + 3) = puVar6[3];
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar6 + 4);
  if ((((uVar10 & 1) != 0) && (*(long *)(&LAB_00205180 + lVar9) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(&LAB_00205180 + lVar9) + 0x18),
     puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  lVar8 = *(long *)(&LAB_00205148 + lVar9);
  if (lVar8 == 0) {
    uVar10 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar10 = 0;
      plVar11 = *(long **)(lVar8 + 0x20);
    }
    else {
      uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar10 = uVar10 & 0xffffffff;
      if (*(long *)(&LAB_00205148 + lVar9) == 0) goto LAB_02671220;
      plVar11 = *(long **)(*(long *)(&LAB_00205148 + lVar9) + 0x20);
    }
    if (plVar11 != (long *)0x0) {
      local_48 = *(long *)(&LAB_00205128 + lVar9);
      local_40 = *(undefined8 *)(&LAB_00205130 + lVar9);
      uStack_38 = 8;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_48);
    }
  }
LAB_02671220:
  piVar3 = (int *)(*(long *)(&LAB_00205130 + lVar9) + *(long *)(&LAB_00205128 + lVar9));
  uVar7 = nn::os::GetSystemTick();
  uVar4 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  uVar7 = uVar4 ^ uVar4 * 0x800;
  uVar5 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
  uVar4 = uVar5 ^ uVar5 * 0x800;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
  uVar7 = uVar7 >> 8 ^ uVar5 >> 0x13 ^ uVar7 ^ uVar5;
  *(short *)(piVar3 + 1) = (short)(uVar7 >> 0x10);
  uVar13 = (ulong)(uVar4 >> 8 ^ uVar7 >> 0x13 ^ uVar4 ^ uVar7) * 0x1b;
  *(char *)((long)piVar3 + 6) = (char)(uVar13 >> 0x20);
  lVar8 = (ulong)((uVar7 >> 0x10) + 0x7f1cd4ef) << (uVar13 >> 0x20) + 3;
  iVar1 = (int)((ulong)lVar8 >> 0x20) + (int)lVar8;
  *piVar3 = iVar1;
  *(char *)((long)piVar3 + 7) =
       (char)iVar1 + (char)((uint)iVar1 >> 0x10) + (char)((uint)iVar1 >> 0x18) +
       (char)((uint)iVar1 >> 8) + -0x2d;
  if ((((uVar10 & 1) != 0) && (*(long *)(&LAB_00205148 + lVar9) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(&LAB_00205148 + lVar9) + 0x18),
     puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  DAT_05564320 = 0;
  return;
}

