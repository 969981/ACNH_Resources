
void FUN_01eea430(long param_1)

{
  int iVar1;
  char *__dest;
  long *plVar2;
  long lVar3;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined1 *puStack_68;
  undefined4 local_60;
  undefined1 local_5c [31];
  undefined1 local_3d;
  undefined4 local_34;
  
  FUN_02085a50(*(undefined8 *)(param_1 + 0x18),0,0);
  plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x60);
  if (plVar2 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      plVar2 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar2 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar2 + 0x370))(auStack_78,plVar2);
  iVar1 = FUN_0277d6c4(auStack_78);
  lVar3 = *(long *)(param_1 + 0x10);
  if (iVar1 == 0x166d) {
    local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
    local_80 = (ulong)local_80._4_4_ << 0x20;
    FUN_01e5a930(0x40000000,lVar3,0xd,PTR_DAT_04bb2150,&local_70,&local_80,PTR_DAT_04bc1600,6);
    __dest = *(char **)(lVar3 + 0x3b8);
    if (__dest != "CommonStickLightUp") {
      iVar1 = 0x12;
      if (*(int *)(lVar3 + 0x3c0) < 0x13) {
        iVar1 = *(int *)(lVar3 + 0x3c0) + -1;
      }
      memcpy(__dest,"CommonStickLightUp",(long)iVar1);
      __dest[iVar1] = '\0';
    }
    *(undefined4 *)(lVar3 + 0x3a0) = 0;
    *(undefined1 *)(lVar3 + 0x410) = 0;
    *(undefined4 *)(param_1 + 0xae74) = 1;
  }
  else {
    local_80 = 0x166d;
    FUN_0277d4ac(&local_80);
    local_70 = (undefined *)((ulong)local_70._4_4_ << 0x20);
    local_34 = 0;
    FUN_01e5a930(0x40000000,lVar3,0xe,PTR_DAT_04bb2150,&local_70,&local_34,PTR_DAT_04bc1600,6);
    local_3d = 0;
    local_5c[0] = 0;
    *(uint *)(lVar3 + 0x40c) = local_80._4_4_;
    *(undefined4 *)(lVar3 + 0x408) = (undefined4)local_80;
    puStack_68 = local_5c;
    local_60 = 0x20;
    lVar3 = *(long *)(lVar3 + 0x358);
    local_70 = PTR_DAT_04bb2028 + 0x10;
    (**(code **)(*(long *)(lVar3 + 0x3e0) + 0x18))(lVar3 + 0x3e0);
    FUN_038d1270(&local_70,"NpcActorAction.%s",*(undefined8 *)(lVar3 + 1000));
    *(undefined4 *)(param_1 + 0xae74) = 0;
    *(uint *)(*(long *)(param_1 + 8) + 0x69c) = *(uint *)(*(long *)(param_1 + 8) + 0x69c) | 0x10;
  }
  *(undefined4 *)(param_1 + 0xae5c) = 300;
  return;
}

