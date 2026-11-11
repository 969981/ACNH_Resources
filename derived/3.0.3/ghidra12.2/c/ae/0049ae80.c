
undefined8 FUN_0049ae80(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [9];
  undefined1 local_97;
  
  if (3 < DAT_04c710a8) {
    FUN_00444bc0(auStack_a0,&DAT_04c71058,4);
    lVar2 = FUN_004446b0(auStack_a0,"CalcSig",&DAT_0413df78);
    *(char **)(lVar2 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
    ;
    *(undefined8 *)(lVar2 + 0x30) = 0x245;
    *(undefined1 *)(lVar2 + 9) = 1;
    FUN_00444c00(auStack_a0);
  }
  local_a8 = FUN_0049f970(0,*(undefined8 *)(param_1 + 0x18),(long)*(int *)(param_1 + 0x20));
  if (3 < DAT_04c710a8) {
    FUN_00444bc0(auStack_a0,&DAT_04c71058,4);
    local_b0 = (long)*(int *)(param_1 + 0x20);
    lVar2 = FUN_004446b0(auStack_a0,"Encoded bodies {}b -> {}",&DAT_04866af8,&local_b0,&local_a8);
    *(char **)(lVar2 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
    ;
    *(undefined8 *)(lVar2 + 0x30) = 0x248;
    FUN_00444c00(auStack_a0);
  }
  local_a8 = FUN_0049b110(param_1 + 0x30,local_a8);
  iVar5 = *(int *)(param_1 + 0xe0);
  if (0 < iVar5) {
    lVar6 = 0;
    lVar2 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0xd8) + lVar6;
      local_a8 = FUN_0049f970(local_a8,lVar4,4);
      if (3 < DAT_04c710a8) {
        FUN_00444bc0(auStack_a0,&DAT_04c71058,4);
        lVar3 = FUN_004446b0(auStack_a0,"NameId {} -> {}",&DAT_04866b28,lVar4,&local_a8);
        *(char **)(lVar3 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
        ;
        *(undefined8 *)(lVar3 + 0x30) = 0x24e;
        FUN_00444c00(auStack_a0);
      }
      local_a8 = FUN_0049f970(local_a8,*(undefined8 *)(lVar4 + 8),(long)*(int *)(lVar4 + 0x10) << 4)
      ;
      if (3 < DAT_04c710a8) {
        FUN_00444bc0(auStack_a0,&DAT_04c71058,4);
        local_b0 = (long)*(int *)(lVar4 + 0x10);
        lVar4 = FUN_004446b0(auStack_a0,"{} ParamId -> {}",&DAT_04866af8,&local_b0,&local_a8);
        *(char **)(lVar4 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
        ;
        *(undefined8 *)(lVar4 + 0x30) = 0x250;
        FUN_00444c00(auStack_a0);
      }
      iVar5 = *(int *)(param_1 + 0xe0);
      lVar2 = lVar2 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar2 < iVar5);
  }
  uVar1 = local_a8;
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x38);
  *(int *)(param_1 + 0xf8) = iVar5;
  *(undefined8 *)(param_1 + 0x100) = local_a8;
  if (3 < DAT_04c710a8) {
    FUN_00444bc0(auStack_a0,&DAT_04c71058,4);
    local_97 = 0xff;
    FUN_00444c00(auStack_a0);
  }
  return uVar1;
}

