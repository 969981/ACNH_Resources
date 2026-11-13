
void FUN_011beacc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *local_90;
  int local_88;
  int iStack_84;
  undefined *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  byte local_48;
  undefined8 local_28;
  
  local_58 = PTR_DAT_04bbfe68 + 0x10;
  uStack_4c = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
  local_50 = 1;
  local_48 = FUN_017baf44();
  local_48 = local_48 & 1;
  local_28 = 0xfffe;
  FUN_0277d4ac(&local_28);
  puVar9 = PTR_DAT_04bb30a0;
  puVar8 = PTR_DAT_04bb2010;
  bVar10 = *(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) != 1;
  puVar4 = &DAT_050d58b8;
  if (bVar10) {
    puVar4 = &DAT_050d58b0;
  }
  puVar5 = &DAT_050d58b8;
  if (bVar10) {
    puVar5 = &DAT_050d58b0;
  }
  puVar6 = &DAT_050d58b8;
  if (bVar10) {
    puVar6 = &DAT_050d58b0;
  }
  puVar7 = &DAT_050d58b8;
  if (bVar10) {
    puVar7 = &DAT_050d58b0;
  }
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  local_28 = CONCAT44(*(undefined4 *)((long)puVar7 + 4),
                      CONCAT13(*(undefined1 *)((long)puVar6 + 3),
                               CONCAT12(*(undefined1 *)((long)puVar5 + 2),*(undefined2 *)puVar4)));
  uVar3 = 0x6e090aaa;
  if (bVar10) {
    uVar3 = 0x55acd0a6;
  }
  local_70 = 0;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  uStack_60 = 0;
  local_80 = puVar1;
  local_78 = puVar2;
  local_68 = puVar2;
  uVar11 = FUN_0118ad90(&local_80,uVar3);
  if ((uVar11 & 1) != 0) {
    local_88 = (int)DAT_050d58a8 + (int)local_70;
    iStack_84 = DAT_050d58a8._4_4_ + local_70._4_4_;
    local_90 = puVar2;
    FUN_01a50970(&local_58,1,&local_28,&local_90);
  }
  uStack_60 = 0;
  local_70 = 0;
  uVar3 = 0x3b84b490;
  if (*(int *)(*(long *)puVar9 + 0x65204) != 1) {
    uVar3 = 0x995cbf71;
  }
  local_80 = puVar1;
  local_78 = puVar2;
  local_68 = puVar2;
  uVar12 = FUN_0118ad90(&local_80,uVar3);
  if ((uVar12 & 1) == 0) {
    if ((uVar11 & 1) == 0) {
      return;
    }
  }
  else {
    local_88 = (int)DAT_050d58a8 + (int)local_70;
    iStack_84 = DAT_050d58a8._4_4_ + local_70._4_4_;
    local_90 = puVar8 + 0x10;
    FUN_01a50970(&local_58,1,&local_28,&local_90);
  }
  puVar9 = PTR_DAT_04bb37e0;
  local_70 = 0;
  local_80 = *(undefined **)PTR_DAT_04bb37e0;
  local_78 = puVar8 + 0x10;
  uVar11 = FUN_01a55838(&local_80,0);
  if ((uVar11 & 1) != 0) {
    FUN_01a50970(&local_58,1,&local_80,&local_78);
  }
  local_80 = *(undefined **)puVar9;
  local_70 = 0;
  local_78 = puVar8 + 0x10;
  uVar11 = FUN_01a55838(&local_80,1);
  if ((uVar11 & 1) != 0) {
    FUN_01a50970(&local_58,1,&local_80,&local_78);
  }
  local_80 = *(undefined **)puVar9;
  local_70 = 0;
  local_78 = puVar8 + 0x10;
  uVar11 = FUN_01a55838(&local_80,2);
  if ((uVar11 & 1) != 0) {
    FUN_01a50970(&local_58,1,&local_80,&local_78);
  }
  local_80 = *(undefined **)puVar9;
  local_70 = 0;
  local_78 = puVar8 + 0x10;
  uVar11 = FUN_01a55838(&local_80,3);
  if ((uVar11 & 1) != 0) {
    FUN_01a50970(&local_58,1,&local_80,&local_78);
  }
  return;
}

