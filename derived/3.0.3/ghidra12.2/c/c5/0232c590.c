
undefined8 FUN_0232c590(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  int iVar3;
  undefined2 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *local_40;
  undefined *puStack_38;
  
  FUN_0232c350();
  puVar2 = PTR_DAT_04bb4718;
  if (*(int *)(param_1 + 0x178) == 0) {
    pbVar1 = (byte *)(param_1 + 0x1ee8);
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f0960);
        puVar7 = &DAT_054f0958;
        if (iVar3 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
          puVar7 = &DAT_054f0958;
        }
      }
      else {
        puVar7 = &DAT_054f0958;
      }
    }
    else {
      puVar7 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)*pbVar1 < 8) {
        puVar7 = puVar7 + *pbVar1;
      }
    }
    local_40._0_4_ = 0x22;
    if ((*(uint *)((long)puVar7 + 4) >> 2 & 1) != 0) {
      lVar6 = *(long *)puVar2;
      if (lVar6 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f0960);
          if (iVar3 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
          puVar7 = &DAT_054f0958;
        }
        else {
          puVar7 = &DAT_054f0958;
        }
      }
      else {
        puVar7 = (undefined8 *)(lVar6 + 0x204);
        if ((ulong)*pbVar1 < 8) {
          puVar7 = puVar7 + *pbVar1;
        }
      }
      local_40 = (undefined *)CONCAT44(local_40._4_4_,0x22);
      *(uint *)((long)puVar7 + 4) = *(uint *)((long)puVar7 + 4) & 0xfffffffb;
      if ((*(long *)PTR_DAT_04bb39b0 == 0) || (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0)) {
        lVar6 = *(long *)puVar2;
        if (lVar6 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar3 = __cxa_guard_acquire(&DAT_054f0960);
            puVar7 = &DAT_054f0958;
            if (iVar3 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar7 = &DAT_054f0958;
          }
        }
        else {
          puVar7 = (undefined8 *)(lVar6 + 0x204);
          if ((ulong)*pbVar1 < 8) {
            puVar7 = puVar7 + *pbVar1;
          }
        }
        if ((*(uint *)((long)puVar7 + 4) >> 0xd & 1) == 0) {
          lVar5 = *(long *)PTR_DAT_04bb26a8;
          local_40 = PTR_DAT_04bb2020 + 0x10;
          puStack_38 = &DAT_040b1572;
          for (lVar6 = *(long *)(lVar5 + 0x19f840); lVar6 != 0; lVar6 = *(long *)(lVar6 + 8)) {
            while (iVar3 = FUN_029ca720(&local_40,lVar6 + 0x20), -1 < iVar3) {
              if (iVar3 == 0) {
                uVar4 = *(undefined2 *)(lVar6 + 0x30);
                goto LAB_0232c79c;
              }
              lVar6 = *(long *)(lVar6 + 0x10);
              if (lVar6 == 0) goto LAB_0232c790;
            }
          }
LAB_0232c790:
          uVar4 = 0xffff;
LAB_0232c79c:
          FUN_02a0d880(lVar5 + 0xa7660,uVar4);
        }
        return 1;
      }
    }
  }
  return 0;
}

