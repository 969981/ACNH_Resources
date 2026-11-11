
void FUN_003ca400(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x3a0);
  while (lVar1 != param_1 + 0x398) {
    plVar2 = (long *)(lVar1 + -8);
    lVar1 = *(long *)(lVar1 + 8);
    (**(code **)(*plVar2 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  return;
}

