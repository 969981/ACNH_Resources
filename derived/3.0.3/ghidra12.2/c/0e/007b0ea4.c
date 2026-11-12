
/* WARNING: Removing unreachable block (ram,0x007b0fc8) */
/* WARNING: Removing unreachable block (ram,0x007b0ec4) */
/* WARNING: Removing unreachable block (ram,0x007b0f48) */
/* WARNING: Removing unreachable block (ram,0x007b1048) */

undefined8 FUN_007b0ea4(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = &DAT_04ca7a10;
  }
  else {
    puVar4 = puVar3;
  }
  uVar2 = *param_2;
  if (uVar2 < 0x33) {
    uVar1 = uVar2 + 7;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    if (((uint)((int)uVar1 >> 3) < 7) &&
       ((*(byte *)((long)puVar4 + (ulong)(uint)((int)uVar1 >> 3)) >> (ulong)(uVar2 & 7) & 1) != 0))
    {
      return 0;
    }
  }
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = &DAT_04ca7a10;
  }
  else {
    puVar4 = (undefined4 *)((long)puVar3 + 7);
  }
  if (uVar2 < 0x33) {
    uVar1 = uVar2 + 7;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    if (((uint)((int)uVar1 >> 3) < 7) &&
       ((*(byte *)((long)puVar4 + (ulong)(uint)((int)uVar1 >> 3)) >> (ulong)(uVar2 & 7) & 1) != 0))
    {
      return 1;
    }
  }
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = &DAT_04ca7a10;
  }
  else {
    puVar4 = (undefined4 *)((long)puVar3 + 0xe);
  }
  if (uVar2 < 0x33) {
    uVar1 = uVar2 + 7;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    if (((uint)((int)uVar1 >> 3) < 7) &&
       ((*(byte *)((long)puVar4 + (ulong)(uint)((int)uVar1 >> 3)) >> (ulong)(uVar2 & 7) & 1) != 0))
    {
      return 2;
    }
  }
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = &DAT_04ca7a10;
  }
  else {
    puVar3 = (undefined4 *)((long)puVar3 + 0x15);
  }
  if (uVar2 < 0x33) {
    uVar1 = uVar2 + 7;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    if (((uint)((int)uVar1 >> 3) < 7) &&
       ((*(byte *)((long)puVar3 + (ulong)(uint)((int)uVar1 >> 3)) >> (ulong)(uVar2 & 7) & 1) != 0))
    {
      return 3;
    }
  }
  return 4;
}

