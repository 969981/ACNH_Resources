
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00208370(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
            undefined8 param_10,undefined8 param_11)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  uint *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  long *plVar15;
  char *pcVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined *local_88;
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined8 uStack_68;
  
  puVar17 = (undefined8 *)PTR_DAT_04bcb910;
  pcVar16 = PTR_DAT_04bcb908;
  puVar18 = PTR_DAT_04bcb900;
  plVar15 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 == '\0') {
LAB_00208420:
    FUN_0019c39c(*(undefined8 *)(*plVar15 + 0x10),0);
    if (*pcVar16 != '\0') goto LAB_00208438;
LAB_00208414:
    lVar9 = *plVar15;
joined_r0x00208418:
    if (lVar9 == 0) goto LAB_002084d8;
LAB_0020847c:
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_002084d8;
    plVar15 = (long *)(*(long *)(*(long *)(lVar9 + 0x10) + 0x10) + 0x78);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    plVar7 = *(long **)(param_1 + 0x108);
    if (plVar7 != (long *)0x0) goto LAB_002084f4;
LAB_002084a0:
    plVar7 = *(long **)(param_1 + 0xf8);
joined_r0x002084a4:
    if (plVar7 == (long *)0x0) {
      plVar7 = *(long **)(param_1 + 0x100);
    }
    else {
      if ((int)plVar7[8] != 5) goto LAB_0020870c;
      plVar1 = plVar7 + 1;
      iVar12 = (int)*plVar1;
      iVar11 = (int)*plVar1 + -1;
      if (iVar12 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_00208654:
        do {
          lVar9 = *plVar1;
          iVar11 = iVar12 + -1;
          if ((int)lVar9 == iVar12) {
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar13) {
              *(int *)plVar1 = iVar11;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_002085e4;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar12 = (int)lVar9;
        } while( true );
      }
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_00208654;
LAB_002085e4:
      if ((iVar11 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar7 + 0xc) = 1;
        (**(code **)(*plVar7 + 8))();
      }
      *(undefined8 *)(param_1 + 0xf8) = 0;
      plVar7 = *(long **)(param_1 + 0x100);
    }
    if (plVar7 == (long *)0x0) {
      uVar8 = FUN_00194070(param_2);
    }
    else {
      if ((int)plVar7[8] != 5) goto LAB_0020870c;
      plVar1 = plVar7 + 1;
      lVar9 = *plVar1;
      iVar12 = (int)*plVar1 + -1;
      if ((int)lVar9 == (int)*plVar1) {
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *(int *)plVar1 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00208680;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00208680:
        bVar13 = false;
      }
      iVar11 = (int)lVar9;
      if (!bVar13) {
        do {
          lVar9 = *plVar1;
          iVar12 = iVar11 + -1;
          if ((int)lVar9 == iVar11) {
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar13) {
              *(int *)plVar1 = iVar12;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = (int)lVar9;
        } while( true );
      }
      if ((iVar12 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar7 + 0xc) = 1;
        (**(code **)(*plVar7 + 8))();
      }
      *(undefined8 *)(param_1 + 0x100) = 0;
      uVar8 = FUN_00194070(param_2);
    }
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_1 + 0xc0) == 0) {
        lVar9 = FUN_00185a6c(0x98);
        if (lVar9 != 0) {
          FUN_0020ae58(lVar9);
        }
        *(long *)(param_1 + 0xc0) = lVar9;
        cVar5 = *pcVar16;
      }
      else {
        cVar5 = *pcVar16;
      }
      plVar7 = (long *)(puVar18 + 0x90);
      if (cVar5 != '\0') {
        plVar7 = (long *)(puVar18 + 0x90);
        puVar6 = (uint *)FUN_03876070(*puVar17);
        uVar3 = *puVar6;
        if (uVar3 != 0) {
          lVar9 = **(long **)(puVar18 + 0xa0);
          if ((ulong)((*(long **)(puVar18 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar7 = (long *)(*(long *)(lVar9 + (ulong)uVar3 * 8) + 0x88);
        }
      }
      if (*plVar7 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(long *)(*plVar7 + 0x10);
      }
      plVar7 = (long *)(lVar9 + 0x30);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      *(long *)(lVar9 + 0x78) = *(long *)(lVar9 + 0x78) + 1;
      (**(code **)(*plVar7 + 0x20))(plVar7);
      if (*(int *)(param_1 + 0x110) == 0) {
        *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0xb8);
        lVar9 = FUN_00185a6c(0x520);
        if (lVar9 != 0) goto LAB_00208804;
LAB_00208908:
        *(undefined8 *)(param_1 + 0xf8) = 0;
        piVar10 = (int *)&DAT_00000008;
        iVar11 = _DAT_00000008;
        iVar12 = _DAT_00000008;
LAB_002088e0:
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar13) {
          *piVar10 = iVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00208928;
        bVar13 = true;
      }
      else {
        lVar9 = FUN_00185a6c(0x520);
        if (lVar9 == 0) goto LAB_00208908;
LAB_00208804:
        uVar4 = *(undefined4 *)(param_2 + 0x18);
        puVar2 = PTR_DAT_04bc0ec8 + 0x10;
        local_80[0] = 0;
        local_70 = local_80;
        uStack_68 = 0x10;
        local_88 = puVar2;
        FUN_0018b070(&local_88,param_4,0xffffffffffffffff);
        puVar17 = (undefined8 *)PTR_DAT_04bcb910;
        pcVar16 = PTR_DAT_04bcb908;
        puVar18 = PTR_DAT_04bcb900;
        FUN_0020b73c(lVar9,uVar4,param_1,param_3,&local_88,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,*(undefined4 *)(param_1 + 0x110),
                     *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8),
                     *(undefined8 *)(param_1 + 0xf0));
        *(long *)(param_1 + 0xf8) = lVar9;
        local_88 = puVar2;
        FUN_0018b1a0(&local_88);
        piVar10 = (int *)(*(long *)(param_1 + 0xf8) + 8);
        iVar12 = *piVar10;
        iVar11 = *piVar10;
        if (iVar12 == *piVar10) goto LAB_002088e0;
        ClearExclusiveLocal();
LAB_00208928:
        bVar13 = false;
      }
      if (!bVar13) {
        do {
          iVar11 = *piVar10;
          if (iVar11 == iVar12) {
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar13) {
              *piVar10 = iVar12 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar12 = iVar11;
        } while( true );
      }
      plVar7 = (long *)(puVar18 + 0x28);
      if (*pcVar16 != '\0') {
        puVar6 = (uint *)FUN_03876070(*puVar17);
        uVar3 = *puVar6;
        if (uVar3 != 0) {
          lVar9 = **(long **)(puVar18 + 0xa0);
          if ((ulong)((*(long **)(puVar18 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar3) {
LAB_002089c8:
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar7 = (long *)(*(long *)(lVar9 + (ulong)uVar3 * 8) + 0x20);
        }
      }
      FUN_00194148(*(undefined8 *)(*(long *)(*plVar7 + 0x10) + 0x10),*(undefined8 *)(param_1 + 0xf8)
                   ,0);
      uVar14 = 1;
      goto LAB_00208710;
    }
  }
  else {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar6;
    if (uVar3 == 0) goto LAB_00208420;
    lVar9 = **(long **)(puVar18 + 0xa0);
    if ((ulong)((*(long **)(puVar18 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar3) goto LAB_002089c8;
    FUN_0019c39c(*(undefined8 *)(*(long *)(*(long *)(lVar9 + (ulong)uVar3 * 8) + 0x20) + 0x10),0);
    if (*pcVar16 == '\0') goto LAB_00208414;
LAB_00208438:
    puVar6 = (uint *)FUN_03876070(*puVar17);
    uVar3 = *puVar6;
    if (uVar3 == 0) {
      lVar9 = *(long *)(puVar18 + 0x28);
      goto joined_r0x00208418;
    }
    lVar9 = **(long **)(puVar18 + 0xa0);
    if ((ulong)((*(long **)(puVar18 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                   0x47,0xe0000003,0);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + (ulong)uVar3 * 8) + 0x20);
    if (lVar9 != 0) goto LAB_0020847c;
LAB_002084d8:
    plVar15 = (long *)0x78;
    (**(code **)(lRam0000000000000078 + 0x10))(0x78);
    plVar7 = *(long **)(param_1 + 0x108);
    if (plVar7 == (long *)0x0) goto LAB_002084a0;
LAB_002084f4:
    if ((int)plVar7[8] == 5) {
      plVar1 = plVar7 + 1;
      iVar12 = (int)*plVar1;
      iVar11 = (int)*plVar1 + -1;
      if (iVar12 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_002085b0:
        do {
          lVar9 = *plVar1;
          iVar11 = iVar12 + -1;
          if ((int)lVar9 == iVar12) {
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar13) {
              *(int *)plVar1 = iVar11;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00208538;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar12 = (int)lVar9;
        } while( true );
      }
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_002085b0;
LAB_00208538:
      if ((iVar11 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar7 + 0xc) = 1;
        (**(code **)(*plVar7 + 8))();
      }
      *(undefined8 *)(param_1 + 0x108) = 0;
      plVar7 = *(long **)(param_1 + 0xf8);
      goto joined_r0x002084a4;
    }
  }
LAB_0020870c:
  uVar14 = 0;
LAB_00208710:
  (**(code **)(*plVar15 + 0x20))(plVar15);
  return uVar14;
}

