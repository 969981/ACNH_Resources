
long FUN_00444570(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 **local_e8;
  undefined4 **ppuStack_e0;
  long *local_d8;
  undefined1 **ppuStack_d0;
  undefined1 *local_58;
  long local_50;
  undefined4 *local_48;
  undefined8 *local_38;
  
  local_e8 = &local_38;
  ppuStack_e0 = &local_48;
  local_d8 = &local_50;
  ppuStack_d0 = &local_58;
  iVar1 = FUN_0043dba0(param_3,&DAT_04861268,&local_e8);
  if (-1 < iVar1) {
    if (local_38 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = *local_38;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(local_38 + 1);
      *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    }
    if (local_48 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = *local_48;
    }
    if (local_50 != 0) {
      *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 1;
    }
    if (local_58 != (undefined1 *)0x0) {
      *(undefined1 *)(param_1 + 8) = *local_58;
    }
  }
  FUN_004225b0(&local_e8);
  puVar4 = (ulong *)(param_1 + 0x18);
  uVar3 = *puVar4;
  uVar2 = FUN_0043c110(puVar4);
  FUN_00423880(&local_e8,uVar3 & 0xfffffffffffffffe,uVar2);
  FUN_00424f20(&local_e8,param_2,param_3);
  FUN_0043bfc0(puVar4,&local_e8);
  FUN_00422550(&local_e8);
  return param_1;
}

