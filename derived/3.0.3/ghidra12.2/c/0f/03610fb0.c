
uint FUN_03610fb0(long param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  if (*(byte *)(param_1 + -0x102e) < 3) {
    uVar2 = 0xff;
  }
  else if (*(char *)(param_1 + 0x4fa) < '\0') {
    if (1 < *(int *)(param_1 + 0x410)) {
      if (*(int *)(param_1 + 0x40c) != 0) {
        FUN_03611480(param_1);
      }
      FUN_036110c0(param_1 + 0x418);
      FUN_03611308(param_1 + 0x450);
      bVar3 = *(byte *)(param_1 + 0x498);
      if ((bVar3 & 1) == 0) {
        FUN_036094bc(param_1 + 0x488);
        bVar3 = *(byte *)(param_1 + 0x498);
      }
      *(byte *)(param_1 + 0x498) = bVar3 + 1 & 7;
      FUN_03609a3c(param_1 + 0x4c8);
      *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + -2;
    }
    if (*(int *)(param_1 + 0x40c) != 0) {
      FUN_03611480(param_1);
    }
    uVar1 = *(byte *)(param_1 + 0x4f0) & 1;
    if (*(char *)(param_1 + 0x4ea) != '\0' || *(char *)(param_1 + 0x4c8) == '\0') {
      uVar1 = 0;
    }
    uVar2 = (uint)(*(byte *)(param_1 + 0x4bd) >>
                  (ulong)((byte)(&DAT_04102e6c)[(ulong)*(byte *)(param_1 + 0x4be) & 3] & 0x1f));
    if (*(char *)(param_1 + 0x4aa) != '\0' || *(char *)(param_1 + 0x488) == '\0') {
      uVar2 = 0;
    }
    uVar2 = uVar2 | uVar1 * *(byte *)(param_1 + 0x4ee) * 0x10;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

