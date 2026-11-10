
uint FUN_00208cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  long *plVar11;
  
  puVar3 = PTR_DAT_04bcb900;
  plVar11 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar4 = *puVar5;
    if (uVar4 != 0) {
      lVar7 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar11 = (long *)(*(long *)(lVar7 + (ulong)uVar4 * 8) + 0x20);
    }
  }
  if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x10), lVar7 == 0)) {
    plVar11 = (long *)0x78;
    (**(code **)(lRam0000000000000078 + 0x10))(0x78);
    plVar6 = *(long **)(param_1 + 0x108);
    if (plVar6 == (long *)0x0) goto LAB_00208d64;
LAB_00208da4:
    if ((int)plVar6[8] == 5) {
      plVar1 = plVar6 + 1;
      iVar9 = (int)*plVar1;
      iVar8 = (int)*plVar1 + -1;
      if (iVar9 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_00208e44:
        do {
          lVar7 = *plVar1;
          iVar8 = iVar9 + -1;
          if ((int)lVar7 == iVar9) {
            cVar2 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *(int *)plVar1 = iVar8;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00208de8;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar9 = (int)lVar7;
        } while( true );
      }
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_00208e44;
LAB_00208de8:
      if ((iVar8 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar6 + 0xc) = 1;
        (**(code **)(*plVar6 + 8))();
        *(undefined8 *)(param_1 + 0x108) = 0;
        plVar6 = *(long **)(param_1 + 0xf8);
      }
      else {
        *(undefined8 *)(param_1 + 0x108) = 0;
        plVar6 = *(long **)(param_1 + 0xf8);
      }
      goto joined_r0x00208d68;
    }
LAB_00208e6c:
    uVar4 = 0;
    goto LAB_00208eb8;
  }
  plVar11 = (long *)(*(long *)(lVar7 + 0x10) + 0x78);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  plVar6 = *(long **)(param_1 + 0x108);
  if (plVar6 != (long *)0x0) goto LAB_00208da4;
LAB_00208d64:
  plVar6 = *(long **)(param_1 + 0xf8);
joined_r0x00208d68:
  if (plVar6 != (long *)0x0) {
    if ((int)plVar6[8] != 5) goto LAB_00208e6c;
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    iVar9 = (int)*plVar1 + -1;
    if ((int)lVar7 == (int)*plVar1) {
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_00208e78;
      bVar10 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00208e78:
      bVar10 = false;
    }
    iVar8 = (int)lVar7;
    if (!bVar10) {
      do {
        lVar7 = *plVar1;
        iVar9 = iVar8 + -1;
        if ((int)lVar7 == iVar8) {
          cVar2 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *(int *)plVar1 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = (int)lVar7;
      } while( true );
    }
    if ((iVar9 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar6 + 0xc) = 1;
      (**(code **)(*plVar6 + 8))();
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  uVar4 = FUN_00208f40(param_1,param_2,param_3);
LAB_00208eb8:
  (**(code **)(*plVar11 + 0x20))(plVar11);
  return uVar4 & 1;
}

