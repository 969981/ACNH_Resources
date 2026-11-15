
void FUN_01f10428(long param_1)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_18;
  undefined4 local_14;
  
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x60);
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
  (**(code **)(*plVar4 + 0x4e8))(plVar4,1);
  local_3c = 0;
  local_34 = 0;
  local_18 = 0;
  FUN_01f105c0(param_1,&local_3c,&local_18);
  uVar5 = FUN_0290d828();
  if ((uVar5 & 1) != 0) {
    *(uint *)(*(long *)(param_1 + 8) + 0x69c) =
         *(uint *)(*(long *)(param_1 + 8) + 0x69c) & 0xfffffbff;
  }
  local_40 = local_18;
  FUN_01e39778(*(undefined8 *)(param_1 + 8),&local_3c,&local_40,0);
  lVar6 = *(long *)(param_1 + 0x18);
  uVar5 = FUN_02085a50(lVar6,1,0);
  if ((uVar5 & 1) != 0) {
    *(undefined1 *)(lVar6 + 0x801) = 1;
    lVar1 = lVar6 + 0x10 + (ulong)*(uint *)(lVar6 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar6 + 0x294)) {
      lVar1 = lVar6 + 0x10;
    }
    *(undefined8 *)(lVar1 + 0xc) = 0;
    *(undefined4 *)(lVar1 + 0x14) = 0;
  }
  *(uint *)(*(long *)(param_1 + 8) + 0x69c) = *(uint *)(*(long *)(param_1 + 8) + 0x69c) | 0x400;
  uVar2 = *(ushort *)(param_1 + 0xaf84);
  if ((uVar2 & 1) != 0) {
    *(ushort *)(param_1 + 0xaf84) = uVar2 & 0xfffe;
  }
  local_14 = 0;
  FUN_01ea5580(param_1,0x41,0,0);
  return;
}

