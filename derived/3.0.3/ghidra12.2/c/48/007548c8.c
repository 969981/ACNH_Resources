
void FUN_007548c8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x1150);
  if ((lVar3 == 0) || (lVar1 = *(long *)(lVar3 + 0x50), lVar1 == 0)) {
    return;
  }
  puVar2 = *(undefined8 **)(lVar3 + 0x58);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,lVar3);
    lVar1 = *(long *)(lVar3 + 0x50);
  }
  FUN_039af270(lVar1,lVar3);
  FUN_039afb50(*(undefined8 *)(lVar3 + 0x50),lVar3);
  FUN_039af950(*(undefined8 *)(lVar3 + 0x50),lVar3);
  return;
}

