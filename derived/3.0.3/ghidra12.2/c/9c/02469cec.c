
void FUN_02469cec(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  byte local_34 [4];
  undefined8 local_18;
  
  uVar2 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar2 & 0xfffffffe;
  if ((uVar2 & 1) != 0) {
    local_18 = 0xfffe;
    FUN_0277d4ac(&local_18);
    local_18 = *(undefined8 *)(param_1 + 0x190c);
    local_34[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
    FUN_02472404(0,param_1);
    local_38 = 0x101;
    plVar4 = *(long **)(param_1 + 0x60);
    local_54 = 6;
    local_36 = 0;
    local_50 = 1;
    local_4c = *(undefined2 *)PTR_DAT_04bb37e0;
    local_4a = PTR_DAT_04bb37e0[2];
    local_49 = PTR_DAT_04bb37e0[3];
    local_40 = *(undefined4 *)PTR_DAT_04bb37e0;
    local_48 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_44 = 1;
    local_3c = local_48;
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
    (**(code **)(*plVar4 + 0x270))(&local_5c);
    local_38 = CONCAT11(local_38._1_1_,1);
    puVar5 = *(undefined8 **)(param_1 + 0x60);
    local_40 = local_5c;
    local_3c = uStack_58;
    if (puVar5 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar5 = &DAT_05240280;
      }
      else {
        puVar5 = &DAT_05240280;
      }
    }
    FUN_0170f380(puVar5,&local_54);
    puVar1 = PTR_DAT_04bb43c0;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(&local_18);
    if (*(long *)puVar1 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
          (FUN_023203ac(param_1,0,0), *(int *)(param_1 + 0x178) == 0)) &&
         (*(uint *)(param_1 + 0x5d0) < 0x28)) {
        FUN_02675b70(local_34);
      }
    }
  }
  return;
}

