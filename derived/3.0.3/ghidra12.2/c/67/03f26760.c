
/* WARNING: Removing unreachable block (ram,0x03f267dc) */

bool FUN_03f26760(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  uint uVar10;
  
  uVar2 = *(uint *)(param_1 + 0x16);
  if ((uVar2 & 1) == 0) goto LAB_03f268e8;
  puVar1 = (uint *)(param_1 + 0x16);
  uVar3 = *puVar1;
  do {
    uVar10 = *puVar1;
    if (uVar10 != uVar3) {
      ClearExclusiveLocal();
      do {
        while (*puVar1 == uVar10) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar10 & 0xfffffff9 | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_03f26820;
        }
        ClearExclusiveLocal();
        uVar10 = *puVar1;
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 & 0xfffffff9 | 2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_03f26820:
  lVar8 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar9 = malloc(1);
    param_1[10] = (long)pvVar9;
LAB_03f268dc:
    pvVar9 = malloc(1);
  }
  else {
    plVar6 = (long *)*param_1;
    if (plVar6 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar8 + 8);
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      lVar8 = 0;
      if (plVar6 != (long *)0x0) goto LAB_03f26864;
    }
    else {
LAB_03f26864:
      lVar8 = (**(code **)(*plVar6 + 0x30))(plVar6,1,8);
    }
    lVar7 = DAT_05ae7600;
    param_1[10] = lVar8;
    if (lVar7 == 0) goto LAB_03f268dc;
    plVar6 = (long *)*param_1;
    if (plVar6 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar7 + 8);
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar8 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      pvVar9 = (void *)0x0;
      if (plVar6 != (long *)0x0) goto LAB_03f268b8;
    }
    else {
LAB_03f268b8:
      pvVar9 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,1,8);
    }
  }
  param_1[0xf] = (long)pvVar9;
LAB_03f268e8:
  return (uVar2 & 1) != 0;
}

