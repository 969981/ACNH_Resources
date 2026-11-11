
void FUN_0038f5f0(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ushort *puVar3;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  puVar1 = PTR_DAT_04bd0928 + 0x10;
  param_1[3] = param_3;
  param_1[4] = param_2;
  param_1[5] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 6) = 0x3dcccccd;
  uVar2 = (ulong)*(uint *)(param_2 + 0x18);
  if (*(uint *)(param_2 + 0x18) != 0) {
    puVar3 = (ushort *)(*(long *)(param_2 + 0x20) + 0x30);
    do {
      if ((((1 < puVar3[-0x18]) || (1 < puVar3[-0x10])) || (1 < puVar3[-8])) ||
         (((1 < *puVar3 || (1 < puVar3[8])) || (1 < puVar3[0x10])))) {
        *(undefined1 *)((long)param_1 + 0x14) = 1;
        return;
      }
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 0x30;
    } while (uVar2 != 0);
  }
  return;
}

