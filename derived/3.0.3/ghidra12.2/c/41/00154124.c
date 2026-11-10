
void FUN_00154124(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) {
    *(undefined8 *)(*(long *)(param_1 + 8) + 0x38) = 0;
    lVar1 = *(long *)(param_1 + 8);
    if (*(code **)(lVar1 + 0x38) != (code *)0x0) {
      (**(code **)(lVar1 + 0x38))(*(undefined8 *)(lVar1 + 0x40));
    }
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x78) = 0;
    *(undefined8 *)(lVar1 + 0xb8) = 0;
    *(undefined4 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(long *)(lVar1 + 0x40) = lVar1;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(lVar1 + 0xa8) = 0;
    *(undefined8 *)(lVar1 + 0xb0) = 0;
  }
  FUN_00153374(param_1);
  return;
}

