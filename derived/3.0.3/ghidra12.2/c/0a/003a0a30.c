
void FUN_003a0a30(long param_1,undefined8 param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  bVar2 = *(byte *)(param_1 + 0x4d);
  if ((ulong)bVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = (ulong)*(uint *)(param_1 + 0x48);
    lVar6 = 0;
    lVar7 = 0;
    lVar8 = 0;
    do {
      *(long *)(*(long *)(param_1 + 0x28) + lVar7) = *(long *)(param_1 + 0x20) + lVar8;
      puVar1 = (uint *)(*(long *)(param_1 + 0x30) + lVar6);
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar7);
      FUN_00347b80(uVar5);
      puVar1[1] = 4;
      FUN_00347b9c(uVar5,param_2,puVar1,uVar3,uVar4,*puVar1);
      FUN_003b4940(uVar5,"g3d_vertex");
      lVar8 = lVar8 + 0x48;
      lVar7 = lVar7 + 8;
      lVar6 = lVar6 + 0x10;
      uVar4 = ((ulong)*puVar1 + 7 & 0x1fffffff8) + uVar4;
    } while ((ulong)bVar2 * 0x48 != lVar8);
  }
  return;
}

