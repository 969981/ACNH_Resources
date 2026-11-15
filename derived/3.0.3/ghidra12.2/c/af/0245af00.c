
void FUN_0245af00(long param_1,undefined8 param_2,long param_3)

{
  short sVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  
  plVar2 = *(long **)(param_1 + 0x60);
  if (plVar2 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar2 = &DAT_05240280;
    }
    else {
      plVar2 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar2 + 0x4b8))(0);
  if (*(int *)(param_1 + 0x178) == 0) {
    sVar1 = *(short *)(param_1 + 0x1906);
    iVar4 = *(int *)(param_1 + 0x1908);
    *(int *)(param_3 + 0x22) = (int)((float)*(int *)(param_1 + 0x1902) * 0.001 * 999.99994);
    iVar3 = (int)((float)(int)sVar1 * 0.25 * 4.0);
    if (0x7ffe < iVar3) {
      iVar3 = 0x7fff;
    }
    if (iVar3 < -0x7fff) {
      iVar3 = -0x8000;
    }
    *(short *)(param_3 + 0x26) = (short)iVar3;
    *(int *)(param_3 + 0x28) = (int)((float)iVar4 * 0.001 * 999.99994);
    *(undefined2 *)(param_3 + 0x20) = *(undefined2 *)(param_1 + 0x1900);
  }
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
  return;
}

