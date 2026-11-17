
undefined * FUN_030dea88(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bc5460 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc5460), puVar1 = PTR_DAT_04bc5458, iVar2 != 0)) {
    *(undefined **)PTR_DAT_04bc5458 = PTR_DAT_04bb2020 + 0x10;
    *(char **)(puVar1 + 8) = "EffectClothTextureCtrl";
    __cxa_guard_release(PTR_DAT_04bc5460);
  }
  return PTR_DAT_04bc5458;
}

