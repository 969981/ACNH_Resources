
void FUN_0375f318(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined *local_50;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_04bc3a48;
  puVar2 = PTR_DAT_04bc1530;
  puVar1 = PTR_DAT_04bb27f8;
  lVar6 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) &&
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) || ((*(byte *)(lVar6 + 0x1a71) >> 2 & 1) != 0))
     && ((*(long *)PTR_DAT_04bc1530 != 0 &&
         (lVar9 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar9 != 0)))) {
    if ((*(long **)(lVar9 + 0x1790) != (long *)0x0) &&
       (puVar4 = (undefined8 *)**(long **)(lVar9 + 0x1790), puVar4 != (undefined8 *)0x0)) {
      uVar5 = (**(code **)*puVar4)();
      uVar7 = (uint)*(ushort *)(*(long *)(lVar9 + 0x1778) + *(long *)(lVar9 + 6000) + 2);
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar9 + 0x1790) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar9 + 0x1790) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
      goto LAB_0375f3d8;
    }
    lVar6 = *(long *)(lVar9 + 0x1778) + *(long *)(lVar9 + 6000);
  }
  uVar7 = (uint)*(ushort *)(lVar6 + 2);
LAB_0375f3d8:
  if ((((*(ushort **)puVar3 == (ushort *)0x0) || ((**(ushort **)puVar3 & 1) == 0)) &&
      ((*(byte *)(*(long *)puVar1 + 0x1a71) >> 2 & 1) == 0)) ||
     ((*(long *)puVar2 == 0 || (lVar6 = *(long *)(*(long *)puVar2 + 8), lVar6 == 0)))) {
    iVar8 = *(int *)(*(long *)puVar1 + 4);
  }
  else if ((*(long **)(lVar6 + 0x1790) == (long *)0x0) ||
          (puVar4 = (undefined8 *)**(long **)(lVar6 + 0x1790), puVar4 == (undefined8 *)0x0)) {
    iVar8 = (int)*(char *)(*(long *)(lVar6 + 0x1778) + *(long *)(lVar6 + 6000) + 4);
  }
  else {
    uVar5 = (**(code **)*puVar4)();
    iVar8 = (int)*(char *)(*(long *)(lVar6 + 0x1778) + *(long *)(lVar6 + 6000) + 4);
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x1790) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x1790) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  local_50 = PTR_DAT_04bcacf0 + 0x10;
  if (uVar7 - DAT_05abc378 < DAT_05abc358) {
    local_48 = *(undefined8 *)(DAT_05abc360 + (long)(int)(uVar7 - DAT_05abc378) * 8);
  }
  else {
    local_48 = 0;
  }
  FUN_037429b0(&local_50,iVar8);
  return;
}

