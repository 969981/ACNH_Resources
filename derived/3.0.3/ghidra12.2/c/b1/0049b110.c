
undefined8 FUN_0049b110(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  size_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  char *__s;
  long lVar6;
  undefined1 auStack_a8 [64];
  undefined8 local_68;
  
  puVar1 = PTR_DAT_04bd5f30;
  if ((int)param_1[1] != 0) {
    puVar5 = (undefined8 *)*param_1;
    lVar6 = (long)(int)param_1[1] << 3;
    local_68 = param_2;
    do {
      uVar2 = local_68;
      __s = (char *)*puVar5;
      sVar3 = strlen(__s);
      local_68 = FUN_0049f970(uVar2,__s,sVar3);
      if (3 < DAT_04c710a8) {
        FUN_00444bc0(auStack_a8,&DAT_04c71058,4);
        lVar4 = FUN_004446b0(auStack_a8,"String \'{}\' -> {}",puVar1,puVar5,&local_68);
        *(char **)(lVar4 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
        ;
        *(undefined8 *)(lVar4 + 0x30) = 0x211;
        FUN_00444c00(auStack_a8);
      }
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -8;
      param_2 = local_68;
    } while (lVar6 != 0);
  }
  return param_2;
}

