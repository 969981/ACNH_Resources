
long FUN_001819c0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  
  uVar1 = param_2 + (param_2 >> 3) + (param_2 >> 8) + (param_2 >> 9) + 4;
  uVar2 = param_2 + 7 + (param_2 >> 5) + (param_2 >> 7) + (param_2 >> 0xb);
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
     ((plVar6 = *(long **)(param_1 + 0x38), plVar6 != (long *)0x0 && (*plVar6 == param_1)))) {
    iVar3 = (int)plVar6[1];
    if (((iVar3 - 0x39U < 0x39) &&
        ((1L << ((ulong)(iVar3 - 0x39U) & 0x3f) & 0x100400400011001U) != 0)) ||
       ((iVar3 == 0x2a || (iVar3 == 0x29a)))) {
      uVar4 = *(uint *)(plVar6 + 6);
      uVar7 = (ulong)uVar4;
      if (uVar4 != 0) {
        if (uVar4 == 2) {
          lVar8 = plVar6[7];
          if (lVar8 == 0) {
            uVar7 = 0x12;
          }
          else {
            if (*(long *)(lVar8 + 0x18) == 0) {
              uVar7 = 0x12;
            }
            else {
              uVar7 = (ulong)(*(int *)(lVar8 + 0x20) + 2) + 0x12;
            }
            pcVar9 = *(char **)(lVar8 + 0x28);
            if (*(char **)(lVar8 + 0x28) != (char *)0x0) {
              do {
                cVar5 = *pcVar9;
                uVar7 = uVar7 + 1;
                pcVar9 = pcVar9 + 1;
              } while (cVar5 != '\0');
            }
            pcVar9 = *(char **)(lVar8 + 0x38);
            if (*(char **)(lVar8 + 0x38) != (char *)0x0) {
              do {
                cVar5 = *pcVar9;
                uVar7 = uVar7 + 1;
                pcVar9 = pcVar9 + 1;
              } while (cVar5 != '\0');
            }
            if (*(int *)(lVar8 + 0x44) != 0) {
              uVar7 = uVar7 + 2;
            }
          }
        }
        else if (uVar4 == 1) {
          uVar7 = 6;
          if (*(int *)((long)plVar6 + 0xac) != 0) {
            uVar7 = 10;
          }
        }
        else {
          uVar7 = 6;
        }
      }
      if ((*(uint *)((long)plVar6 + 0x54) == 0xf) && (*(uint *)(plVar6 + 0x11) == 0xf)) {
        return param_2 + 7 + (param_2 >> 0xc) + (param_2 >> 0xe) + (param_2 >> 0x19) + uVar7;
      }
      if ((*(uint *)(plVar6 + 0x11) < *(uint *)((long)plVar6 + 0x54)) ||
         (*(int *)((long)plVar6 + 0xc4) == 0)) {
        return uVar2 + uVar7;
      }
      return uVar1 + uVar7;
    }
  }
  if (uVar1 <= uVar2) {
    uVar1 = uVar2;
  }
  return uVar1 + 6;
}

