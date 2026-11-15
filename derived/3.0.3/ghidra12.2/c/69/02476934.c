
void FUN_02476934(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 local_68;
  uint uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  int local_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  undefined1 local_4a;
  int local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  int local_34;
  
  local_40 = 0xfffe;
  FUN_0277d4ac(&local_40);
  local_40 = *(undefined8 *)(param_1 + 0x1900);
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  lVar6 = puVar5[0x290];
  local_60 = 6;
  local_68 = 0;
  uStack_64 = uStack_64 & 0xffffff00;
  local_5c = (uint)local_5c._3_1_ << 0x18;
  FUN_02321e44(&local_48,param_1,&local_68);
  FUN_023203ac(param_1,0,0);
  if (*(int *)(param_1 + 0x1810) != 4) {
    FUN_02472404(0x3f800000,param_1);
  }
  lVar1 = lVar6 + 0x14 + ((ulong)*(uint *)(lVar6 + 0x10) & 1) * 0x20;
  if (((*(char *)(lVar1 + 0x1d) == '\0') || (*(char *)(lVar1 + 0x1c) == '\0')) &&
     (*(int *)(lVar1 + 0x14) != 0)) {
    local_34 = *(int *)(lVar6 + 0xc);
    if (*(int *)PTR_DAT_04bb3238 != 0) {
      local_34 = *(int *)PTR_DAT_04bb3238;
    }
    local_48 = *(int *)(lVar1 + 0x14);
    FUN_0071c8d0(&local_68,&local_48,&local_34,0);
    if (((CONCAT44(uStack_64,local_68) != 0) && ((char)local_60 != '\0')) &&
       (local_60._1_1_ != '\0')) {
      lVar6 = *(long *)(CONCAT44(uStack_64,local_68) + 0x60);
      *(char *)(lVar1 + 0x1c) = '\x01';
      *(char *)(lVar1 + 0x1d) = '\x01';
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 0x11a0) = *(uint *)(lVar6 + 0x11a0) | 1;
      }
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  *(uint *)((long)puVar5 + 0x15f4) = *(uint *)((long)puVar5 + 0x15f4) & 0xfffff7ff;
  uVar2 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar2 & 0xfffffffe;
  if ((uVar2 & 1) != 0) {
    local_4a = 0;
    local_4c = 0x101;
    local_68 = 6;
    plVar4 = *(long **)(param_1 + 0x60);
    uStack_64 = uStack_64 & 0xffffff00;
    local_54 = *(int *)PTR_DAT_04bb37e0;
    uStack_50 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_58 = 0;
    local_60 = (undefined4)local_40;
    local_5c = local_40._4_4_;
    if (plVar4 == (long *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        plVar4 = &DAT_05240280;
      }
      else {
        plVar4 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar4 + 0x270))(&local_48);
    local_54 = local_48;
    uStack_50 = uStack_44;
    puVar5 = *(undefined8 **)(param_1 + 0x60);
    local_4c = CONCAT11(local_4c._1_1_,1);
    if (puVar5 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0);
        puVar5 = &DAT_05240280;
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar5 = &DAT_05240280;
      }
    }
    FUN_0170f380(puVar5,&local_68);
  }
  return;
}

