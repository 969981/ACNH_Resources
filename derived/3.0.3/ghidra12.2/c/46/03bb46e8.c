
void FUN_03bb46e8(long param_1,int param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  *(int *)(param_1 + 0x84) = param_2;
  lVar1 = DAT_05ae7600;
  if (param_2 == 3) {
    if (DAT_05ae7600 == 0) {
      plVar3 = malloc(8);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          param_3 = (long *)(lVar2 + 0xa8);
        }
        param_3 = (long *)*param_3;
      }
      plVar3 = (long *)(**(code **)(*param_3 + 0x30))(param_3,8,8);
    }
    puVar4 = &DAT_04b7a8f0;
  }
  else if (param_2 == 2) {
    if (DAT_05ae7600 == 0) {
      plVar3 = malloc(8);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          param_3 = (long *)(lVar2 + 0xa8);
        }
        param_3 = (long *)*param_3;
      }
      plVar3 = (long *)(**(code **)(*param_3 + 0x30))(param_3,8,8);
    }
    puVar4 = &DAT_04b7a8a8;
  }
  else {
    if (param_2 != 1) {
      *(undefined8 *)(param_1 + 0x60) = 0;
      return;
    }
    if (DAT_05ae7600 == 0) {
      plVar3 = malloc(8);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar1 + 8);
        if (lVar2 != 0) {
          param_3 = (long *)(lVar2 + 0xa8);
        }
        param_3 = (long *)*param_3;
      }
      plVar3 = (long *)(**(code **)(*param_3 + 0x30))(param_3,8,8);
    }
    puVar4 = &DAT_04b7a860;
  }
  *plVar3 = (long)(puVar4 + 0x10);
  *(long **)(param_1 + 0x60) = plVar3;
  uVar5 = (**(code **)(*plVar3 + 0x18))
                    (*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
                     *(undefined4 *)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x80) = uVar5;
  return;
}

