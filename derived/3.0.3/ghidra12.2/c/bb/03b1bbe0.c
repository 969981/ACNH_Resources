
void FUN_03b1bbe0(long param_1)

{
  uint *puVar1;
  char *__s2;
  uint uVar2;
  int iVar3;
  long *plVar4;
  uint *puVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(*(long *)(param_1 + 0x60) + 0x14);
  if (uVar2 != 0) {
    puVar1 = (uint *)(*(long *)(param_1 + 0x60) + (ulong)uVar2);
    uVar6 = (ulong)(ushort)puVar1[2];
    if (uVar6 != 0) {
      do {
        puVar5 = puVar1 + 3;
        __s2 = (char *)0x0;
        if (*puVar5 != 0) {
          __s2 = (char *)((long)puVar5 + (ulong)*puVar5);
        }
        iVar3 = strcmp("CommandPlayEnd",__s2);
        if (iVar3 == 0) {
          if (*(char *)((long)puVar1 + 0x16) == '\0') {
            plVar4 = *(long **)(*(long *)(param_1 + 0x58) + 0x88);
                    /* WARNING: Could not recover jumptable at 0x03b1bc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar4 + 0x90))
                      (plVar4,param_1,0,(long)puVar5 + (ulong)puVar1[4],(short)puVar1[5]);
            return;
          }
          return;
        }
        uVar6 = uVar6 - 1;
        puVar1 = puVar5;
      } while (uVar6 != 0);
    }
  }
  return;
}

