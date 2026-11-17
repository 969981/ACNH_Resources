
void FUN_02fae314(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  plVar5 = param_2 + 4;
  (**(code **)(*plVar5 + 0x18))(plVar5);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  if (((char *)param_2[5] == "") || (*(char *)param_2[5] == '\0')) {
    if (((DAT_056cc880 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056cc880), iVar3 != 0)) {
      DAT_056cc740 = PTR_DAT_04bb2020 + 0x10;
      DAT_056cc748 = &DAT_040f601a;
      DAT_056cc758 = &DAT_0407ebb1;
      DAT_056cc778 = &DAT_0407ebb1;
      DAT_056cc798 = &DAT_0407ebb1;
      DAT_056cc768 = "ChgNormalHard";
      DAT_056cc788 = "ChgHardNormal";
      DAT_056cc7a8 = "ChgSoftHard";
      DAT_056cc7c8 = "ChgNormalSoft";
      DAT_056cc7e8 = "ChgSoftNormal";
      DAT_056cc808 = "ChgHardSoft";
      DAT_056cc828 = &DAT_04090f49;
      DAT_056cc848 = "NameOff";
      DAT_056cc7b8 = &DAT_0407ebb1;
      DAT_056cc7d8 = &DAT_0407ebb1;
      DAT_056cc7f8 = &DAT_0407ebb1;
      DAT_056cc818 = &DAT_0407ebb1;
      DAT_056cc838 = &DAT_0407ebb1;
      DAT_056cc858 = &DAT_0407ebb1;
      DAT_056cc868 = &DAT_040fe5ab;
      DAT_056cc878 = &DAT_0407ebb1;
      DAT_056cc750 = DAT_056cc740;
      DAT_056cc760 = DAT_056cc740;
      DAT_056cc770 = DAT_056cc740;
      DAT_056cc780 = DAT_056cc740;
      DAT_056cc790 = DAT_056cc740;
      DAT_056cc7a0 = DAT_056cc740;
      DAT_056cc7b0 = DAT_056cc740;
      DAT_056cc7c0 = DAT_056cc740;
      DAT_056cc7d0 = DAT_056cc740;
      DAT_056cc7e0 = DAT_056cc740;
      DAT_056cc7f0 = DAT_056cc740;
      DAT_056cc800 = DAT_056cc740;
      DAT_056cc810 = DAT_056cc740;
      DAT_056cc820 = DAT_056cc740;
      DAT_056cc830 = DAT_056cc740;
      DAT_056cc840 = DAT_056cc740;
      DAT_056cc850 = DAT_056cc740;
      DAT_056cc860 = DAT_056cc740;
      DAT_056cc870 = DAT_056cc740;
      __cxa_guard_release(&DAT_056cc880);
    }
    if (((DAT_056cc898 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056cc898), iVar3 != 0)) {
      DAT_056cc888 = 0xa00000002;
      DAT_056cc890 = &DAT_056cc740;
      __cxa_guard_release(&DAT_056cc898);
    }
    if (((DAT_056cc8c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056cc8c0), iVar3 != 0)) {
      DAT_056cc8a0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056cc8a8 = &DAT_04093659;
      DAT_056cc8b8 = "@Name";
      DAT_056cc8b0 = DAT_056cc8a0;
      __cxa_guard_release(&DAT_056cc8c0);
    }
    if (((DAT_056cc8f8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056cc8f8), iVar3 != 0)) {
      DAT_056cc8c8 = PTR_DAT_04bb2020 + 0x10;
      DAT_056cc8d0 = "N_Move_00";
      DAT_056cc8f0 = "W_NameBase_00";
      DAT_056cc8e0 = "P_NameBase_00";
      DAT_056cc8d8 = DAT_056cc8c8;
      DAT_056cc8e8 = DAT_056cc8c8;
      __cxa_guard_release(&DAT_056cc8f8);
    }
    if (param_2[1] != 0) {
      local_48 = *param_2;
      local_38 = &DAT_04aea8a0;
      puStack_30 = &DAT_056cc888;
      local_28 = 1;
      local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
      puStack_40 = &DAT_04aea8b0;
      lVar6 = *(long *)(param_2[1] + 0x10);
      FUN_0386e230(lVar6 + 0x200,lVar6,&local_50);
    }
    lVar6 = *(long *)PTR_DAT_04bb2698;
    if (lVar6 == 0) {
      plVar5 = malloc(0x98);
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar1 = (undefined8 *)(lVar6 + 8);
      if (lVar4 != 0) {
        puVar1 = (undefined8 *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x98,8);
    }
    uVar7 = *param_2;
    *(undefined1 *)(plVar5 + 3) = 0;
    plVar5[2] = 0;
    puVar2 = PTR_DAT_04bc77f0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    *(undefined4 *)(plVar5 + 0x10) = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    plVar5[10] = 0;
    plVar5[0xb] = 0;
    *plVar5 = (long)(puVar2 + 0x10);
    plVar5[1] = 0;
    plVar5[0xc] = 0;
    plVar5[0xd] = 0;
    plVar5[0xe] = 0;
    plVar5[0xf] = 0;
    plVar5[0x11] = 0;
    plVar5[0x12] = 0;
    FUN_02fa67c0(plVar5,uVar7);
    *(long **)(*(long *)(param_2[1] + 8) + 0x1b0) = plVar5;
  }
  return;
}

