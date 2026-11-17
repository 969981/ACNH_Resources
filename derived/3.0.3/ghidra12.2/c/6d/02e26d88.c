
void FUN_02e26d88(long param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)**(undefined8 **)(param_1 + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar4 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58), (uVar2 & 1) != 0)) {
    switch(param_2) {
    default:
      puVar3 = (undefined8 *)(param_1 + 0x570);
      break;
    case 1:
      puVar3 = (undefined8 *)(param_1 + 0x578);
      break;
    case 2:
      puVar3 = (undefined8 *)(param_1 + 0x580);
      break;
    case 3:
      puVar3 = (undefined8 *)(param_1 + 0x588);
      break;
    case 4:
      puVar3 = (undefined8 *)(param_1 + 0x590);
    }
    puVar4[0x36] = *puVar3;
  }
  return;
}

