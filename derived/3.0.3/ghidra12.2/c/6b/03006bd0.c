
void FUN_03006bd0(long param_1,undefined8 param_2,byte param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined4 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined *local_40;
  undefined4 local_38;
  
  *(byte *)(param_1 + 0x118) = param_3;
  puVar1 = (undefined4 *)&DAT_04af17f8;
  if ((param_3 & 1) == 0) {
    puVar1 = &DAT_04c49fb0;
  }
  FUN_03136590(param_1,puVar1);
  FUN_03136ca0(param_1,param_5,0);
  FUN_03006cd0(param_1,param_4);
  if (*(long *)(param_1 + 0x40) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x40) + 0xbc) = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x48) + 0xbc) = 1;
  }
  if ((*(long *)(param_1 + 0x120) != 0) &&
     (plVar2 = (long *)**(undefined8 **)(*(long *)(param_1 + 0x120) + 0x230), plVar2 != (long *)0x0)
     ) {
    local_40 = PTR_DAT_04bc4f00 + 0x10;
    uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0x118));
    local_38 = 0x14;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x158))(uVar3,plVar2[1]);
  }
  return;
}

