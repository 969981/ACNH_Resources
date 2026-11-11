
bool FUN_00473b60(long param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (param_2 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      while (*(undefined8 **)(param_1 + 0x10) == (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)(param_1 + 0x18);
        if (puVar2 == (undefined8 *)0x0) goto LAB_00473c24;
        iVar1 = FUN_004738f0(param_1,puVar2);
        if (iVar1 == 0) goto LAB_00473bf8;
        *(undefined8 *)(param_1 + 0x18) = *puVar2;
LAB_00473bdc:
        *puVar2 = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 **)(param_1 + 0x20) = puVar2;
        iVar3 = iVar3 + 1;
        if (param_2 <= iVar3) goto LAB_00473c10;
      }
      puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
      if (puVar2 == (undefined8 *)0x0) {
LAB_00473c24:
        *param_3 = iVar3;
        *(undefined8 *)(param_1 + 0x10) = 0;
        return true;
      }
      iVar1 = FUN_004738f0(param_1,puVar2);
      if (iVar1 != 0) {
        **(undefined8 **)(param_1 + 0x10) = *puVar2;
        goto LAB_00473bdc;
      }
LAB_00473bf8:
      *(undefined8 **)(param_1 + 0x10) = puVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
LAB_00473c10:
  *param_3 = iVar3;
  return *(long *)(param_1 + 0x10) == 0;
}

