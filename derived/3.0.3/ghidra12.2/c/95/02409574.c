
void FUN_02409574(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  lVar4 = *(long *)(param_1 + 0x68);
  uVar5 = *(undefined4 *)(lVar4 + 0x278);
  puVar1 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x4c8);
  }
  *(undefined4 *)(param_1 + 0xba4) = uVar5;
  *(undefined4 *)(param_1 + 0xba8) = *(undefined4 *)(lVar4 + 0x27c);
  uVar6 = *(undefined4 *)(lVar4 + 0x280);
  *(undefined1 *)(param_1 + 0xba0) = 1;
  *(undefined4 *)(param_1 + 0xbac) = uVar6;
  *(undefined4 *)(puVar1 + 0x5d) = uVar5;
  *(undefined1 *)((long)puVar1 + 0x2e4) = 1;
  uVar5 = *(undefined4 *)(param_1 + 0xba8);
  *(undefined1 *)((long)puVar1 + 0x2e5) = 1;
  *(undefined4 *)((long)puVar1 + 0x2ec) = uVar5;
  uVar5 = *(undefined4 *)(param_1 + 0xbac);
  *(undefined1 *)((long)puVar1 + 0x2e6) = 1;
  *(undefined4 *)(puVar1 + 0x5e) = uVar5;
  FUN_023164ec(param_1,6);
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar3 = &DAT_05240280;
    }
    else {
      plVar3 = &DAT_05240280;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02409618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x4e8))(plVar3,1);
  return;
}

