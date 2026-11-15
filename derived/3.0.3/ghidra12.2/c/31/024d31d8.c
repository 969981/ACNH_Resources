
void FUN_024d31d8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 local_28;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar3 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar4 + 0x278) * 999.99994);
    iVar1 = (int)(*(float *)(lVar4 + 0x27c) * 4.0);
    if (0x7ffe < iVar1) {
      iVar1 = 0x7fff;
    }
    if (iVar1 < -0x7fff) {
      iVar1 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar1;
    fVar6 = *(float *)(lVar4 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar6 * 999.99994);
    uVar3 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar3;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar5 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar7 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar5 + 0x2ec) = uVar7;
    *(undefined1 *)((long)puVar5 + 0x2e5) = 1;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  local_28 = 0xfffe;
  FUN_0277d4ac(&local_28);
  local_28 = *(undefined8 *)(param_1 + 0x1900);
  uVar2 = FUN_024d2870(&local_28);
  FUN_017081d0(puVar5,uVar2,6,1,0);
  return;
}

