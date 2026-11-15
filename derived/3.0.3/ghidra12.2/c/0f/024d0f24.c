
void FUN_024d0f24(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined4 uVar6;
  undefined *local_30;
  char *pcStack_28;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar2 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar3 + 0x278) * 999.99994);
    iVar1 = (int)(*(float *)(lVar3 + 0x27c) * 4.0);
    if (0x7ffe < iVar1) {
      iVar1 = 0x7fff;
    }
    if (iVar1 < -0x7fff) {
      iVar1 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar1;
    fVar5 = *(float *)(lVar3 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar5 * 999.99994);
    uVar2 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar2;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar4 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar6 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar4 + 0x2ec) = uVar6;
    *(undefined1 *)((long)puVar4 + 0x2e5) = 1;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x60);
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
  pcStack_28 = "PlayerBook";
  FUN_017081d0(puVar4,&local_30,6,0,0);
  return;
}

