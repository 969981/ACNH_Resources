
void FUN_03b1b420(long *param_1,long param_2,long param_3,undefined8 param_4,uint param_5)

{
  uint *puVar1;
  char *__s2;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  
  uVar3 = FUN_0036013c(param_2);
  if (uVar3 != 0) {
    lVar9 = 0;
    do {
      lVar5 = FUN_00360154(param_2);
      uVar6 = FUN_00367720(param_4,lVar5 + lVar9);
      (**(code **)(*param_1 + 0x58))(param_1,uVar6);
      lVar9 = lVar9 + 0x24;
    } while (((ulong)uVar3 + (ulong)uVar3 * 8) * 4 != lVar9);
  }
  lVar9 = *(long *)(param_2 + 0x10);
  param_1[0xb] = param_3;
  param_1[0xc] = lVar9;
  (**(code **)(*param_1 + 0x20))(param_1,param_5 & 1);
  uVar2 = *(uint *)(param_1[0xc] + 0x14);
  if (uVar2 != 0) {
    puVar1 = (uint *)(param_1[0xc] + (ulong)uVar2);
    uVar8 = (ulong)(ushort)puVar1[2];
    if (uVar8 != 0) {
      do {
        puVar7 = puVar1 + 3;
        __s2 = (char *)0x0;
        if (*puVar7 != 0) {
          __s2 = (char *)((long)puVar7 + (ulong)*puVar7);
        }
        iVar4 = strcmp("CommandPlayEnd",__s2);
        if (iVar4 == 0) {
          if (*(char *)((long)puVar1 + 0x16) == '\0') {
            *(byte *)((long)param_1 + 0x57) = *(byte *)((long)param_1 + 0x57) | 0x40;
                    /* WARNING: Could not recover jumptable at 0x03b1b574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(**(long **)(param_1[0xb] + 0x88) + 0x88))
                      (*(long **)(param_1[0xb] + 0x88),param_1,0,(long)puVar7 + (ulong)puVar1[4],
                       (short)puVar1[5]);
            return;
          }
          return;
        }
        uVar8 = uVar8 - 1;
        puVar1 = puVar7;
      } while (uVar8 != 0);
    }
  }
  return;
}

