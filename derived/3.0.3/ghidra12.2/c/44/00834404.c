
void FUN_00834404(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x174) == 0) {
    uVar4 = FUN_008479d0(param_1);
  }
  else {
    uVar4 = 8;
  }
  *(undefined4 *)(param_1 + 0x274) = uVar4;
  lVar1 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar1 = *(long *)(param_1 + 0x70) + 0x278;
  }
  *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(lVar1 + 8);
  *(undefined4 *)(lVar1 + 0x14) = *(undefined4 *)(lVar1 + 0xc);
  uVar3 = *(uint *)(lVar1 + 0x18);
  *(undefined1 *)(lVar1 + 0x21) = 1;
  *(uint *)(lVar1 + 8) = uVar3;
  *(undefined4 *)(lVar1 + 0xc) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(lVar1 + 0x28) <= uVar3) {
      uVar3 = 0;
    }
    puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0x30) + (long)(int)uVar3 * 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)*puVar5)();
    }
  }
  uVar3 = nn::os::GetSystemTick();
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  uVar2 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)(param_1 + 0x2a8) =
       ((uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4 ^ uVar3 * 0x800 ^ uVar3) >> 0x1d;
  if (*(int *)(param_1 + 0x174) == 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      *(undefined4 *)(param_1 + 0x2b4) = 2;
    }
    uVar4 = FUN_00848160(param_1);
    *(undefined4 *)(param_1 + 0x2b4) = uVar4;
    uVar6 = (ulong)*(uint *)(param_1 + 0x2b4);
    if (9 < *(uint *)(param_1 + 0x2b4)) {
      uVar6 = 0;
    }
    local_4 = (undefined4)(long)((float)(&DAT_04166c60)[uVar6] * 11930465.0);
    (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),&local_4);
    FUN_0084916c(param_1);
  }
  return;
}

