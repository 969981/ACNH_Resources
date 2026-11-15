
/* WARNING: Removing unreachable block (ram,0x024725cc) */

void FUN_02472404(float param_1,long param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  long *plVar5;
  undefined8 *puVar6;
  float fVar7;
  
  plVar5 = *(long **)(param_2 + 0x60);
  if (plVar5 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      plVar5 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar5 = &DAT_05240280;
    }
  }
  fVar7 = 0.001;
  if (0.001 <= param_1) {
    fVar7 = param_1;
  }
  *(float *)((long)plVar5 + 0x160c) = fVar7;
  *(float *)(plVar5 + 0x2c2) = fVar7;
  (**(code **)(*plVar5 + 0x4e0))((int)plVar5[0x2c1],plVar5);
  if (*(float *)((long)plVar5 + 0x160c) == 0.001) {
    uVar3 = *(uint *)((long)plVar5 + 0x15f4) | 0x10;
  }
  else {
    uVar3 = *(uint *)((long)plVar5 + 0x15f4) & 0xffffffef;
  }
  *(uint *)((long)plVar5 + 0x15f4) = uVar3;
  puVar6 = *(undefined8 **)(param_2 + 0x60);
  pbVar1 = (byte *)(param_2 + 0x18f4);
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
  if (*(int *)(param_2 + 0x178) == 0) {
    if ((*(uint *)((long)puVar6 + 0x15f4) >> 4 & 1) == 0) {
      bVar4 = *pbVar1 & 0xfe;
    }
    else {
      bVar4 = *pbVar1 | 1;
    }
    *pbVar1 = bVar4;
  }
  return;
}

