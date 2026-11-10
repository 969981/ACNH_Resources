
undefined8 FUN_003762e4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char acStack_4a [6];
  char acStack_44 [8];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_00364540(acStack_44);
  if ((*(code **)(param_3 + 0xb0) == (code *)0x0) ||
     (uVar1 = (**(code **)(param_3 + 0xb0))
                        (acStack_44,*(undefined8 *)(param_3 + 0xc0),*(undefined8 *)(param_3 + 0xb8))
     , (uVar1 & 1) == 0)) {
    return 0;
  }
  puVar2 = (undefined8 *)FUN_00367b30(0x10);
  *(undefined8 **)(param_1 + 0x38) = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  **(undefined4 **)(param_1 + 0x38) = local_3c;
  *(undefined4 *)(*(long *)(param_1 + 0x38) + 4) = local_34;
  *(undefined4 *)(*(long *)(param_1 + 0x38) + 8) = local_38;
  strcpy(acStack_4a,acStack_44);
  uVar3 = FUN_0036abe8(*(undefined8 *)(param_4 + 0x38),param_2,acStack_4a);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 0xf0;
  return 1;
}

