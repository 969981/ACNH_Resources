
void FUN_005d83e0(long param_1,long *param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 local_48;
  undefined8 local_38;
  
  if (param_2 != (long *)0x0) {
    puVar3 = (undefined4 *)FUN_0053b100(*(undefined8 *)(param_1 + 0x38));
    local_38 = CONCAT44(*puVar3,*puVar3);
    local_48 = CONCAT44(puVar3[5],puVar3[5]);
    if (*(uint *)(*param_2 + 0x18) < 0xc) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      switch(*(uint *)(*param_2 + 0x18)) {
      case 0:
        FUN_005d8550(uVar1,uVar2,param_4,*param_3,param_2,&local_38,&local_48,param_5);
        break;
      case 1:
        FUN_005da110(uVar1,uVar2,param_4,*param_3,param_2,&local_38,&local_48,param_5);
        break;
      case 2:
        FUN_005d89a0(uVar1,uVar2,param_4,*param_3,param_2,&local_38,&local_48,param_5);
        break;
      case 3:
        FUN_005d8ef0(uVar1,uVar2,param_4,*param_3,param_2,&local_38,&local_48,param_5);
        break;
      case 5:
        FUN_005d92f0(uVar1,uVar2,param_4,*param_3,param_2,&local_38,&local_48,param_5);
        break;
      case 9:
        FUN_005d96f0(uVar1,uVar2,param_4,*param_3,param_2,&local_38,&local_48,param_5);
        break;
      case 0xb:
        FUN_005d9c00(uVar1,uVar2,param_4,*param_3,param_2,&local_38,&local_48,param_5);
      }
    }
  }
  return;
}

