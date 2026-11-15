
void FUN_0237a0e0(long param_1)

{
  byte bVar1;
  undefined6 uVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_14;
  
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  if (puVar6[0x227] != 0) {
    FUN_03850760(0x3f800000);
  }
  bVar1 = *(byte *)(param_1 + 0x1ee8);
  bVar3 = 7 < bVar1;
  if (bVar3) {
    bVar1 = 0xff;
  }
  puVar5 = &DAT_0514cb68 + (ulong)(uint)(int)(char)bVar1 * 0x79;
  if (bVar3) {
    puVar5 = &DAT_0514cb68;
  }
  puVar5[100] = 0;
  puVar5[0x66] = 0;
  *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xffefffff;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
  FUN_02472404(0,param_1);
  local_38 = (char *)CONCAT44(local_38._4_4_,6);
  uVar7 = local_38;
  local_40 = (undefined *)((ulong)local_40._5_3_ << 0x28);
  local_38._0_6_ = (undefined6)uVar7;
  uVar2 = (undefined6)local_38;
  local_38 = (char *)((ulong)local_38._7_1_ << 0x38);
  local_38 = (char *)(CONCAT26(local_38._6_2_,uVar2) & 0xffff0000ffffffff);
  FUN_02321e44(&local_48,param_1,&local_40);
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  *(undefined1 *)(puVar6[0x290] + 0x1d5) = 1;
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  *(undefined1 *)(puVar6[0x291] + 0x1d5) = 1;
  if (1 < *(int *)(param_1 + 0x1924)) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    local_38 = "PE_Cooking_Multi";
    local_48 = 0xfffe;
    FUN_0277d4ac(&local_48);
    local_48 = *(undefined8 *)(param_1 + 0x190c);
    uVar7 = *(undefined8 *)PTR_DAT_04bb49a0;
    local_14 = FUN_006bd550("PE_Cooking_Multi",0);
    uVar7 = FUN_01b5b4b0(uVar7,&local_14);
    FUN_01b5e0b0(&local_40,&local_48,uVar7,param_1 + 0x1ee8,0);
  }
  return;
}

