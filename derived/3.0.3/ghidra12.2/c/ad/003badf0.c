
void FUN_003badf0(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  FUN_003baea4();
  FUN_003b8274();
  if (*(char *)(param_1 + 0x2f8) != '\0') {
    FUN_003baea4();
    FUN_003b82a8();
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar2 = 0;
    do {
      FUN_003cdfa0(*(long *)(param_1 + 0x48) + (ulong)(uVar2 & 0xffffff) * 0x88);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x40));
  }
  thunk_FUN_003bc4b0(param_1 + 0x50);
  if (*(char *)(param_1 + 0x2fa) == '\0') {
    thunk_FUN_003e0ad0(param_1 + 0x138);
  }
  else {
    thunk_FUN_003e1bb0(param_1 + 0x1c0);
  }
  thunk_FUN_003e2b10(param_1 + 0x1f8);
  uVar1 = FUN_003c5b84();
  FUN_003cbf00();
  FUN_003cbf90(uVar1,0,0);
  return;
}

