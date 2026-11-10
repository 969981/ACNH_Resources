
undefined8 * FUN_00286fac(long param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar3 = (undefined8 *)FUN_002874c0();
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  lVar1 = (long)puVar3 + (ulong)*(ushort *)((long)puVar3 + 0x12) + 0x20;
  param_2 = (ulong)(((int)puVar3[3] - (int)param_2) + (int)lVar1 & param_3 - 1U) + param_2;
  uVar4 = puVar3[3] - param_2;
  if (uVar4 < 0x21) {
    *(short *)((long)puVar3 + 0x12) = (short)uVar4;
    if ((uVar4 & 0xffff) != 0) {
      *(ulong *)((long)puVar3 + uVar4 + 0x18) = (ulong)puVar3 | 1;
    }
    puVar3[3] = param_2;
    FUN_002860e8((long)*(int *)(param_1 + 0xec) + (long)puVar3);
    iVar2 = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
    lVar1 = (long)*(int *)(param_1 + 0x104) + (long)puVar3;
  }
  else {
    puVar3[3] = uVar4 - 0x20;
    puVar3 = (undefined8 *)((uVar4 - 0x20) + lVar1);
    *(undefined4 *)(puVar3 + 2) = 0;
    puVar3[3] = param_2;
    iVar2 = *(int *)(param_1 + 0x88);
    lVar1 = (long)puVar3 + (long)*(int *)(param_1 + 0x104);
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  if (iVar2 == 1) {
    FUN_002860d0();
  }
  else {
    FUN_002860b8(param_1 + 0xf0,lVar1);
  }
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  return puVar3;
}

