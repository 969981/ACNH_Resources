
void FUN_039a99e0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x58);
  if (plVar1 == (long *)0x0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      lVar3 = (long)*(int *)(param_1 + 0x40) << 3;
      puVar2 = *(undefined8 **)(param_1 + 0x48);
      do {
        FUN_039a9a90(param_1,*puVar2);
        lVar3 = lVar3 + -8;
        puVar2 = puVar2 + 1;
      } while (lVar3 != 0);
    }
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1,param_1);
    if (*(int *)(param_1 + 0x40) != 0) {
      lVar3 = (long)*(int *)(param_1 + 0x40) << 3;
      puVar2 = *(undefined8 **)(param_1 + 0x48);
      do {
        FUN_039a9a90(param_1,*puVar2);
        lVar3 = lVar3 + -8;
        puVar2 = puVar2 + 1;
      } while (lVar3 != 0);
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  }
  *(byte *)(param_1 + 0x280) = *(byte *)(param_1 + 0x280) & 0xfe;
  return;
}

