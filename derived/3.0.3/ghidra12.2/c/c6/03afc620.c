
void FUN_03afc620(long param_1)

{
  long *plVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  *(undefined1 *)(param_1 + 0x768) = 0;
  lVar7 = *(long *)(param_1 + 0x58);
  if (*(int *)(param_1 + 0x10) < 1) {
LAB_03afc658:
    if (lVar7 == 0) goto LAB_03afc764;
  }
  else if (lVar7 == 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    *(long *)(param_1 + 0x58) = lVar7;
    goto LAB_03afc658;
  }
  FUN_03afc794(param_1);
  iVar3 = *(int *)(*(long *)(param_1 + 0x58) + 0x38);
  if (iVar3 != 0) {
    plVar8 = *(long **)(*(long *)(param_1 + 0x58) + 0x40);
    plVar1 = plVar8 + iVar3;
    do {
      lVar7 = *plVar8;
      if (((*(byte *)(lVar7 + 0x281) & 3) == 0) &&
         (lVar9 = *(long *)(lVar7 + 0x70), (*(byte *)(lVar9 + 0x5599) & 1) != 0)) {
        puVar2 = (uint *)(lVar9 + 0x4e58);
        do {
          uVar4 = *puVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar4 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *(long *)(*(long *)(lVar9 + 0x4e60) +
                 (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3)) = lVar7;
        *(byte *)(lVar7 + 0x281) = *(byte *)(lVar7 + 0x281) | 2;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
  *(undefined1 *)(param_1 + 0x768) = 1;
  FUN_03920240(param_1 + 0x770);
  if (*(char *)(param_1 + 0xd0) == '\0') {
    if (*(char *)(param_1 + 0xd1) != '\0') goto LAB_03afc728;
  }
  else {
    (**(code **)(*(long *)(param_1 + 200) + 0x58))(param_1 + 200,param_1 + 0xd4);
    *(undefined2 *)(param_1 + 0xd0) = 0x100;
LAB_03afc728:
    (**(code **)(*(long *)(param_1 + 200) + 0x60))
              (param_1 + 200,param_1 + 0x114,param_1 + 0xd4,*(undefined4 *)(param_1 + 0x154));
    *(undefined1 *)(param_1 + 0xd1) = 0;
  }
  FUN_03920590(param_1 + 0x770,param_1 + 0x68,param_1 + 0xd4,0);
  FUN_039e0450(param_1 + 0xbf8);
LAB_03afc764:
  if (*(char *)(param_1 + 0x738) != '\0') {
    plVar8 = (long *)(param_1 + 0x38);
    do {
      lVar7 = *plVar8;
      plVar8 = (long *)(lVar7 + 8);
    } while (lVar7 != param_1 + 0x30);
  }
  return;
}

