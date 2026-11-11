
undefined8 FUN_00461e80(char *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_b8;
  long lStack_b0;
  char *local_a8;
  undefined8 local_a0;
  long local_98;
  long lStack_90;
  char *local_68 [2];
  ulong local_58;
  long local_48;
  
  local_a8 = param_1;
  local_a0 = param_2;
  local_98 = param_3;
  lStack_90 = param_4;
  if ((param_3 != 0) || (*param_1 != '\0')) {
    FUN_00427bc0(local_68,param_4,&DAT_04c15808);
    if ((local_58 & 1) != 0) {
      FUN_0043dd50(local_58 & 0xfffffffffffffffe);
    }
    if (local_68[0] == (char *)0x0) {
      iVar2 = FUN_00462730(&local_a8,param_4,0,param_3,0);
    }
    else {
      iVar2 = (**(code **)local_68[0])(local_a0,param_4,0,param_3,0);
    }
    if (iVar2 < 0) {
      return 0x80040200;
    }
  }
  local_b8 = param_2;
  lStack_b0 = param_4;
  local_68[0] = param_1;
  local_48 = param_3;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar5 = (long)*(int *)(param_1 + 0x10) << 3;
    puVar4 = *(undefined8 **)(param_1 + 8);
    do {
      iVar2 = (**(code **)(*(long *)*puVar4 + 0x18))((long *)*puVar4,param_2,param_3,param_4);
      if (iVar2 < 0) {
        if (DAT_04c70178 < 4) {
          return 0x80040200;
        }
        FUN_00444bc0(&local_a8,&DAT_04c70128,4);
        lVar5 = FUN_004446b0(&local_a8,"{}, Compiler could not convert types {}->{}, p = {}",
                             PTR_DAT_04bd5600,local_68,&local_48,&lStack_b0,&local_b8);
        *(char **)(lVar5 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp"
        ;
        *(undefined8 *)(lVar5 + 0x30) = 0x177;
        FUN_00444c00(&local_a8);
        return 0x80040200;
      }
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
  }
  if (((param_3 != 0) && (uVar3 = FUN_004274f0(param_3), (uVar3 >> 0xc & 1) != 0)) ||
     (uVar3 = FUN_004274f0(param_4), (uVar3 >> 0xc & 1) != 0)) {
    uVar3 = *(uint *)(param_1 + 0x60);
    if (uVar3 == (*(uint *)(param_1 + 100) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,param_1 + 0x58,0x10);
      uVar3 = *(uint *)(param_1 + 0x60);
    }
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + (long)(int)uVar3 * 0x10);
    *plVar1 = param_3;
    plVar1[1] = param_4;
    *(uint *)(param_1 + 0x60) = uVar3 + 1;
  }
  if (3 < DAT_04c70178) {
    FUN_00444bc0(&local_a8,&DAT_04c70128,4);
    lVar5 = FUN_004446b0(&local_a8,"{} Type newly compiled {}->{}, p = {}",PTR_DAT_04bd5600,local_68
                         ,&local_48,&lStack_b0,&local_b8);
    *(char **)(lVar5 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp"
    ;
    *(undefined8 *)(lVar5 + 0x30) = 0x181;
    FUN_00444c00(&local_a8);
  }
  return 0;
}

