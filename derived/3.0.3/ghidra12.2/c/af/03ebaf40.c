
void FUN_03ebaf40(long param_1,uint param_2,long *param_3)

{
  long *plVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *local_60;
  char *local_58;
  
  puVar3 = PTR_DAT_04bb2020;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  local_58 = "::";
  (**(code **)(*param_3 + 0x18))(param_3);
  uVar9 = 0;
  do {
    if (*(char *)(param_3[1] + uVar9) == '\0') {
LAB_03ebafd0:
      iVar6 = (int)uVar9;
joined_r0x03ebafd4:
      uVar10 = (ulong)(iVar6 - 2U);
      if (-1 < (int)(iVar6 - 2U)) goto LAB_03ebb008;
      break;
    }
    lVar5 = param_3[1] + uVar9;
    if (*(char *)(lVar5 + 1) == '\0') {
      uVar9 = uVar9 + 1;
      goto LAB_03ebafd0;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      uVar9 = uVar9 + 2;
      iVar6 = (int)uVar9;
      goto joined_r0x03ebafd4;
    }
    uVar9 = uVar9 + 3;
  } while (uVar9 != 0x80001);
  goto LAB_03ebafe8;
  while( true ) {
    uVar10 = uVar10 - 1;
    uVar9 = (ulong)(uVar7 - 1);
    if ((int)(uVar7 - 2) < 1) break;
LAB_03ebb008:
    pcVar2 = (char *)(param_3[1] + uVar10);
    (**(code **)(local_60 + 0x18))(&local_60);
    uVar7 = (uint)uVar9;
    if ((pcVar2 == local_58) ||
       ((*pcVar2 == *local_58 && ((*pcVar2 == '\0' || (pcVar2[1] == local_58[1])))))) {
      uVar8 = 0;
      if (-1 < (int)(uVar7 - 2)) {
        uVar8 = uVar7;
      }
      goto LAB_03ebb05c;
    }
  }
LAB_03ebafe8:
  uVar8 = 0;
LAB_03ebb05c:
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar4 = param_3[1];
  lVar5 = 0;
  do {
    if (*(char *)(lVar4 + lVar5) == '\0') goto LAB_03ebb0b0;
    if (*(char *)(lVar4 + lVar5 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_03ebb0b0;
    }
    if (*(char *)(lVar4 + lVar5 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_03ebb0b0;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_03ebb0b0:
  local_58 = (char *)*(long *)(PTR_PTR_04bb2238 + 8);
  if ((int)uVar8 <= (int)lVar5 && -1 < (int)uVar8) {
    local_58 = (char *)(lVar4 + (ulong)uVar8);
  }
  local_60 = puVar3 + 0x10;
  if (*(uint *)(param_1 + 0x38) <= param_2) {
    param_2 = 0;
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x40) + (long)(int)param_2 * 0x10);
  (**(code **)(*plVar1 + 0x10))(plVar1,&local_60);
  return;
}

