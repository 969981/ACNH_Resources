
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00716c18(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04bb2200;
  if ((*(ushort *)(param_1 + 0x788) >> 1 & 1) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x7b8);
  }
  else {
    FUN_015a30c0(*(undefined8 *)(*(long *)PTR_DAT_04bb2200 + 0x100),param_1 + 0x778);
    uVar1 = *(ushort *)(param_1 + 0x7b8);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x7e8);
  }
  else {
    FUN_015a30c0(*(undefined8 *)(*(long *)puVar2 + 0x100),param_1 + 0x7a8);
    uVar1 = *(ushort *)(param_1 + 0x7e8);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x818);
  }
  else {
    FUN_015a30c0(*(undefined8 *)(*(long *)puVar2 + 0x100),param_1 + 0x7d8);
    uVar1 = *(ushort *)(param_1 + 0x818);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x848);
  }
  else {
    FUN_015a30c0(*(undefined8 *)(*(long *)puVar2 + 0x100),param_1 + 0x808);
    uVar1 = *(ushort *)(param_1 + 0x848);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x878);
  }
  else {
    FUN_015a30c0(*(undefined8 *)(*(long *)puVar2 + 0x100),param_1 + 0x838);
    uVar1 = *(ushort *)(param_1 + 0x878);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x8a8);
  }
  else {
    FUN_015a30c0(*(undefined8 *)(*(long *)puVar2 + 0x100),param_1 + 0x868);
    uVar1 = *(ushort *)(param_1 + 0x8a8);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x8d8);
  }
  else {
    FUN_015a30c0(*(undefined8 *)(*(long *)puVar2 + 0x100),param_1 + 0x898);
    uVar1 = *(ushort *)(param_1 + 0x8d8);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x908);
  }
  else {
    FUN_015a30c0(*(undefined8 *)(*(long *)puVar2 + 0x100),param_1 + 0x8c8);
    uVar1 = *(ushort *)(param_1 + 0x908);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x938);
  }
  else {
    FUN_015a30c0(*(undefined8 *)(*(long *)puVar2 + 0x100),param_1 + 0x8f8);
    uVar1 = *(ushort *)(param_1 + 0x938);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_015a30c0(*(undefined8 *)(*(long *)puVar2 + 0x100),param_1 + 0x928);
  }
  return 0;
}

