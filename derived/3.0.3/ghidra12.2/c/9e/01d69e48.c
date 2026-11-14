
void FUN_01d69e48(long param_1,byte *param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  byte bVar4;
  byte local_24 [4];
  
  bVar3 = *param_2;
  if (bVar3 < 8) {
    FUN_01d6915c(local_24,param_1,param_3);
    bVar4 = *PTR_DAT_04bb5018;
    puVar1 = (undefined2 *)(param_1 + 0x108);
    *(undefined8 *)(puVar1 + (ulong)(uint)bVar3 * 6 + 1) = *param_4;
    puVar2 = puVar1 + (ulong)(uint)(int)(char)*param_2 * 6;
    if (0xb < (uint)(int)(char)*param_2) {
      puVar2 = puVar1;
    }
    *puVar2 = (short)param_3;
    puVar2 = puVar1 + (ulong)(uint)(int)(char)*param_2 * 6;
    if (0xb < (uint)(int)(char)*param_2) {
      puVar2 = puVar1;
    }
    *(bool *)(puVar2 + 5) = (uint)local_24[0] == (uint)bVar3 || (uint)local_24[0] == (uint)bVar4;
    FUN_01d6aa30(param_1);
  }
  return;
}

