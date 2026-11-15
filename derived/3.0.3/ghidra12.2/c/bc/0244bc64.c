
/* WARNING: Removing unreachable block (ram,0x0244bd0c) */

bool FUN_0244bc64(long param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x1810) == 4 || *(int *)(param_1 + 0x1810) == 7) {
    return true;
  }
  if (((*(long *)(param_1 + 0x70) == 0) ||
      (uVar1 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280), 0x148 < uVar1)) ||
     ((uVar1 & 0xfffffffe) != 0x2a)) {
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    if (puVar4 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0);
        puVar4 = &DAT_05240280;
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar4 = &DAT_05240280;
      }
    }
    bVar2 = (*(uint *)((long)puVar4 + 0x15f4) & 0x20) == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

