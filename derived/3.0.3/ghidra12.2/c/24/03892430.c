
undefined8 FUN_03892430(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  lVar6 = *(long *)(DAT_05ae6a60 + 0x68);
  iVar2 = *(int *)(*(long *)(lVar6 + 0xf8) + 0x28);
  if (iVar2 != 0) {
    plVar5 = *(long **)(*(long *)(lVar6 + 0xf8) + 0x30);
    plVar1 = plVar5 + iVar2;
    do {
      lVar7 = *plVar5;
      if ((*(long *)(lVar7 + 0x10) != *(long *)(lVar6 + 0x10) ||
           *(char *)(lVar7 + 0x19) != *(char *)(lVar6 + 0x19)) && (*(int *)(lVar7 + 8) != 3)) {
        if ((int)*(uint *)(param_1 + 0x540) < 1) {
          return 0;
        }
        uVar3 = (ulong)*(uint *)(param_1 + 0x540);
        plVar8 = *(long **)(param_1 + 0x548);
        while (((plVar4 = (long *)*plVar8, *plVar4 != *(long *)(lVar7 + 0x10) ||
                ((char)plVar4[1] != *(char *)(lVar7 + 0x18))) ||
               (*(char *)((long)plVar4 + 9) != *(char *)(lVar7 + 0x19)))) {
          plVar8 = plVar8 + 1;
          uVar3 = uVar3 - 1;
          if (uVar3 == 0) {
            return 0;
          }
        }
        if (*plVar8 == 0) {
          return 0;
        }
        lVar7 = *(long *)(*plVar8 + 0x10);
        if (lVar7 < 1) {
          return 0;
        }
        if (lVar7 == 0xffffffffffffff) {
          return 0;
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  return 1;
}

