
void FUN_003a0b20(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  bVar2 = *(byte *)(param_1 + 0x4d);
  if ((ulong)bVar2 != 0) {
    uVar4 = 0;
    param_4 = (ulong)*(uint *)(param_1 + 0x48) + param_4;
    do {
      *(ulong *)(*(long *)(param_1 + 0x28) + uVar4 * 8) = *(long *)(param_1 + 0x20) + uVar4 * 0x48;
      puVar1 = (uint *)(*(long *)(param_1 + 0x30) + uVar4 * 0x10);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar4 * 8);
      FUN_00347b80(uVar3);
      puVar1[1] = 4;
      FUN_00347b9c(uVar3,param_2,puVar1,param_3,param_4,*puVar1);
      FUN_003b4940(uVar3,"g3d_vertex");
      uVar4 = uVar4 + 1;
      param_4 = ((ulong)*puVar1 + 7 & 0x1fffffff8) + param_4;
    } while (uVar4 != bVar2);
  }
  return;
}

