
void FUN_024366a8(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined *local_80;
  undefined1 *puStack_78;
  undefined4 local_70;
  undefined1 local_6c [63];
  undefined1 local_2d;
  undefined8 local_28;
  
  local_28 = 0xfffe;
  FUN_0277d4ac(&local_28);
  local_28 = *(undefined8 *)(param_1 + 0x1900);
  local_2d = 0;
  local_6c[0] = 0;
  puStack_78 = local_6c;
  local_70 = 0x40;
  local_80 = PTR_DAT_04bb2bc0 + 0x10;
  FUN_01714cd0(&local_80,&local_28);
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  if (puVar1 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar1 = &DAT_05240280;
    }
    else {
      puVar1 = &DAT_05240280;
    }
  }
  FUN_017081d0(puVar1,&local_80,6,1,0);
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  if (puVar1 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar1 = &DAT_05240280;
    }
    else {
      puVar1 = &DAT_05240280;
    }
  }
  FUN_0170c5d8(puVar1,1,*(undefined4 *)(param_1 + 0x230));
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar2 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar3 + 0x278) * 999.99994);
    iVar4 = (int)(*(float *)(lVar3 + 0x27c) * 4.0);
    if (0x7ffe < iVar4) {
      iVar4 = 0x7fff;
    }
    if (iVar4 < -0x7fff) {
      iVar4 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar4;
    fVar5 = *(float *)(lVar3 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar5 * 999.99994);
    uVar2 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar2;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar1 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar6 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar1 + 0x2ec) = uVar6;
    *(undefined1 *)((long)puVar1 + 0x2e5) = 1;
  }
  return;
}

