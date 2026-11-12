
/* WARNING: Removing unreachable block (ram,0x0081878c) */
/* WARNING: Removing unreachable block (ram,0x008187d0) */

void FUN_00818724(long param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  ushort uVar3;
  ulong uVar4;
  
  uVar3 = *(ushort *)PTR_DAT_04bb6298;
  uVar4 = (ulong)(short)uVar3;
  if (uVar4 == 0xffffffffffffffff) {
    *(byte *)(param_1 + 0x2db51) = 0;
    return;
  }
  puVar1 = (undefined4 *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar3 * 8);
  if (0xff < (uint)(int)(short)uVar3) {
    puVar1 = (undefined4 *)PTR_DAT_04bc39f8;
  }
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar4 & 0xffffffff) * 8);
  if (0xff < uVar3) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  *(byte *)(param_1 + 0x2db51) = (byte)((uint)*puVar1 >> 8) & 1 | (byte)(*puVar2 >> 9) & 1;
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar4 & 0xffffffff) * 8);
  if (0xff < uVar3) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar2 >> 0xf & 1) != 0) {
    *(undefined1 *)(param_1 + 0x2db53) = 1;
  }
  return;
}

