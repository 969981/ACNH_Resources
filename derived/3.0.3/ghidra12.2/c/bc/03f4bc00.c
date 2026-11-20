
void FUN_03f4bc00(char *param_1,long *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  if ((param_2 != (long *)0x0) && (*param_1 != '\0')) {
    if (*(long *)(param_1 + 0x5b8) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      pcVar9 = param_1 + 0x2b8;
      do {
        *(char **)(param_1 + uVar11 * 8 + 8) = pcVar9;
        uVar5 = FUN_03f4bda8(param_2[6],*(uint *)(pcVar9 + 0x14) >> 0x10);
        if (*(ulong *)(pcVar9 + 8) != (uVar5 & 0xff)) {
          *(ulong *)(pcVar9 + 8) = uVar5 & 0xff;
          pcVar9[0x10] = '\x01';
        }
        uVar11 = uVar11 + 1;
        pcVar9 = pcVar9 + 0x18;
      } while (uVar11 < *(ulong *)(param_1 + 0x5b8));
    }
    pcVar9 = param_1 + 0x288;
    pcVar1 = param_1 + 8;
    *(char **)(pcVar1 + uVar11 * 8) = pcVar9;
    lVar10 = param_2[8];
    iVar2 = *(int *)(lVar10 + 0xc);
    iVar4 = iVar2;
    if (iVar2 < 0) {
      iVar4 = iVar2 + 1;
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = (*(int *)(lVar10 + 8) * 1000 + (iVar4 >> 1)) / iVar2;
    }
    if (*(long *)(param_1 + 0x290) != (long)iVar3) {
      *(long *)(param_1 + 0x290) = (long)iVar3;
      param_1[0x298] = '\x01';
    }
    *(char **)(param_1 + (uVar11 + 1) * 8 + 8) = param_1 + 0x2a0;
    iVar4 = (**(code **)(*param_2 + 0x60))(param_2);
    if (*(long *)(param_1 + 0x2a8) != (long)iVar4) {
      *(long *)(param_1 + 0x2a8) = (long)iVar4;
      param_1[0x2b0] = '\x01';
    }
    lVar12 = uVar11 + 2;
    plVar6 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
    if (plVar6 != (long *)0x0) {
      lVar7 = (**(code **)(*plVar6 + 8))(plVar6,param_1 + lVar12 * 8 + 8,0x4e - uVar11);
      lVar12 = lVar7 + lVar12;
    }
    for (; lVar12 != 0; lVar12 = lVar12 + -1) {
      pcVar8 = *(char **)pcVar1;
      if (pcVar8[0x10] == '\0') {
        if ((pcVar8 != pcVar9) && (*(int *)(lVar10 + 8) == 0)) goto LAB_03f4bd70;
      }
      else if (pcVar8 != pcVar9) {
LAB_03f4bd70:
        pcVar8[0x10] = '\0';
      }
      pcVar1 = pcVar1 + 8;
    }
  }
  return;
}

