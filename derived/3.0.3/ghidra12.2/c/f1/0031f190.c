
undefined8 FUN_0031f190(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  long lVar2;
  long local_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_3 + 0x768);
  cVar1 = *(char *)(param_4 + 0x7d);
  uStack_38 = *(undefined8 *)(lVar2 + 400);
  local_40 = (*(long *)(param_3 + (ulong)*(uint *)(param_3 + 0x30) * 8 + 0x750) -
             *(long *)(lVar2 + 0x1a0)) + *(long *)(lVar2 + 0x188);
  if (*(char *)(param_4 + 0x40) != -1) {
    FUN_00348cdc(param_2,(long)*(char *)(param_4 + 0x40),0,&local_40,0xe0);
  }
  if (cVar1 != -1) {
    FUN_00348cdc(param_2,(int)cVar1,4,&local_40,0xe0);
  }
  lVar2 = *(long *)(*(long *)(param_3 + 0x240) + 0x20);
  cVar1 = *(char *)(param_4 + 0x7c);
  uStack_38 = *(undefined8 *)(lVar2 + 400);
  local_40 = *(long *)(lVar2 + 0x188) + *(long *)(*(long *)(param_3 + 0x240) + 0x28);
  if (*(char *)(param_4 + 0x3f) != -1) {
    FUN_00348cdc(param_2,(long)*(char *)(param_4 + 0x3f),0,&local_40,0x790);
  }
  if (cVar1 != -1) {
    FUN_00348cdc(param_2,(int)cVar1,4,&local_40,0x790);
  }
  lVar2 = *(long *)(*(long *)(param_3 + 0x240) + 0x20);
  cVar1 = *(char *)(param_4 + 0x7e);
  uStack_38 = *(undefined8 *)(lVar2 + 400);
  local_40 = *(long *)(lVar2 + 0x188) + *(long *)(*(long *)(param_3 + 0x240) + 0x40);
  if (*(char *)(param_4 + 0x41) != -1) {
    FUN_00348cdc(param_2,(long)*(char *)(param_4 + 0x41),0,&local_40,0x160);
  }
  if (cVar1 != -1) {
    FUN_00348cdc(param_2,(int)cVar1,4,&local_40,0x160);
  }
  return 1;
}

