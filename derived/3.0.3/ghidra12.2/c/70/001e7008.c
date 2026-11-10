
undefined4 FUN_001e7008(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  
  cVar1 = *(char *)(param_2 + 0x31);
  if (cVar1 != '\0') {
    plVar3 = *(long **)(*(long *)(param_1 + 0xb0) + 0x10);
    (**(code **)(*plVar3 + 0x80))(plVar3,cVar1);
  }
  uVar2 = FUN_001e6a30(param_1,*(long *)(param_2 + 0x10) + *(long *)(param_2 + 0x28),
                       *(undefined8 *)(param_2 + 0x18),param_3);
  if (cVar1 != '\0') {
    plVar3 = *(long **)(*(long *)(param_1 + 0xb0) + 0x10);
    (**(code **)(*plVar3 + 0x80))(plVar3,0x40);
  }
  return uVar2;
}

