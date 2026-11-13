
void FUN_00cc93d0(long param_1,long *param_2)

{
  void *__dest;
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  void *__src;
  long lVar11;
  
  piVar1 = (int *)(param_1 + 0x4e60);
  iVar6 = 0;
  if (*piVar1 != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x4e68);
    puVar2 = puVar10 + *piVar1;
    do {
      plVar9 = (long *)*puVar10;
      (**(code **)(*plVar9 + 0x18))(plVar9);
      (**(code **)(*plVar9 + 0x18))(plVar9);
      lVar11 = plVar9[1];
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar7 = param_2[1];
      if (lVar11 == lVar7) {
        return;
      }
      uVar8 = 0;
      bVar5 = true;
      do {
        lVar11 = plVar9[1] + 2 + uVar8;
        cVar3 = *(char *)(lVar11 + -2);
        if (cVar3 != *(char *)(lVar7 + uVar8)) break;
        if (cVar3 == '\0') {
          if (bVar5) {
            return;
          }
          break;
        }
        cVar3 = *(char *)(lVar11 + -1);
        if (cVar3 != *(char *)(lVar7 + uVar8 + 1)) break;
        if (cVar3 == '\0') {
          return;
        }
        cVar3 = *(char *)(plVar9[1] + 2 + uVar8);
        if (cVar3 != *(char *)(lVar7 + uVar8 + 2)) break;
        if (cVar3 == '\0') {
          return;
        }
        bVar5 = uVar8 < 0x7fffe;
        uVar8 = uVar8 + 3;
      } while (uVar8 != 0x80001);
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar2);
    iVar6 = *piVar1;
  }
  if (iVar6 < *(int *)(param_1 + 0x4e64)) {
    plVar9 = *(long **)(param_1 + 0x4e70);
    if (plVar9 != (long *)0x0) {
      *(long *)(param_1 + 0x4e70) = *plVar9;
    }
    __dest = (void *)((long)plVar9 + 0x14);
    *(undefined4 *)(plVar9 + 2) = 0x20;
    puVar4 = PTR_DAT_04bb2a08;
    *(undefined1 *)((long)plVar9 + 0x33) = 0;
    *plVar9 = (long)(puVar4 + 0x10);
    plVar9[1] = (long)__dest;
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (void *)param_2[1];
    if (__dest != __src) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar7 = 0;
      do {
        if (*(char *)(param_2[1] + lVar7) == '\0') goto LAB_00cc959c;
        lVar11 = param_2[1] + lVar7;
        if (*(char *)(lVar11 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_00cc959c;
        }
        if (*(char *)(lVar11 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_00cc959c;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_00cc959c:
      iVar6 = (int)lVar7;
      if ((int)plVar9[2] <= (int)lVar7) {
        iVar6 = (int)plVar9[2] + -1;
      }
      memcpy(__dest,__src,(long)iVar6);
      *(undefined1 *)((long)__dest + (long)iVar6) = 0;
    }
    *plVar9 = (long)&PTR_LAB_048f9700;
    if (*piVar1 < *(int *)(param_1 + 0x4e64)) {
      *(long **)(*(long *)(param_1 + 0x4e68) + (long)*piVar1 * 8) = plVar9;
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
}

