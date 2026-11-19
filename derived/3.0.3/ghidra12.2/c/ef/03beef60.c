
void FUN_03beef60(long param_1,undefined8 param_2,long param_3)

{
  char *__s1;
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  short *psVar7;
  ulong uVar8;
  
  puVar1 = PTR_DAT_04bb38c8;
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar8 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x58);
      if ((*(short *)(lVar3 + uVar8 * 0x14 + 6) != 0) &&
         (psVar7 = (short *)(lVar3 + uVar8 * 0x14 + 0x10), *psVar7 == -1)) {
        uVar4 = (ulong)*(uint *)(lVar3 + uVar8 * 0x14 + 8);
        pcVar6 = (char *)(*(ulong *)puVar1 | uVar4);
        uVar5 = (ulong)*(uint *)(param_3 + 0x3c);
        __s1 = pcVar6 + 0x100000000;
        if (*(ulong *)PTR_DAT_04bb38c0 <= uVar4) {
          __s1 = pcVar6;
        }
        if (*(uint *)(param_3 + 0x3c) != 0) {
          uVar4 = 0;
          do {
            lVar3 = *(long *)(*(long *)(param_3 + 0x40) + uVar4 * 8);
            if (lVar3 != 0) {
              (**(code **)(*(long *)(lVar3 + 8) + 0x18))((long *)(lVar3 + 8));
              iVar2 = strcmp(__s1,*(char **)(lVar3 + 0x10));
              if (iVar2 == 0) {
                if (uVar4 != 0xffffffff) {
                  *psVar7 = (short)uVar4;
                }
                break;
              }
              uVar5 = (ulong)*(uint *)(param_3 + 0x3c);
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar5);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x1c));
  }
  FUN_03bef220(*(undefined8 *)(param_1 + 0x88),param_2,param_3);
  return;
}

