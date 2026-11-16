
void FUN_02824d40(long param_1,undefined4 *param_2,char param_3)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined *local_98;
  undefined8 local_90;
  undefined4 local_78;
  undefined4 uStack_74;
  char local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined2 local_64;
  undefined *local_60;
  char *local_58;
  undefined8 local_38;
  
  local_38 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_38);
  puVar6 = PTR_DAT_04bb2020;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  local_58 = PTR_DAT_04bb2120;
  if (param_3 == '\x03') {
    local_98 = (undefined *)0x4b3;
    FUN_0277d4ac(&local_98);
    local_58 = "ChyEvent_GetTrophyGold";
    local_38 = local_98;
    local_90 = "ChyEvent_TalkTrophyGold";
  }
  else if (param_3 == '\x02') {
    local_98 = (undefined *)0x4b4;
    FUN_0277d4ac(&local_98);
    local_58 = "ChyEvent_GetTrophySilver";
    local_38 = local_98;
    local_90 = "ChyEvent_TalkTrophySilver";
  }
  else {
    if (param_3 != '\x01') goto LAB_02824e58;
    local_98 = (undefined *)0x4b5;
    FUN_0277d4ac(&local_98);
    local_58 = "ChyEvent_GetTrophyCopper";
    local_38 = local_98;
    local_90 = "ChyEvent_TalkTrophyCopper";
  }
  local_98 = puVar6 + 0x10;
  FUN_0274d104(param_2,&local_98,1);
LAB_02824e58:
  iVar7 = FUN_0274ce10(param_2,&local_60);
  if (iVar7 == 0) {
    FUN_01b46be0(&local_98);
    uVar2 = *param_2;
    if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar7 != 0)) {
      FUN_00dd5f80(PTR_DAT_04bb8aa0);
      __cxa_guard_release(PTR_DAT_04bb8aa8);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
      uVar11 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar11 * 4) == 0x29) goto LAB_02824ebc;
        uVar11 = uVar11 + 1;
      } while (*(uint *)PTR_DAT_04bb8aa0 != uVar11);
    }
    uVar11 = 0;
LAB_02824ebc:
    uVar5 = *(ushort *)(param_1 + 0x10);
    bVar3 = *(byte *)(param_1 + 0x12);
    bVar4 = *(byte *)(param_1 + 0x13);
    nn::time::IsValidDate((uint)uVar5,(uint)bVar3,(uint)bVar4);
    local_78 = (undefined4)uVar11;
    uStack_74 = 5;
    local_6c = (undefined4)local_38;
    uStack_68 = local_38._4_4_;
    local_64 = 0;
    local_90 = (char *)CONCAT44((uint)bVar4 << 0x18 | (uint)bVar3 << 0x10 | (uint)uVar5,uVar2);
    local_70 = param_3;
    lVar8 = (**(code **)(local_98 + 0x20))(&local_98,*(undefined8 *)PTR_DAT_04bc0580);
    if (lVar8 != 0) {
      plVar9 = *(long **)PTR_DAT_04bb4fa8;
      lVar10 = *plVar9;
      plVar1 = (long *)(*(int *)((long)plVar9 + 0x14) + lVar8);
      *plVar9 = (long)plVar1;
      *plVar1 = lVar10;
      plVar1[1] = (long)plVar9;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 8) = plVar1;
      }
      *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
    }
    FUN_0274d104(param_2,&local_60,1);
  }
  return;
}

