
undefined8 FUN_003bbdc0(long param_1,int param_2,byte *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_28;
  
  if ((*param_3 & 0x3f) != 0) {
    return 0;
  }
  local_28 = FUN_003cd670();
  lVar2 = FUN_003c0150(&local_28);
  lVar5 = 0x5a0;
  if (lVar2 != 0) {
    lVar5 = lVar2 * 2 + 0x5d0;
  }
  uVar4 = lVar5 * param_2 + 0x3fU & 0xffffffffffffffc0;
  lVar5 = *(long *)param_3 + uVar4;
  if (0 < lVar5 - param_4) {
    return 0;
  }
  FUN_003bbf00(param_1,*(long *)param_3,uVar4,&local_28);
  *(long *)param_3 = lVar5;
  lVar2 = lVar5 + ((long)param_2 * 0x4b0 + 0x3fU & 0xffffffffffffffc0);
  if (0 < lVar2 - param_4) {
    return 0;
  }
  lVar1 = param_1 + 0x38;
  FUN_003bc060(lVar1,lVar5);
  *(long *)param_3 = lVar2;
  for (lVar5 = *(long *)(param_1 + 0x30); lVar5 != param_1 + 0x28; lVar5 = *(long *)(lVar5 + 8)) {
    *(long *)(lVar5 + 0x310) = lVar1;
  }
  uVar3 = FUN_003ca198();
  FUN_003ca4b4(uVar3,lVar1);
  *(long *)(param_1 + 0x80) = param_1 + 0x88;
  return 1;
}

