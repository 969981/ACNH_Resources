
void FUN_01335660(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  int *piVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *local_78;
  int local_70;
  int iStack_6c;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  
  if ((param_2 != 0) && (uVar3 = *(uint *)(param_1 + 0x138), 0 < (int)uVar3)) {
    uVar11 = 0;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    do {
      lVar10 = *(long *)(*(long *)(param_1 + 0x120) + uVar11 * 8);
      puVar5 = (undefined8 *)(**(code **)(*(long *)(lVar10 + 0x60) + 0xf0))();
      uVar12 = *puVar5;
      local_66 = 0;
      local_64 = 0;
      local_68 = (undefined2)uVar12;
      FUN_0277d4ac(&local_68);
      local_66 = (undefined2)((ulong)uVar12 >> 0x10);
      local_64 = (undefined4)((ulong)uVar12 >> 0x20);
      uVar6 = FUN_0277da10(&local_68);
      if (((uVar6 & 1) != 0) &&
         (((param_3 & 1) == 0 || (uVar6 = FUN_0277e294(&local_68), (uVar6 & 1) != 0)))) {
        pbVar7 = (byte *)(**(code **)(*(long *)(lVar10 + 0xf8) + 0xf0))();
        uVar9 = (uint)*pbVar7;
        local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar9);
        lVar2 = param_2 + 200 + (ulong)uVar9 * 0x10;
        if (7 < uVar9) {
          lVar2 = param_2 + 200;
        }
        if (*(long *)(lVar2 + 8) != 0) {
          piVar8 = (int *)(**(code **)(*(long *)(lVar10 + 0x98) + 0xf0))();
          iVar4 = *piVar8;
          piVar8 = (int *)(**(code **)(*(long *)(lVar10 + 200) + 0xf0))((long *)(lVar10 + 200));
          local_70 = *(int *)(param_2 + 0x48) + iVar4;
          iStack_6c = *(int *)(param_2 + 0x4c) + *piVar8;
          local_78 = puVar1;
          if (*(long *)(lVar2 + 8) != 0) {
            FUN_012e5290(*(long *)(lVar2 + 8),&local_68,&local_78);
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar3 != uVar11);
  }
  return;
}

