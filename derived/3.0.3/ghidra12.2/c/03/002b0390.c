
long FUN_002b0390(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long local_38;
  
  local_38 = 0;
  FUN_002282f0(&local_38);
  lVar2 = local_38;
  puVar1 = PTR_DAT_04bc1510;
  lVar7 = 0;
  iVar6 = -1;
  do {
    if (*(long *)(param_1 + 0x538 + lVar7) != 0) {
      plVar4 = (long *)FUN_002ba790(*(undefined8 *)puVar1);
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4,*(undefined8 *)(param_1 + 0x538 + lVar7));
      if (lVar5 != 0) {
        iVar3 = FUN_002b3f10(lVar5,8);
        if (iVar3 <= iVar6) {
          iVar3 = iVar6;
        }
        iVar6 = iVar3;
      }
    }
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x100);
  if (iVar6 < 0) {
    return *(long *)(param_1 + 0x668) + lVar2 + *(long *)(param_1 + 0x678);
  }
  return *(long *)(param_1 + 0x678) + lVar2 + (DAT_04c60f38 * (int)((float)iVar6 * 1.4)) / 1000;
}

