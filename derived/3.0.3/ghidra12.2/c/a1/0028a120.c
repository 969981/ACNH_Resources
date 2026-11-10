
long * FUN_0028a120(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  
  if ((*(long *)PTR_DAT_04bccf58 == 0) ||
     (lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bccf58 + 0x88)), lVar3 == 0)) {
    FUN_00290438(&DAT_04c608c8);
    if ((int)DAT_04c60868 == 0) {
      puVar8 = (ulong *)0x0;
      uVar4 = 1;
    }
    else {
      lVar3 = (long)(int)DAT_04c60868 << 3;
      puVar7 = DAT_04c60870;
      do {
        plVar6 = (long *)FUN_00289140(*puVar7,param_2);
        if (plVar6 != (long *)0x0) goto LAB_0028a30c;
        puVar7 = puVar7 + 1;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
      uVar4 = 1;
      puVar8 = (ulong *)0x0;
    }
  }
  else {
    puVar8 = (ulong *)(lVar3 + 0xb0);
    do {
      plVar6 = (long *)*puVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar2) {
        *puVar8 = (ulong)plVar6 | 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (((plVar6 != (long *)0x0) && ((int)plVar6[0xb] == 0)) &&
       (uVar4 = (**(code **)(*plVar6 + 0x88))(plVar6,param_2), (uVar4 & 1) != 0)) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar2) {
          *puVar8 = *puVar8 & 0xfffffffffffffffe;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      return plVar6;
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar2) {
        *puVar8 = *puVar8 & 0xfffffffffffffffe;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    FUN_00290438(&DAT_04c608c8);
    plVar6 = (long *)*puVar8;
    if ((plVar6 != (long *)0x0) &&
       (plVar5 = (long *)FUN_00289140(plVar6,param_2), plVar5 != (long *)0x0)) {
      if (plVar5 == plVar6) goto LAB_0028a30c;
      goto LAB_0028a308;
    }
    uVar4 = (ulong)(int)DAT_04c60868;
    if ((int)DAT_04c60868 != 0) {
      lVar3 = uVar4 << 3;
      puVar7 = DAT_04c60870;
      do {
        plVar5 = (long *)FUN_00289140(*puVar7,param_2);
        if (plVar5 != (long *)0x0) goto LAB_0028a304;
        puVar7 = puVar7 + 1;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
      uVar4 = 0;
    }
  }
  if ((int)DAT_04c60898 != 0) {
    if ((uVar4 & 1) == 0) {
      lVar3 = (long)(int)DAT_04c60898 << 3;
      puVar7 = DAT_04c608a0;
      do {
        plVar5 = (long *)FUN_00289140(*puVar7,param_2);
        if (plVar5 != (long *)0x0) goto LAB_0028a304;
        puVar7 = puVar7 + 1;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
    else {
      lVar3 = (long)(int)DAT_04c60898 << 3;
      puVar7 = DAT_04c608a0;
      do {
        plVar6 = (long *)FUN_00289140(*puVar7,param_2);
        if (plVar6 != (long *)0x0) goto LAB_0028a30c;
        puVar7 = puVar7 + 1;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
  }
  plVar6 = (long *)0x0;
LAB_0028a30c:
  FUN_00290440(&DAT_04c608c8);
  return plVar6;
LAB_0028a304:
LAB_0028a308:
  plVar6 = plVar5;
  *puVar8 = (ulong)plVar6;
  goto LAB_0028a30c;
}

