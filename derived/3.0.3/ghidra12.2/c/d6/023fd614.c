
void FUN_023fd614(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_18;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    *(undefined1 *)(param_1 + 0x1914) = 0;
    *(undefined1 *)(param_1 + 0xbf8) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xbf8) = 0;
    if (*(char *)(param_1 + 0x1914) != '\0') {
      puVar2 = *(undefined8 **)(param_1 + 0x60);
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
      local_40 = PTR_DAT_04bb2020 + 0x10;
      local_38 = "PlayerWorkbenchGetDemoKeep";
      FUN_017081d0(puVar2,&local_40,6,1,0);
      *(undefined1 *)(param_1 + 0xbf8) = 1;
      goto LAB_023fd6f4;
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar2 = &DAT_05240280;
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  local_38 = "PlayerWorkbenchGetDemo";
  FUN_017081d0(puVar2,&local_40,6,1,0);
LAB_023fd6f4:
  FUN_02472404(0,param_1);
  local_40 = (undefined *)CONCAT71(local_40._1_7_,*(int *)(param_1 + 0x178) == 0);
  local_18 = 0xfffe;
  FUN_0277d4ac(&local_18);
  uVar3 = *(undefined8 *)(param_1 + 0x190c);
  bVar4 = *(byte *)(param_1 + 0x1ee8);
  local_40 = (undefined *)
             CONCAT17((char)((ulong)uVar3 >> 0x18),
                      CONCAT16((char)((ulong)uVar3 >> 0x10),
                               CONCAT24((short)uVar3,(undefined4)local_40)));
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  local_38._0_5_ = CONCAT14(bVar4,(int)((ulong)uVar3 >> 0x20));
  FUN_02309290(&local_40);
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar2 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  *(undefined1 *)(puVar2 + 0xbd1) = 1;
  return;
}

