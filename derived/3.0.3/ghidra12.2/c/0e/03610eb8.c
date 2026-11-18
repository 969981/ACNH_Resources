
uint FUN_03610eb8(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
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
      bVar1 = *(byte *)(param_1 + 0x498);
      if ((bVar1 & 1) == 0) {
        FUN_036094bc(param_1 + 0x488);
        bVar1 = *(byte *)(param_1 + 0x498);
      }
      *(byte *)(param_1 + 0x498) = bVar1 + 1 & 7;
      FUN_03609a3c(param_1 + 0x4c8);
      *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + -2;
    }
    if (*(int *)(param_1 + 0x40c) != 0) {
      FUN_03611480(param_1);
    }
    uVar2 = (uint)*(byte *)(param_1 + 0x447);
    if (*(char *)(param_1 + 0x43a) != '\0' || *(char *)(param_1 + 0x418) == '\0') {
      uVar2 = 0;
    }
    uVar3 = (uint)*(byte *)(param_1 + 0x47f);
    if (*(char *)(param_1 + 0x472) != '\0' || *(char *)(param_1 + 0x450) == '\0') {
      uVar3 = 0;
    }
    uVar2 = uVar2 * *(byte *)(param_1 + 0x43e) | *(byte *)(param_1 + 0x476) * uVar3 * 0x10;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

