
int * FUN_0048f0d0(int *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long *local_230;
  undefined8 local_228;
  undefined1 *local_220;
  undefined8 local_218;
  undefined1 auStack_210 [384];
  undefined1 auStack_90 [64];
  
  piVar7 = param_1 + 2;
  if (((param_1[6] != 0) && (param_1[0x42] == -1)) && (param_1[0x4e] != 1)) {
    return (int *)0x0;
  }
  FUN_0048f020(piVar7);
  iVar8 = 0x54414730;
  local_228 = 0x7fffffffffffffff;
  local_220 = auStack_210;
  local_218 = -0x7ffffff000000000;
  local_230 = param_2;
  iVar2 = FUN_004932d0(&local_230,0x54414730);
  if (iVar2 == 0x54414730) {
LAB_0048f17c:
    lVar4 = param_2[5];
    lVar5 = param_2[2];
    lVar6 = *param_2;
    uVar1 = *(uint *)(local_220 + (long)(int)local_218 * 0x18 + -0x14);
    uVar3 = FUN_0049e6a0(param_2);
    FUN_0049e660(param_2,(lVar4 - lVar5) + lVar6 + ((ulong)uVar1 & 0x3fffffff) + -8);
    param_1[0x42] = param_1[0x42] + 1;
    FUN_0048f370(&local_230,param_1,*(undefined8 *)(param_1 + 0x94),*(undefined8 *)(param_1 + 0x96))
    ;
    if (-1 < *param_1) {
      lVar4 = (long)(int)local_218 + -1;
      if ((local_230[5] - local_230[2]) + *local_230 ==
          ((ulong)*(uint *)(local_220 + lVar4 * 0x18 + 4) & 0x3fffffff) +
          (long)*(int *)(local_220 + lVar4 * 0x18 + 8)) {
        local_228 = *(undefined8 *)(local_220 + lVar4 * 0x18 + 0x10);
        local_218 = CONCAT44(local_218._4_4_,(int)lVar4);
      }
      else {
        *(byte *)(local_230 + 4) = *(byte *)(local_230 + 4) | 2;
      }
      if (iVar8 == 0x54434d30) {
        param_1[0x4e] = 1;
      }
      FUN_0049e660(param_2,uVar3);
      uVar1 = local_218._4_4_;
      goto joined_r0x0048f338;
    }
    FUN_0049e660(param_2,uVar3);
  }
  else {
    iVar8 = 0x54434d30;
    iVar2 = FUN_004932d0(&local_230,0x54434d30);
    if (iVar2 == 0x54434d30) {
      param_1[0x4e] = 2;
      goto LAB_0048f17c;
    }
    if (1 < DAT_04c70f78) {
      FUN_00444bc0(auStack_90,&DAT_04c70f28,2);
      lVar4 = FUN_004446b0(auStack_90,"Input does not appear to be a tagfile",&DAT_0413df78);
      *(char **)(lVar4 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar4 + 0x30) = 0x68b;
      FUN_00444c00(auStack_90);
    }
  }
  piVar7 = (int *)0x0;
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 2;
  uVar1 = local_218._4_4_;
joined_r0x0048f338:
  if ((-1 < local_218) && (local_218 = (ulong)uVar1 << 0x20, local_220 != (undefined1 *)0x0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_220,0x18,uVar1 & 0x3fffffff);
  }
  return piVar7;
}

