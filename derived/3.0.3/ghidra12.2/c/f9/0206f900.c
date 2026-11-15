
/* WARNING: Removing unreachable block (ram,0x0206f9b8) */
/* WARNING: Removing unreachable block (ram,0x0206fa34) */
/* WARNING: Removing unreachable block (ram,0x0206fa44) */

void FUN_0206f900(long param_1)

{
  uint *puVar1;
  short sVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *local_a0;
  char *local_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined1 local_67;
  undefined *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined1 local_38;
  
  puVar5 = PTR_DAT_04bc39f8;
  puVar4 = PTR_DAT_04bb2020;
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 7 & 1) != 0) {
      local_a0 = PTR_DAT_04bb2020 + 0x10;
      local_98 = "NpcInteriorCoordinate";
      iVar6 = FUN_02743000(&local_a0);
      if (iVar6 != 0) {
        uVar8 = FUN_0290d828();
        if ((uVar8 & 1) == 0) {
          lVar9 = *(long *)PTR_DAT_04bc3a50;
          piVar11 = (int *)(lVar9 + 0x680);
          if (0 < *piVar11) {
            lVar10 = 0;
            puVar12 = *(undefined8 **)(lVar9 + 0x690);
            do {
              puVar13 = *(undefined8 **)(*(long *)(lVar9 + 0x688) + lVar10 * 8);
              lVar10 = lVar10 + 1;
              *puVar13 = puVar12;
              *(undefined8 **)(lVar9 + 0x690) = puVar13;
              puVar12 = puVar13;
            } while (lVar10 < *piVar11);
          }
          *piVar11 = 0;
        }
        *(undefined2 *)(param_1 + 8) = 1;
        local_a0 = (undefined *)0x0;
        if (*(long *)PTR_DAT_04bb2720 != 0) {
          lVar9 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
          local_a0 = (undefined *)0x0;
          if (lVar9 != 0) {
            local_a0 = *(undefined **)(lVar9 + 0xd0);
          }
        }
        lVar9 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
        if (lVar9 != 0) {
          local_67 = 0;
          local_40 = 0;
          local_38 = 0;
          local_60 = PTR_DAT_04bbc5d8 + 0x10;
          puStack_58 = PTR_DAT_04bb2018 + 0x10;
          local_50 = 0;
          local_90 = PTR_DAT_04bbc1a0 + 0x10;
          puStack_88 = PTR_DAT_04bb2010 + 0x10;
          local_98 = (char *)CONCAT44(local_98._4_4_,0xec);
          local_80 = *(undefined4 *)(lVar9 + 0x48);
          uStack_7c = *(undefined4 *)(lVar9 + 0x4c);
          local_70 = *(undefined4 *)(lVar9 + 0x58);
          uStack_6c = *(undefined4 *)(lVar9 + 0x5c);
          local_68 = 1;
          local_78 = puStack_88;
          puStack_48 = puStack_58;
          FUN_01389860(param_1 + 0x10,&local_a0);
        }
        uVar3 = *(ushort *)PTR_DAT_04bbdeb0;
        if ((long)(short)uVar3 != 0xffffffffffffffff) {
          puVar1 = (uint *)(puVar5 + ((long)(short)uVar3 & 0xffffffffU) * 8);
          if (0xff < uVar3) {
            puVar1 = (uint *)puVar5;
          }
          if ((*puVar1 >> 0x1d & 1) != 0) {
            return;
          }
        }
        *(undefined4 *)(param_1 + 0x1580) = 0xffffffff;
        *(undefined1 *)(param_1 + 0x26b8) = 0;
        local_98 = "UISelectedNpcVillagerIndex";
        local_a0 = puVar4 + 0x10;
        iVar6 = FUN_02743000(&local_a0);
        uVar7 = iVar6 - 1;
        if (uVar7 < 10) {
          *(uint *)(param_1 + 0x1580) = uVar7;
          local_98 = "AudioShuffleState";
          local_a0 = puVar4 + 0x10;
          uVar7 = FUN_027490f0(uVar7,&local_a0);
          if ((uVar7 >> 1 & 1) != 0) {
            *(undefined1 *)(param_1 + 0x26b8) = 1;
          }
        }
      }
    }
  }
  return;
}

