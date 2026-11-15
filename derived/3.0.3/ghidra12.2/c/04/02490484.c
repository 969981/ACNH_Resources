
void FUN_02490484(long param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  ulong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  byte local_18 [4];
  int local_14;
  
  local_14 = param_2;
  if ((param_2 != 0xf0) && (param_2 != 0xf0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x230);
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    if (puVar4 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0,uVar1);
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar4 = &DAT_05240280;
      }
      else {
        puVar4 = &DAT_05240280;
      }
    }
    lVar5 = FUN_017067d4(puVar4,uVar1,0);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x1138) != 0)) {
      FUN_038501b0(0x41200000,*(long *)(lVar5 + 0x1138),0);
      FUN_0384fab0(*(undefined8 *)(lVar5 + 0x1138),0,1);
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar4 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  *(undefined1 *)((long)puVar4 + 0x5f04) = 1;
  uVar2 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar2 & 0xfffffffe;
  if ((uVar2 & 1) != 0) {
    local_18[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_18[0]) {
      local_18[0] = 0xff;
    }
    if (*(char *)(param_1 + 0x1908) != '\0') {
      local_40 = 0xfffe;
      FUN_0277d4ac(&local_40);
      local_40 = *(ulong *)(param_1 + 0x1900);
      FUN_02326130(local_18,&local_40,1);
    }
    local_38 = 6;
    local_40 = local_40 & 0xffffff0000000000;
    local_32 = 0;
    local_34 = 0;
    FUN_02321e44(auStack_48,param_1,&local_40);
  }
  return;
}

