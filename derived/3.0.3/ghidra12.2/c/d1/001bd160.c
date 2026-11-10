
uint FUN_001bd160(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  uint *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  undefined1 auStack_d0 [144];
  
  FUN_001e1500(auStack_d0);
  lVar13 = *(long *)(param_1 + 8);
  lVar6 = FUN_001df770(lVar13 + 0x20,param_3);
  if (lVar13 + 0x28 != lVar6) {
    *(undefined4 *)(lVar6 + 0x140) = *(undefined4 *)(lVar13 + 0x38);
    FUN_001e15a8(auStack_d0,lVar6 + 0xb0);
  }
  plVar7 = (long *)FUN_001bd3a8(param_2,0);
  if (plVar7 != (long *)0x0) {
    if (((*(ushort *)(plVar7 + 0xc) >> 6 & 1) == 0) || (plVar7[0x3e] != 0)) {
      FUN_001e15a8(plVar7 + 0x28,auStack_d0);
      *(undefined1 *)(plVar7 + 0x42) = 1;
      uVar4 = FUN_001e1884(param_1 + 0x20);
      *(undefined4 *)((long)plVar7 + 0xfc) = uVar4;
      uVar3 = FUN_001e14f8(param_1 + 0x20);
      *(undefined2 *)((long)plVar7 + 0x104) = uVar3;
      lVar6 = *(long *)(param_1 + 8);
      *(undefined4 *)(plVar7 + 0x21) = *(undefined4 *)(lVar6 + 0x48);
      *(undefined4 *)((long)plVar7 + 0x10c) = *(undefined4 *)(lVar6 + 0x4c);
      uVar4 = FUN_001e1884(param_3);
      *(undefined4 *)(plVar7 + 0x20) = uVar4;
      uVar3 = FUN_001e14f8(param_3);
      *(undefined2 *)((long)plVar7 + 0x106) = uVar3;
      puVar9 = PTR_DAT_04bcbb78;
      plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x10);
      uVar5 = *(uint *)(*(long *)(param_1 + 8) + 8);
      if (*PTR_DAT_04bcb908 == '\0') {
LAB_001bd2a8:
        puVar9 = puVar9 + (ulong)uVar5 * 0x2a8 + 0x18;
      }
      else {
        puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        if (*puVar8 == 0) goto LAB_001bd2a8;
        puVar9 = (undefined *)
                 (*(long *)(puVar9 + (ulong)uVar5 * 0x2a8 + 0x10) + (ulong)*puVar8 * 0x148);
      }
      uVar5 = (**(code **)(*plVar12 + 0x68))
                        (plVar12,*(undefined4 *)(puVar9 + 0x140),param_4,
                         *(undefined4 *)(*(long *)(param_1 + 8) + 8),0xf,0xf,plVar7,1);
      plVar12 = plVar7 + 1;
      iVar11 = (int)*plVar12;
      iVar10 = (int)*plVar12 + -1;
      if (iVar11 != (int)*plVar12) {
        ClearExclusiveLocal();
LAB_001bd380:
        do {
          lVar6 = *plVar12;
          iVar10 = iVar11 + -1;
          if ((int)lVar6 == iVar11) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar2) {
              *(int *)plVar12 = iVar10;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_001bd320;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = (int)lVar6;
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *(int *)plVar12 = iVar10;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 != '\0') goto LAB_001bd380;
LAB_001bd320:
      if ((iVar10 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar7 + 0xc) = 1;
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      goto LAB_001bd344;
    }
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  uVar5 = 0;
LAB_001bd344:
  FUN_001e1868(auStack_d0);
  return uVar5 & 1;
}

