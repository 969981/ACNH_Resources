
long FUN_039da140(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x98) != 0)) {
    uVar3 = *(uint *)(*(long *)(param_1 + 0x98) + 4);
    if (uVar3 != 0) {
      uVar5 = 0;
      uVar6 = (ulong)(uVar3 * 0x10 + 0x18) + (ulong)uVar3 * 0x40;
      do {
        lVar7 = 0;
        plVar1 = (long *)(*(long *)(param_1 + 0x78) + (long)(int)uVar5 * 0x40);
        do {
          lVar2 = *plVar1 + lVar7;
          if (*(char *)(lVar2 + 2) == '\0') {
LAB_039da1e4:
            uVar8 = lVar7 + 3;
            goto LAB_039da1e8;
          }
          if (*(char *)(lVar2 + 3) == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_039da1e4;
          }
          if (*(char *)(lVar2 + 4) == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_039da1e4;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        uVar8 = 3;
LAB_039da1e8:
        uVar6 = uVar6 + ((uVar8 & 0xffffffff) + 7 & 0x1fffffff8) + 7 & 0xfffffffffffffff8;
        if (*(byte *)((long)plVar1 + 0x14) < 4) {
          uVar4 = *(uint *)(plVar1 + 2);
          switch(*(byte *)((long)plVar1 + 0x14)) {
          default:
            uVar6 = uVar6 + (long)(int)uVar4 * 4;
            break;
          case 2:
            uVar6 = uVar6 + (long)(int)uVar4 * 8;
            if (0 < (int)uVar4) {
              uVar8 = 0;
              do {
                lVar7 = 0;
                do {
                  lVar2 = *(long *)(plVar1[1] + uVar8 * 8) + lVar7;
                  if (*(char *)(lVar2 + 2) == '\0') {
LAB_039da254:
                    uVar9 = lVar7 + 3;
                    goto LAB_039da258;
                  }
                  if (*(char *)(lVar2 + 3) == '\0') {
                    lVar7 = lVar7 + 1;
                    goto LAB_039da254;
                  }
                  if (*(char *)(lVar2 + 4) == '\0') {
                    lVar7 = lVar7 + 2;
                    goto LAB_039da254;
                  }
                  lVar7 = lVar7 + 3;
                } while (lVar7 != 0x80001);
                uVar9 = 3;
LAB_039da258:
                uVar8 = uVar8 + 1;
                uVar6 = ((uVar9 & 0xffffffff) + 7 & 0x1fffffff8) + uVar6;
              } while (uVar8 != uVar4);
            }
            break;
          case 3:
            uVar6 = uVar6 + uVar4;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar3);
      goto LAB_039da2bc;
    }
  }
  uVar6 = 0;
LAB_039da2bc:
  return uVar6 + 0x1d0;
}

