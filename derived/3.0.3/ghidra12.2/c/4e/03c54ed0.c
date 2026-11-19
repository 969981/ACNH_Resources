
ulong FUN_03c54ed0(long param_1,long *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                  undefined4 *param_6,undefined4 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  char *pcVar10;
  undefined *local_90;
  long lStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  uint uStack_74;
  undefined4 local_70;
  undefined8 local_68;
  
  plVar6 = *(long **)(param_1 + 0x38);
  plVar1 = (long *)(param_1 + 0x30);
  if (plVar6 != plVar1) {
    plVar8 = plVar6 + -0x2c;
    uVar5 = 0xffffffff;
    do {
      plVar9 = plVar8 + 4;
      (**(code **)(*plVar9 + 0x18))(plVar9);
      (**(code **)(*plVar9 + 0x18))(plVar9);
      pcVar10 = (char *)plVar8[5];
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if (pcVar10 == pcVar3) goto LAB_03c550e8;
      cVar2 = *(char *)plVar8[5];
      if (cVar2 == *pcVar3) {
        if (cVar2 == '\0') goto LAB_03c550e8;
        lVar4 = 0x7fffe;
        pcVar10 = (char *)plVar8[5];
        while( true ) {
          if (pcVar10[1] != pcVar3[1]) break;
          if (pcVar10[1] == '\0') goto LAB_03c550e8;
          if (pcVar10[2] != pcVar3[2]) break;
          if (pcVar10[2] == '\0') goto LAB_03c550e8;
          if ((lVar4 == 0) || (cVar2 = pcVar10[3], cVar2 != pcVar3[3])) break;
          lVar4 = lVar4 + -3;
          pcVar3 = pcVar3 + 3;
          pcVar10 = pcVar10 + 3;
          if (cVar2 == '\0') goto LAB_03c550e8;
        }
      }
      plVar6 = (long *)plVar6[1];
      plVar8 = plVar6 + -0x2c;
    } while (plVar8 != (long *)(param_1 + -0x130));
  }
  uVar5 = 0;
  lVar4 = param_1 + 0x60;
  do {
    if (*(char *)(lVar4 + uVar5) == '\0') {
LAB_03c55054:
      *(undefined1 *)(lVar4 + uVar5) = 1;
      goto LAB_03c55064;
    }
    if (*(char *)(lVar4 + uVar5 + 1) == '\0') {
      uVar5 = uVar5 + 1;
      goto LAB_03c55054;
    }
    if (*(char *)(lVar4 + uVar5 + 2) == '\0') {
      uVar5 = uVar5 + 2;
      goto LAB_03c55054;
    }
    uVar5 = uVar5 + 3;
  } while (uVar5 != 0xff);
  uVar5 = 0xffffffff;
LAB_03c55064:
  uStack_74 = (uint)uVar5 | param_5 << 8;
  lStack_88 = param_2[1];
  local_90 = PTR_DAT_04bb2020 + 0x10;
  uStack_7c = *param_6;
  if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x58)) {
    puVar7 = *(undefined8 **)(param_1 + 0x48);
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x48) = *puVar7;
    }
    local_80 = param_4;
    local_78 = param_3;
    local_70 = param_7;
    local_68 = param_8;
    FUN_03c54494(puVar7,&local_90);
    puVar7[0x2c] = 0;
    puVar7[0x2d] = 0;
    lVar4 = *plVar1;
    *plVar1 = (long)(puVar7 + 0x2c);
    puVar7[0x2c] = lVar4;
    puVar7[0x2d] = plVar1;
    if (lVar4 != 0) {
      *(undefined8 **)(lVar4 + 8) = puVar7 + 0x2c;
    }
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  }
LAB_03c550e8:
  return uVar5 & 0xffffffff;
}

