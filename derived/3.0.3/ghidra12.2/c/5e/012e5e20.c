
void FUN_012e5e20(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  undefined **local_98;
  uint local_90;
  uint uStack_8c;
  undefined *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  
  plVar12 = (long *)(param_1 + 0x28);
  uVar7 = (**(code **)(*plVar12 + 0x10))(plVar12);
  if (((uVar7 & 1) != 0) && (lVar8 = (**(code **)*plVar12)(plVar12), lVar8 != 0)) {
    iVar1 = *(int *)(param_3 + 8);
    iVar14 = *(int *)(param_3 + 0xc);
    iVar2 = *(int *)(param_1 + 0x10);
    iVar13 = *(int *)(param_1 + 0x14);
    plVar9 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x28))(plVar12);
    uVar4 = (**(code **)(*plVar9 + 0x18))();
    if ((uint)(iVar1 - iVar2) < uVar4) {
      plVar9 = (long *)(**(code **)*plVar12)(plVar12);
      uVar4 = (**(code **)(*plVar9 + 0x20))();
      if (((uint)(iVar14 - iVar13) < uVar4) && (uVar7 = FUN_0277da10(param_2), (uVar7 & 1) != 0)) {
        local_78 = 0;
        local_88 = PTR_DAT_04bbc1a0 + 0x10;
        puStack_80 = PTR_DAT_04bb2010 + 0x10;
        local_68 = 0;
        local_70 = puStack_80;
        FUN_012e5518(&local_88,param_2);
        iVar2 = (int)local_78 + *(int *)(param_3 + 8);
        iVar14 = local_78._4_4_ + *(int *)(param_3 + 0xc);
        local_78 = CONCAT44(iVar14,iVar2);
        local_68._4_4_ = local_68._4_4_ + *(int *)(param_3 + 0xc);
        iVar1 = local_68._4_4_ + 1;
        local_68 = CONCAT44(local_68._4_4_,(int)local_68 + *(int *)(param_3 + 8));
        if (iVar1 != iVar14) {
          iVar13 = iVar2;
          do {
            uVar4 = iVar13 - *(int *)(param_1 + 0x10);
            uVar3 = iVar14 - *(int *)(param_1 + 0x14);
            local_98 = &PTR_FUN_0498d600;
            local_90 = uVar4;
            uStack_8c = uVar3;
            plVar9 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x28))(plVar12);
            uVar5 = (**(code **)(*plVar9 + 0x18))();
            if (uVar4 < uVar5) {
              plVar9 = (long *)(**(code **)*plVar12)(plVar12);
              uVar5 = (**(code **)(*plVar9 + 0x20))();
              if (uVar3 < uVar5) {
                if ((iVar13 == *(int *)(param_3 + 8)) && (iVar14 == *(int *)(param_3 + 0xc))) {
                  uVar7 = (*(code *)((undefined8 *)*plVar12)[2])(plVar12);
                  if (((uVar7 & 1) != 0) && (lVar8 = (**(code **)*plVar12)(plVar12), lVar8 != 0)) {
                    FUN_012e5870(param_1,PTR_DAT_04bb37e0,&local_98);
                    lVar8 = *(long *)(param_1 + 0x18);
                    if ((lVar8 != 0) &&
                       ((uVar4 < *(uint *)(lVar8 + 8) && (uVar3 < *(uint *)(lVar8 + 0xc))))) {
                      *(undefined4 *)
                       (*(long *)(lVar8 + 0x10) +
                       (long)(int)(uVar4 + *(uint *)(lVar8 + 8) * uVar3) * 4) =
                           *(undefined4 *)PTR_DAT_04bbc188;
                    }
                  }
                }
                else {
                  plVar9 = (long *)(**(code **)*plVar12)(plVar12);
                  uVar5 = (**(code **)(*plVar9 + 0x18))();
                  uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9);
                  if (uVar5 <= uVar4) {
                    uVar4 = 0;
                  }
                  if (uVar6 <= uVar3) {
                    uVar3 = 0;
                  }
                  if (((long *)plVar9[5] == (long *)0x0) ||
                     (puVar10 = *(undefined8 **)plVar9[5], puVar10 == (undefined8 *)0x0)) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = (**(code **)*puVar10)();
                    uVar7 = uVar7 & 0xffffffff;
                  }
                  lVar8 = (**(code **)(*plVar9 + 0x28))(plVar9,uVar4,uVar3);
                  uVar11 = FUN_0277da10(lVar8 + plVar9[1]);
                  if ((uVar11 & 1) == 0) {
                    FUN_012e5870(param_1,PTR_DAT_04bb37e0,&local_98);
                  }
                  if ((((uVar7 & 1) != 0) && (plVar9[5] != 0)) &&
                     (puVar10 = *(undefined8 **)(plVar9[5] + 8), puVar10 != (undefined8 *)0x0)) {
                    (**(code **)*puVar10)();
                  }
                }
              }
            }
            if (iVar13 < (int)local_68) {
              iVar13 = iVar13 + 1;
            }
            else {
              iVar14 = iVar14 + 1;
              iVar13 = (int)local_78;
            }
          } while ((iVar2 != iVar13) || (iVar1 != iVar14));
        }
      }
    }
  }
  return;
}

