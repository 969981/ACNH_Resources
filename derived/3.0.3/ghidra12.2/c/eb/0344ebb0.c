
void FUN_0344ebb0(undefined8 param_1,uint *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined2 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 local_8e0;
  long local_8d8;
  undefined8 local_8d0;
  undefined8 uStack_8c8;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  undefined4 uStack_8a8;
  undefined4 local_8a4;
  undefined4 uStack_8a0;
  undefined8 local_89c;
  undefined4 local_894;
  undefined1 local_890;
  undefined8 local_88c;
  undefined8 local_884;
  undefined5 local_87c;
  undefined3 uStack_877;
  undefined4 local_874;
  undefined1 local_870;
  undefined1 local_86f;
  undefined2 local_86e;
  undefined1 auStack_868 [2096];
  undefined2 auStack_38 [2];
  char local_34 [4];
  
  if (((byte)param_2[10] >> 2 & 1) != 0) goto LAB_0344ec58;
  uVar2 = *param_2;
  if (uVar2 - 4 < 2) {
LAB_0344ebf0:
    plVar6 = *(long **)(param_2 + 4);
    if (plVar6 == (long *)0x0) goto LAB_0344ec58;
LAB_0344ebf8:
    plVar1 = &DAT_04178a58;
    if ((char)plVar6[0xd7] != '\0') {
      plVar1 = plVar6;
    }
    if (*plVar1 != *(long *)(param_2 + 2)) goto LAB_0344ec58;
  }
  else {
    if (uVar2 == 0) goto LAB_0344ec58;
    if (uVar2 == 1) goto LAB_0344ebf0;
    if (((uVar2 & 0xfffffffe) == 8) && (plVar6 = *(long **)(param_2 + 4), plVar6 != (long *)0x0))
    goto LAB_0344ebf8;
  }
  if ((*(long *)(param_2 + 6) == 0) || (*(long *)(param_2 + 8) == 0)) {
LAB_0344ec58:
    FUN_007ef010(param_1,PTR_DAT_04bb3170);
    return;
  }
  local_34[0] = '\0';
  iVar4 = FUN_01d6d448(param_2,local_34);
  if (iVar4 != 0) goto LAB_0344ec58;
  FUN_007ef010(auStack_38,PTR_DAT_04bb3170);
  if (local_34[0] == '\0') {
    local_89c = 0;
    local_890 = 2;
    local_86f = 0xee;
    local_8b0 = 0;
    uStack_8a8 = 0;
    local_894 = 0;
    local_8a4 = 0;
    uStack_8a0 = 0;
    local_88c = 0;
    local_884 = 0;
    local_87c = 0;
    uStack_877 = 0;
    local_874 = 0;
    local_86e = 0;
    local_8c0 = 0;
    uStack_8b8 = 0;
    local_8d0 = 0;
    uStack_8c8 = 0;
    local_8e0 = 0;
    local_8d8 = 0;
    memset(auStack_868,0,0x830);
    local_870 = 1;
    iVar4 = FUN_01d6d864(param_2,&local_8e0);
    if (iVar4 != 0) goto LAB_0344eda4;
    FUN_007eaf80(auStack_38,*(undefined8 *)PTR_DAT_04bb3720,local_8d8,&local_8e0);
  }
  else {
    local_89c = 0;
    local_890 = 2;
    local_86f = 0xee;
    local_8b0 = 0;
    uStack_8a8 = 0;
    local_894 = 0;
    local_8a4 = 0;
    uStack_8a0 = 0;
    local_88c = 0;
    local_884 = 0;
    local_87c = 0;
    uStack_877 = 0;
    local_874 = 0;
    local_870 = 0;
    local_86e = 0;
    local_8c0 = 0;
    uStack_8b8 = 0;
    local_8d0 = 0;
    uStack_8c8 = 0;
    local_8e0 = 0;
    local_8d8 = 0;
    memset(auStack_868,0,0x230);
    iVar4 = FUN_01d6d674(param_2,&local_8e0);
    lVar3 = local_8d8;
    if (iVar4 != 0) {
LAB_0344eda4:
      puVar5 = &DAT_04cb6038;
      goto LAB_0344ee0c;
    }
    if (0 < (int)*DAT_04cb4960) {
      uVar7 = 0;
      do {
        if (**(long **)(*(long *)(DAT_04cb4960 + 2) + uVar7 * 8) == local_8d8) {
          if (-1 < (int)uVar7) goto LAB_0344edf8;
          break;
        }
        uVar7 = uVar7 + 1;
      } while (*DAT_04cb4960 != uVar7);
    }
    plVar6 = (long *)FUN_007eada0();
    if (plVar6 == (long *)0x0) {
LAB_0344edf8:
      plVar6 = (long *)&DAT_04cb6038;
    }
    else {
      *(undefined1 *)((long)plVar6 + 10) = 0;
      *plVar6 = lVar3;
      FUN_027c1640(plVar6 + 2,&local_8e0);
      plVar6 = plVar6 + 1;
    }
    FUN_007ef010(auStack_38,plVar6);
  }
  puVar5 = auStack_38;
LAB_0344ee0c:
  FUN_007ef010(param_1,puVar5);
  return;
}

