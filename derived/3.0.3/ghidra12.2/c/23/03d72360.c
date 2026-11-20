
void FUN_03d72360(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *local_70;
  undefined8 *puStack_68;
  
  if (param_1[3] != 0) {
    lVar4 = param_1[5];
    if (lVar4 != 0) {
      if (*(long *)(param_3 + 0x30) == 0) {
        iVar2 = *(int *)(lVar4 + 0x230);
      }
      else {
        lVar4 = FUN_03d712c0(lVar4,param_2);
        if (lVar4 == 0) {
          return;
        }
        iVar2 = *(int *)(lVar4 + 0x1f8);
      }
      if (0 < iVar2) {
        if (param_1[6] == 0) {
          lVar4 = (**(code **)(*param_1 + 0x28))(param_1);
          param_1[6] = lVar4;
          FUN_03d59090(param_1[1],lVar4,param_1 + 7);
        }
        lVar4 = param_1[5];
        if (*(long *)(param_3 + 0x30) == 0) {
          uVar3 = *(uint *)(lVar4 + 0x230);
          if (0 < (int)uVar3) {
            uVar11 = 0;
            puVar1 = PTR_DAT_04bb2020 + 0x10;
            do {
              puStack_68 = &DAT_0407ebb1;
              local_70 = puVar1;
              lVar6 = FUN_03d72580(param_1,*(undefined8 *)(*(long *)(lVar4 + 0x218) + uVar11 * 8),
                                   &local_70,param_3);
              lVar7 = param_1[6];
              plVar9 = (long *)(lVar7 + 0x18);
              lVar8 = *plVar9;
              plVar5 = (long *)(*(int *)(lVar7 + 0x2c) + lVar6);
              *plVar9 = (long)plVar5;
              *plVar5 = lVar8;
              plVar5[1] = (long)plVar9;
              if (lVar8 != 0) {
                *(long **)(lVar8 + 8) = plVar5;
              }
              uVar11 = uVar11 + 1;
              *(int *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + 1;
            } while (uVar3 != uVar11);
          }
        }
        else {
          lVar4 = FUN_03d712c0(lVar4,param_2);
          if ((lVar4 != 0) && (uVar3 = *(uint *)(lVar4 + 0x1f8), 0 < (int)uVar3)) {
            uVar11 = 0;
            puVar1 = PTR_DAT_04bb2020 + 0x10;
            do {
              if (uVar11 < *(uint *)(lVar4 + 0x1d8)) {
                uVar10 = *(undefined8 *)(*(long *)(lVar4 + 0x1e0) + uVar11 * 8);
              }
              else {
                uVar10 = 0;
              }
              plVar5 = (long *)(**(code **)(*(long *)(lVar4 + 0xe8) + 0xf0))((long *)(lVar4 + 0xe8))
              ;
              (**(code **)(*plVar5 + 0x18))();
              puStack_68 = (undefined8 *)plVar5[1];
              local_70 = puVar1;
              lVar6 = FUN_03d72580(param_1,uVar10,&local_70,param_3);
              lVar7 = param_1[6];
              plVar9 = (long *)(lVar7 + 0x18);
              lVar8 = *plVar9;
              plVar5 = (long *)(*(int *)(lVar7 + 0x2c) + lVar6);
              *plVar9 = (long)plVar5;
              *plVar5 = lVar8;
              plVar5[1] = (long)plVar9;
              if (lVar8 != 0) {
                *(long **)(lVar8 + 8) = plVar5;
              }
              uVar11 = uVar11 + 1;
              *(int *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + 1;
            } while (uVar3 != uVar11);
          }
        }
      }
    }
  }
  return;
}

