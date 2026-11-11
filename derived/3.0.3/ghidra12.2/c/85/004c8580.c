
void FUN_004c8580(long param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
                 undefined4 param_5,long param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_128 [16];
  char *local_118;
  char *pcStack_110;
  char *local_108;
  int local_100;
  char *local_78;
  char *pcStack_70;
  
  local_78 = (char *)*param_4;
  pcStack_70 = (char *)param_4[1];
  if (param_7 == -1) {
    param_7 = *(int *)(param_1 + 0x28);
  }
  puVar3 = (undefined8 *)
           (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),0x18,0);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  uVar2 = iVar1 - param_7;
  if (iVar1 < (int)(*(uint *)(param_1 + 0x2c) & 0x3fffffff)) {
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)param_7 * 8);
  }
  else {
    lVar8 = FUN_00426720(PTR_DAT_048607b8,iVar1 + 1,8,*(undefined8 *)(param_1 + 0x20));
    *(long *)(param_1 + 0x20) = lVar8;
    puVar6 = (undefined8 *)(lVar8 + (long)param_7 * 8);
  }
  if (0 < (int)uVar2) {
    FUN_0043aa30(puVar6 + 1,puVar6,-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3)
    ;
  }
  *puVar6 = puVar3;
  *(int *)(param_1 + 0x28) = iVar1 + 1;
  uVar4 = FUN_004adce0(*param_2,*(int *)(param_2 + 1) - (int)*param_2);
  *puVar3 = uVar4;
  *(undefined4 *)(puVar3 + 1) = 0;
  puVar6 = puVar3 + 2;
  *puVar6 = 0x22222222;
  *(undefined2 *)((long)puVar3 + 0xc) = 0;
  FUN_004225b0(&local_108);
  if (((local_78 != pcStack_70) && (*local_78 == '$')) && (0 < *(int *)(param_1 + 0x58))) {
    local_118 = local_78 + 1;
    pcStack_110 = pcStack_70;
    FUN_004297c0(auStack_128,*(long *)(*(long *)(param_1 + 0x50) + 8) + 1);
    uVar5 = FUN_00429cb0(&local_118,auStack_128);
    uVar7 = 0;
    if ((uVar5 & 1) == 0) {
      lVar8 = 0x18;
      do {
        uVar7 = uVar7 + 1;
        if ((long)*(int *)(param_1 + 0x58) <= (long)uVar7) goto LAB_004c876c;
        local_118 = local_78 + 1;
        pcStack_110 = pcStack_70;
        FUN_004297c0(auStack_128,*(long *)(*(long *)(param_1 + 0x50) + lVar8) + 1);
        uVar5 = FUN_00429cb0(&local_118,auStack_128);
        lVar8 = lVar8 + 0x10;
      } while ((uVar5 & 1) == 0);
    }
    FUN_00427570(*(undefined8 *)(*(long *)(param_1 + 0x50) + (uVar7 & 0xffffffff) * 0x10),&local_108
                 ,0,0);
    pcStack_70 = local_108 + (long)local_100 + -1;
    local_78 = local_108;
  }
LAB_004c876c:
  FUN_004c7e70(*(undefined8 *)(param_1 + 0x18),param_3,&local_78,param_5);
  if (param_6 != 0) {
    uVar4 = FUN_004c8460(*puVar6,*(undefined8 *)(param_1 + 0x18),0x1000,param_6);
    *puVar6 = uVar4;
  }
  FUN_00422550(&local_108);
  return;
}

