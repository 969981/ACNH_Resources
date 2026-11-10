
void FUN_001732b0(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 != 0) {
    do {
      uVar6 = param_2 - 1;
      uVar5 = uVar6 >> 1;
      iVar1 = (*(code *)param_1[4])
                        (*(undefined8 *)(*param_1 + param_2 * 8),
                         *(undefined8 *)(*param_1 + uVar5 * 8));
      if (iVar1 == 0) {
        return;
      }
      lVar2 = *param_1;
      puVar3 = *(ulong **)(lVar2 + param_2 * 8);
      puVar4 = *(ulong **)(lVar2 + uVar5 * 8);
      *(ulong **)(lVar2 + uVar5 * 8) = puVar3;
      *puVar3 = uVar5;
      *(ulong **)(*param_1 + param_2 * 8) = puVar4;
      *puVar4 = param_2;
      param_2 = uVar5;
    } while (1 < uVar6);
  }
  return;
}

