
void FUN_03762d14(long param_1,long param_2)

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
    local_28 = 0x48b0;
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_38);
  }
  memcpy((void *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8)),
         (void *)(*(long *)(*(long *)(param_2 + 8) + 0x10) + *(long *)(*(long *)(param_2 + 8) + 8)),
         0x48b0);
  return;
}

