
undefined8
FUN_003bc8ec(long param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5,
            undefined4 *param_6,long *param_7)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  if (*(long *)(param_1 + 0xe0) == 0) {
    lVar2 = *param_2;
  }
  else {
    lVar2 = FUN_003b8394(param_4,*(undefined4 *)(param_3 + 0x110));
    if ((lVar2 == 0) || (plVar3 = *(long **)(param_1 + 0xe0), (char)plVar3[1] == '\0')) {
      *param_2 = 0;
      goto LAB_003bc9b0;
    }
    lVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,lVar2,PTR_DAT_04bd02d0,PTR_s_bxseq_04bd02e8,0);
    *param_2 = lVar2;
  }
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(param_3 + 0x110);
    param_2[3] = lVar2;
    *(undefined4 *)(param_2 + 2) = uVar1;
    return 0;
  }
LAB_003bc9b0:
  lVar2 = FUN_003e0344(param_5,*param_6);
  *param_2 = lVar2;
  if (param_7 != (long *)0x0) {
    lVar6 = *param_7;
    if (lVar6 != 0) {
      *param_2 = lVar6;
      lVar2 = lVar6;
    }
    FUN_003d0094(auStack_58,lVar2);
    if (param_7[1] != 0) {
      uVar4 = FUN_003d013c(auStack_58,param_7[1],param_2 + 1);
      if ((uVar4 & 1) == 0) {
        return 0x10;
      }
      uVar5 = FUN_003d0134(auStack_58);
      uVar1 = FUN_003df994(uVar5,(int)param_2[1],(long)param_2 + 0xc);
      *(undefined4 *)(param_2 + 1) = uVar1;
    }
    lVar2 = *param_2;
  }
  uVar1 = *(undefined4 *)(param_3 + 0x110);
  param_2[3] = lVar2;
  *(undefined4 *)(param_2 + 2) = uVar1;
  if (lVar2 != 0) {
    return 0;
  }
  if (*(char *)((long)param_2 + 0xa4) == '\0') {
    return 6;
  }
  *(undefined1 *)((long)param_2 + 0xa5) = 1;
  return 0;
}

