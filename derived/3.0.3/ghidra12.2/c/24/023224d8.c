
undefined8 FUN_023224d8(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if ((*(char *)(param_1 + 0x17ac) == '\0') && ((*(uint *)(param_1 + 0xed0) >> 1 & 1) != 0)) {
    uVar3 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
      uVar3 = 0;
      if (uVar1 < 0x149) {
        uVar3 = uVar1;
      }
    }
    if (uVar3 != 0x1a) {
      if ((*(char *)(param_1 + 0x19fd) != '\0') &&
         (*(int *)(param_1 + 0x19f0) < *(int *)(param_1 + 0x19f8))) {
        *(undefined1 *)(param_1 + 0x21ac) = 0;
        return 0;
      }
      if ((param_2 & 1) == 0) {
        uVar2 = FUN_00a77324(param_1 + 0x1ee8);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
      }
      else {
        uVar2 = FUN_00a77438();
        if ((uVar2 & 1) != 0) {
          *(char *)(param_1 + 0x17ac) = '\x01';
          return 1;
        }
      }
    }
  }
  return 0;
}

