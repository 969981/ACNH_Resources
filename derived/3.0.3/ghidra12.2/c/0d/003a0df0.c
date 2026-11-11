
void FUN_003a0df0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  
  bVar4 = *(byte *)(param_1 + 0x5b);
  if ((ulong)bVar4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x18) + lVar6;
      uVar5 = *(undefined8 *)(lVar1 + 8);
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      puVar3 = *(undefined4 **)(lVar1 + 0x18);
      FUN_00347b80(uVar2);
      puVar3[1] = 8;
      FUN_00347b9c(uVar2,param_2,puVar3,uVar5,*(undefined4 *)(lVar1 + 0x20),*puVar3);
      FUN_003b4940(uVar2,"g3d_index");
      lVar6 = lVar6 + 0x38;
    } while ((ulong)bVar4 * 0x38 != lVar6);
  }
  return;
}

