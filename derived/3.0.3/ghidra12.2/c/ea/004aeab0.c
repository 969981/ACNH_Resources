
undefined4
FUN_004aeab0(long param_1,long *param_2,undefined4 param_3,int param_4,undefined8 param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong extraout_x1;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long local_198 [18];
  undefined8 local_108 [5];
  char *local_e0;
  undefined8 uStack_d8;
  int local_74;
  undefined4 local_70 [4];
  
  local_70[0] = 0x80040200;
  local_74 = param_4;
  if (*param_2 == 0) {
    if (DAT_04c71600 == '\0') {
      return 0x80040200;
    }
    FUN_00444bc0(local_108,&DAT_04c715b0,1);
    local_e0 = 
    "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Xml/hkXmlWriteFormat.cpp"
    ;
    uStack_d8 = 0x1d8;
    uVar3 = FUN_004446b0(local_108,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_048616f8,"!topVar",
                         local_70);
    FUN_004446b0(uVar3,"Trying to serialize empty Var",&DAT_0413df78);
  }
  else {
    local_70[0] = 0x80040200;
    uVar2 = FUN_004274f0(param_2[1]);
    if ((uVar2 & 3) == 0) {
      lVar5 = param_2[1];
      (**(code **)(**(long **)(param_1 + 0x20) + 0x20))(*(long **)(param_1 + 0x20),lVar5);
      FUN_004ae730(param_1,param_2);
      FUN_004225b0(local_108);
      pcVar4 = "object";
      if (param_4 != 0) {
        FUN_00424ca0(local_108,"annotates=\"object{}\"",&DAT_04853780,&local_74);
        pcVar4 = "object";
        if (local_74 != 0) {
          pcVar4 = "note";
        }
      }
      FUN_004225b0(local_198);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = FUN_00427570(lVar5,local_198,0,0);
      uVar1 = FUN_004ae4c0(uVar6,"<%s id=\"object%d\" typeid=\"type%d\" %s> <!-- %s -->",pcVar4,
                           param_3,extraout_x1 & 0xffffffff,local_108[0],uVar3);
      *(int *)(*(long *)(param_1 + 0x18) + 8) = *(int *)(*(long *)(param_1 + 0x18) + 8) + 1;
      FUN_004aed30(param_1,param_2,param_5,1);
      *(int *)(*(long *)(param_1 + 0x18) + 8) = *(int *)(*(long *)(param_1 + 0x18) + 8) + -1;
      FUN_004ae4c0(*(undefined8 *)(param_1 + 0x18),"</%s>",pcVar4);
      FUN_00422550(local_198);
      FUN_00422550(local_108);
      return uVar1;
    }
    if (DAT_04c71600 == '\0') {
      return local_70[0];
    }
    FUN_00444bc0(local_108,&DAT_04c715b0,1);
    local_e0 = 
    "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Xml/hkXmlWriteFormat.cpp"
    ;
    uStack_d8 = 0x1d9;
    uVar3 = FUN_004446b0(local_108,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_04866b40,
                         "!topVar.getType()->isSerializable()",local_70);
    local_198[0] = param_2[1];
    FUN_004446b0(uVar3,"Trying to serialize instance of non-serializable type \'{}\'",&DAT_048631b0,
                 local_198);
  }
  FUN_00444c00(local_108);
  return local_70[0];
}

