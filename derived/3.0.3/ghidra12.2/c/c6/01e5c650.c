
/* WARNING: Removing unreachable block (ram,0x01e5c7d0) */

void switchD_01e4c014::caseD_0(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  long *plVar9;
  char *pcVar10;
  undefined8 local_50;
  char *pcStack_48;
  
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_1 + 0x4e4);
  *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_1 + 0x4e8);
  *(undefined8 *)(param_1 + 0x314) = *(undefined8 *)(param_1 + 0x4c0);
  *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x4c8);
  iVar2 = *(int *)(param_1 + 0x570);
  local_50 = (undefined **)((ulong)local_50 & 0xffffffff00000000);
  lVar5 = *(long *)(*(long *)(param_1 + 0x340) + 0x1138);
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x88);
    plVar9 = (long *)(lVar5 + 0x60);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pcVar10 = *(char **)(lVar5 + 0x68);
    (**(code **)((&DAT_05390480)[(long)iVar2 * 2] + 0x18))(&DAT_05390480 + (long)iVar2 * 2);
    pcVar8 = (char *)(&DAT_05390488)[(long)iVar2 * 2];
    if (pcVar10 != pcVar8) {
      pcVar10 = *(char **)(lVar5 + 0x68);
      if (*pcVar10 != *pcVar8) {
        return;
      }
      if (*pcVar10 != '\0') {
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          if (uVar6 == 0x80000) {
            return;
          }
          if (pcVar10[uVar6 + 1] != pcVar8[uVar6 + 1]) {
            return;
          }
          if (pcVar10[uVar6 + 1] == '\0') goto LAB_01e5c784;
          if (pcVar10[uVar6 + 2] != pcVar8[uVar6 + 2]) {
            return;
          }
          uVar4 = uVar6 + 2;
        } while (pcVar10[uVar6 + 2] != '\0');
        uVar6 = uVar6 + 1;
LAB_01e5c784:
        if (uVar6 >> 0x13 != 0) {
          return;
        }
      }
    }
    lVar5 = *(long *)(param_1 + 0x340);
    if (*(long *)(lVar5 + 0x1138) != 0) {
      uVar3 = *(uint *)(lVar5 + 0x1698) >> 1;
      uVar1 = uVar3 & 1;
      local_50 = (undefined **)(CONCAT44(local_50._4_4_,uVar3) & 0xffffffff00000001);
      uVar4 = FUN_03850368(*(long *)(lVar5 + 0x1138),uVar1);
      if (((((uVar4 & 1) == 0) && (*(long *)(lVar5 + 0x1138) != 0)) &&
          (uVar4 = FUN_03850368(*(long *)(lVar5 + 0x1138),uVar1), (uVar4 & 1) == 0)) &&
         (uVar4 = FUN_0384fca4(*(undefined8 *)(lVar5 + 0x1138),uVar1), (uVar4 & 1) == 0)) {
        return;
      }
    }
    *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x430);
    *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x438);
    *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_1 + 0x448);
    *(undefined8 *)(param_1 + 0x314) = *(undefined8 *)(param_1 + 0x420);
    *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x428);
    lVar5 = *(long *)(param_1 + 0x340);
    local_50 = &PTR_LAB_048f9770;
    pcStack_48 = "NpcMoveAccelRate";
    if (((*(long *)(lVar5 + 0x1138) != 0) &&
        (lVar7 = *(long *)(*(long *)(lVar5 + 0x1138) + 0x78), lVar7 != 0)) &&
       (plVar9 = *(long **)(lVar7 + 0x48), plVar9 != (long *)0x0)) {
      (**(code **)(*plVar9 + 0x30))(*(undefined4 *)(param_1 + 0x318),plVar9,&local_50);
      lVar5 = *(long *)(param_1 + 0x340);
    }
    FUN_017081d0(lVar5,&DAT_05390430 + (long)*(int *)(param_1 + 0x568) * 2,6,1,0);
    *(undefined4 *)(param_1 + 0x4b8) = 0;
    *(undefined4 *)(param_1 + 0x598) = 1;
  }
  return;
}

