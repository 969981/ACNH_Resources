
undefined8 FUN_03ba7040(long param_1,long param_2,long *param_3,long *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = DAT_05ae7600;
  if (param_2 == 0) {
    return 0;
  }
  plVar1 = (long *)(param_1 + 0x28);
  if (*(long **)(param_1 + 0x30) != plVar1) {
    lVar5 = (long)*(int *)(param_1 + 0x3c);
    plVar7 = (long *)((long)*(long **)(param_1 + 0x30) - lVar5);
    do {
      if (*plVar7 == param_2) goto LAB_03ba7110;
      plVar7 = (long *)(*(long *)((long)plVar7 + lVar5 + 8) - lVar5);
    } while (plVar7 != (long *)((long)plVar1 - lVar5));
  }
  if (*(long *)(param_1 + 0x20) == param_2) {
LAB_03ba7110:
    uVar4 = 0;
  }
  else {
    if (DAT_05ae7600 == 0) {
      plVar7 = malloc(0x50);
    }
    else {
      if (param_4 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_4 = (long *)(lVar6 + 8);
        if (lVar5 != 0) {
          param_4 = (long *)(lVar5 + 0xa8);
        }
        param_4 = (long *)*param_4;
      }
      plVar7 = (long *)(**(code **)(*param_4 + 0x30))(param_4,0x50,8);
    }
    puVar3 = PTR_DAT_04bd20e8;
    plVar7[6] = 0x3f800000;
    plVar7[7] = 0x3f80000000000000;
    plVar7[8] = 0;
    plVar7[9] = 0;
    *plVar7 = param_2;
    plVar7[1] = 0x3f800000;
    plVar7[2] = 0;
    plVar7[3] = (long)(puVar3 + 0x10);
    plVar7[4] = (long)&DAT_3f8000003f800000;
    plVar7[5] = (long)&DAT_3f8000003f800000;
    lVar6 = *param_3;
    *(int *)(plVar7 + 2) = (int)param_3[1];
    plVar7[1] = lVar6;
    uVar2 = *(undefined4 *)((long)param_3 + 0xc);
    *(undefined4 *)((long)plVar7 + 0x14) = uVar2;
    *(undefined4 *)(plVar7 + 7) = uVar2;
    plVar7[4] = (long)&DAT_3f8000003f800000;
    plVar7[5] = (long)&DAT_3f8000003f800000;
    plVar7[6] = 0x3f800000;
    plVar7 = (long *)((long)*(int *)(param_1 + 0x3c) + (long)plVar7);
    if (plVar7[1] == 0 && *plVar7 == 0) {
      lVar6 = *plVar1;
      *plVar1 = (long)plVar7;
      *plVar7 = lVar6;
      plVar7[1] = (long)plVar1;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar7;
      }
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    }
    uVar4 = 1;
  }
  return uVar4;
}

