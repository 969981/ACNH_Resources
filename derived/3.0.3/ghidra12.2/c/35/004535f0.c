
undefined8 FUN_004535f0(long *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  void *__s;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [64];
  
  *param_3 = 0;
  if ((param_1[0xe] & 0x100001U) == 1) {
    uVar4 = 0x80040200;
    if (DAT_04c6fa30 != '\0') {
      FUN_00444bc0(auStack_80,&DAT_04c6f9e0,1);
      lVar2 = FUN_004446b0(auStack_80,"You must have an Opt::SIZE_ALIGN if you have an Opt::FORMAT",
                           &DAT_0413df78);
      *(char **)(lVar2 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Builder/hkTypeBuilder.cpp"
      ;
      *(undefined8 *)(lVar2 + 0x30) = 0x3d4;
      *(undefined4 *)(lVar2 + 0xc) = 0x18bd024f;
      FUN_00444c00(auStack_80);
    }
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x10))();
    if ((param_1[0x44] != 0) &&
       (*(long **)(param_1[0x44] + 8) = param_2, (char)param_1[0x45] != '\0')) {
      *(long *)(param_1[0x44] + 0x10) = (long)iVar1;
    }
    __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,(long)iVar1,0);
    memset(__s,0,(long)iVar1);
    uVar3 = (**(code **)(*param_1 + 0x28))(param_1,__s,iVar1);
    uVar4 = 0;
    *param_3 = uVar3;
  }
  return uVar4;
}

