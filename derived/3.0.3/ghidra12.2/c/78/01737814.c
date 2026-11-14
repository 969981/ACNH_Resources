
void FUN_01737814(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 *puVar5;
  long *local_40;
  char local_38;
  char local_37;
  char local_36;
  
  FUN_0071cb58(&local_40,param_2,*(long *)(param_1 + 8) + 0x54,0);
  plVar4 = local_40;
  if (local_40 != (long *)0x0) {
    if (((*PTR_DAT_04bb3760 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3760);
    }
    uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3758);
    if ((uVar3 & 1) == 0) {
      local_36 = '\0';
    }
  }
  puVar5 = *(undefined4 **)(param_1 + 8);
  if (((((int)puVar5[0x14] < 0x14) && (local_40 != (long *)0x0)) && (local_38 != '\0')) &&
     ((local_36 != '\0' && (local_37 != '\0')))) {
    if (*(char *)((long)puVar5 + 0x59) != '\0') {
      plVar4 = (long *)local_40[0xc];
      if (plVar4 == (long *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          plVar4 = &DAT_05240280;
        }
        else {
          plVar4 = &DAT_05240280;
        }
      }
      uVar3 = (**(code **)(*plVar4 + 0x100))();
      if ((uVar3 & 1) == 0) {
        return;
      }
      puVar5 = *(undefined4 **)(param_1 + 8);
    }
    if ((*(char *)(puVar5 + 0x16) == '\0') || ((*(byte *)(local_40[0x14] + 0x178) & 1) != 0)) {
      puVar1 = puVar5 + (uint)puVar5[0x14];
      if (0x13 < (uint)puVar5[0x14]) {
        puVar1 = puVar5;
      }
      *puVar1 = *param_2;
      *(int *)(*(long *)(param_1 + 8) + 0x50) = *(int *)(*(long *)(param_1 + 8) + 0x50) + 1;
    }
  }
  return;
}

