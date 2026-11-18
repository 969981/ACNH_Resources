
void FUN_03482fa0(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  void *__dest;
  void *__src;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  if (*(int *)(param_1 + 0x368) != 0) {
    lVar4 = *(long *)(param_1 + 0x370);
    uVar9 = 0;
    do {
      lVar7 = (long)(int)uVar9;
      if (1 < uVar9) {
        lVar7 = 0;
      }
      lVar8 = lVar4 + (long)(int)uVar9 * 0x70;
      *(int *)(lVar8 + 8) = (&DAT_0575d8d8)[lVar7 * 0x1c];
      plVar6 = &DAT_0575d8e0 + lVar7 * 0xe;
      __dest = *(void **)(lVar8 + 0x18);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      __src = (void *)(&DAT_0575d8e8)[lVar7 * 0xe];
      if (__dest != __src) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar5 = 0;
        do {
          if (*(char *)((&DAT_0575d8e8)[lVar7 * 0xe] + lVar5) == '\0') goto LAB_034830bc;
          lVar1 = (&DAT_0575d8e8)[lVar7 * 0xe] + lVar5;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_034830bc;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_034830bc;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_034830bc:
        iVar3 = (int)lVar5;
        if (*(int *)(lVar8 + 0x20) <= (int)lVar5) {
          iVar3 = *(int *)(lVar8 + 0x20) + -1;
        }
        memcpy(__dest,__src,(long)iVar3);
        *(undefined1 *)((long)__dest + (long)iVar3) = 0;
      }
      iVar3 = *(int *)(lVar8 + 8);
      if (iVar3 == 0x75) {
        lVar7 = *(long *)(param_1 + 0x238);
        if (*(int *)(lVar7 + 8) < *(int *)(lVar7 + 0xc)) {
          uVar2 = uVar9;
          if (DAT_04c49f98 <= uVar9) {
            uVar2 = 0;
          }
          *(undefined **)(*(long *)(lVar7 + 0x10) + (long)*(int *)(lVar7 + 8) * 8) =
               PTR_DAT_04c49fa0 + (long)(int)uVar2 * 0x10;
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        }
        *(undefined1 *)(lVar4 + (long)(int)uVar9 * 0x70 + 0x68) = 1;
      }
      else if (iVar3 == 0x74) {
        *(undefined1 *)(lVar4 + (long)(int)uVar9 * 0x70 + 0x68) = 1;
        lVar7 = *(long *)(param_1 + 0x238);
        if (*(int *)(lVar7 + 8) < *(int *)(lVar7 + 0xc)) {
          uVar2 = uVar9;
          if (DAT_04c49f98 <= uVar9) {
            uVar2 = 0;
          }
          *(undefined **)(*(long *)(lVar7 + 0x10) + (long)*(int *)(lVar7 + 8) * 8) =
               PTR_DAT_04c49fa0 + (long)(int)uVar2 * 0x10;
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        }
      }
      uVar9 = uVar9 + 1;
    } while (*(uint *)(param_1 + 0x368) != uVar9);
  }
  return;
}

