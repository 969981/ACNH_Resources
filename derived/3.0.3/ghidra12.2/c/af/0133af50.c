
void FUN_0133af50(long param_1,long param_2)

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
  ulong uVar12;
  undefined8 uVar13;
  undefined *local_70;
  int local_68;
  int iStack_64;
  undefined2 local_48;
  undefined2 local_46;
  undefined4 local_44;
  
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_2 + 0x138);
    if (0 < (int)uVar2) {
      uVar12 = 0;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      do {
        lVar11 = *(long *)(*(long *)(param_2 + 0x120) + uVar12 * 8);
        puVar6 = (undefined8 *)(**(code **)(*(long *)(lVar11 + 0x60) + 0xf0))();
        uVar13 = *puVar6;
        local_46 = 0;
        local_44 = 0;
        local_48 = (undefined2)uVar13;
        FUN_0277d4ac(&local_48);
        local_46 = (undefined2)((ulong)uVar13 >> 0x10);
        local_44 = (undefined4)((ulong)uVar13 >> 0x20);
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
          lVar11 = param_1 + 200 + (ulong)uVar10 * 0x10;
          if (7 < uVar10) {
            lVar11 = param_1 + 200;
          }
          if (*(long *)(lVar11 + 8) != 0) {
            local_68 = *(int *)(param_1 + 0x48) + iVar3;
            iStack_64 = *(int *)(param_1 + 0x4c) + iVar4;
            local_70 = puVar1;
            FUN_012e5290(*(long *)(lVar11 + 8),&local_48,&local_70);
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar2 != uVar12);
    }
  }
  return;
}

