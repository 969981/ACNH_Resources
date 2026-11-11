
void FUN_003a0ea0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  long lVar5;
  
  bVar4 = *(byte *)(param_1 + 0x5b);
  if ((ulong)bVar4 != 0) {
    lVar5 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x18) + lVar5;
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      puVar3 = *(undefined4 **)(lVar1 + 0x18);
      FUN_00347b80(uVar2);
      puVar3[1] = 8;
      FUN_00347b9c(uVar2,param_2,puVar3,param_3,(ulong)*(uint *)(lVar1 + 0x20) + param_4,*puVar3);
      FUN_003b4940(uVar2,"g3d_index");
      lVar5 = lVar5 + 0x38;
    } while ((ulong)bVar4 * 0x38 != lVar5);
  }
  return;
}

