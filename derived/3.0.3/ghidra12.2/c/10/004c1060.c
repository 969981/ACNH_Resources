
void FUN_004c1060(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 *puVar8;
  long *plVar9;
  undefined4 *puVar10;
  long lVar11;
  int iVar12;
  long local_80;
  long local_78;
  ulong local_70;
  int local_68;
  
  puVar1 = PTR_DAT_048607c0;
  if (*(int *)(param_1 + 0x16) != 0) {
    puVar10 = (undefined4 *)param_1[0x15];
    puVar8 = puVar10 + (long)*(int *)(param_1 + 0x16) * 3;
    do {
      if (*(char *)(puVar10 + 2) == '\0') {
        (**(code **)(*(long *)*param_1 + 0x10))(&local_80,(long *)*param_1,*puVar10);
        lVar4 = local_80;
        if ((local_70 & 1) != 0) {
          FUN_0043dd50(local_70 & 0xfffffffffffffffe);
        }
        if (lVar4 != 0) {
          (**(code **)(*(long *)*param_1 + 0x10))(&local_80,(long *)*param_1,*puVar10);
          lVar4 = local_80 + (int)puVar10[1];
          uVar7 = *(uint *)(param_2 + 1);
          if (uVar7 == (*(uint *)((long)param_2 + 0xc) & 0x3fffffff)) {
            FUN_00426990(puVar1,param_2,0x18);
            uVar7 = *(uint *)(param_2 + 1);
          }
          lVar11 = *param_2;
          lVar6 = param_1[10];
          plVar9 = (long *)(lVar11 + (long)(int)uVar7 * 0x18);
          *plVar9 = lVar4;
          plVar9[1] = lVar6;
          uVar3 = 0;
          if (lVar6 != 0) {
            uVar3 = FUN_00428370();
          }
          *(ulong *)(lVar11 + (long)(int)uVar7 * 0x18 + 0x10) = uVar3;
          if ((uVar3 & 1) != 0) {
            FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
          }
          *(uint *)(param_2 + 1) = uVar7 + 1;
          goto joined_r0x004c12b4;
        }
      }
      else {
        (**(code **)(*(long *)*param_1 + 0x18))(&local_80,(long *)*param_1,*puVar10);
        iVar12 = -local_68;
        if (-1 < local_68) {
          iVar12 = local_68;
        }
        if (0 < iVar12) {
          iVar12 = 0;
          do {
            lVar4 = local_80;
            iVar2 = FUN_00426fc0(local_78);
            uVar3 = 0;
            if (local_78 != 0) {
              uVar3 = FUN_00428370();
            }
            lVar6 = local_80;
            if ((uVar3 & 1) != 0) {
              FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
              FUN_0043dd50(uVar3 & 0xfffffffffffffffe);
              lVar6 = local_80;
            }
            local_80 = lVar6;
            if (lVar4 + iVar2 * iVar12 != 0) {
              iVar2 = FUN_00426fc0(local_78);
              if (local_78 == 0) {
                uVar3 = 0;
                lVar6 = lVar6 + iVar2 * iVar12;
              }
              else {
                uVar3 = FUN_00428370();
                lVar6 = lVar6 + iVar2 * iVar12;
                if ((uVar3 & 1) != 0) {
                  FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
                }
              }
              iVar2 = puVar10[1];
              uVar7 = *(uint *)(param_2 + 1);
              if (uVar7 == (*(uint *)((long)param_2 + 0xc) & 0x3fffffff)) {
                FUN_00426990(puVar1,param_2,0x18);
                uVar7 = *(uint *)(param_2 + 1);
              }
              lVar11 = *param_2;
              lVar4 = param_1[10];
              plVar9 = (long *)(lVar11 + (long)(int)uVar7 * 0x18);
              *plVar9 = lVar6 + iVar2;
              plVar9[1] = lVar4;
              uVar5 = 0;
              if (lVar4 != 0) {
                uVar5 = FUN_00428370();
              }
              *(ulong *)(lVar11 + (long)(int)uVar7 * 0x18 + 0x10) = uVar5;
              if ((uVar5 & 1) != 0) {
                FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
              }
              *(uint *)(param_2 + 1) = uVar7 + 1;
              if ((uVar3 & 1) != 0) {
                FUN_0043dd50(uVar3 & 0xfffffffffffffffe);
              }
            }
            iVar12 = iVar12 + 1;
            iVar2 = -local_68;
            if (-1 < local_68) {
              iVar2 = local_68;
            }
          } while (iVar12 < iVar2);
        }
joined_r0x004c12b4:
        if ((local_70 & 1) != 0) {
          FUN_0043dd50(local_70 & 0xfffffffffffffffe);
        }
      }
      puVar10 = puVar10 + 3;
    } while (puVar10 != puVar8);
  }
  return;
}

