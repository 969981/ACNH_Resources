
undefined8 * FUN_00286d90(long param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  puVar3 = (undefined8 *)FUN_002871d0();
  if (puVar3 != (undefined8 *)0x0) {
    lVar5 = puVar3[3];
    lVar1 = (long)puVar3 + (ulong)*(ushort *)((long)puVar3 + 0x12) + 0x20;
    uVar4 = (lVar1 + (ulong)(param_3 - 1) & ((ulong)(param_3 - 1) ^ 0xffffffffffffffff)) - lVar1;
    if (uVar4 < 0x10000) {
      *(short *)((long)puVar3 + 0x12) = (short)uVar4;
      if ((uVar4 & 0xffff) != 0) {
        *(ulong *)((long)puVar3 + uVar4 + 0x18) = (ulong)puVar3 | 1;
      }
      iVar2 = *(int *)(param_1 + 0xec);
      puVar3[3] = param_2;
      FUN_002860e8((long)iVar2 + (long)puVar3);
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
    }
    else {
      *(undefined2 *)((long)puVar3 + 0x12) = 0;
      puVar3[3] = uVar4 - 0x20;
      puVar3 = (undefined8 *)(uVar4 + (long)puVar3);
      *(undefined4 *)(puVar3 + 2) = 0;
      puVar3[3] = param_2;
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    uVar6 = lVar5 - (uVar4 + param_2);
    if (*(int *)(param_1 + 0x88) == 1) {
      FUN_002860d0();
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    }
    else {
      FUN_002860b8(param_1 + 0xf0,(long)puVar3 + (long)*(int *)(param_1 + 0x104));
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    }
    if (0x20 < uVar6) {
      param_2 = (ulong)*(ushort *)((long)puVar3 + 0x12) + param_2;
      *(undefined8 *)((long)puVar3 + param_2 + 0x20) = 0;
      *(undefined8 *)((long)puVar3 + param_2 + 0x28) = 0;
      *(undefined4 *)((long)puVar3 + param_2 + 0x30) = 0;
      *(ulong *)((long)puVar3 + param_2 + 0x38) = uVar6 - 0x20;
      FUN_00286560(param_1);
      return puVar3;
    }
    if (lVar5 != uVar4 + param_2) {
      puVar3[3] = uVar6 + param_2;
    }
  }
  return puVar3;
}

