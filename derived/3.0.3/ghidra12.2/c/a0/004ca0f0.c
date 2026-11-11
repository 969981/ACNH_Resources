
void FUN_004ca0f0(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  
  lVar1 = FUN_004ca360();
  if (lVar1 != 0) {
    if (param_3 == (long *)0x0) {
      return;
    }
    *param_3 = lVar1;
    return;
  }
  puVar2 = (undefined8 *)FUN_00426e90(param_2,1);
  if ((puVar2 == (undefined8 *)0x0) || ((int)((ulong)*puVar2 >> 8) < 1)) {
    lVar1 = FUN_00426d90(param_2);
    plVar7 = param_1 + 4;
    if (lVar1 != 0) {
      plVar7 = param_1 + 2;
    }
    lVar4 = *plVar7;
    lVar1 = FUN_00426d90(param_2);
    plVar7 = (long *)param_1[1];
    if (lVar1 == 0) {
      lVar1 = (**(code **)(*plVar7 + 0x10))(plVar7,0x40,0);
      FUN_00453d10(lVar1,0,0,0,lVar4,"hkArray",0);
      lVar4 = FUN_00426d90(param_2);
    }
    else {
      lVar1 = (**(code **)(*plVar7 + 0x10))(plVar7,0x78,0);
      FUN_00453d40(lVar1,0x22222222,0,0,lVar4,"hkArray",0);
      lVar4 = FUN_00426d90(param_2);
    }
  }
  else {
    plVar7 = (long *)param_1[1];
    lVar1 = FUN_00426d90(param_2);
    uVar5 = 0;
    if (lVar1 != 0) {
      uVar5 = 0x22222222;
    }
    puVar3 = (ulong *)FUN_00426e90(param_2,1);
    if (puVar3 == (ulong *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *puVar3 >> 8;
    }
    lVar1 = (**(code **)(*plVar7 + 0x10))(plVar7,0x68,0);
    FUN_00453e60(lVar1,uVar5,uVar8 & 0xffffffff,0,0,&DAT_04c6fb68,&DAT_0408562c,0);
    lVar4 = FUN_00426d90(param_2);
  }
  if (lVar4 != 0) {
    uVar5 = FUN_00426d90(param_2);
    FUN_004c88b0(param_1,uVar5,lVar1 + 0x18);
    uVar5 = FUN_00426d90(param_2);
    FUN_004c88b0(param_1,uVar5,*(long *)(lVar1 + 0x30) + 0x10);
    puVar2 = (undefined8 *)FUN_00426e90(param_2,1);
    if ((puVar2 != (undefined8 *)0x0) && (0 < (int)((ulong)*puVar2 >> 8))) {
      FUN_0044e030(lVar1,0,0);
      lVar4 = *param_1;
      uVar6 = *(uint *)(lVar4 + 0xf0);
      if (uVar6 == (*(uint *)(lVar4 + 0xf4) & 0x3fffffff)) {
        FUN_00426990(PTR_DAT_048607b8,lVar4 + 0xe8,8);
        uVar6 = *(uint *)(lVar4 + 0xf0);
      }
      *(long *)(*(long *)(lVar4 + 0xe8) + (long)(int)uVar6 * 8) = lVar1;
      *(uint *)(lVar4 + 0xf0) = uVar6 + 1;
      goto joined_r0x004ca328;
    }
  }
  FUN_0044e030(lVar1,0x18,8);
joined_r0x004ca328:
  if (param_3 != (long *)0x0) {
    *param_3 = lVar1;
  }
  return;
}

