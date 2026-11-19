
void FUN_03ca111c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)(param_1 + 0x38);
  lVar3 = *plVar4;
  plVar1 = (long *)(*(int *)(param_1 + 0x4c) + param_2);
  *plVar4 = (long)plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)plVar4;
  if (lVar3 != 0) {
    *(long **)(lVar3 + 8) = plVar1;
  }
  lVar3 = *(long *)(param_1 + 0x30);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  if (lVar3 == 0) {
    FUN_03ca1200(param_1,param_2,param_3,param_4);
    return;
  }
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
  lVar5 = *(long *)(lVar2 + 0xa8);
  *(long *)(lVar2 + 0xa8) = lVar3;
  FUN_03ca1200(param_1,param_2,param_3,param_4);
  if (lVar5 != 1) {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    *(long *)(lVar3 + 0xa8) = lVar5;
  }
  return;
}

