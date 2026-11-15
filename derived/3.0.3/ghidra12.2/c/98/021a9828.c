
void FUN_021a9828(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  uint *puVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  char local_5c;
  undefined1 local_5b;
  char local_5a;
  undefined1 local_59;
  
  if (DAT_05574040 == 0) {
    return;
  }
  puVar10 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar7 = (**(code **)(*(long *)*puVar10 + 0x38))();
    if (lVar7 == 0) {
      return;
    }
    lVar7 = lVar7 + 0x70;
  }
  else {
    if (puVar10 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar10[0x26] == (long *)0x0) {
      return;
    }
    lVar7 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
    if (lVar7 == 0) {
      return;
    }
  }
  if ((*(long **)(lVar7 + 0xd0) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar7 + 0xd0), puVar10 == (undefined8 *)0x0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = (**(code **)*puVar10)();
    uVar6 = uVar6 ^ 1;
  }
  lVar12 = *(long *)(lVar7 + 0xb8) + *(long *)(lVar7 + 0xb0);
  if ((((ulong)*(byte *)(lVar12 + 0x1e3366) < 3) &&
      (uVar14 = (ulong)*(byte *)(lVar12 + (ulong)*(byte *)(lVar12 + 0x1e3366) + 0x1e3363),
      uVar14 < 10)) && (uVar8 = FUN_02691650(lVar12 + uVar14 * 0x13230), (uVar8 & 1) == 0)) {
    if ((int)*(uint *)(DAT_053e0208 + 0x16718) < 1) {
      if (((((*(long *)(DAT_053e0208 + 0x16608) == 0) ||
            (puVar11 = *(uint **)(*(long *)(DAT_053e0208 + 0x16608) + 8), puVar11 == (uint *)0x0))
           || ((7 < *(uint *)(DAT_053e0208 + 0x16620) &&
               (*(char *)(*(long *)(DAT_053e0208 + 0x16628) + 7) == '\0')))) ||
          ((*puVar11 < 8 || (puVar11[1] == 0)))) || ((ushort)puVar11[2] == 0)) goto LAB_021a9a6c;
      iVar13 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        iVar13 = 0x1c;
      }
      lVar9 = (ulong)(puVar11[1] * 7 + (uint)(ushort)puVar11[2] * 8 + iVar13) + (long)puVar11;
    }
    else {
      if (*(uint *)(DAT_053e0208 + 0x16718) < 8) goto LAB_021a9a6c;
      lVar9 = 0x38;
      if (*(uint *)(DAT_053e0208 + 0x16708) < 8) {
        lVar9 = 0;
      }
      lVar9 = *(long *)(*(long *)(DAT_053e0208 + 0x16710) + lVar9);
    }
    if (lVar9 != 0) {
      lVar12 = lVar12 + uVar14 * 0x13230;
      cVar4 = *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
      cVar5 = *(char *)(lVar12 + 0x13151);
      uVar2 = *(undefined1 *)(*(long *)PTR_DAT_04bb32e8 + 0x4065);
      cVar1 = cVar4 + '\x18';
      if ('\x04' < cVar4) {
        cVar1 = cVar4;
      }
      uVar3 = *(undefined1 *)(lVar12 + 0x13152);
      cVar4 = cVar5 + '\x18';
      if ('\x04' < cVar5) {
        cVar4 = cVar5;
      }
      FUN_0214ca00(&local_5c);
      param_1 = param_1 + uVar14 * 0xba0;
      lVar12 = *(long *)(param_1 + 0xaa0);
      local_5c = cVar1;
      local_5b = uVar2;
      local_5a = cVar4;
      local_59 = uVar3;
      if ((lVar12 == 0) || (*(int *)(lVar12 + 4) != 7)) {
        FUN_0214d3b0(param_1 + 0x8b0,&local_5c,0);
      }
    }
  }
LAB_021a9a6c:
  if ((((uVar6 & 1) == 0) && (*(long *)(lVar7 + 0xd0) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar7 + 0xd0) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  return;
}

