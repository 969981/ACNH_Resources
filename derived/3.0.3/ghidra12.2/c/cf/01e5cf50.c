
/* WARNING: Removing unreachable block (ram,0x01e5d0ac) */

void FUN_01e5cf50(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  long *plVar8;
  char *pcVar9;
  undefined8 local_48;
  char *pcStack_40;
  uint local_34;
  
  iVar1 = *(int *)(param_1 + 0x570);
  local_48 = (undefined **)((ulong)local_48 & 0xffffffff00000000);
  lVar4 = *(long *)(*(long *)(param_1 + 0x340) + 0x1138);
  if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x88);
    plVar8 = (long *)(lVar4 + 0x60);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    pcVar9 = *(char **)(lVar4 + 0x68);
    (**(code **)((&DAT_05390480)[(long)iVar1 * 2] + 0x18))(&DAT_05390480 + (long)iVar1 * 2);
    pcVar7 = (char *)(&DAT_05390488)[(long)iVar1 * 2];
    if (pcVar9 != pcVar7) {
      pcVar9 = *(char **)(lVar4 + 0x68);
      if (*pcVar9 != *pcVar7) {
        return;
      }
      if (*pcVar9 != '\0') {
        uVar3 = 0;
        do {
          uVar5 = uVar3;
          if (uVar5 == 0x80000) {
            return;
          }
          if (pcVar9[uVar5 + 1] != pcVar7[uVar5 + 1]) {
            return;
          }
          if (pcVar9[uVar5 + 1] == '\0') goto LAB_01e5d060;
          if (pcVar9[uVar5 + 2] != pcVar7[uVar5 + 2]) {
            return;
          }
          uVar3 = uVar5 + 2;
        } while (pcVar9[uVar5 + 2] != '\0');
        uVar5 = uVar5 + 1;
LAB_01e5d060:
        if (uVar5 >> 0x13 != 0) {
          return;
        }
      }
    }
    lVar4 = *(long *)(param_1 + 0x340);
    if (*(long *)(lVar4 + 0x1138) == 0) {
      local_34 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar4 + 0x1698) >> 1;
      local_34 = uVar2 & 1;
      local_48 = (undefined **)(CONCAT44(local_48._4_4_,uVar2) & 0xffffffff00000001);
      uVar3 = FUN_03850368(*(long *)(lVar4 + 0x1138),local_34);
      uVar2 = local_34;
      if (((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x1138) != 0)) &&
          (uVar3 = FUN_03850368(*(long *)(lVar4 + 0x1138),local_34), (uVar3 & 1) == 0)) &&
         (uVar3 = FUN_0384fca4(*(undefined8 *)(lVar4 + 0x1138),uVar2), (uVar3 & 1) == 0)) {
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x32a) = 0;
    *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x430);
    *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x438);
    *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_1 + 0x448);
    *(undefined8 *)(param_1 + 0x314) = *(undefined8 *)(param_1 + 0x420);
    *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x428);
    lVar4 = *(long *)(param_1 + 0x340);
    local_48 = &PTR_LAB_048f9770;
    pcStack_40 = "NpcMoveAccelRate";
    if (((*(long *)(lVar4 + 0x1138) != 0) &&
        (lVar6 = *(long *)(*(long *)(lVar4 + 0x1138) + 0x78), lVar6 != 0)) &&
       (plVar8 = *(long **)(lVar6 + 0x48), plVar8 != (long *)0x0)) {
      (**(code **)(*plVar8 + 0x30))(*(undefined4 *)(param_1 + 0x318),plVar8,&local_48);
      lVar4 = *(long *)(param_1 + 0x340);
    }
    FUN_017081d0(lVar4,&DAT_05390430 + (long)*(int *)(param_1 + 0x568) * 2,6,1,0);
    *(undefined4 *)(param_1 + 0x4b8) = 0;
    *(undefined4 *)(param_1 + 0x598) = 1;
  }
  return;
}

