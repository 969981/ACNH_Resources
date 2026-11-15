
void FUN_022c04e0(long param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  short sVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined *local_38;
  uint local_30;
  int local_2c;
  byte local_28;
  
  if (*(char *)(param_1 + 0x16) != '\0') {
    uVar4 = FUN_0122a4e0(*(undefined2 *)(param_1 + 0x14));
    if ((uVar4 & 1) == 0) {
      sVar5 = *(short *)(param_1 + 0x14);
      bVar2 = DAT_055c1b60 == &DAT_055c1b58;
      puVar8 = DAT_055c1b60 + -8;
      if ((sVar5 != 0) && (puVar6 = DAT_055c1b60, puVar8 != &DAT_055c1b18)) {
        do {
          puVar6 = (undefined8 *)puVar6[1];
          sVar5 = sVar5 + -1;
          bVar2 = puVar6 == &DAT_055c1b58;
        } while (!bVar2 && sVar5 != 0);
        puVar8 = puVar6 + -8;
      }
      puVar6 = &DAT_055c04a0;
      if (!bVar2) {
        puVar6 = puVar8;
      }
      local_2c = *(int *)(puVar6 + 7);
      uVar4 = 0;
      do {
        piVar1 = &DAT_0516b108 + uVar4;
        local_30 = (uint)uVar4;
        if (0x38 < local_30) {
          piVar1 = &DAT_0516b108;
        }
        if (*piVar1 == local_2c) {
          if (local_30 == 0) {
            return;
          }
          goto LAB_022c0634;
        }
        uVar7 = 0x39;
        if ((int)local_30 < 0x39) {
          uVar7 = local_30 + 1;
        }
        uVar4 = (ulong)uVar7;
      } while (uVar7 != 0x39);
    }
    else {
      local_30 = 0;
      if (DAT_05aed670 == 0) {
        puVar8 = &DAT_055c04a0;
      }
      else {
        puVar8 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar8 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar3 = FUN_006bd550(*puVar8,0);
          puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar3 != 0x758f7eaf) {
            puVar8 = &DAT_055c04a0;
          }
        }
      }
      local_2c = *(int *)(puVar8 + 7);
LAB_022c0634:
      local_28 = FUN_017baf44();
      local_28 = local_28 & 1;
      local_38 = PTR_DAT_04bb6268 + 0x10;
      FUN_022c0670(param_1,&local_38);
    }
  }
  return;
}

