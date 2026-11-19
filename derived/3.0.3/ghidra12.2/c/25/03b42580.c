
undefined8 FUN_03b42580(void *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  
  if (((DAT_05aeba70 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05aeba70), iVar3 != 0)) {
    FUN_03b41e38(&DAT_05aeba20);
    FUN_001001d0(FUN_03b41e80,&DAT_05aeba20,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05aeba70);
  }
  DAT_05aeba60 = *(undefined8 *)((long)param_1 + 0x40);
  iVar3 = memcmp(param_1,&DAT_05aeba20,0x50);
  if (iVar3 == 0) {
    puVar4 = *(uint **)((long)param_1 + 0x40);
    if (puVar4 == (uint *)0x0) {
      return 1;
    }
    if ((float)puVar4[4] == -1.0) {
      uVar1 = *puVar4;
      if ((int)uVar1 < 1) {
        return 1;
      }
      if (**(float **)(puVar4 + 2) == -1.0) {
        uVar5 = 0;
        do {
          if ((ulong)uVar1 - 1 == uVar5) {
            return 1;
          }
          lVar2 = uVar5 + 1;
          uVar5 = uVar5 + 1;
        } while ((*(float **)(puVar4 + 2))[lVar2] == -1.0);
        if (uVar1 <= uVar5) {
          return 1;
        }
      }
    }
  }
  DAT_05aeba60 = 0;
  return 0;
}

