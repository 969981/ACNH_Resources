
void FUN_027f0dcc(undefined8 param_1,byte *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte local_14 [4];
  
  local_14[0] = *param_2;
  if ((local_14[0] < 8) &&
     (lVar1 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_14,1), lVar1 != 0)) {
    if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
       (puVar2 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar2 == (undefined8 *)0x0)) {
      FUN_027f0c8c(param_1,*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0xc138);
    }
    else {
      uVar3 = (**(code **)*puVar2)();
      FUN_027f0c8c(param_1,*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0xc138);
      if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
         (puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8), puVar2 != (undefined8 *)0x0)) {
        (**(code **)*puVar2)();
      }
    }
  }
  return;
}

