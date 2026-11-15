
void FUN_0231ece4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  puVar1 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x4c8);
  }
  if (((puVar5[0x227] == 0) || (lVar4 = *(long *)(puVar5[0x227] + 0x78), lVar4 == 0)) ||
     (plVar3 = *(long **)(lVar4 + 0x48), plVar3 == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0231ed70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))
            ((*(float *)(param_3 + 4) - *(float *)((long)puVar1 + 0x27c)) * 10.0,plVar3,
             PTR_DAT_04bbde48);
  return;
}

