
void FUN_02de5e28(long param_1,short *param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 local_40;
  undefined8 local_38;
  
  if (*param_2 != -2) {
    *(int *)(param_1 + 0x1c220) = *(int *)(param_1 + 0x1c20c);
    *(short *)(param_1 + 0x1c730) = *param_2;
    *(char *)(param_1 + 0x1c732) = (char)param_2[1];
    *(undefined1 *)(param_1 + 0x1c733) = *(undefined1 *)((long)param_2 + 3);
    pcVar1 = (char *)(param_1 + 0x570f5);
    *(undefined4 *)(param_1 + 0x1c734) = *(undefined4 *)(param_2 + 2);
    *pcVar1 = '\x01';
    if (((((*(int *)(param_1 + 0x1c210) != *(int *)(param_1 + 0x1c24c)) ||
          (*(int *)(param_1 + 0x1c214) != *(int *)(param_1 + 0x1c250))) ||
         (*(int *)(param_1 + 0x1c218) != *(int *)(param_1 + 0x1c254))) ||
        ((*(int *)(param_1 + 0x1c21c) != *(int *)(param_1 + 0x1c258) ||
         (*(int *)(param_1 + 0x1c20c) != *(int *)(param_1 + 0x1c25c))))) ||
       ((uVar7 = FUN_0277d7b4(param_1 + 0x1c728,(short *)(param_1 + 0x1c730)), (uVar7 & 1) == 0 ||
        ((*(char *)(param_1 + 0x1c72b) != *(char *)(param_1 + 0x1c733) ||
         (*(int *)(param_1 + 0x1c72c) != *(int *)(param_1 + 0x1c734))))))) {
      *pcVar1 = '\0';
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x228) + 0x578);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x140))(plVar8,*pcVar1 == '\0',0);
    }
  }
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  uVar2 = *(uint *)(param_1 + 0x1c214);
  uVar4 = *(uint *)(param_1 + 0x1c218);
  if (*(uint *)(param_1 + 0x1c6e8) <= uVar4) {
    uVar4 = 0;
  }
  if (*(uint *)(param_1 + 0x1c6f8) <= uVar2) {
    uVar2 = 0;
  }
  uVar5 = *(uint *)(param_1 + 0x1c21c);
  if (*(uint *)(param_1 + 0x1c708) <= uVar5) {
    uVar5 = 0;
  }
  local_40 = CONCAT22(*(undefined2 *)(*(long *)(param_1 + 0x1c700) + (long)(int)uVar2 * 2),
                      *(undefined2 *)(*(long *)(param_1 + 0x1c6f0) + (long)(int)uVar4 * 2));
  uVar6 = *(undefined2 *)(*(long *)(param_1 + 0x1c710) + (long)(int)uVar5 * 2);
  lVar9 = *(long *)PTR_DAT_04bb5008;
  uVar3 = *(undefined4 *)(param_1 + 0x1c730);
  *(undefined4 *)(lVar9 + 0x26c4) = *(undefined4 *)(param_1 + 0x1c734);
  *(undefined2 *)(lVar9 + 0x26bc) = uVar6;
  *(undefined4 *)(lVar9 + 0x26c0) = uVar3;
  *(undefined4 *)(lVar9 + 0x26b8) = local_40;
  return;
}

