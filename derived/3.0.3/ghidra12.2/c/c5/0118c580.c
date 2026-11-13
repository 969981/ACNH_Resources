
void FUN_0118c580(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 auStack_40 [16];
  
  if (**(int **)(param_1 + 8) == 0x7e3d1e46) {
    FUN_011b9ab0(auStack_40,*(undefined4 *)(param_2 + 4));
    iVar2 = FUN_011ba1c0(auStack_40);
    if (iVar2 == 3) {
      lVar3 = FUN_011bafa0(auStack_40);
      plVar5 = *(long **)(param_1 + 0x10);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      if (lVar3 == plVar5[1]) {
LAB_0118c644:
        **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
      }
      else {
        uVar4 = 0;
        bVar1 = true;
        do {
          if (*(char *)(lVar3 + uVar4) != *(char *)(plVar5[1] + uVar4)) {
            return;
          }
          if (*(char *)(lVar3 + uVar4) == '\0') {
            if (!bVar1) {
              return;
            }
            goto LAB_0118c644;
          }
          bVar1 = uVar4 < 0x80000;
          uVar4 = uVar4 + 1;
        } while (uVar4 != 0x80001);
      }
    }
  }
  return;
}

