
undefined8 FUN_01c120c0(long *param_1,ushort *param_2,uint param_3,undefined4 param_4)

{
  ushort *puVar1;
  ushort uVar2;
  bool bVar3;
  ushort *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  ushort *puVar10;
  
  if (param_3 == 0) {
LAB_01c121e4:
    (**(code **)(*param_1 + 0x38))(param_1);
    uVar7 = 0;
  }
  else {
    puVar4 = (ushort *)(**(code **)(*param_1 + 0x10))(param_1);
    uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
    puVar10 = puVar4 + ((uVar5 & 0xffffffff) - 1);
    (**(code **)(*param_1 + 0x38))(param_1);
    lVar8 = (ulong)param_3 * 2;
    bVar3 = false;
    puVar1 = param_2 + param_3;
    do {
      lVar8 = lVar8 + -2;
      uVar2 = *param_2;
      bVar3 = (bool)(bVar3 | uVar2 == 0);
      if ((!bVar3) && (lVar8 != 0)) {
        if ((uVar2 & 0xfffe) == 0xe) goto LAB_01c121e4;
        uVar9 = (uint)uVar2;
        if ((((((uVar2 & 0xfffe) == 0xfe0e) || ((uVar9 & 0xf800) == 0xd800)) || (uVar9 == 0x7f)) ||
            ((uVar9 - 1 < 0x1f && uVar9 - 0xb < 0xfffffffe || (uVar2 == 0xfeff)))) ||
           (uVar2 == 0xfffe)) goto LAB_01c121e4;
        if ((puVar4 != (ushort *)0x0) && (puVar4 + 1 <= puVar10)) {
          *puVar4 = uVar2;
          puVar4 = puVar4 + 1;
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 < puVar1);
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x40))(param_1);
    *puVar6 = param_4;
    uVar7 = 1;
  }
  return uVar7;
}

