
void FUN_003e7ce0(undefined8 *param_1,long *param_2,long param_3,undefined8 param_4,long *param_5,
                 undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  uint *puVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  long *plVar17;
  long local_c0;
  long local_b8;
  long local_b0;
  int local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar9 = FUN_00194070(param_3);
  if ((uVar9 & 1) == 0) {
    uVar13 = 0x8001000d;
LAB_003e7ecc:
    _local_78 = CONCAT44(uStack_74,uVar13);
    FUN_0018aa70(param_1,&local_78);
    return;
  }
  uVar9 = (**(code **)(*param_2 + 0x48))(param_2,param_3);
  if ((uVar9 & 1) == 0) {
    _local_78 = CONCAT44(uStack_74,0x80010004);
    FUN_0018aa70(auStack_90,&local_78);
    FUN_00197bcc(param_3,auStack_90);
    _local_78 = CONCAT71(stack0xffffffffffffff89,1);
    FUN_0018aa90(param_1,&local_78);
    return;
  }
  uVar10 = (**(code **)(*param_2 + 0x208))(param_2);
  if (*(long *)(param_3 + 0xb8) == 0) {
    plVar11 = (long *)FUN_00185a6c(0x648);
  }
  else {
    uVar10 = *(undefined8 *)(*(long *)(param_3 + 0xb8) + 0x10);
    plVar11 = (long *)FUN_00185a6c(0x648);
  }
  if (plVar11 != (long *)0x0) {
    FUN_003fa0c4(plVar11);
  }
  lVar2 = *param_5;
  lVar3 = param_5[1];
  local_b0 = 0;
  uVar13 = *(undefined4 *)(param_3 + 0x18);
  local_c0 = 0;
  local_b8 = 0;
  lVar7 = param_2[0x18];
  cVar5 = *(char *)((long)param_2 + 0xc4);
  lVar6 = lVar3 - lVar2;
  if (lVar6 != 0) {
    if (lVar6 < 0) {
      FUN_00404498(&local_c0);
      goto LAB_003e8020;
    }
    local_c0 = FUN_00187df4();
    local_b0 = local_c0 + (lVar6 >> 3) * 8;
    local_b8 = 0;
    do {
      *(undefined8 *)(local_c0 + local_b8) = *(undefined8 *)(lVar2 + local_b8);
      local_b8 = local_b8 + 8;
    } while (lVar2 + local_b8 != lVar3);
    local_b8 = local_c0 + local_b8;
  }
  (**(code **)(*plVar11 + 0x68))
            (&local_a8,plVar11,uVar13,param_2 + 0x17,param_2 + 4,(int)lVar7,cVar5 != '\0',uVar10,
             param_4,&local_c0,param_6,param_7);
  if (local_c0 != 0) {
    local_b8 = local_c0;
    FUN_00187e4c();
  }
  puVar8 = PTR_DAT_04bcb900;
  puVar1 = PTR_LAB_04bc0ee0;
  if (local_a8 < 0) {
    puVar1 = (undefined *)0x0;
  }
  if (puVar1 != (undefined *)0x0) {
    plVar17 = (long *)(PTR_DAT_04bcb900 + 0x28);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar12 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar4 = *puVar12;
      if (uVar4 != 0) {
        lVar2 = **(long **)(puVar8 + 0xa0);
        if ((ulong)((*(long **)(puVar8 + 0xa0))[1] - lVar2 >> 3) <= (ulong)uVar4) {
LAB_003e8020:
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar17 = (long *)(*(long *)(lVar2 + (ulong)uVar4 * 8) + 0x20);
      }
    }
    FUN_00194148(*(undefined8 *)(*(long *)(*plVar17 + 0x10) + 0x10),plVar11,0);
    uVar13 = 0x10001;
    goto LAB_003e7ecc;
  }
  uStack_70 = uStack_a0;
  local_68 = local_98;
  FUN_00197e40(param_3,3,&local_78,1);
  plVar17 = plVar11 + 1;
  lVar2 = *plVar17;
  iVar14 = (int)*plVar17 + -1;
  if ((int)lVar2 == (int)*plVar17) {
    cVar5 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar16) {
      *(int *)plVar17 = iVar14;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') {
      bVar16 = true;
      goto LAB_003e7f88;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  bVar16 = false;
LAB_003e7f88:
  iVar15 = (int)lVar2;
  if (bVar16) {
LAB_003e7f8c:
    if ((iVar14 == 0) && (*(char *)((long)plVar11 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar11 + 0xc) = 1;
      (**(code **)(*plVar11 + 8))(plVar11);
    }
    *param_1 = CONCAT44(uStack_a4,local_a8);
    param_1[1] = uStack_a0;
    param_1[2] = local_98;
    return;
  }
  do {
    lVar2 = *plVar17;
    iVar14 = iVar15 + -1;
    if ((int)lVar2 == iVar15) {
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar16) {
        *(int *)plVar17 = iVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB_003e7f8c;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar15 = (int)lVar2;
  } while( true );
}

