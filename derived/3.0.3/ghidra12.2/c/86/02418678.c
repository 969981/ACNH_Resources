
/* WARNING: Removing unreachable block (ram,0x02418880) */

void FUN_02418678(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte bVar9;
  byte bVar10;
  long *plVar11;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined4 local_45;
  undefined1 local_41;
  uint local_28 [2];
  
  *(undefined8 *)(param_1 + 0x1838) = 0;
  FUN_02332d7c(param_1,1);
  bVar9 = *(byte *)(param_1 + 0x1ee8);
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  local_54 = CONCAT31(local_54._1_3_,bVar9);
  lVar5 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_54,1);
  if (lVar5 != 0) {
    if ((*(long **)(lVar5 + 0x17f68) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x17f68), puVar6 == (undefined8 *)0x0)) {
      iVar4 = *(int *)(*(long *)(lVar5 + 0x17f50) + *(long *)(lVar5 + 0x17f48) + 0x18);
    }
    else {
      uVar7 = (**(code **)*puVar6)();
      iVar4 = *(int *)(*(long *)(lVar5 + 0x17f50) + *(long *)(lVar5 + 0x17f48) + 0x18);
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x17f68) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x17f68) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
    }
    *(bool *)(param_1 + 0x17dc) = iVar4 != 1;
  }
  plVar11 = *(long **)(param_1 + 0x68);
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  FUN_0231eef4(param_1,plVar11 + 0x4f,0);
  (**(code **)(*plVar11 + 0x110))(plVar11);
  FUN_023203ac(param_1,0,0);
  local_54 = 0;
  local_4c = 6;
  local_50 = CONCAT31(local_50._1_3_,1);
  local_46 = 0;
  local_48 = 0;
  FUN_02321e44(local_28,param_1,&local_54);
  if (*(int *)(param_1 + 0x178) != 0) goto LAB_024189e0;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffff9;
  lVar5 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0x15c) == 0)) {
LAB_02418810:
    if ((*(char *)(param_1 + 0x2264) == '\0') && (*(int *)(*(long *)PTR_DAT_04bb4718 + 0x11c4) == 0)
       ) goto LAB_0241882c;
  }
  else {
    pbVar2 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar5 + 0x15c) != 0) {
      pbVar2 = (byte *)(lVar5 + 0x158);
    }
    bVar10 = *pbVar1;
    bVar9 = *pbVar2;
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar9 == bVar10) goto LAB_02418810;
LAB_0241882c:
    puVar6 = *(undefined8 **)(param_1 + 0x60);
    if (puVar6 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar6 = &DAT_05240280;
      }
      else {
        puVar6 = &DAT_05240280;
      }
    }
    uVar7 = FUN_0073d6e0(puVar6,0);
    if ((((uVar7 & 1) == 0) && (iVar4 = FUN_016f5c40(param_1), iVar4 == 0xb)) &&
       (local_54 = 0, *(int *)(param_1 + 0x13d8) != 0)) {
      pbVar2 = PTR_DAT_04bb32e0;
      if (*(long *)PTR_DAT_04bb4718 != 0) {
        pbVar2 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a4);
      }
      if (*pbVar2 < 8) {
        if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
          iVar4 = FUN_02582d8c(pbVar2,2);
          if (iVar4 < 0) goto LAB_024188fc;
        }
        else {
          local_54 = (uint)*pbVar2;
          uVar7 = FUN_01d3e2d0(**(long **)PTR_DAT_04bb27d0 + 8,&local_54);
          if ((uVar7 & 1) == 0) goto LAB_024188fc;
        }
      }
      else {
LAB_024188fc:
        if ((*(int *)(param_1 + 0x1810) == 1) || (*(int *)(param_1 + 0x1810) == 9)) {
          local_54 = 0xd;
          local_28[0] = 0;
          if (*(long *)(param_1 + 0x70) != 0) {
            uVar3 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
            local_28[0] = 0;
            if (uVar3 < 0x149) {
              local_28[0] = uVar3;
            }
          }
          if (local_28[0] != 0xd) {
            bVar9 = *pbVar1;
            local_4c = *(undefined4 *)(param_1 + 0x230);
            local_41 = 0;
            local_45 = 0;
            local_46 = 0;
            if (7 < bVar9) {
              bVar9 = 0xff;
            }
            local_54 = (uint)bVar9;
            local_50 = 1;
            local_48 = 1;
            uVar7 = FUN_02530cec(&local_54);
            if ((uVar7 & 1) != 0) {
              *(undefined8 *)(param_1 + 0x1820) = 0;
              *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfff7ffff | 6;
              *(undefined8 *)(param_1 + 0x1844) = 0;
              uVar8 = FUN_016e3954(param_1);
              FUN_017081d0(uVar8,&DAT_054bec88,6,1,0);
            }
          }
        }
      }
    }
  }
  plVar11 = *(long **)(param_1 + 0x68);
  FUN_0231eef4(param_1,plVar11 + 0x4f,0);
  (**(code **)(*plVar11 + 0x110))(plVar11);
LAB_024189e0:
  FUN_0252be2c(pbVar1);
  *(undefined4 *)(param_1 + 0x1840) = 0;
  *(undefined8 *)(param_1 + 0x17c4) = 0;
  return;
}

