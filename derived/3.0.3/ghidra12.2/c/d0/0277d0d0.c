
void FUN_0277d0d0(undefined1 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  
  uVar4 = nn::os::GetSystemTick();
  uVar2 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  uVar4 = uVar2 ^ uVar2 * 0x800;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  uVar4 = uVar4 >> 8 ^ uVar3 >> 0x13 ^ uVar4 ^ uVar3;
  uVar6 = (ulong)uVar4 * 0x18 >> 0x20;
  uVar3 = 0;
  while( true ) {
    uVar1 = uVar3;
    if (((DAT_055854c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_055854c0), iVar5 != 0)) {
      FUN_0277d2c4(&DAT_055854b0);
      __cxa_guard_release(&DAT_055854c0);
    }
    if (uVar1 == DAT_055854b0) goto LAB_0277d23c;
    if ((int)uVar6 == 0) break;
    uVar6 = (ulong)((int)uVar6 - 1);
    uVar3 = 0x17;
    if ((int)uVar1 < 0x18) {
      uVar3 = uVar1 + 1;
    }
  }
  if (((DAT_055854c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_055854c0), iVar5 != 0)) {
    FUN_0277d2c4(&DAT_055854b0);
    __cxa_guard_release(&DAT_055854c0);
  }
  if (DAT_055854b0 <= uVar1) {
    uVar1 = 0;
  }
  *param_1 = (char)*(undefined4 *)(DAT_055854b8 + (long)(int)uVar1 * 4);
LAB_0277d23c:
  uVar2 = uVar2 ^ uVar2 * 0x800;
  param_1[1] = (char)((ulong)(uVar2 >> 8 ^ uVar4 >> 0x13 ^ uVar2 ^ uVar4) * 100 >> 0x20);
  return;
}

