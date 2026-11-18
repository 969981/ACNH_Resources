
void FUN_0329e7b0(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  char *pcVar9;
  long *plVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_2 + 0x30);
  if ((lVar11 == 0) || (iVar3 = *(int *)(lVar11 + 0x30), iVar3 == 0)) {
LAB_0329e854:
    puVar5 = PTR_DAT_04c4b988;
LAB_0329e860:
    *param_1 = &DAT_04b177a8;
    param_1[1] = puVar5;
    return;
  }
  iVar8 = *(int *)(lVar11 + 0x2c);
  while( true ) {
    iVar1 = 0;
    if (*(int *)(lVar11 + 0x28) <= iVar8) {
      iVar1 = *(int *)(lVar11 + 0x28);
    }
    if (*(long *)(*(long *)(lVar11 + 0x20) + (long)(iVar8 - iVar1) * 8) == param_3) break;
    iVar3 = iVar3 + -1;
    iVar8 = iVar8 + 1;
    if (iVar3 == 0) goto LAB_0329e854;
  }
  if (param_3 == 0) goto LAB_0329e854;
  plVar10 = (long *)(param_3 + 0x20);
  lVar2 = FUN_032d3740(*(undefined8 *)(*plVar10 + 0x18));
  if (lVar2 == 0) goto LAB_0329e8f0;
  plVar6 = (long *)(*(long *)(lVar11 + 0x18) + 0x110);
  uVar4 = *(ulong *)(*(long *)(lVar2 + 0xe8) + 0x30);
  while( true ) {
    while( true ) {
      lVar11 = *plVar6;
      if (*(ulong *)(lVar11 + 0x20) <= uVar4) break;
      plVar6 = (long *)(lVar11 + 8);
    }
    if (uVar4 <= *(ulong *)(lVar11 + 0x20)) break;
    plVar6 = (long *)(lVar11 + 0x10);
  }
  pcVar9 = *(char **)(lVar11 + 0x28);
  if (pcVar9 == "Inherit") {
LAB_0329e8e0:
    lVar11 = FUN_032d3740(*(undefined8 *)(*plVar10 + 0x18));
    plVar10 = (long *)(lVar11 + 0xe8);
  }
  else if (*pcVar9 == 'I') {
    uVar4 = 0;
    do {
      uVar7 = uVar4;
      if ((uVar7 == 0x80000) || (pcVar9[uVar7 + 1] != "Inherit"[uVar7 + 1])) goto LAB_0329e8f0;
      uVar4 = uVar7 + 1;
    } while (pcVar9[uVar7 + 1] != '\0');
    if (uVar7 >> 0x13 == 0) goto LAB_0329e8e0;
  }
LAB_0329e8f0:
  puVar5 = (undefined *)(*(long *)(*plVar10 + 0x18) + 0xb0);
  goto LAB_0329e860;
}

