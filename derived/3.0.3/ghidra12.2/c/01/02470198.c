
void FUN_02470198(long param_1)

{
  long lVar1;
  int iVar2;
  undefined **ppuVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined *local_40;
  char *local_38;
  undefined8 local_18;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x60);
    local_44 = 0;
    local_4c = 0;
    uStack_48 = 0;
    bVar4 = *(byte *)(param_1 + 0x1ee8);
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    local_58._0_4_ = CONCAT31(local_58._1_3_,bVar4);
    if (puVar5 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar5 = &DAT_05240280;
      }
      else {
        puVar5 = &DAT_05240280;
      }
    }
    FUN_016ff8c0(puVar5,10,&local_40);
    local_4c = local_38._0_4_;
    local_58._4_4_ = SUB84(local_40,0);
    uStack_50 = (undefined4)((ulong)local_40 >> 0x20);
    iVar2 = FUN_02951d60(*(undefined8 *)PTR_DAT_04bb4208,&local_58);
    local_40 = (undefined *)CONCAT44(local_40._4_4_,iVar2);
    if (iVar2 == 2) {
      *(undefined8 *)(param_1 + 0x1980) = 0;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined2 *)(param_1 + 0x1980) = 0x601;
      local_40 = (undefined *)CONCAT44(local_40._4_4_,0xfa);
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
      lVar1 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar1 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar1,0xfa);
      return;
    }
    if (iVar2 == 1) {
      local_18 = 0xfffe;
      FUN_0277d4ac(&local_18);
      local_40 = *(undefined **)(param_1 + 0x1900);
      local_38 = (char *)((ulong)local_38 & 0xffffffffffff0000);
      FUN_024648d4(param_1,&local_40);
      return;
    }
    puVar5 = *(undefined8 **)(param_1 + 0x60);
    if (puVar5 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        puVar5 = &DAT_05240280;
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar5 = &DAT_05240280;
      }
    }
    ppuVar3 = &local_40;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    local_38 = "CommonDiveWait";
  }
  else {
    puVar5 = *(undefined8 **)(param_1 + 0x60);
    if (puVar5 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        puVar5 = &DAT_05240280;
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar5 = &DAT_05240280;
      }
    }
    ppuVar3 = (undefined **)&local_58;
    local_58 = PTR_DAT_04bb2020 + 0x10;
    uStack_50 = 0x40eff94;
    local_4c = 0;
  }
  FUN_017081d0(puVar5,ppuVar3,6,1,0);
  return;
}

