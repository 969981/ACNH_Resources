
void FUN_01eea004(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  char *__dest;
  undefined8 local_78;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined1 *puStack_60;
  undefined4 local_58;
  undefined1 local_54 [31];
  undefined1 local_35;
  undefined4 local_14;
  
  FUN_02085a50(*(undefined8 *)(param_1 + 0x18),0,0);
  local_68._0_4_ = 4;
  *(uint *)(*(long *)(param_1 + 8) + 0x69c) = *(uint *)(*(long *)(param_1 + 8) + 0x69c) | 0x10;
  plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x60);
  if (plVar2 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar2 = &DAT_05240280;
    }
    else {
      plVar2 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar2 + 0x370))(auStack_70);
  iVar1 = FUN_0277d6c4(auStack_70);
  lVar3 = *(long *)(param_1 + 0x10);
  if (iVar1 == 0xac1) {
    local_68 = (undefined *)((ulong)local_68._4_4_ << 0x20);
    local_78 = (ulong)local_78._4_4_ << 0x20;
    FUN_01e5a930(0x40000000,lVar3,0xd,PTR_DAT_04bb2150,&local_68,&local_78,PTR_DAT_04bc1600,6);
    __dest = *(char **)(lVar3 + 0x3b8);
    if (__dest != "CommonPartyPopperPull") {
      iVar1 = 0x15;
      if (*(int *)(lVar3 + 0x3c0) < 0x16) {
        iVar1 = *(int *)(lVar3 + 0x3c0) + -1;
      }
      memcpy(__dest,"CommonPartyPopperPull",(long)iVar1);
      __dest[iVar1] = '\0';
    }
    *(undefined4 *)(lVar3 + 0x3a0) = 0;
    *(undefined1 *)(lVar3 + 0x410) = 0;
  }
  else {
    local_78 = 0xac1;
    FUN_0277d4ac(&local_78);
    local_68 = (undefined *)((ulong)local_68._4_4_ << 0x20);
    local_14 = 0;
    FUN_01e5a930(0x40000000,lVar3,0xe,PTR_DAT_04bb2150,&local_68,&local_14,PTR_DAT_04bc1600,6);
    local_35 = 0;
    local_54[0] = 0;
    *(uint *)(lVar3 + 0x40c) = local_78._4_4_;
    *(undefined4 *)(lVar3 + 0x408) = (undefined4)local_78;
    puStack_60 = local_54;
    local_58 = 0x20;
    lVar3 = *(long *)(lVar3 + 0x358);
    local_68 = PTR_DAT_04bb2028 + 0x10;
    (**(code **)(*(long *)(lVar3 + 0x3e0) + 0x18))(lVar3 + 0x3e0);
    FUN_038d1270(&local_68,"NpcActorAction.%s",*(undefined8 *)(lVar3 + 1000));
  }
  return;
}

