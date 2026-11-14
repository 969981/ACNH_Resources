
void FUN_01a30408(long param_1)

{
  long lVar1;
  undefined1 auStack_78 [88];
  
  FUN_0071b954(auStack_78,&DAT_040b0cf1,0);
  if (*(int *)(param_1 + 0x68) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = **(long **)(param_1 + 0x70);
  }
  if ((*(byte *)(lVar1 + 0x50) & 0x60) == 0) {
    (**(code **)(*(long *)(lVar1 + 0x30) + 0xf0))();
  }
  if ((*(byte *)(lVar1 + 0x88) & 0x60) == 0) {
    (**(code **)(*(long *)(lVar1 + 0x68) + 0xf0))((long *)(lVar1 + 0x68));
  }
  FUN_0071b954(auStack_78,&DAT_040b0cf1,1);
  if (*(uint *)(param_1 + 0x68) < 2) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x70) + 8);
  }
  if ((*(byte *)(lVar1 + 0x50) & 0x60) == 0) {
    (**(code **)(*(long *)(lVar1 + 0x30) + 0xf0))();
  }
  if ((*(byte *)(lVar1 + 0x88) & 0x60) == 0) {
    (**(code **)(*(long *)(lVar1 + 0x68) + 0xf0))((long *)(lVar1 + 0x68));
  }
  FUN_0071b954(auStack_78,&DAT_040b0cf1,2);
  if (*(uint *)(param_1 + 0x68) < 3) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x70) + 0x10);
  }
  if ((*(byte *)(lVar1 + 0x50) & 0x60) == 0) {
    (**(code **)(*(long *)(lVar1 + 0x30) + 0xf0))();
  }
  if ((*(byte *)(lVar1 + 0x88) & 0x60) == 0) {
    (**(code **)(*(long *)(lVar1 + 0x68) + 0xf0))((long *)(lVar1 + 0x68));
  }
  FUN_0071b954(auStack_78,&DAT_040b0cf1,3);
  if (*(uint *)(param_1 + 0x68) < 4) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x70) + 0x18);
  }
  if ((*(byte *)(lVar1 + 0x50) & 0x60) == 0) {
    (**(code **)(*(long *)(lVar1 + 0x30) + 0xf0))();
  }
  if ((*(byte *)(lVar1 + 0x88) & 0x60) == 0) {
    (**(code **)(*(long *)(lVar1 + 0x68) + 0xf0))((long *)(lVar1 + 0x68));
  }
  return;
}

