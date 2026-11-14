
long FUN_017ebba0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  lVar2 = *(long *)(param_1 + 8);
  if ((*(long *)(lVar2 + 0x28) != 0) &&
     (plVar1 = *(long **)(*(long *)(lVar2 + 0x28) + 0x20), plVar1 != (long *)0x0)) {
    local_38 = *(undefined8 *)(lVar2 + 8);
    uStack_30 = *(undefined8 *)(lVar2 + 0x10);
    local_28 = 0x14;
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_38);
  }
  return *(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8);
}

