
void FUN_002c44d0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_50;
  undefined4 local_34;
  
  if (param_3 == 0) {
    local_50 = CONCAT44(local_50._4_4_,0x10c07);
  }
  else {
    *(long *)(param_2 + 0x6b0) = param_3;
    *(undefined4 *)(param_2 + 0x18) = 0;
    FUN_0021f54c(param_2 + 0x40,param_4);
    FUN_0021f54c(param_2 + 0x20,param_5);
    local_50 = 0;
    FUN_002282f0(&local_50);
    puVar1 = (undefined8 *)(param_2 + 0x80);
    *(undefined2 *)(param_2 + 0x6a8) = 0;
    *(undefined4 *)(param_2 + 0x5fc) = 0;
    *(ulong *)(param_2 + 0x6a0) = local_50;
    if (*(undefined8 **)(param_2 + 0x88) != puVar1) {
      puVar2 = *(undefined8 **)(param_2 + 0x88);
      do {
        puVar3 = (undefined8 *)puVar2[1];
        *puVar2 = 0;
        puVar2[1] = 0;
        FUN_002236e0(param_2 + 0x98,param_2 + 0x98,(long)*(int *)(param_2 + 0xac) + (long)puVar2);
        puVar2 = puVar3;
      } while (puVar3 != puVar1);
    }
    FUN_002236b0(puVar1);
    local_50 = local_50 & 0xffffffff00000000;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_50 + 4),(Result *)&local_34);
  FUN_002296c4(param_1,&local_50);
  return;
}

