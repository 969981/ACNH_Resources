
void FUN_024e3210(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  float local_2c;
  float fStack_28;
  float local_24;
  
  uVar4 = *(undefined8 *)(*(long *)PTR_DAT_04bb2118 + 0x508);
  *(undefined4 *)(param_1 + 0xcc4) = 0;
  *(int *)(param_1 + 0xcc0) = (int)uVar4;
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar2 = &DAT_05240280;
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  FUN_01707f58(puVar2,6,1,0);
  if (*(int *)(param_1 + 0x178) == 1) {
    plVar3 = *(long **)(param_1 + 0x68);
    local_2c = *(float *)(plVar3 + 0x4f) + *(float *)(param_1 + 0xcc8);
    fStack_28 = *(float *)((long)plVar3 + 0x27c) + *(float *)(param_1 + 0xccc);
    local_24 = *(float *)(plVar3 + 0x50) + *(float *)(param_1 + 0xcd0);
    (**(code **)(*plVar3 + 0x100))(plVar3,&local_2c);
  }
  *(undefined4 *)(param_1 + 0x1848) = 0;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfff7ffff;
  *(undefined4 *)(param_1 + 0x1844) = *(undefined4 *)(param_1 + 0x1820);
  return;
}

