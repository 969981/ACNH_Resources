
undefined8 FUN_004d41d0(long param_1,long *param_2,long *param_3)

{
  char *pcVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char *local_a0;
  char *local_98;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  
  pcVar1 = (char *)*param_3;
  if (((pcVar1 == (char *)param_3[1]) || (*pcVar1 != '\"')) ||
     (lVar10 = (ulong)(uint)((int)(char *)param_3[1] - (int)pcVar1) << 0x20,
     pcVar1[lVar10 + -0x100000000 >> 0x20] != '\"')) {
    if (DAT_04c719d8 < 4) {
      return 0x80040200;
    }
    FUN_00444bc0(&local_90,&DAT_04c71988,4);
    lVar10 = FUN_004446b0(&local_90,"Non-quoted string value: \'{}\'",&DAT_04861730,param_3);
    uVar7 = 0xcc;
  }
  else {
    pcVar1 = pcVar1 + 1;
    local_98 = pcVar1 + ((long)(lVar10 - 0x200000000U) >> 0x20);
    lVar9 = param_2[1];
    local_a0 = pcVar1;
    if (lVar9 != 0) {
      lVar8 = *param_2;
      uVar5 = FUN_00427110(lVar9,PTR_DAT_04bd6fb8);
      if ((((uVar5 & 1) != 0) && (uVar3 = FUN_004274f0(lVar9), lVar8 != 0)) &&
         ((uVar3 >> 3 & 1) == 0)) {
        FUN_0043c130(lVar8,pcVar1,lVar10 - 0x200000000U >> 0x20);
        return 0;
      }
    }
    puVar6 = *(ulong **)(param_1 + 8);
    uVar2 = *puVar6;
    uVar5 = uVar2 + (lVar10 + -0x100000000 >> 0x20);
    *puVar6 = uVar5;
    if (puVar6[1] < uVar5) {
      local_80 = 0;
      local_90 = 0;
      puStack_88 = &DAT_0413df78;
      FUN_004223c0(0xdeadf11d,"../..\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl",0x1e,
                   "hkLinearBuffer exhausted",&local_90);
    }
    iVar4 = ((int)local_98 - (int)local_a0) + 1;
    FUN_00429d00(&local_a0,uVar2,iVar4,iVar4);
    iVar4 = (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffeU) + 0x30))
                      ((long *)(param_2[2] & 0xfffffffffffffffeU),*param_2,param_2[1],uVar2);
    if (-1 < iVar4) {
      return 0;
    }
    if (DAT_04c719d8 < 4) {
      return 0x80040200;
    }
    FUN_00444bc0(&local_90,&DAT_04c71988,4);
    lVar10 = FUN_004446b0(&local_90,"Set string failed",&DAT_0413df78);
    uVar7 = 0xda;
  }
  *(char **)(lVar10 + 0x28) =
       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
  ;
  *(undefined8 *)(lVar10 + 0x30) = uVar7;
  FUN_00444c00(&local_90);
  return 0x80040200;
}

