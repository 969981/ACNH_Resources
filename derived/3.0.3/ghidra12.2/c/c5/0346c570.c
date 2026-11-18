
void _INIT_7998(void)

{
  undefined *puVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bc9d20 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bc9d20);
    puVar1 = PTR_DAT_04bc9d18;
    if (iVar2 != 0) {
      *(undefined **)PTR_DAT_04bc9d18 = PTR_DAT_04bb2020 + 0x10;
      *(char **)(puVar1 + 8) = "Videogame";
      __cxa_guard_release(PTR_DAT_04bc9d20);
      return;
    }
  }
  return;
}

