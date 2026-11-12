
void FUN_006905d0(long *param_1,long *param_2,ulong param_3)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  undefined2 *puVar9;
  long lVar10;
  
  if ((int)param_3 != 0xffff) {
    lVar3 = *(long *)(*param_1 + 0x28);
    lVar4 = *(long *)(*param_1 + 0x30);
    do {
      uVar5 = 1L << (param_3 & 0x3f);
      uVar2 = *(ulong *)(*param_2 + (long)((int)param_3 >> 6) * 8);
      if ((uVar2 & uVar5) != 0) {
        return;
      }
      lVar8 = lVar4 + (long)(int)param_3 * 0x28;
      *(ulong *)(*param_2 + ((long)(param_3 << 0x20) >> 0x26) * 8) = uVar2 | uVar5;
      switch(*(undefined1 *)(lVar8 + 8)) {
      case 0:
        uVar2 = (ulong)*(ushort *)(lVar8 + 0xc);
        lVar10 = lVar3 + uVar2 * 0x38;
        if (**(short **)(lVar10 + 0x10) == 0) {
          lVar6 = *(long *)(lVar10 + 0x18);
          lVar10 = param_1[3];
          uVar1 = *(ushort *)(lVar8 + 0xe);
          pcVar7 = (char *)(lVar10 + uVar2 * 0x48 + 0x41);
          if ((*pcVar7 == '\0') &&
             (**(short **)(*(long *)(lVar10 + uVar2 * 0x48 + 0x38) + 0x10) == 0)) {
            *(int *)(param_1 + 1) = (int)param_1[1] + 1;
            *pcVar7 = '\x01';
          }
          FUN_0068f570(lVar10 + uVar2 * 0x48,lVar6 + (ulong)uVar1 * 8);
        }
      case 3:
      case 4:
        param_3 = (ulong)*(ushort *)(lVar8 + 10);
        break;
      case 1:
        uVar2 = (ulong)*(ushort *)(lVar8 + 0xc);
        lVar3 = lVar3 + uVar2 * 0x38;
        if (**(short **)(lVar3 + 0x10) == 0) {
          lVar3 = *(long *)(lVar3 + 0x20);
          uVar1 = *(ushort *)(lVar8 + 0xe);
          lVar4 = param_1[3];
          pcVar7 = (char *)(lVar4 + uVar2 * 0x48 + 0x41);
          if ((*pcVar7 == '\0') &&
             (**(short **)(*(long *)(lVar4 + uVar2 * 0x48 + 0x38) + 0x10) == 0)) {
            *(int *)(param_1 + 1) = (int)param_1[1] + 1;
            *pcVar7 = '\x01';
          }
          FUN_0068f770(lVar4 + uVar2 * 0x48,lVar3 + (ulong)uVar1 * 8);
        }
        if ((ulong)*(ushort *)(lVar8 + 10) == 0) {
          return;
        }
        lVar3 = (ulong)*(ushort *)(lVar8 + 10) << 3;
        puVar9 = (undefined2 *)(*(long *)(lVar8 + 0x18) + 4);
        do {
          FUN_006905d0(param_1,param_2,*puVar9);
          lVar3 = lVar3 + -8;
          puVar9 = puVar9 + 4;
        } while (lVar3 != 0);
        return;
      case 2:
        if ((ulong)*(ushort *)(lVar8 + 10) != 0) {
          lVar10 = (ulong)*(ushort *)(lVar8 + 10) << 1;
          puVar9 = *(undefined2 **)(lVar8 + 0x10);
          do {
            FUN_006905d0(param_1,param_2,*puVar9);
            lVar10 = lVar10 + -2;
            puVar9 = puVar9 + 1;
          } while (lVar10 != 0);
        }
        param_3 = (ulong)*(ushort *)(lVar8 + 0xc);
      }
    } while ((int)param_3 != 0xffff);
  }
  return;
}

