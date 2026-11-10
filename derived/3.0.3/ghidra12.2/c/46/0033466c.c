
uint FUN_0033466c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  puVar1 = (undefined8 *)(param_3 + (ulong)*(uint *)(param_3 + 0x14));
  lVar2 = 0;
  if (*(uint *)((long)puVar1 + 0x3c) != 0) {
    lVar2 = (long)puVar1 + (ulong)*(uint *)((long)puVar1 + 0x3c);
  }
  lVar3 = 0;
  if (*(uint *)(puVar1 + 8) != 0) {
    lVar3 = (long)puVar1 + (ulong)*(uint *)(puVar1 + 8);
  }
  lVar4 = 0;
  if (*(uint *)((long)puVar1 + 0x44) != 0) {
    lVar4 = (long)puVar1 + (ulong)*(uint *)((long)puVar1 + 0x44);
  }
  lVar5 = 0;
  if (*(uint *)(puVar1 + 9) != 0) {
    lVar5 = (long)puVar1 + (ulong)*(uint *)(puVar1 + 9);
  }
  lVar6 = 0;
  if (*(uint *)((long)puVar1 + 0x4c) != 0) {
    lVar6 = (long)puVar1 + (ulong)*(uint *)((long)puVar1 + 0x4c);
  }
  lVar7 = 0;
  if (*(uint *)(puVar1 + 10) != 0) {
    lVar7 = (long)puVar1 + (ulong)*(uint *)(puVar1 + 10);
  }
  uVar8 = FUN_00334700(param_1,param_2,*puVar1,*(undefined4 *)(puVar1 + 7),
                       *(undefined4 *)(puVar1 + 1),lVar2,lVar3,lVar4,lVar5,lVar6,lVar7);
  return uVar8 & 1;
}

