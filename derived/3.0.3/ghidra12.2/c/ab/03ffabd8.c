
void FUN_03ffabd8(long *param_1,ulong param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  
  if (((param_2 & 1) != 0) && ((param_3 & 1) != 0)) {
    lVar7 = FUN_03f58640(param_1[7],1);
    param_1[10] = lVar7;
  }
  plVar8 = (long *)param_1[8];
  if ((plVar8 != (long *)0x0) && ((param_2 & 1) != 0)) {
    lVar7 = param_1[10];
    if ((param_3 & 1) == 0) {
      lVar7 = 0;
    }
    (**(code **)(*plVar8 + 8))(plVar8,lVar7);
  }
  if ((param_3 & 1) != 0) {
    lVar7 = param_1[7];
    if (*(char *)(lVar7 + 0x18) != '\0') {
      lVar9 = *(long *)(lVar7 + 0x20);
      iVar1 = *(int *)(lVar9 + 0x10);
      iVar2 = *(int *)(lVar9 + 0x14);
      iVar3 = *(int *)((long)param_1 + 0x84);
      iVar4 = 0;
      if (*(int *)(lVar9 + 0xc) != 0) {
        iVar4 = iVar2 / *(int *)(lVar9 + 0xc);
      }
      iVar10 = iVar3;
      if (*(int *)((long)param_1 + 0xc) < 3) {
        iVar10 = 0;
        if (iVar4 != 0) {
          iVar10 = (iVar3 << 1) / iVar4;
        }
        iVar10 = iVar10 * iVar4;
        if (iVar10 < 0) {
          iVar10 = iVar10 + 1;
        }
        iVar10 = iVar10 >> 1;
      }
      iVar5 = 0;
      if (*(int *)(lVar9 + 8) != 0) {
        iVar5 = iVar1 / *(int *)(lVar9 + 8);
      }
      param_1[0xb] = 0;
      *(int *)(param_1 + 0xc) = iVar1;
      *(int *)((long)param_1 + 100) = iVar2;
      bVar6 = *(char *)((long)param_1 + 0x14) != '\0';
      iVar1 = iVar4 * 7;
      if (bVar6) {
        iVar1 = iVar4;
      }
      iVar2 = iVar5 << 3;
      if (bVar6) {
        iVar2 = iVar5;
      }
      iVar4 = iVar1;
      if (iVar1 < 0) {
        iVar4 = iVar1 + 1;
      }
      iVar5 = 0;
      if (iVar1 != 0) {
        iVar5 = (iVar2 * iVar10 + (iVar4 >> 1)) / iVar1;
      }
      *(int *)(param_1 + 0xe) = iVar5;
      *(int *)((long)param_1 + 0x74) = iVar10;
      iVar1 = (int)param_1[0x10] - iVar5;
      if ((int)param_1[0x10] < iVar5) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = iVar3 - iVar10;
      if (iVar3 < iVar10) {
        iVar2 = iVar2 + 1;
      }
      *(int *)(param_1 + 0xd) = iVar1 >> 1;
      *(int *)((long)param_1 + 0x6c) = iVar2 >> 1;
      *(undefined1 *)(lVar7 + 0x18) = 0;
    }
    (**(code **)(*param_1 + 0x58))(param_1);
    *(int *)(param_1 + 0x11) = (int)param_1[0x11] + 1;
  }
  return;
}

