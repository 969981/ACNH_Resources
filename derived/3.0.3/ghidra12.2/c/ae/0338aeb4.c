
/* WARNING: Removing unreachable block (ram,0x0338b0dc) */

void FUN_0338aeb4(long param_1,long param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long local_60 [3];
  undefined4 local_44;
  
  if (param_2 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 0x10);
  iVar1 = *(int *)(param_2 + 0x3ec);
  if (iVar2 < 1) {
    lVar5 = 0;
  }
  if (lVar5 != 0 && lVar5 != 0x40) {
    iVar2 = *(int *)(lVar5 + -0x20);
    if (iVar1 < iVar2) {
      return;
    }
    if (*(char *)(lVar5 + -8) != '\0') {
      lVar4 = *(long *)(lVar5 + -0x18);
      lVar6 = *(long *)(*(long *)(lVar4 + 0x210) + 0x48);
      if (lVar6 == 0) {
        puVar7 = &DAT_0418e5bc;
      }
      else {
        if (*(int *)(lVar6 + 0x18) == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = **(long **)(lVar6 + 0x20);
          if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
            puVar7 = (undefined4 *)(*(long *)(lVar6 + 0x10) + 0x14a0);
            goto LAB_0338b04c;
          }
        }
        puVar7 = (undefined4 *)PTR_DAT_04bb2f48;
        if (lVar6 != 0) {
          puVar7 = (undefined4 *)(lVar6 + 4);
        }
      }
LAB_0338b04c:
      *(undefined4 *)(lVar5 + -0x10) = *puVar7;
      *(undefined4 *)(lVar5 + -0xc) = puVar7[1];
      lVar6 = *(long *)(*(long *)(lVar4 + 0x210) + 0x48);
      if (lVar6 == 0) {
        return;
      }
      if (*(long *)(DAT_05739190 + 0xd0) != 0) {
        *(undefined1 *)(*(long *)(DAT_05739190 + 0xd0) + 0x26c) = 1;
        lVar6 = *(long *)(*(long *)(lVar4 + 0x210) + 0x48);
      }
      if (((*(int *)(lVar6 + 0x18) != 0) && (lVar4 = **(long **)(lVar6 + 0x20), lVar4 != 0)) &&
         (local_60[0] = *(long *)(lVar4 + 0x10), local_60[0] != 0)) {
        local_44 = 1;
        *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(local_60[0] + 0x14a0);
        *(undefined4 *)(lVar4 + 8) = *(undefined4 *)(local_60[0] + 0x14a4);
        local_60[2] = 0;
        local_60[1] = 0;
        (*(code *)**(undefined8 **)(local_60[0] + 0x40))
                  ((undefined8 *)(local_60[0] + 0x40),1,local_60);
        *(undefined8 *)(lVar4 + 0x10) = 0;
      }
      iVar2 = *(int *)(lVar5 + -0x20);
    }
    if (iVar2 == iVar1) {
      *(long *)(lVar5 + -0x18) = param_2;
      *(byte *)(lVar5 + -8) = param_3 & 1;
      return;
    }
    iVar2 = *(int *)(param_1 + 0x18);
  }
  if (*(int *)(param_1 + 0x30) <= iVar2) {
    return;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = *puVar3;
  }
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = iVar1;
  *(byte *)(puVar3 + 7) = param_3 & 1;
  puVar3[9] = 0;
  plVar8 = puVar3 + 8;
  *plVar8 = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[5] = param_2;
  puVar3[6] = 0;
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  *(long **)(param_1 + 0x10) = plVar8;
  *plVar8 = param_1 + 8;
  puVar3[9] = puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = plVar8;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (*(char *)(puVar3 + 7) == '\0') {
    return;
  }
  lVar5 = *(long *)(*(long *)(puVar3[5] + 0x210) + 0x48);
  if (lVar5 == 0) {
    puVar7 = &DAT_0418e5bc;
  }
  else {
    if (*(int *)(lVar5 + 0x18) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = **(long **)(lVar5 + 0x20);
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
        puVar7 = (undefined4 *)(*(long *)(lVar5 + 0x10) + 0x14a0);
        goto LAB_0338b020;
      }
    }
    puVar7 = (undefined4 *)PTR_DAT_04bb2f48;
    if (lVar5 != 0) {
      puVar7 = (undefined4 *)(lVar5 + 4);
    }
  }
LAB_0338b020:
  *(undefined4 *)(puVar3 + 6) = *puVar7;
  *(undefined4 *)((long)puVar3 + 0x34) = puVar7[1];
  return;
}

