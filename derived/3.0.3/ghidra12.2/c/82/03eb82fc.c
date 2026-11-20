
void FUN_03eb82fc(long param_1,uint param_2)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  
  pcVar1 = (char *)(param_1 + 0x3d8);
  pcVar5 = pcVar1 + param_2;
  if (7 < param_2) {
    pcVar5 = pcVar1;
  }
  if (*pcVar5 == '\0') {
    pcVar5 = pcVar1 + param_2;
    if (7 < param_2) {
      pcVar5 = pcVar1;
    }
    *pcVar5 = '\x01';
    puVar8 = (undefined8 *)(param_1 + 0x420) + param_2;
    if (7 < param_2) {
      puVar8 = (undefined8 *)(param_1 + 0x420);
    }
    *puVar8 = 0;
    puVar8 = (undefined8 *)(param_1 + 0x3e0) + param_2;
    if (7 < param_2) {
      puVar8 = (undefined8 *)(param_1 + 0x3e0);
    }
    uVar6 = nn::os::GetSystemTick();
    *puVar8 = uVar6;
  }
  plVar3 = (long *)(param_1 + 0x3e0) + param_2;
  if (7 < param_2) {
    plVar3 = (long *)(param_1 + 0x3e0);
  }
  lVar7 = nn::os::GetSystemTick();
  plVar2 = (long *)(param_1 + 0x420);
  plVar4 = plVar2 + param_2;
  if (7 < param_2) {
    plVar4 = plVar2;
  }
  *plVar4 = lVar7 - *plVar3;
  if (param_2 < 8) {
    puVar8 = (undefined8 *)(&PTR_s_cConstruct_04ba4ea0)[param_2];
  }
  else {
    puVar8 = &DAT_0407ebb1;
  }
  uVar10 = (ulong)param_2;
  if (7 < param_2) {
    uVar10 = 0;
  }
  lVar7 = plVar2[uVar10];
  if (lVar7 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
    lVar9 = 0;
    if (*(long *)PTR_DAT_04bb29d0 != 0) {
      lVar9 = (lVar7 * 1000) / *(long *)PTR_DAT_04bb29d0;
    }
  }
  else {
    lVar9 = 0;
    if (DAT_05ae7888 != 0) {
      lVar9 = lVar7 / DAT_05ae7888;
    }
    lVar9 = lVar9 * 1000;
  }
  lVar7 = param_1 + 0x218 + (ulong)param_2 * 0x38;
  if (7 < param_2) {
    lVar7 = param_1 + 0x218;
  }
  FUN_038d1270((double)((float)lVar9 / 1000.0),lVar7,"%s:\t%2.1f(sec)",puVar8);
  pcVar5 = pcVar1 + param_2;
  if (7 < param_2) {
    pcVar5 = pcVar1;
  }
  *pcVar5 = '\0';
  return;
}

