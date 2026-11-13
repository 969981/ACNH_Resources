
void FUN_0132fc90(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined8 *puVar6;
  int *piVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *local_70;
  int local_68;
  int iStack_64;
  undefined2 local_48;
  undefined2 local_46;
  undefined4 local_44;
  
  lVar12 = *(long *)(param_1 + 8);
  if ((lVar12 != 0) && (uVar2 = *(uint *)(param_2 + 0x138), 0 < (int)uVar2)) {
    uVar13 = 0;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    do {
      lVar11 = *(long *)(*(long *)(param_2 + 0x120) + uVar13 * 8);
      puVar6 = (undefined8 *)(**(code **)(*(long *)(lVar11 + 0x60) + 0xf0))();
      uVar14 = *puVar6;
      local_46 = 0;
      local_44 = 0;
      local_48 = (undefined2)uVar14;
      FUN_0277d4ac(&local_48);
      local_46 = (undefined2)((ulong)uVar14 >> 0x10);
      local_44 = (undefined4)((ulong)uVar14 >> 0x20);
      piVar7 = (int *)(**(code **)(*(long *)(lVar11 + 0x98) + 0xf0))();
      iVar3 = *piVar7;
      piVar7 = (int *)(**(code **)(*(long *)(lVar11 + 200) + 0xf0))();
      iVar4 = *piVar7;
      pbVar8 = (byte *)(**(code **)(*(long *)(lVar11 + 0xf8) + 0xf0))((long *)(lVar11 + 0xf8));
      bVar5 = *pbVar8;
      uVar9 = FUN_0277da10(&local_48);
      if ((uVar9 & 1) != 0) {
        uVar10 = (uint)bVar5;
        local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar10);
        lVar11 = lVar12 + 200 + (ulong)uVar10 * 0x10;
        if (7 < uVar10) {
          lVar11 = lVar12 + 200;
        }
        if (*(long *)(lVar11 + 8) != 0) {
          local_68 = *(int *)(lVar12 + 0x48) + iVar3;
          iStack_64 = *(int *)(lVar12 + 0x4c) + iVar4;
          local_70 = puVar1;
          if (*(long *)(lVar11 + 8) != 0) {
            FUN_012e5290(*(long *)(lVar11 + 8),&local_48,&local_70);
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar2 != uVar13);
  }
  return;
}

