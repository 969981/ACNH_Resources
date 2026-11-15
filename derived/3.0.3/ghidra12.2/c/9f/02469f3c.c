
void FUN_02469f3c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined *local_50;
  char *pcStack_48;
  undefined4 local_24;
  
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  puVar3 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x4c8);
  }
  *(undefined4 *)(param_1 + 0x5d4) = *(undefined4 *)(puVar3 + 0x4f);
  *(undefined4 *)(param_1 + 0x5d8) = *(undefined4 *)((long)puVar3 + 0x27c);
  uVar10 = *(undefined4 *)(puVar3 + 0x50);
  *(undefined8 *)(param_1 + 0x5c0) = 0;
  *(undefined4 *)(param_1 + 0x5c8) = 0;
  *(undefined4 *)(param_1 + 0x5dc) = uVar10;
  uVar10 = *(undefined4 *)((long)puVar3 + 0x2b4);
  *(undefined4 *)(param_1 + 0x5f8) = 1;
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  *(undefined4 *)(param_1 + 0x1820) = 0;
  *(undefined4 *)(param_1 + 0x1830) = 0;
  *(undefined8 *)(param_1 + 0x5e8) = 0;
  *(undefined8 *)(param_1 + 0x5e0) = 0;
  *(undefined8 *)(param_1 + 0x1828) = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x5cc) = uVar10;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xffffffef;
  cVar4 = *(char *)(param_1 + 0x1914);
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar8 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  puVar1 = PTR_DAT_04bb2020;
  if (cVar4 == '\0') {
    pcStack_48 = "PlayerJumpInWater";
  }
  else {
    pcStack_48 = "PlayerJumpInWaterRun";
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  FUN_017029bc(puVar8,&local_50,6,0,0);
  *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xffffe7ff;
  lVar2 = param_1 + 0x1ee8;
  local_50 = puVar1 + 0x10;
  pcStack_48 = "IsOnPlayerMemoriesDivingFirst";
  iVar5 = FUN_0274bce0(lVar2,&local_50);
  if (iVar5 == 0 && *(int *)(param_1 + 0x178) == 0) {
    lVar6 = *(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10);
    if (((lVar6 == 0) || ((*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) & 0xfffffffe) != 2)) ||
       (*(int *)(lVar6 + 0x3e4) == 1)) {
      puVar1 = puVar1 + 0x10;
      pcStack_48 = "PE_DivingFirst";
      if (*(long *)(param_1 + 0x298) == 0) {
        puVar7 = PTR_DAT_04bb37e0;
      }
      else {
        lVar6 = *(long *)(*(long *)(param_1 + 0x298) + 0xbde8);
        puVar7 = (undefined *)(lVar6 + ((ulong)*(uint *)(lVar6 + 0x10) & 1) * 0x20 + 0x14);
      }
      uVar9 = *(undefined8 *)PTR_DAT_04bb49a0;
      local_50 = puVar1;
      local_24 = FUN_006bd550("PE_DivingFirst",0);
      uVar9 = FUN_01b5b4b0(uVar9,&local_24);
      FUN_01b5e0b0(&local_50,puVar7,uVar9,lVar2,0);
      pcStack_48 = "IsOnPlayerMemoriesDivingFirst";
      local_50 = puVar1;
      FUN_0274bfe8(lVar2,&local_50,1);
    }
  }
  return;
}

