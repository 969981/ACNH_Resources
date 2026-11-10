
uint FUN_001c2cd0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  uint *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined1 auStack_d0 [144];
  
  FUN_001e1500(auStack_d0);
  lVar11 = *(long *)(param_1 + 0x18);
  lVar4 = FUN_001df770(lVar11 + 0x98,param_3);
  if (lVar11 + 0xa0 != lVar4) {
    *(undefined4 *)(lVar4 + 0x140) = *(undefined4 *)(lVar11 + 0xb0);
    FUN_001e15a8(auStack_d0,lVar4 + 0xb0);
  }
  plVar5 = (long *)FUN_001d6900(param_2,6,param_3);
  if (plVar5 != (long *)0x0) {
    if (((*(ushort *)(plVar5 + 0xc) >> 6 & 1) == 0) || (plVar5[0x3e] != 0)) {
      FUN_001e15a8(plVar5 + 0x28,auStack_d0);
      puVar7 = PTR_DAT_04bcbb78;
      plVar10 = *(long **)(*(long *)(param_1 + 0x18) + 0xc0);
      uVar3 = *(uint *)(*(long *)(param_1 + 0x18) + 8);
      if (*PTR_DAT_04bcb908 == '\0') {
LAB_001c2dcc:
        puVar7 = puVar7 + (ulong)uVar3 * 0x2a8 + 0x18;
      }
      else {
        puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        if (*puVar6 == 0) goto LAB_001c2dcc;
        puVar7 = (undefined *)
                 (*(long *)(puVar7 + (ulong)uVar3 * 0x2a8 + 0x10) + (ulong)*puVar6 * 0x148);
      }
      uVar3 = (**(code **)(*plVar10 + 0x68))
                        (plVar10,*(undefined4 *)(puVar7 + 0x140),param_4,
                         *(undefined4 *)(*(long *)(param_1 + 0x18) + 8),1,1,plVar5,1);
      plVar10 = plVar5 + 1;
      iVar9 = (int)*plVar10;
      iVar8 = (int)*plVar10 + -1;
      if (iVar9 != (int)*plVar10) {
        ClearExclusiveLocal();
LAB_001c2ea0:
        do {
          lVar4 = *plVar10;
          iVar8 = iVar9 + -1;
          if ((int)lVar4 == iVar9) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar2) {
              *(int *)plVar10 = iVar8;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_001c2e44;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar9 = (int)lVar4;
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *(int *)plVar10 = iVar8;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 != '\0') goto LAB_001c2ea0;
LAB_001c2e44:
      if ((iVar8 == 0) && (*(char *)((long)plVar5 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar5 + 0xc) = 1;
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      goto LAB_001c2e68;
    }
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  uVar3 = 0;
LAB_001c2e68:
  FUN_001e1868(auStack_d0);
  return uVar3 & 1;
}

