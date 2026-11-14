
undefined8 FUN_01c085b0(long *param_1,ushort *param_2,uint param_3)

{
  ushort *puVar1;
  ushort uVar2;
  bool bVar3;
  ushort *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  ushort *puVar9;
  
  if (param_3 == 0) {
LAB_01c086d8:
    (**(code **)(*param_1 + 0x38))(param_1);
    uVar6 = 0;
  }
  else {
    if (param_1 == (long *)0x0) {
      puVar4 = (ushort *)0x0;
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)(**(code **)(*param_1 + 0x10))(param_1);
      uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
      puVar9 = puVar4 + ((uVar5 & 0xffffffff) - 1);
      (**(code **)(*param_1 + 0x38))(param_1);
    }
    lVar7 = (ulong)param_3 * 2;
    bVar3 = false;
    puVar1 = param_2 + param_3;
    do {
      lVar7 = lVar7 + -2;
      uVar2 = *param_2;
      bVar3 = (bool)(bVar3 | uVar2 == 0);
      if ((!bVar3) && (lVar7 != 0)) {
        if ((uVar2 & 0xfffe) == 0xe) goto LAB_01c086d8;
        uVar8 = (uint)uVar2;
        if ((((((uVar2 & 0xfffe) == 0xfe0e) || ((uVar8 & 0xf800) == 0xd800)) || (uVar8 == 0x7f)) ||
            ((uVar8 - 1 < 0x1f && uVar8 - 0xb < 0xfffffffe || (uVar2 == 0xfeff)))) ||
           (uVar2 == 0xfffe)) goto LAB_01c086d8;
        if ((puVar4 != (ushort *)0x0) && (puVar4 + 1 <= puVar9)) {
          *puVar4 = uVar2;
          puVar4 = puVar4 + 1;
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 < puVar1);
    uVar6 = 1;
  }
  return uVar6;
}

