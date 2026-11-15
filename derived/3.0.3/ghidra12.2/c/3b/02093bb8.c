
void FUN_02093bb8(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined4 local_24;
  undefined8 local_8;
  
  if (*(char *)(param_1 + 0x5c) == '\0') {
    iVar1 = DAT_053da288;
    if (0 < *(int *)(param_1 + 0x30)) {
      iVar2 = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) + -1;
      iVar1 = 0;
      if (*(int *)(param_1 + 0x28) <= iVar2) {
        iVar1 = *(int *)(param_1 + 0x28);
      }
      iVar1 = *(int *)(*(long *)(param_1 + 0x20) + (long)(iVar2 - iVar1) * 0x10 + 4);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x58);
  }
  if (iVar1 == 0) {
    local_24 = 0;
    uVar3 = FUN_0220f914(&local_24);
    if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x10c) == 0)) {
      *(undefined4 *)(param_1 + 0x10c) = local_24;
    }
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x10;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  local_8 = 0xfffe;
  FUN_0277d4ac(&local_8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xd0) = (undefined4)local_8;
  *(undefined4 *)(param_1 + 0xd4) = local_8._4_4_;
  return;
}

