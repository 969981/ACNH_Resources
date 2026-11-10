
/* WARNING: Removing unreachable block (ram,0x001daa38) */

long * FUN_001da730(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                   undefined1 *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  uint *puVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  long *plVar16;
  long lVar17;
  undefined1 auStack_80 [24];
  undefined8 local_68;
  long local_60;
  undefined2 local_54 [2];
  
  if (*(char *)(param_1 + 0x1e8) == '\0') {
    plVar9 = (long *)FUN_00185a6c(0x1f0);
    if (plVar9 != (long *)0x0) {
      FUN_001d8660(plVar9);
    }
  }
  else {
    plVar9 = (long *)FUN_0018ae24(0x1f0,0);
    if (plVar9 == (long *)0x0) {
LAB_001da7a0:
      *param_5 = 1;
      return (long *)0x0;
    }
    FUN_001d8850(plVar9,*(undefined8 *)(param_4 + 0x18));
    if ((plVar9[0x27] == 0) || (*(long *)(plVar9[0x27] + 0x10) == 0)) {
      (**(code **)(*plVar9 + 8))(plVar9);
      goto LAB_001da7a0;
    }
  }
  FUN_001e15a8(plVar9 + 0x28,param_3);
  *(undefined4 *)(plVar9 + 0x3d) = *(undefined4 *)(param_1 + 0x9c);
  FUN_001972b0(auStack_80,param_4);
  puVar6 = PTR_DAT_04bcb900;
  if (*PTR_DAT_04bcc628 == '\0') {
LAB_001da9c8:
    uVar11 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x30))
                       (*(long **)(param_1 + 0x1b0),auStack_80,plVar9,&local_60);
    if ((uVar11 & 1) != 0) {
      FUN_00196d30(param_4,local_60 + *(long *)(param_4 + 0x28));
      goto LAB_001daaac;
    }
    plVar16 = plVar9 + 1;
    iVar14 = (int)*plVar16;
    iVar13 = (int)*plVar16 + -1;
    if (iVar14 != (int)*plVar16) {
      ClearExclusiveLocal();
LAB_001daa50:
      do {
        lVar17 = *plVar16;
        iVar13 = iVar14 + -1;
        if ((int)lVar17 == iVar14) {
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar15) {
            *(int *)plVar16 = iVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_001daa84;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar14 = (int)lVar17;
      } while( true );
    }
    cVar4 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar15) {
      *(int *)plVar16 = iVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_001daa50;
  }
  else {
    plVar16 = (long *)(PTR_DAT_04bcb900 + 0x18);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar10 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar2 = *puVar10;
      if (uVar2 != 0) {
        lVar17 = **(long **)(puVar6 + 0xa0);
        if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar17 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar16 = (long *)(*(long *)(lVar17 + (ulong)uVar2 * 8) + 0x10);
      }
    }
    puVar1 = (undefined8 *)(*(long *)(*plVar16 + 0x10) + 0x1b0);
    if (1 < *(int *)(param_1 + 0x9c) - 1U) {
      puVar1 = (undefined8 *)(*(long *)(*plVar16 + 0x10) + 0x1a8);
    }
    plVar16 = (long *)*puVar1;
    uVar11 = (**(code **)(*plVar16 + 0x38))(plVar16,auStack_80,plVar9,&local_60);
    puVar8 = PTR_DAT_04bcc7f0;
    puVar7 = PTR_DAT_04bcc640;
    puVar6 = PTR_DAT_04bcc638;
    if ((uVar11 & 1) == 0) {
LAB_001da9c4:
      local_68 = 0;
      goto LAB_001da9c8;
    }
    lVar17 = 0;
    while ((uVar3 = *(ushort *)(plVar9 + 0xc),
           (uVar3 & 0xf) == 2 && *(char *)((long)plVar9 + 0x42) == '\x01' &&
           (((uVar3 & 0x30) != 0 || (*puVar6 != '\0'))))) {
      if ((((uVar3 & 0x30) != 0) && ((uVar3 & 0x10) != 0 || *puVar7 == '\0')) ||
         (((uVar3 >> 0xb & 1) == 0 && (*puVar8 == '\0')))) break;
      local_54[0] = *(undefined2 *)((long)plVar9 + 0x44);
      plVar12 = (long *)FUN_001bb2c0(param_2,local_54);
      if ((plVar12 == (long *)0x0) ||
         (uVar11 = (**(code **)(*plVar12 + 0x20))(plVar12,plVar9), (uVar11 & 1) == 0)) break;
      lVar17 = local_60 + lVar17;
      uVar11 = (**(code **)(*plVar16 + 0x38))(plVar16,auStack_80,plVar9,&local_60);
      if ((uVar11 & 1) == 0) break;
    }
    if (lVar17 == 0) goto LAB_001da9c4;
    lVar5 = *(long *)(param_4 + 0x18) - lVar17;
    if (lVar5 != 0) {
      FUN_00193030(param_4,*(long *)(param_4 + 0x10) + *(long *)(param_4 + 0x28) + lVar17,lVar5,0);
      *(long *)(param_4 + 0x18) = lVar5;
      goto LAB_001da9c4;
    }
    *(undefined8 *)(param_4 + 0x18) = 0;
    *(undefined8 *)(param_4 + 0x28) = 0;
    *(undefined2 *)(param_4 + 0x31) = 0;
    *(byte *)(param_4 + 0x30) = *(byte *)(param_4 + 0x30) & 4;
    plVar16 = plVar9 + 1;
    lVar17 = *plVar16;
    iVar13 = (int)*plVar16 + -1;
    if ((int)lVar17 == (int)*plVar16) {
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar15) {
        *(int *)plVar16 = iVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_001daa7c;
      bVar15 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001daa7c:
      bVar15 = false;
    }
    iVar14 = (int)lVar17;
    if (!bVar15) {
      do {
        lVar17 = *plVar16;
        iVar13 = iVar14 + -1;
        if ((int)lVar17 == iVar14) {
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar15) {
            *(int *)plVar16 = iVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar14 = (int)lVar17;
      } while( true );
    }
  }
LAB_001daa84:
  if ((iVar13 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar9 + 0xc) = 1;
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  plVar9 = (long *)0x0;
LAB_001daaac:
  FUN_00197350(auStack_80);
  return plVar9;
}

