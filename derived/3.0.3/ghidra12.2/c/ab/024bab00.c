
void FUN_024bab00(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  undefined8 local_30;
  undefined4 local_28;
  
  FUN_023164ec(param_1,6);
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  local_30 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  local_28 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
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
  FUN_016ff8c0(puVar2,8,&local_30);
  local_58 = 0xfffe;
  FUN_0277d4ac(&local_58);
  uVar3 = *(undefined8 *)(param_1 + 0x1900);
  local_38 = (float)(int)*(short *)(param_1 + 0x190c) * 0.25;
  local_48 = local_30;
  local_4e = (undefined1)((ulong)uVar3 >> 0x10);
  fStack_3c = (float)*(int *)(param_1 + 0x1908) * 0.001;
  fStack_34 = (float)*(int *)(param_1 + 0x190e) * 0.001;
  local_4d = (undefined1)((ulong)uVar3 >> 0x18);
  local_50 = (undefined2)uVar3;
  local_4c = (undefined4)((ulong)uVar3 >> 0x20);
  local_40 = local_28;
  FUN_009a4e7c(*(undefined8 *)PTR_DAT_04bb4820,&local_50,param_1 + 0x1ee8);
  if (*(int *)(param_1 + 0x178) == 0) {
    FUN_02332d7c(param_1,0);
  }
  return;
}

