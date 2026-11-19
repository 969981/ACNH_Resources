
void FUN_038654a0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  bool bVar9;
  bool bVar10;
  undefined *local_70;
  undefined4 local_68;
  
  iVar5 = *(int *)(param_1 + 0x430) - *(int *)(param_1 + 0x438);
  bVar4 = *(byte *)(param_1 + 1000);
  if ((bVar4 >> 1 & 1) != 0) {
    uVar3 = *(uint *)(param_1 + 0x434);
    uVar2 = 0;
    if ((int)uVar3 < iVar5) {
      uVar2 = ~uVar3;
    }
    if (iVar5 < 0) {
      uVar2 = uVar3 + 1;
    }
    iVar5 = uVar2 + iVar5;
  }
  uVar2 = *(uint *)(param_1 + 0x208);
  if (0 < (int)uVar2) {
    iVar5 = *(int *)(param_1 + 0x2e8) * iVar5;
    if (*(int *)(param_1 + 0x298) == 2) {
      uVar8 = 0;
      puVar1 = PTR_DAT_04bc0cb8 + 0x10;
      bVar10 = true;
      do {
        bVar9 = bVar10;
        if ((uVar8 < *(uint *)(param_1 + 0x208)) &&
           (lVar6 = *(long *)(*(long *)(param_1 + 0x210) + uVar8 * 8), lVar6 != 0)) {
          plVar7 = *(long **)(lVar6 + 0x1d0);
          local_68 = 7;
          bVar9 = iVar5 + (int)uVar8 < *(int *)(param_1 + 0x3d4);
          if ((bVar4 & 2) != 0) {
            bVar9 = bVar10;
          }
          local_70 = puVar1;
          (**(code **)(*plVar7 + 0x18))(plVar7,&local_70);
          (**(code **)(plVar7[3] + 0x88))(plVar7[1],bVar9);
          FUN_03d5d0e0(*(undefined8 *)(*(long *)(param_1 + 0x210) + uVar8 * 8),
                       *(undefined4 *)(param_1 + 0x2e0),bVar9);
        }
        uVar8 = uVar8 + 1;
        bVar10 = bVar9;
      } while (uVar2 != uVar8);
    }
    else {
      uVar8 = 0;
      puVar1 = PTR_DAT_04bc0cb8 + 0x10;
      bVar10 = true;
      do {
        bVar9 = bVar10;
        if ((uVar8 < *(uint *)(param_1 + 0x208)) &&
           (lVar6 = *(long *)(*(long *)(param_1 + 0x210) + uVar8 * 8), lVar6 != 0)) {
          plVar7 = *(long **)(lVar6 + 0x1d0);
          local_68 = 7;
          bVar9 = iVar5 + (int)uVar8 < *(int *)(param_1 + 0x3d4);
          if ((bVar4 & 2) != 0) {
            bVar9 = bVar10;
          }
          local_70 = puVar1;
          (**(code **)(*plVar7 + 0x18))(plVar7,&local_70);
          (**(code **)(plVar7[3] + 0x88))(plVar7[1],bVar9);
        }
        uVar8 = uVar8 + 1;
        bVar10 = bVar9;
      } while (uVar2 != uVar8);
    }
  }
  return;
}

