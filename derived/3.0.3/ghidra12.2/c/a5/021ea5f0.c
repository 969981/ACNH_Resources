
void FUN_021ea5f0(undefined2 *param_1,long param_2,int *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined2 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *__src;
  undefined *local_60;
  undefined1 *puStack_58;
  int local_50;
  undefined1 auStack_4c [7];
  undefined1 local_45;
  
  if (*param_3 == 3) {
    FUN_021ea800(param_1,param_2);
    return;
  }
  local_50 = 8;
  local_45 = 0;
  local_60 = PTR_DAT_04bb6a30 + 0x10;
  puStack_58 = auStack_4c;
  (**(code **)(*(long *)(param_2 + 0x3e0) + 0x18))(param_2 + 0x3e0);
  __src = *(undefined1 **)(param_2 + 1000);
  if (auStack_4c != __src) {
    (**(code **)(*(long *)(param_2 + 0x3e0) + 0x18))(param_2 + 0x3e0);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 1000) + lVar6) == '\0') goto LAB_021ea6dc;
      lVar1 = *(long *)(param_2 + 1000) + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_021ea6dc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_021ea6dc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_021ea6dc:
    iVar3 = (int)lVar6;
    if (local_50 <= (int)lVar6) {
      iVar3 = local_50 + -1;
    }
    memcpy(auStack_4c,__src,(long)iVar3);
    auStack_4c[iVar3] = 0;
  }
  local_60 = PTR_DAT_04bb3768 + 0x10;
  uVar2 = FUN_021dd320(&local_60);
  if (((DAT_05292338 == 0) || (DAT_05aed670 == 0)) || (*(long *)(DAT_05aed670 + 0x330) == 0)) {
LAB_021ea7b0:
    if (5 < uVar2) {
LAB_021ea7cc:
      uVar5 = 0x38ac;
      goto LAB_021ea7d0;
    }
    puVar7 = &DAT_04179d74;
  }
  else {
    puVar4 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar3 = FUN_006bd550(*puVar4,0);
    if (((iVar3 != 0x758f7eaf) || (DAT_05aed670 == 0)) ||
       ((*(long *)(DAT_05aed670 + 0x330) == 0 ||
        (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) == 0)))) goto LAB_021ea7b0;
    if (5 < uVar2) goto LAB_021ea7cc;
    puVar7 = &DAT_04179d68;
  }
  uVar5 = *(undefined2 *)(puVar7 + (long)(int)uVar2 * 2);
LAB_021ea7d0:
  *param_1 = uVar5;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_0277d4ac(param_1);
  return;
}

