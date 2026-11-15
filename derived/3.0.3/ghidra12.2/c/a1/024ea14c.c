
void FUN_024ea14c(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_30;
  char *pcStack_28;
  
  *(uint *)(param_1 + 0xcf0) = *(uint *)(param_1 + 0xcf0) & 0xfffffffe;
  *(uint *)(param_1 + 0xcf0) = *(uint *)(param_1 + 0xcf0) & 0xfffffffb;
  *(uint *)(param_1 + 0xcf0) = *(uint *)(param_1 + 0xcf0) & 0xfffffff7;
  local_30 = (undefined *)CONCAT44((int)((ulong)local_30 >> 0x20),4);
  *(uint *)(param_1 + 0xcf0) = *(uint *)(param_1 + 0xcf0) & 0xffffffef;
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xd5c) = 0;
  *(undefined8 *)(param_1 + 0xcf4) = 0;
  *(undefined8 *)(param_1 + 0xcfc) = 0;
  if (puVar4 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar4 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "IsWarpPipeTurnFinish";
  if (((puVar4[0x227] != 0) && (lVar3 = *(long *)(puVar4[0x227] + 0x78), lVar3 != 0)) &&
     (plVar2 = *(long **)(lVar3 + 0x48), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_30,0);
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    *(byte *)(*(long *)PTR_DAT_04bb26a8 + 0xb44b9) =
         *(byte *)(*(long *)PTR_DAT_04bb26a8 + 0xb44b9) | 1;
  }
  return;
}

