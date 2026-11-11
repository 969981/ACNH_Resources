
undefined8
FUN_004c02f0(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,long param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  uint uStack_54;
  
  uVar4 = FUN_004adce0(*param_2,*(int *)(param_2 + 1) - (int)*param_2);
  iVar10 = (int)((ulong)(param_5 - (long)param_4) >> 4);
  if (iVar10 < 1) {
    uStack_54 = 0;
  }
  else {
    uStack_54 = 0;
    uVar8 = (ulong)(param_5 - (long)param_4) >> 4 & 0xffffffff;
    puVar9 = param_4;
    do {
      uVar3 = (int)*puVar9 * -0x61c8864f;
      uVar7 = (int)((ulong)*puVar9 >> 0x20) * -0x61c8864f;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar2 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = uVar2 + 0x9e3779b9 + (uVar2 >> 2) + uVar3 * 0x40 ^ uVar3;
      uStack_54 = uStack_54 * 0x40 + -0x61c88647 + uVar3 + (uVar3 >> 2) ^ uStack_54;
      uVar8 = uVar8 - 1;
      puVar9 = puVar9 + 2;
    } while (uVar8 != 0);
  }
  plVar1 = (long *)(param_1 + 0x40);
  local_58 = 0xffffffff;
  local_68 = param_3;
  uStack_60 = uVar4;
  uVar3 = FUN_004c4540(plVar1,&local_68);
  if (*(uint *)(param_1 + 0x48) != uVar3) goto LAB_004c0460;
  plVar5 = (long *)(**(code **)**(undefined8 **)(param_1 + 0x60))();
  if (iVar10 == 0) {
    uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,0x20,0);
    FUN_00454010(uVar6,param_3,uVar4,0x1000);
    uVar7 = *(uint *)(param_1 + 0x48);
    if (uVar7 == (*(uint *)(param_1 + 0x4c) & 0x3fffffff)) goto LAB_004c0420;
  }
  else {
    uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,0x78,0);
    FUN_00454030(uVar6,param_3,uVar4,0x1000,param_4,param_5);
    uVar7 = *(uint *)(param_1 + 0x48);
    if (uVar7 == (*(uint *)(param_1 + 0x4c) & 0x3fffffff)) {
LAB_004c0420:
      FUN_00426990(PTR_DAT_048607b8,plVar1,0x20);
      uVar7 = *(uint *)(param_1 + 0x48);
    }
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x40) + (long)(int)uVar7 * 0x20);
  *puVar9 = local_68;
  puVar9[1] = uStack_60;
  puVar9[2] = CONCAT44(uStack_54,local_58);
  puVar9[3] = uVar6;
  *(uint *)(param_1 + 0x48) = uVar7 + 1;
LAB_004c0460:
  return *(undefined8 *)(*plVar1 + ((long)((ulong)uVar3 << 0x20) >> 0x1b) + 0x18);
}

