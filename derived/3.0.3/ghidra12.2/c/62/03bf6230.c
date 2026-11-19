
void FUN_03bf6230(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x18); lVar1 != param_1 + 0x10; lVar1 = *(long *)(lVar1 + 8)) {
    (**(code **)(**(long **)(lVar1 + 0x10) + 0x10))(*(long **)(lVar1 + 0x10),param_2,param_3);
  }
  return;
}

