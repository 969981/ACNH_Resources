
void FUN_037c73c0(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  
  plVar6 = *(long **)(*param_2 + 8);
  if (((plVar6 != (long *)0x0) && (lVar9 = *plVar6, lVar9 != 0)) &&
     ((int)plVar6[1] == *(int *)(lVar9 + 0x10))) {
    plVar6 = (long *)PTR_PTR_04bb2238;
    if (*(long *)(lVar9 + 0x108) != 0) {
      plVar6 = (long *)(*(long *)(lVar9 + 0x108) + 8);
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    if ((char *)plVar6[1] == "Chara_Emoticon") {
LAB_037c7484:
      iVar7 = *(int *)(param_1 + 600);
      iVar2 = *(int *)(param_1 + 0x250);
      uVar3 = *(undefined4 *)(param_1 + 0x240);
      if (iVar2 <= iVar7) {
        if (0 < iVar7) {
          *(int *)(param_1 + 600) = iVar7 + -1;
          iVar1 = 0;
          if (*(int *)(param_1 + 0x254) + 1 < iVar2) {
            iVar1 = *(int *)(param_1 + 0x254) + 1;
          }
          *(int *)(param_1 + 0x254) = iVar1;
          iVar7 = iVar7 + -1;
        }
        if (iVar2 <= iVar7) {
          return;
        }
      }
      *(int *)(param_1 + 600) = iVar7 + 1;
      iVar7 = *(int *)(param_1 + 0x254) + iVar7;
      iVar1 = 0;
      if (iVar2 <= iVar7) {
        iVar1 = iVar2;
      }
      plVar6 = (long *)(*(long *)(param_1 + 0x248) + (long)(iVar7 - iVar1) * 0x10);
      *plVar6 = lVar9;
      *(undefined4 *)(plVar6 + 1) = uVar3;
    }
    else {
      uVar8 = 0;
      bVar5 = true;
      do {
        cVar4 = ((char *)plVar6[1])[uVar8];
        if (cVar4 != "Chara_Emoticon"[uVar8]) {
          return;
        }
        if (cVar4 == '\0') {
          if (!bVar5) {
            return;
          }
          goto LAB_037c7484;
        }
        bVar5 = uVar8 < 0x80000;
        uVar8 = uVar8 + 1;
      } while (uVar8 != 0x80001);
    }
  }
  return;
}

