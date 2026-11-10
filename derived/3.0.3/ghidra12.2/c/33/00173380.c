
void FUN_00173380(long *param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  do {
    uVar8 = param_2 << 1 | 1;
    uVar7 = param_2;
    bVar1 = true;
    do {
      bVar3 = bVar1;
      if ((ulong)param_1[2] <= uVar8) break;
      iVar2 = (*(code *)param_1[4])
                        (*(undefined8 *)(*param_1 + uVar8 * 8),*(undefined8 *)(*param_1 + uVar7 * 8)
                        );
      if (iVar2 != 0) {
        uVar7 = uVar8;
      }
      uVar8 = uVar8 + 1;
      bVar1 = false;
    } while (bVar3);
    if (uVar7 == param_2) {
      return;
    }
    lVar4 = *param_1;
    puVar5 = *(ulong **)(lVar4 + uVar7 * 8);
    puVar6 = *(ulong **)(lVar4 + param_2 * 8);
    *(ulong **)(lVar4 + param_2 * 8) = puVar5;
    *puVar5 = param_2;
    *(ulong **)(*param_1 + uVar7 * 8) = puVar6;
    *puVar6 = uVar7;
    param_2 = uVar7;
  } while( true );
}

