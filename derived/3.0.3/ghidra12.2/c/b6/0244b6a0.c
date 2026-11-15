
void FUN_0244b6a0(long param_1,byte param_2,ulong param_3)

{
  byte *pbVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if ((*(int *)(param_1 + 0x178) == 0) || ((param_3 & 1) == 0)) {
    if (*(int *)(param_1 + 0x178) == 0) {
      pbVar1 = (byte *)(param_1 + 0x18fa);
      if ((param_2 & 1) == 0) {
        *pbVar1 = *pbVar1 & 0xfb;
        param_2 = 0;
      }
      else {
        *pbVar1 = *pbVar1 | 4;
        param_2 = 1;
      }
    }
  }
  else {
    param_2 = *(byte *)(param_1 + 0x18fa) >> 2 & 1;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  if ((param_2 & 1) == 0) {
    uVar4 = *(uint *)((long)puVar6 + 0x15f4) & 0xfffffeff;
  }
  else {
    uVar4 = *(uint *)((long)puVar6 + 0x15f4) | 0x100;
  }
  *(uint *)((long)puVar6 + 0x15f4) = uVar4;
  if (((puVar6[0x227] == 0) || (lVar5 = *(long *)(puVar6[0x227] + 0x78), lVar5 == 0)) ||
     (plVar3 = *(long **)(lVar5 + 0x48), plVar3 == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0244b858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,&DAT_05248628,param_2 & 1);
  return;
}

