
void FUN_023e6f28(long param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 local_40;
  char *pcStack_38;
  byte local_14 [4];
  
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  cVar1 = *(char *)(param_1 + 0x191d);
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar8 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  if (((puVar8[0x227] != 0) && (lVar6 = *(long *)(puVar8[0x227] + 0x78), lVar6 != 0)) &&
     (plVar5 = *(long **)(lVar6 + 0x48), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x28))(plVar5,&DAT_054b2340,cVar1 != '\0');
  }
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar8 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "FtrRotate";
  FUN_017029bc(puVar8,&local_40,0,0,0);
  bVar7 = *(byte *)(param_1 + 0x1ee8);
  uVar3 = (uint)bVar7;
  bVar2 = 7 < uVar3;
  if (bVar2) {
    uVar3 = 0xff;
  }
  local_14[0] = (byte)uVar3;
  lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar3 * 0x740;
  if (bVar2) {
    lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
    *(undefined4 *)(lVar6 + 0x5b4) = 3;
    FUN_01393458(lVar6 + 0x658);
  }
  else {
    *(undefined4 *)(lVar6 + 0x5b4) = 4;
  }
  local_40 = (undefined *)CONCAT44(2,(undefined4)local_40);
  if (((bVar7 < 8) && (uVar3 = FUN_02582d8c(local_14,1), uVar3 < 8)) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) {
    bVar2 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0';
  }
  else {
    bVar2 = false;
  }
  bVar7 = local_14[0];
  if (7 < local_14[0]) {
    bVar7 = 0xff;
  }
  local_40._0_2_ = CONCAT11(bVar7,bVar2);
  FUN_02308d48(&local_40);
  return;
}

