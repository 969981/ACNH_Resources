
void FUN_0383e430(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_b8;
  undefined **local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long lStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined1 local_50;
  undefined8 local_48;
  long lStack_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 5) {
    FUN_03f45838(param_1 + 0x80);
    lVar7 = *(long *)(param_1 + 0x20);
    if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0xd8) >> 1 & 1) == 0)) {
      FUN_03bf3a60(lVar7);
      *(byte *)(lVar7 + 0xd8) = *(byte *)(lVar7 + 0xd8) | 2;
    }
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 3) {
      if (*(int *)(param_1 + 0x88) != 3) {
        if (*(int *)(param_1 + 0x88) != 2) goto LAB_0383e4c8;
LAB_0383e4e0:
        *(undefined4 *)(param_1 + 0x10) = 4;
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
        goto LAB_0383e4f4;
      }
    }
    else {
      if (iVar3 != 6) {
        if (iVar3 != 5) goto LAB_0383e498;
LAB_0383e4c8:
        *(undefined4 *)(param_1 + 0x10) = 4;
        goto LAB_0383e4f4;
      }
      if (*(int *)(param_1 + 0x88) == 3) goto LAB_0383e4e0;
    }
LAB_0383e624:
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  else {
LAB_0383e498:
    if (iVar3 == 6) goto LAB_0383e624;
    if (iVar3 == 4) {
LAB_0383e4f4:
      pcVar4 = *(char **)(param_1 + 0x30);
      if (((((((*pcVar4 == 'D') && (pcVar4[1] == 'o')) && (pcVar4[2] == 'u')) &&
            ((pcVar4[3] == 'b' && (pcVar4[4] == 'u')))) &&
           ((pcVar4[5] == 't' && ((pcVar4[6] == 's' && (pcVar4[7] == 'u')))))) &&
          ((pcVar4[8] == 'g' && (pcVar4[9] == 'o')))) ||
         (lVar7 = *(long *)(param_1 + 0x20), lVar7 == 0)) {
LAB_0383e608:
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
        *(undefined4 *)(param_1 + 0x10) = 6;
        FUN_0383e37c(param_1);
        goto LAB_0383e624;
      }
      iVar3 = *(int *)(lVar7 + 0x18);
      if (iVar3 == 0) {
LAB_0383e58c:
        iVar2 = 0;
        if (*(long *)(lVar7 + 0x100) != 0) {
          iVar2 = *(int *)(*(long *)(*(long *)(lVar7 + 0x100) + 0x60) + 0x10);
        }
        lVar7 = *(long *)(lVar7 + ((ulong)*(byte *)(lVar7 + 0xd8) & 1) * 8 + 0x20);
        uVar1 = *(uint *)(lVar7 + 0x38);
        uVar5 = (ulong)uVar1;
        if (0 < (int)uVar1) {
          plVar6 = (long *)(*(long *)(lVar7 + 0x40) + 8);
          do {
            if (*plVar6 != 0) {
              iVar2 = *(int *)(*(long *)(*plVar6 + 0x60) + 0x10) + iVar2;
            }
            uVar5 = uVar5 - 1;
            plVar6 = plVar6 + 3;
          } while (uVar5 != 0);
        }
        if (iVar2 == 0 && iVar3 == 0) goto LAB_0383e608;
      }
      else {
        FUN_03bf3c20();
        lVar7 = *(long *)(param_1 + 0x20);
        if (lVar7 != 0) goto LAB_0383e58c;
      }
      iVar3 = *(int *)(param_1 + 0x10);
    }
    else if (iVar3 == 3) goto LAB_0383e4c8;
    if (1 < iVar3 - 1U) {
      if (iVar3 != 0) {
        return;
      }
      goto LAB_0383e6d8;
    }
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_03f45838(param_1 + 0x48);
  }
  local_a0 = PTR_DAT_04bcb2c0;
  lStack_40 = *(long *)(param_1 + 0x40);
  if (lStack_40 != 0) {
    local_96 = 1;
    local_98 = 1;
    local_60 = PTR_DAT_04bb2020 + 0x10;
    puStack_58 = PTR_DAT_04bb2120;
    lVar7 = *(long *)PTR_DAT_04bb28b0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    local_50 = 0;
    local_48 = 0;
    local_a0 = local_a0 + 0x10;
    local_38 = 0;
    local_80 = lVar7 + 0x598;
    uStack_78 = 0;
    lStack_68 = lVar7 + 0x5b8;
    local_70 = 0;
    local_90 = *(undefined8 *)(lVar7 + 0x198);
    uStack_88 = 0;
    local_b8 = 0;
    local_28 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
    local_b0 = &local_a0;
    uStack_a8 = 0;
    puStack_30 = local_60;
    FUN_03f45184(lVar7 + 0x1a8,&local_b8);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
LAB_0383e6d8:
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  return;
}

