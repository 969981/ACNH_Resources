
void FUN_01342f00(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  byte *pbVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined *local_80;
  int local_78;
  int iStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  
  puVar3 = PTR_DAT_04bbbc68;
  if ((param_2 != 0) && (uVar2 = *(uint *)(param_1 + 0x2e0), 0 < (int)uVar2)) {
    uVar12 = 0;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    do {
      lVar11 = *(long *)(*(long *)(param_1 + 0x2c8) + uVar12 * 8);
      puVar7 = (undefined8 *)(**(code **)(*(long *)(lVar11 + 0x60) + 0xf0))();
      uVar13 = *puVar7;
      local_64 = 0;
      local_68 = (uint)(ushort)uVar13;
      FUN_0277d4ac(&local_68);
      local_68 = CONCAT13((char)((ulong)uVar13 >> 0x18),
                          CONCAT12((char)((ulong)uVar13 >> 0x10),(undefined2)local_68));
      local_64 = (undefined4)((ulong)uVar13 >> 0x20);
      uVar8 = FUN_0277da10(&local_68);
      if ((uVar8 & 1) != 0) {
        lVar14 = *(long *)puVar3;
        if (((((lVar14 != 0) && (*(long *)(lVar14 + 0xb0) != 0)) &&
             (*(long *)(*(long *)(lVar14 + 0xb0) + 8) != 0)) &&
            ((*(long *)(lVar14 + 0x488) != 0 && (*(long *)(*(long *)(lVar14 + 0x488) + 8) != 0))))
           && ((*(long *)(lVar14 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar14 + 0x2b0) + 8) != 0))))
        {
          uVar4 = FUN_0277d6c4(&local_68);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            FUN_0124c030(&local_80,&local_68);
            iVar5 = FUN_0123db50(&local_78,local_70);
            if (iVar5 - 0x18U < 7) {
              uVar6 = FUN_00a8c4b4(*(undefined8 *)PTR_DAT_04bb30a0);
              local_90 = local_68;
              uStack_8c = local_64;
              FUN_01201bc0(&local_88,&local_90,uVar6);
              local_68 = local_88;
              local_64 = uStack_84;
            }
          }
        }
        pbVar9 = (byte *)(**(code **)(*(long *)(lVar11 + 0xf8) + 0xf0))();
        uVar4 = (uint)*pbVar9;
        local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar4);
        lVar14 = param_2 + 200 + (ulong)uVar4 * 0x10;
        if (7 < uVar4) {
          lVar14 = param_2 + 200;
        }
        if (*(long *)(lVar14 + 8) != 0) {
          piVar10 = (int *)(**(code **)(*(long *)(lVar11 + 0x98) + 0xf0))();
          iVar5 = *piVar10;
          piVar10 = (int *)(**(code **)(*(long *)(lVar11 + 200) + 0xf0))((long *)(lVar11 + 200));
          local_78 = *(int *)(param_2 + 0x48) + iVar5;
          iStack_74 = *(int *)(param_2 + 0x4c) + *piVar10;
          local_80 = puVar1;
          if (*(long *)(lVar14 + 8) != 0) {
            FUN_012e5290(*(long *)(lVar14 + 8),&local_68,&local_80);
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar2 != uVar12);
  }
  return;
}

