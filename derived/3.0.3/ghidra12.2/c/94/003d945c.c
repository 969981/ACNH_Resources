
undefined8 FUN_003d945c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x2f0) == 0) {
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 == (long *)0x0) {
      lVar2 = *(long *)(param_1 + 0x28);
    }
    else {
      if ((char)plVar1[1] == '\0') {
        lVar2 = 0;
      }
      else {
        lVar2 = (**(code **)(*plVar1 + 0x28))
                          (plVar1,param_1 + 0x3400,0x200,*(undefined8 *)(param_1 + 0x300),
                           *(undefined8 *)(param_1 + 0x308),*(undefined8 *)(param_1 + 0x48),
                           PTR_s_bxstm_04bd02d8);
      }
      *(long *)(param_1 + 0x28) = lVar2;
    }
    if (lVar2 != 0) goto LAB_003d954c;
    plVar1 = (long *)(param_1 + 0x3400);
    FUN_003dc2bc(plVar1);
    uVar3 = (**(code **)(*(long *)(param_1 + 0x3400) + 0x60))(plVar1,param_1 + 0x70,1);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
    if ((((uVar4 & 1) != 0) && (*(long *)(param_1 + 0x300) != 0)) &&
       (*(long *)(param_1 + 0x308) != 0)) {
      (**(code **)(*plVar1 + 0x70))(plVar1);
    }
  }
  else {
    FUN_003dc164(param_1 + 0x3400,*(long *)(param_1 + 0x2f0),*(undefined8 *)(param_1 + 0x2f8));
  }
  lVar2 = param_1 + 0x3400;
  *(long *)(param_1 + 0x28) = lVar2;
LAB_003d954c:
  *(long *)(param_1 + 8) = lVar2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  return 0;
}

