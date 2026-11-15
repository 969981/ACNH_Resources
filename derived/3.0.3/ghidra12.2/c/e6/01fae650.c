
bool FUN_01fae650(long param_1)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  short sVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  short sVar9;
  ushort *__src;
  size_t __n;
  long lVar10;
  long lVar11;
  undefined *local_60;
  ushort *puStack_58;
  int local_50;
  ushort local_4c;
  undefined1 local_4a;
  undefined1 local_45;
  
  puVar4 = PTR_DAT_04bc3a48;
  lVar11 = *(long *)PTR_DAT_04bb27f8;
  if (lVar11 == 0) {
    return false;
  }
  local_45 = 0;
  local_4c = local_4c & 0xff00;
  local_50 = 8;
  local_60 = PTR_DAT_04bb3768 + 0x10;
  puStack_58 = &local_4c;
  if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
     (uVar3 = **(ushort **)PTR_DAT_04bc3a48, (uVar3 & 1) == 0)) {
    if (*(int *)(lVar11 + 0x10) != 2) goto LAB_01fae6f0;
LAB_01fae6c4:
    __n = 3;
    local_4a = 0x67;
    local_4c = 0x746f;
  }
  else {
    if (((uVar3 ^ 0xffff) & 5) == 0) goto LAB_01fae6c4;
LAB_01fae6f0:
    lVar10 = *(long *)(param_1 + 8);
    (**(code **)(*(long *)(lVar10 + 0x3e0) + 0x18))(lVar10 + 0x3e0);
    __src = *(ushort **)(lVar10 + 1000);
    if (&local_4c == __src) goto LAB_01fae798;
    (**(code **)(*(long *)(lVar10 + 0x3e0) + 0x18))(lVar10 + 0x3e0);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(lVar10 + 1000) + lVar8) == '\0') goto LAB_01fae770;
      lVar1 = *(long *)(lVar10 + 1000) + lVar8;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_01fae770;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_01fae770;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_01fae770:
    iVar2 = (int)lVar8;
    if (local_50 <= (int)lVar8) {
      iVar2 = local_50 + -1;
    }
    __n = (size_t)iVar2;
    memcpy(&local_4c,__src,__n);
  }
  *(undefined1 *)((long)&local_4c + __n) = 0;
LAB_01fae798:
  sVar5 = FUN_0376baa0(&local_60);
  if ((((*(ushort **)puVar4 == (ushort *)0x0) || ((**(ushort **)puVar4 & 1) == 0)) ||
      (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar10 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar10 == 0)) {
    sVar9 = *(short *)(lVar11 + 0x2a);
  }
  else if ((*(long **)(lVar10 + 0x60) == (long *)0x0) ||
          (puVar6 = (undefined8 *)**(long **)(lVar10 + 0x60), puVar6 == (undefined8 *)0x0)) {
    sVar9 = *(short *)(*(long *)(lVar10 + 0x48) + *(long *)(lVar10 + 0x40) + 2);
  }
  else {
    uVar7 = (**(code **)*puVar6)();
    sVar9 = *(short *)(*(long *)(lVar10 + 0x48) + *(long *)(lVar10 + 0x40) + 2);
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar10 + 0x60) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0x60) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  return sVar9 != -1 && sVar9 == sVar5;
}

