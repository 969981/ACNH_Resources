
undefined8 FUN_004d40e0(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar1 = (undefined8 *)
           (((long *)*param_2)[0x1a] +
           (long)*(int *)(*(long *)*param_2 + (long)(int)param_2[1] * 0x18 + 0x10) * 0x10);
  local_60 = *puVar1;
  uStack_58 = puVar1[1];
  iVar2 = FUN_00440780(param_1,&local_60);
  if (iVar2 < 0) {
    uVar4 = 0x80040200;
    if (3 < DAT_04c719d8) {
      FUN_00444bc0(&local_60,&DAT_04c71988,4);
      puVar1 = (undefined8 *)
               (((long *)*param_2)[0x1a] +
               (long)*(int *)(*(long *)*param_2 + (long)(int)param_2[1] * 0x18 + 0x10) * 0x10);
      local_70 = *puVar1;
      uStack_68 = puVar1[1];
      lVar3 = FUN_004446b0(&local_60,"Invalid value: \'{}\'",PTR_DAT_04bd4dc0,&local_70);
      *(char **)(lVar3 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
      ;
      *(undefined8 *)(lVar3 + 0x30) = 0xea;
      FUN_00444c00(&local_60);
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

