
void FUN_03ca527c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_DAT_04bd3ef0;
  if (param_3 == 0) {
    if (param_2 != 0) {
      uVar4 = FUN_03d17da4(param_2);
      if (*(long *)(param_1 + 0x18) != 0) {
        (**(code **)(*(long *)(param_1 + 0x18) + 8))(*(undefined8 *)(param_1 + 8));
      }
      *(long *)(param_1 + 8) = param_2;
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      return;
    }
    if (((*PTR_DAT_04bd3ef8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3ef8), iVar2 != 0)) {
      FUN_03c7fd94(puVar3);
      puVar1 = PTR_LAB_04bd3ed0;
      *(undefined **)(puVar3 + 0x650) = PTR_LAB_04bd3ec8;
      *(undefined **)(puVar3 + 0x658) = puVar1;
      *(undefined **)(puVar3 + 0x660) = PTR_LAB_04bd3ed8;
      __cxa_guard_release(PTR_DAT_04bd3ef8);
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      (**(code **)(*(long *)(param_1 + 0x18) + 8))(*(undefined8 *)(param_1 + 8));
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    puVar3 = (undefined *)FUN_03d181e8(param_3);
    if (*(long *)(param_1 + 0x18) != 0) {
      (**(code **)(*(long *)(param_1 + 0x18) + 8))(*(undefined8 *)(param_1 + 8));
    }
    *(long *)(param_1 + 8) = param_3;
  }
  *(undefined **)(param_1 + 0x18) = puVar3;
  return;
}

