
void FUN_02a227e8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  lVar2 = FUN_03ba4630();
  if (lVar2 != 0) {
    iVar1 = 1;
    if ((param_3 & 1) == 0) {
      iVar1 = 2;
    }
    puVar4 = *(undefined8 **)(lVar2 + 0x90);
    *(uint *)(lVar2 + 0x154) =
         *(uint *)(lVar2 + 0x154) & 0xffffffe0 | *(uint *)(lVar2 + 0x154) & 7 | iVar1 << 3;
    if (puVar4 != (undefined8 *)0x0) {
      if (((*PTR_DAT_04bc3d18 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc3d18), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc3d10 = PTR_DAT_04bc3d20 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc3d18);
      }
      uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc3d10);
      if ((uVar3 & 1) != 0) {
        FUN_03c40780(puVar4);
        return;
      }
    }
  }
  return;
}

