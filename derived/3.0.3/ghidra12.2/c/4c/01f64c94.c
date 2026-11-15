
undefined8 FUN_01f64c94(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_80;
  undefined8 local_78;
  char *pcStack_70;
  undefined4 local_68;
  undefined1 local_64 [31];
  undefined1 local_45;
  undefined4 local_24;
  
  uVar5 = FUN_021e71b0();
  if ((uVar5 & 1) == 0) {
    plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x60);
    if (plVar7 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        plVar7 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar7 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar7 + 0x370))(&local_80,plVar7);
    puVar2 = PTR_DAT_04bb2020;
    local_78 = PTR_DAT_04bb2020 + 0x10;
    pcStack_70 = "HarvestPlazaHandTool";
    sVar3 = FUN_02196ed0(*(long *)(param_1 + 8) + 0x508,&local_78);
    if (sVar3 == 2) {
      FUN_021e8e40(&local_78);
    }
    else if (sVar3 == 1) {
      local_78 = (undefined *)0x3623;
      FUN_0277d4ac(&local_78);
    }
    else {
      local_78 = *(undefined **)PTR_DAT_04bb37e0;
    }
    uVar5 = FUN_0277d7b4(&local_80,&local_78);
    if ((uVar5 & 1) == 0) {
      local_78 = puVar2 + 0x10;
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x508);
      pcStack_70 = "HarvestPlazaHandTool";
      local_24 = uVar1;
      FUN_021be8c0(&local_24,&local_78,0);
      local_24._0_2_ = (ushort)(byte)uVar1;
      uVar5 = (ulong)local_78 >> 0x30;
      local_78 = (undefined *)CONCAT26((ushort)uVar5 & 0xff00,0xff0000000000);
      if (-1 < DAT_053d1370) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1370,&local_78,&local_24,2,0);
      }
    }
  }
  else if ((*(int *)(param_1 + 0x136a4) != 8) &&
          ((*(int *)(param_1 + 0x77b0) != 0x6f || (*(int *)(param_1 + 0x136a8) < 1)))) {
    plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x60);
    if (plVar7 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        plVar7 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar7 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar7 + 0x370))(&local_80,plVar7);
    puVar2 = PTR_DAT_04bb2020;
    local_78 = PTR_DAT_04bb2020 + 0x10;
    pcStack_70 = "HarvestPlazaHandTool";
    sVar3 = FUN_02196ed0(*(long *)(param_1 + 8) + 0x508,&local_78);
    if (sVar3 == 2) {
      FUN_021e8e40(&local_78);
    }
    else if (sVar3 == 1) {
      local_78 = (undefined *)0x3623;
      FUN_0277d4ac(&local_78);
    }
    else {
      local_78 = *(undefined **)PTR_DAT_04bb37e0;
    }
    uVar5 = FUN_0277d7b4(&local_80,&local_78);
    if (((uVar5 & 1) == 0) && (*(int *)(param_1 + 0x1370c) != 2)) {
      lVar6 = *(long *)(param_1 + 0x10);
      local_78 = puVar2 + 0x10;
      pcStack_70 = "HarvestPlazaHandTool";
      sVar3 = FUN_02196ed0(*(long *)(param_1 + 8) + 0x508,&local_78);
      if (sVar3 == 2) {
        FUN_021e8e40(&local_80);
      }
      else if (sVar3 == 1) {
        local_80 = 0x3623;
        FUN_0277d4ac(&local_80);
      }
      else {
        local_80 = *(undefined8 *)PTR_DAT_04bb37e0;
      }
      local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
      local_24 = 0;
      FUN_01e5a930(0x40000000,lVar6,0xe,PTR_DAT_04bb2150,&local_78,&local_24,PTR_DAT_04bc1600,6);
      local_45 = 0;
      local_64[0] = 0;
      *(undefined4 *)(lVar6 + 0x40c) = local_80._4_4_;
      *(undefined4 *)(lVar6 + 0x408) = (undefined4)local_80;
      pcStack_70 = local_64;
      local_68 = 0x20;
      lVar6 = *(long *)(lVar6 + 0x358);
      local_78 = PTR_DAT_04bb2028 + 0x10;
      (**(code **)(*(long *)(lVar6 + 0x3e0) + 0x18))(lVar6 + 0x3e0);
      FUN_038d1270(&local_78,"NpcActorAction.%s",*(undefined8 *)(lVar6 + 1000));
      *(undefined4 *)(param_1 + 0x1370c) = 2;
      *(uint *)(*(long *)(param_1 + 8) + 0x69c) = *(uint *)(*(long *)(param_1 + 8) + 0x69c) | 0x10;
      return 0;
    }
    lVar6 = *(long *)(param_1 + 0x10);
    if (*(int *)(lVar6 + 0x378) != 0xe) {
      if (*(int *)(param_1 + 0x1370c) != 2) {
        return 1;
      }
      if ((*(int *)(lVar6 + 0x4b8) != 0) && (*(int *)(lVar6 + 0x378) == 0x23)) {
        *(uint *)(*(long *)(param_1 + 8) + 0x69c) =
             *(uint *)(*(long *)(param_1 + 8) + 0x69c) & 0xffffffef;
        *(undefined4 *)(param_1 + 0x1370c) = 3;
        return 1;
      }
    }
    return 0;
  }
  return 1;
}

