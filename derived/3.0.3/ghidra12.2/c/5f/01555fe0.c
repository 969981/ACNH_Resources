
void FUN_01555fe0(long *param_1)

{
  undefined *puVar1;
  ushort *puVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *local_68;
  char *local_60;
  undefined8 uStack_58;
  
  puVar7 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_60 = "EventPlazaBuilt";
  local_68 = puVar1;
  iVar8 = FUN_0273ea30(&local_68);
  if (iVar8 != 0) {
    return;
  }
  local_60 = "PlazaDonationFinish";
  local_68 = puVar1;
  iVar8 = FUN_0273ea30(&local_68);
  if (iVar8 != 1) {
    return;
  }
  if (*param_1 < 1) {
    return;
  }
  local_68 = puVar7 + 0x10;
  local_60 = "EventPlazaBuilt";
  FUN_0273f3c4(&local_68,1);
  if (DAT_05574040 == 0) {
    return;
  }
  puVar13 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar9 = (**(code **)(*(long *)*puVar13 + 0x38))();
    if (lVar9 == 0) {
      return;
    }
    lVar9 = lVar9 + 0x70;
  }
  else {
    if (puVar13 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar13[0x26] == (long *)0x0) {
      return;
    }
    lVar9 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
    if (lVar9 == 0) {
      return;
    }
  }
  local_68 = puVar7 + 0x10;
  local_60 = "EventPlazaBuiltToday";
  FUN_0273f3c4(&local_68,1);
  lVar14 = *(long *)(lVar9 + 0x1c27c0);
  if (lVar14 == 0) {
    uVar10 = 0;
  }
  else {
    if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      lVar14 = *(long *)(lVar9 + 0x1c27c0);
      uVar10 = uVar10 & 0xffffffff;
      if (lVar14 == 0) goto LAB_0155615c;
    }
    plVar11 = *(long **)(lVar14 + 0x20);
    if (plVar11 != (long *)0x0) {
      local_68 = *(undefined **)(lVar9 + 0x1c27a0);
      local_60 = *(char **)(lVar9 + 0x1c27a8);
      uStack_58 = 0xe0ae8;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_68);
    }
  }
LAB_0155615c:
  uVar6 = *(ushort *)(param_1 + 2);
  bVar4 = *(byte *)((long)param_1 + 0x12);
  bVar5 = *(byte *)((long)param_1 + 0x13);
  lVar14 = *(long *)(lVar9 + 0x1c27a0);
  lVar3 = *(long *)(lVar9 + 0x1c27a8);
  uVar12 = nn::time::IsValidDate((uint)uVar6,(uint)bVar4,(uint)bVar5);
  if ((uVar12 & 1) != 0) {
    puVar2 = (ushort *)(lVar3 + lVar14);
    *puVar2 = uVar6;
    *(byte *)(puVar2 + 1) = bVar4;
    *(byte *)((long)puVar2 + 3) = bVar5;
  }
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar9 + 0x1c27c0) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar9 + 0x1c27c0) + 0x18), puVar13 != (undefined8 *)0x0))
  {
    (**(code **)*puVar13)();
  }
  return;
}

