
void FUN_032bbc60(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  undefined *local_60;
  char *pcStack_58;
  undefined1 auStack_38 [8];
  
  lVar5 = *(long *)(param_1 + 0x70);
  if ((param_2 < *(uint *)(lVar5 + 0x28)) && (*(long *)(lVar5 + 0x18) != 0)) {
    iVar7 = *(int *)(lVar5 + 0x24) + param_2;
    iVar3 = 0;
    if (*(int *)(lVar5 + 0x20) <= iVar7) {
      iVar3 = *(int *)(lVar5 + 0x20);
    }
    uVar8 = *(uint *)(*(long *)(lVar5 + 0x18) + (long)(iVar7 - iVar3) * 4);
    plVar4 = (long *)(*(long *)(param_1 + 0x68) + 8);
    plVar9 = plVar4 + (ulong)uVar8 * 0xd;
    if (0xe < uVar8) {
      plVar9 = plVar4;
    }
  }
  else {
    uVar8 = 0xffffffff;
    plVar9 = (long *)(*(long *)(param_1 + 0x68) + 8);
  }
  lVar5 = *(long *)(*plVar9 + 0x428);
  if ((lVar5 == 0) || (plVar9 = (long *)(lVar5 + 8), *plVar9 == 0)) goto LAB_032bbd80;
  lVar10 = *(long *)(*(long *)(param_1 + 0x90) + 0x18);
  if (*(long *)(lVar10 + 0x18) == lVar5) {
    plVar4 = *(long **)(lVar10 + 0x138);
    *(undefined8 *)(lVar10 + 0x18) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4,lVar5,0);
    }
    *(long *)(lVar10 + 0x48) = lVar10 + 0x28;
    *(long *)(lVar10 + 0x50) = lVar10 + 0x28;
LAB_032bbd50:
    *(undefined8 *)(lVar10 + 0x60) = 0;
  }
  else if (*(long *)(lVar10 + 0x60) == lVar5) goto LAB_032bbd50;
  lVar1 = *(long *)(lVar5 + 0x10);
  lVar2 = *(long *)(lVar5 + 0x18);
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *plVar9 = 0;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  if (*(long **)(lVar10 + 0x58) == plVar9) {
    *(long *)(lVar10 + 0x58) = lVar2;
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = lVar1;
  }
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = lVar2;
  }
LAB_032bbd80:
  FUN_032b772c(*(long *)(param_1 + 0x68),uVar8);
  if (param_2 == 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x68) + 0x650);
    pcStack_58 = *(char **)(PTR_PTR_04bb2238 + 8);
    if (*pcStack_58 == '\0') {
      lVar5 = *(long *)(*(long *)(lVar5 + 0xf0) + 0x18);
    }
    else {
      local_60 = PTR_DAT_04bc8e68 + 0x10;
      lVar5 = FUN_032cb8e0(auStack_38,&local_60,*(undefined8 *)(lVar5 + 0xf0));
    }
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
  }
  else if ((int)param_2 < 0) {
    return;
  }
  plVar9 = *(long **)(param_1 + 0x70);
  if ((int)param_2 < (int)plVar9[5]) {
    iVar6 = (int)plVar9[4];
    iVar7 = *(int *)((long)plVar9 + 0x24) + param_2;
    lVar5 = plVar9[3];
    iVar3 = 0;
    if (iVar6 <= iVar7) {
      iVar3 = iVar6;
    }
    iVar3 = *(int *)(lVar5 + (long)(iVar7 - iVar3) * 4);
    if (iVar3 != -1) {
      iVar3 = *(int *)((long)plVar9 + 0xc) + iVar3;
      iVar7 = 0;
      if ((int)plVar9[1] <= iVar3) {
        iVar7 = (int)plVar9[1];
      }
      *(undefined4 *)(*plVar9 + (long)(iVar3 - iVar7) * 4) = 0xffffffff;
      iVar6 = (int)plVar9[4];
      lVar5 = plVar9[3];
      iVar7 = *(int *)((long)plVar9 + 0x24) + param_2;
    }
    iVar3 = 0;
    if (iVar6 <= iVar7) {
      iVar3 = iVar6;
    }
    *(undefined4 *)(lVar5 + (long)(iVar7 - iVar3) * 4) = 0xffffffff;
  }
  return;
}

