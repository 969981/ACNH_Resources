
/* WARNING: Removing unreachable block (ram,0x02b60670) */
/* WARNING: Removing unreachable block (ram,0x02b60660) */
/* WARNING: Removing unreachable block (ram,0x02b606c8) */

bool FUN_02b60610(float *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined *local_c0;
  undefined1 local_b8;
  int local_b4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined *local_98;
  int local_90;
  undefined **local_88;
  undefined **ppuStack_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_04bb2010;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x6622bd46) {
    return false;
  }
  local_68 = (undefined *)CONCAT44((int)((ulong)local_68 >> 0x20),3);
  local_98 = PTR_DAT_04bc43f8 + 0x10;
  local_c0 = PTR_DAT_04bc4608 + 0x10;
  local_b0 = PTR_DAT_04bb2010 + 0x10;
  local_90 = DAT_05636e64;
  local_b8 = PTR_DAT_04bbc570[8];
  local_b4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
  local_a8 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x18);
  uStack_a4 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x1c);
  local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  if (DAT_05636e64 != 0) {
    ppuStack_80 = &local_98;
    local_88 = &PTR_FUN_04a9b150;
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
    }
    local_78 = (undefined1 *)&local_c0;
    if (puVar1[1] != 0) {
      local_78 = (undefined1 *)&local_c0;
      plVar5 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar4 = (**(code **)(*plVar5 + 0x18))();
      if (0 < iVar4) {
        iVar8 = 0;
        do {
          FUN_01360490(&local_68,puVar1[1],iVar8);
          uVar6 = (*(code *)*local_88)(&local_88,&local_68);
          if ((uVar6 & 1) != 0) break;
          bVar3 = iVar4 + -1 != iVar8;
          iVar8 = iVar8 + 1;
        } while (bVar3);
      }
    }
  }
  if (local_b4 != 0) {
    puStack_60 = puVar2 + 0x10;
    local_58 = 0;
    local_48 = 0;
    local_68 = PTR_DAT_04bbc1a0 + 0x10;
    local_50 = puStack_60;
    FUN_02a8f7b0(&local_c0,&local_68);
    iVar4 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
    iVar8 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
    if ((((int)local_58 <= iVar4 && iVar4 <= (int)local_48) && local_58._4_4_ <= iVar8) &&
        iVar8 == local_48._4_4_ ||
        ((((int)local_58 <= iVar4 && iVar4 <= (int)local_48) && local_58._4_4_ <= iVar8) &&
        iVar8 - local_48._4_4_ < 0) !=
        ((((int)local_58 <= iVar4 && iVar4 <= (int)local_48) && local_58._4_4_ <= iVar8) &&
        SBORROW4(iVar8,local_48._4_4_))) {
      local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
      lVar7 = *(long *)PTR_DAT_04bb27c8;
      if (((lVar7 != 0) && (*(long *)(lVar7 + 0xa8) != 0)) && (*(char *)(lVar7 + 0x11c8) == '\0')) {
        FUN_0093a950(lVar7 + 0x28,param_1,&local_88);
        return (int)local_88 == 0x16;
      }
    }
  }
  return false;
}

