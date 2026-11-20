
void FUN_03f22700(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  
  FUN_03f24720();
  lVar3 = *(long *)(*(long *)(param_1 + 0xf0) + 0x238);
  if (lVar3 != 0) {
    do {
      if (*(uint *)(param_1 + 0xe8) < *(uint *)(lVar3 + 0x20)) {
        plVar4 = (long *)(lVar3 + 8);
      }
      else {
        if (*(uint *)(param_1 + 0xe8) <= *(uint *)(lVar3 + 0x20)) {
          if (*(long *)(lVar3 + 0x30) != lVar3 + 0x28) {
            lVar5 = (long)*(int *)(lVar3 + 0x3c);
            lVar6 = *(long *)(lVar3 + 0x30) - lVar5;
            do {
              local_5c = *(undefined4 *)(lVar6 + 0x1c);
              uStack_58 = *(undefined4 *)(lVar6 + 0x2c);
              local_54 = *(undefined4 *)(lVar6 + 0x3c);
              if (*(char *)(param_1 + 8) != '\0') {
                uVar2 = *(uint *)(param_1 + 0x10);
                if (0 < (int)uVar2) {
                  uVar7 = 0;
                  do {
                    uVar1 = uVar7;
                    if (uVar2 <= uVar7) {
                      uVar1 = 0;
                    }
                    FUN_03f2593c(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 0x68,&local_5c);
                    uVar2 = *(uint *)(param_1 + 0x10);
                    uVar7 = uVar7 + 1;
                  } while ((int)uVar7 < (int)uVar2);
                }
                *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
              }
              lVar6 = *(long *)(lVar6 + lVar5 + 8) - lVar5;
            } while (lVar6 != (lVar3 + 0x28) - lVar5);
          }
          break;
        }
        plVar4 = (long *)(lVar3 + 0x10);
      }
      lVar3 = *plVar4;
    } while (lVar3 != 0);
  }
  FUN_03f23ce0(param_1);
  return;
}

