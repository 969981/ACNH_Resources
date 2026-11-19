
bool FUN_0388ee40(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  iVar2 = *(int *)(param_1 + 0x28);
  lVar8 = (long)iVar2 << 3;
  plVar6 = *(long **)(param_1 + 0x30);
  lVar7 = *param_2;
  if (iVar2 != 0) {
    lVar12 = lVar8;
    plVar9 = plVar6;
    do {
      lVar11 = *plVar9;
      if (((*(long *)(lVar11 + 0x10) == lVar7) && (*(char *)(lVar11 + 0x18) == (char)param_2[1])) &&
         (*(char *)(lVar11 + 0x19) == *(char *)((long)param_2 + 9))) goto LAB_0388eeec;
      plVar9 = plVar9 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  if ((*(long *)(param_1 + 0x88) == lVar7) && (*(char *)(param_1 + 0x90) == (char)param_2[1])) {
    lVar11 = param_1 + 0x78;
    if (*(char *)(param_1 + 0x91) != *(char *)((long)param_2 + 9)) {
      lVar11 = 0;
    }
  }
  else {
    lVar11 = 0;
  }
LAB_0388eeec:
  uVar3 = *(uint *)(param_2 + 1) >> 8 & 0xff;
  if (iVar2 != 0) {
    lVar12 = lVar8;
    plVar9 = plVar6;
    do {
      lVar10 = *plVar9;
      if (((*(long *)(lVar10 + 0x10) == lVar7) && (*(char *)(lVar10 + 0x18) == '\0')) &&
         (*(byte *)(lVar10 + 0x19) == uVar3)) goto LAB_0388ef5c;
      plVar9 = plVar9 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  if (((*(long *)(param_1 + 0x88) == lVar7) && (*(byte *)(param_1 + 0x90) == 0)) &&
     (*(byte *)(param_1 + 0x91) == uVar3)) {
    lVar10 = param_1 + 0x78;
LAB_0388ef5c:
    *(undefined1 *)(lVar11 + 0x30) = *(undefined1 *)(lVar10 + 0x30);
    puVar4 = PTR_DAT_04bcb7d8;
    *(undefined4 *)(lVar11 + 8) = *(undefined4 *)(lVar10 + 8);
    (**(code **)(**(long **)(*(long *)puVar4 + 0x68) + 0x1b8))
              (*(long **)(*(long *)puVar4 + 0x68),lVar11 + 0x10,*(undefined4 *)(lVar10 + 8));
    bVar5 = (*(uint *)(lVar11 + 8) & 0xfffffffe) == 2;
  }
  else {
    uVar1 = *(uint *)(param_2 + 1) & 0xff;
    if (iVar2 != 0) {
      do {
        lVar12 = *plVar6;
        if (((*(long *)(lVar12 + 0x10) == lVar7) && (*(byte *)(lVar12 + 0x18) == uVar1)) &&
           (*(byte *)(lVar12 + 0x19) == uVar3)) goto LAB_0388f018;
        plVar6 = plVar6 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    lVar12 = 0;
    if (((*(long *)(param_1 + 0x88) == lVar7) && (*(byte *)(param_1 + 0x90) == uVar1)) &&
       (lVar12 = param_1 + 0x78, *(byte *)(param_1 + 0x91) != uVar3)) {
      lVar12 = 0;
    }
LAB_0388f018:
    *(undefined4 *)(lVar12 + 8) = 3;
    FUN_0388d4f0();
    (**(code **)(**(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68) + 0x1b8))
              (*(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68),lVar12 + 0x10,3);
    bVar5 = true;
  }
  return bVar5;
}

