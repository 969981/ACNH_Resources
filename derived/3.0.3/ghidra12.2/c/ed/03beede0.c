
void FUN_03beede0(long param_1,undefined8 param_2,long param_3)

{
  char *__s1;
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  short *psVar10;
  
  puVar2 = PTR_DAT_04bb38c8;
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar9 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x58);
      if ((*(short *)(lVar4 + uVar9 * 0x14 + 6) != 0) &&
         (psVar10 = (short *)(lVar4 + uVar9 * 0x14 + 0x10), *psVar10 == -1)) {
        uVar5 = (ulong)*(uint *)(lVar4 + uVar9 * 0x14 + 8);
        pcVar7 = (char *)(*(ulong *)puVar2 | uVar5);
        uVar6 = (ulong)*(uint *)(param_3 + 0x3c);
        __s1 = pcVar7 + 0x100000000;
        if (*(ulong *)PTR_DAT_04bb38c0 <= uVar5) {
          __s1 = pcVar7;
        }
        if (*(uint *)(param_3 + 0x3c) != 0) {
          uVar5 = 0;
          do {
            lVar4 = *(long *)(*(long *)(param_3 + 0x40) + uVar5 * 8);
            if (lVar4 != 0) {
              (**(code **)(*(long *)(lVar4 + 8) + 0x18))((long *)(lVar4 + 8));
              iVar3 = strcmp(__s1,*(char **)(lVar4 + 0x10));
              if (iVar3 == 0) {
                if (uVar5 != 0xffffffff) {
                  *psVar10 = (short)uVar5;
                }
                break;
              }
              uVar6 = (ulong)*(uint *)(param_3 + 0x3c);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x1c));
  }
  puVar1 = PTR_DAT_04bb38c0;
  if (*(int *)(param_1 + 0x90) != 0) {
    uVar9 = 0;
    do {
      uVar6 = (ulong)*(uint *)(*(long *)(param_1 + 0x88) + uVar9 * 4);
      uVar8 = *(ulong *)puVar2 | uVar6;
      uVar5 = uVar8 + 0x100000000;
      if (*(ulong *)puVar1 <= uVar6) {
        uVar5 = uVar8;
      }
      FUN_03bef220(uVar5,param_2,param_3);
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x90));
  }
  return;
}

