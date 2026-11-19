
void FUN_03c90a50(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_1[1] == 0 || param_1[1] == param_3) {
    param_1[1] = param_2;
    lVar1 = (**(code **)(*param_1 + 0x10))();
    for (lVar2 = *(long *)(lVar1 + 0x28); lVar2 != lVar1 + 0x20; lVar2 = *(long *)(lVar2 + 8)) {
      FUN_03c90a50(*(undefined8 *)(lVar2 + 0xc1),param_2,param_3);
    }
  }
  return;
}

