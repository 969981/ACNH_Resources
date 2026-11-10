
void FUN_003674e0(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04bd07e0;
  plVar1 = param_1 + 3;
  param_1[2] = (long)(param_1 + 1);
  param_1[3] = (long)plVar1;
  param_1[4] = (long)plVar1;
  lVar2 = param_2 + 0x18;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = (long)(param_1 + 1);
  lVar7 = *(long *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[5] = lVar7;
  lVar7 = *(long *)(param_2 + 0x20);
  bVar4 = lVar7 != lVar2;
  if (param_3 == (long *)0x0) {
    while (bVar4) {
      lVar5 = *(long *)(lVar7 + 0x10);
      plVar6 = (long *)FUN_00367b30(0x18);
      if (plVar6 != (long *)0x0) {
        *plVar6 = (long)plVar6;
        plVar6[1] = (long)plVar6;
        plVar6[2] = lVar5;
        *plVar6 = *plVar1;
        plVar6[1] = (long)plVar1;
        *(long **)(*plVar1 + 8) = plVar6;
        *plVar1 = (long)plVar6;
      }
      lVar7 = *(long *)(lVar7 + 8);
      bVar4 = lVar7 != lVar2;
    }
  }
  else {
    while (bVar4) {
      lVar5 = (**(code **)(*param_3 + 0x60))(param_3,*(long *)(lVar7 + 0x10) + 0xb0,1);
      plVar6 = (long *)FUN_00367b30(0x18);
      if (plVar6 != (long *)0x0) {
        *plVar6 = (long)plVar6;
        plVar6[1] = (long)plVar6;
        plVar6[2] = lVar5;
        *plVar6 = *plVar1;
        plVar6[1] = (long)plVar1;
        *(long **)(*plVar1 + 8) = plVar6;
        *plVar1 = (long)plVar6;
      }
      lVar7 = *(long *)(lVar7 + 8);
      bVar4 = lVar7 != lVar2;
    }
  }
  return;
}

