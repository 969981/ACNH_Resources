
void FUN_01ee9344(long param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 local_84;
  undefined1 auStack_7c [8];
  int local_74;
  undefined *local_70;
  char *pcStack_68;
  undefined4 local_60;
  undefined1 local_5c [31];
  undefined1 local_3d;
  undefined4 local_34;
  
  puVar9 = PTR_DAT_04bb2020;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "Countdown";
  iVar3 = FUN_008841f4(*(undefined8 *)PTR_DAT_04bb32f0,&local_70);
  if (iVar3 == 2) {
    local_74 = 8;
  }
  else {
    if (iVar3 == 1) {
      uVar6 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      uVar5 = (uint)(uVar6 >> 0x20);
      uVar7 = uVar5 & 0xff;
      if ((char)(uVar6 >> 0x20) < '\x02' || uVar7 == 0x17) {
        uVar5 = uVar5 >> 8 & 0xff;
        if (uVar7 == 0x17) {
          if ((char)(uVar6 >> 0x28) < '\x1e') {
            local_74 = 1;
          }
          else if (uVar5 < 0x32) {
            local_74 = 2;
          }
          else if (uVar5 < 0x37) {
            local_74 = 3;
          }
          else {
            local_74 = 4;
            if (0x3a < uVar5) {
              local_74 = 5;
            }
          }
        }
        else {
          bVar1 = false;
          bVar2 = false;
          if ((uVar6 & 0xff00000000) == 0 && (uVar6 >> 0x28 & 0xff) == 0) {
            iVar3 = (int)(char)(uVar6 >> 0x30);
            bVar2 = SBORROW4(iVar3,10);
            bVar1 = iVar3 + -10 < 0;
          }
          local_74 = 6;
          if (bVar1 == bVar2) {
            local_74 = 7;
          }
        }
        goto LAB_01ee9434;
      }
    }
    local_74 = 0;
  }
LAB_01ee9434:
  if (((local_74 != 5) && (local_74 != 6)) && (local_74 != 7)) {
    FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
    return;
  }
  *(int *)(param_1 + 0x783c) = (uint)(*(int *)(*(long *)(param_1 + 8) + 0x500) == 0) << 0x1f;
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x60);
  if (plVar4 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar4 = &DAT_05240280;
      puVar9 = PTR_DAT_04bb2020;
    }
    else {
      plVar4 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar4 + 0x370))(auStack_7c);
  iVar3 = FUN_0277d6c4(auStack_7c);
  if (iVar3 == 0x166d) {
    if (*(int *)(param_1 + 0x77b8) != 0x24) {
      local_70 = puVar9 + 0x10;
      pcStack_68 = "";
      FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),(int *)(param_1 + 0x783c),PTR_DAT_04bb65b0,
                   &local_70,6);
      *(undefined4 *)(param_1 + 0xae74) = 1;
    }
  }
  else {
    lVar8 = *(long *)(param_1 + 0x10);
    local_84 = 0x166d;
    FUN_0277d4ac(&local_84);
    local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
    local_34 = 0;
    FUN_01e5a930(0x40000000,lVar8,0xe,PTR_DAT_04bb2150,&local_70,&local_34,PTR_DAT_04bc1600,6);
    local_3d = 0;
    local_5c[0] = 0;
    *(undefined4 *)(lVar8 + 0x40c) = local_84._4_4_;
    *(undefined4 *)(lVar8 + 0x408) = (undefined4)local_84;
    pcStack_68 = local_5c;
    local_60 = 0x20;
    lVar8 = *(long *)(lVar8 + 0x358);
    local_70 = PTR_DAT_04bb2028 + 0x10;
    (**(code **)(*(long *)(lVar8 + 0x3e0) + 0x18))(lVar8 + 0x3e0);
    FUN_038d1270(&local_70,"NpcActorAction.%s",*(undefined8 *)(lVar8 + 1000));
    *(undefined4 *)(param_1 + 0xae74) = 0;
    *(uint *)(*(long *)(param_1 + 8) + 0x69c) = *(uint *)(*(long *)(param_1 + 8) + 0x69c) | 0x10;
  }
  return;
}

