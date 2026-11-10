
void FUN_001b3560(long param_1,ulong *param_2)

{
  undefined *puVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined *local_100;
  undefined1 auStack_f8 [112];
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  undefined4 local_68;
  
  puVar1 = PTR_DAT_04bcb900;
  plVar10 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      lVar6 = **(long **)(puVar1 + 0xa0);
      if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar10 = (long *)(*(long *)(lVar6 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar10 == 0) || (lVar6 = *(long *)(*plVar10 + 0x10), lVar6 == 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  (**(code **)(*(long *)(lVar6 + 0x78) + 0x10))();
  plVar10 = *(long **)(param_1 + 0x150);
  if (plVar10 != (long *)(param_1 + 0x158)) {
    puVar1 = PTR_DAT_04bcc3f8 + 0x10;
    do {
      if ((ulong)plVar10[5] < *param_2) {
        FUN_001bb84c(&local_100,plVar10 + 6,*(undefined4 *)PTR_DAT_04bcc2c8,90000,0xc);
        plVar5 = (long *)FUN_00187df4(0xb0);
        *plVar5 = 0;
        plVar5[2] = (long)puVar1;
        FUN_001b8358(plVar5 + 3,auStack_f8);
        plVar5[0x11] = local_88;
        *(undefined4 *)(plVar5 + 0x15) = local_68;
        plVar5[0x12] = lStack_80;
        plVar5[1] = param_1 + 0x78;
        plVar5[0x13] = local_78;
        plVar5[0x14] = lStack_70;
        lVar7 = *(long *)(param_1 + 0x78);
        *plVar5 = lVar7;
        *(long **)(lVar7 + 8) = plVar5;
        *(long **)(param_1 + 0x78) = plVar5;
        *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
        local_100 = puVar1;
        FUN_001b8504(auStack_f8);
        plVar5 = (long *)plVar10[1];
        plVar8 = plVar10;
        plVar9 = plVar5;
        if (plVar5 == (long *)0x0) {
          do {
            plVar11 = (long *)plVar8[2];
            bVar3 = (long *)*plVar11 != plVar8;
            plVar8 = plVar11;
          } while (bVar3);
        }
        else {
          do {
            plVar11 = plVar9;
            plVar9 = (long *)*plVar11;
          } while ((long *)*plVar11 != (long *)0x0);
        }
        plVar8 = plVar10;
        if (plVar5 == (long *)0x0) {
          do {
            plVar9 = (long *)plVar8[2];
            bVar3 = (long *)*plVar9 != plVar8;
            plVar8 = plVar9;
          } while (bVar3);
        }
        else {
          do {
            plVar9 = plVar5;
            plVar5 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
        if (*(long **)(param_1 + 0x150) == plVar10) {
          *(long **)(param_1 + 0x150) = plVar9;
        }
        *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + -1;
        FUN_00192390(*(undefined8 *)(param_1 + 0x158),plVar10);
        FUN_001b8504(plVar10 + 6);
        FUN_00187e4c(plVar10);
        plVar10 = plVar11;
      }
      else {
        plVar5 = (long *)plVar10[1];
        plVar8 = plVar10;
        if ((long *)plVar10[1] == (long *)0x0) {
          do {
            plVar10 = (long *)plVar8[2];
            bVar3 = (long *)*plVar10 != plVar8;
            plVar8 = plVar10;
          } while (bVar3);
        }
        else {
          do {
            plVar10 = plVar5;
            plVar5 = (long *)*plVar10;
          } while ((long *)*plVar10 != (long *)0x0);
        }
      }
    } while (plVar10 != (long *)(param_1 + 0x158));
  }
  (**(code **)(*(long *)(lVar6 + 0x78) + 0x20))();
  return;
}

