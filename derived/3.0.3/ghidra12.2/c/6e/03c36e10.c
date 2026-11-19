
void FUN_03c36e10(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  char *__dest;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  
  FUN_03c11314(param_1,param_2,"Lp::Sys::RumbleMgr");
  *(undefined1 *)(param_1 + 0x46) = 0;
  *param_1 = &PTR_FUN_04b7ebf8;
  param_1[0x45] = &PTR_LAB_04b7ecd0;
  plVar1 = param_1 + 0x4e;
  param_1[0x49] = param_1 + 0x48;
  param_1[0x48] = param_1 + 0x48;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = plVar1;
  plVar5 = plVar1;
  for (lVar4 = 0x7e; *plVar5 = (long)(plVar5 + 0x12), lVar4 != 0; lVar4 = lVar4 + -2) {
    plVar5[0x12] = (long)(plVar5 + 0x24);
    plVar5 = plVar5 + 0x24;
  }
  param_1[0x4c] = plVar1;
  param_1[0x93c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0x80;
  FUN_038e18e4(param_1 + 0x94e);
  param_1[0x956] = 0;
  nn::hid::VibrationTarget::VibrationTarget((VibrationTarget *)(param_1 + 0x957));
  nn::hid::VibrationTarget::VibrationTarget((VibrationTarget *)(param_1 + 0x961));
  nn::hid::VibrationTarget::VibrationTarget((VibrationTarget *)(param_1 + 0x96b));
  nn::hid::VibrationTarget::VibrationTarget((VibrationTarget *)(param_1 + 0x975));
  nn::hid::VibrationTarget::VibrationTarget((VibrationTarget *)(param_1 + 0x97f));
  nn::hid::VibrationTarget::VibrationTarget((VibrationTarget *)(param_1 + 0x989));
  nn::hid::VibrationTarget::VibrationTarget((VibrationTarget *)(param_1 + 0x993));
  nn::hid::VibrationTarget::VibrationTarget((VibrationTarget *)(param_1 + 0x99d));
  nn::hid::VibrationTarget::VibrationTarget((VibrationTarget *)(param_1 + 0x9a7));
  nn::hid::VibrationTarget::VibrationTarget((VibrationTarget *)(param_1 + 0x9b1));
  nn::hid::VibrationTarget::VibrationTarget((VibrationTarget *)(param_1 + 0x9bb));
  nn::hid::VibrationTarget::VibrationTarget((VibrationTarget *)(param_1 + 0x9c5));
  nn::hid::VibrationTarget::VibrationTarget((VibrationTarget *)(param_1 + 0x9cf));
  nn::hid::VibrationTarget::VibrationTarget((VibrationTarget *)(param_1 + 0x9d9));
  nn::hid::VibrationTarget::VibrationTarget((VibrationTarget *)(param_1 + 0x9e3));
  nn::hid::VibrationTarget::VibrationTarget((VibrationTarget *)(param_1 + 0x9ed));
  nn::hid::VibrationTarget::VibrationTarget((VibrationTarget *)(param_1 + 0x9f7));
  nn::hid::VibrationTarget::VibrationTarget((VibrationTarget *)(param_1 + 0xa01));
  nn::hid::VibrationMixer::VibrationMixer((VibrationMixer *)(param_1 + 0xa0b));
  puVar2 = PTR_DAT_04bd2e50;
  *(undefined4 *)(param_1 + 0xa14) = 0x3f800000;
  puVar2 = puVar2 + 0x10;
  param_1[0xa0b] = puVar2;
  nn::hid::VibrationMixer::VibrationMixer((VibrationMixer *)(param_1 + 0xa15));
  param_1[0xa15] = puVar2;
  *(undefined4 *)(param_1 + 0xa1e) = 0x3f800000;
  nn::hid::VibrationMixer::VibrationMixer((VibrationMixer *)(param_1 + 0xa1f));
  param_1[0xa1f] = puVar2;
  *(undefined4 *)(param_1 + 0xa28) = 0x3f800000;
  nn::hid::VibrationMixer::VibrationMixer((VibrationMixer *)(param_1 + 0xa29));
  param_1[0xa29] = puVar2;
  *(undefined4 *)(param_1 + 0xa32) = 0x3f800000;
  nn::hid::VibrationMixer::VibrationMixer((VibrationMixer *)(param_1 + 0xa33));
  param_1[0xa33] = puVar2;
  *(undefined4 *)(param_1 + 0xa3c) = 0x3f800000;
  nn::hid::VibrationMixer::VibrationMixer((VibrationMixer *)(param_1 + 0xa3d));
  param_1[0xa3d] = puVar2;
  *(undefined4 *)(param_1 + 0xa46) = 0x3f800000;
  nn::hid::VibrationMixer::VibrationMixer((VibrationMixer *)(param_1 + 0xa47));
  param_1[0xa47] = puVar2;
  *(undefined4 *)(param_1 + 0xa50) = 0x3f800000;
  nn::hid::VibrationMixer::VibrationMixer((VibrationMixer *)(param_1 + 0xa51));
  param_1[0xa51] = puVar2;
  *(undefined4 *)(param_1 + 0xa5a) = 0x3f800000;
  nn::hid::VibrationMixer::VibrationMixer((VibrationMixer *)(param_1 + 0xa5b));
  param_1[0xa5b] = puVar2;
  *(undefined4 *)(param_1 + 0xa64) = 0x3f800000;
  nn::hid::VibrationMixer::VibrationMixer((VibrationMixer *)(param_1 + 0xa65));
  param_1[0xa65] = puVar2;
  *(undefined4 *)(param_1 + 0xa6e) = 0x3f800000;
  nn::hid::VibrationMixer::VibrationMixer((VibrationMixer *)(param_1 + 0xa6f));
  param_1[0xa6f] = puVar2;
  *(undefined4 *)(param_1 + 0xa78) = 0x3f800000;
  nn::hid::VibrationMixer::VibrationMixer((VibrationMixer *)(param_1 + 0xa79));
  param_1[0xa79] = puVar2;
  *(undefined4 *)(param_1 + 0xa82) = 0x3f800000;
  nn::hid::VibrationMixer::VibrationMixer((VibrationMixer *)(param_1 + 0xa83));
  param_1[0xa83] = puVar2;
  *(undefined4 *)(param_1 + 0xa8c) = 0x3f800000;
  nn::hid::VibrationMixer::VibrationMixer((VibrationMixer *)(param_1 + 0xa8d));
  param_1[0xa8d] = puVar2;
  *(undefined4 *)(param_1 + 0xa96) = 0x3f800000;
  nn::hid::VibrationMixer::VibrationMixer((VibrationMixer *)(param_1 + 0xa97));
  param_1[0xa97] = puVar2;
  *(undefined4 *)(param_1 + 0xaa0) = 0x3f800000;
  nn::hid::VibrationMixer::VibrationMixer((VibrationMixer *)(param_1 + 0xaa1));
  param_1[0xaa1] = puVar2;
  *(undefined4 *)(param_1 + 0xaaa) = 0x3f800000;
  nn::hid::VibrationMixer::VibrationMixer((VibrationMixer *)(param_1 + 0xaab));
  param_1[0xaab] = puVar2;
  *(undefined4 *)(param_1 + 0xab4) = 0x3f800000;
  nn::hid::VibrationMixer::VibrationMixer((VibrationMixer *)(param_1 + 0xab5));
  param_1[0xab5] = puVar2;
  *(undefined4 *)(param_1 + 0xabe) = 0x3f800000;
  nn::hid::VibrationNodeConnection::VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xabf));
  nn::hid::VibrationNodeConnection::VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xac6));
  nn::hid::VibrationNodeConnection::VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xacd));
  nn::hid::VibrationNodeConnection::VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xad4));
  nn::hid::VibrationNodeConnection::VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xadb));
  nn::hid::VibrationNodeConnection::VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xae2));
  nn::hid::VibrationNodeConnection::VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xae9));
  nn::hid::VibrationNodeConnection::VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xaf0));
  nn::hid::VibrationNodeConnection::VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xaf7));
  nn::hid::VibrationNodeConnection::VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xafe));
  nn::hid::VibrationNodeConnection::VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xb05));
  nn::hid::VibrationNodeConnection::VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xb0c));
  nn::hid::VibrationNodeConnection::VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xb13));
  nn::hid::VibrationNodeConnection::VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xb1a));
  nn::hid::VibrationNodeConnection::VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xb21));
  nn::hid::VibrationNodeConnection::VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xb28));
  nn::hid::VibrationNodeConnection::VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xb2f));
  nn::hid::VibrationNodeConnection::VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xb36));
  param_1[0xb43] = 0;
  *(undefined4 *)(param_1 + 0xb3d) = 1;
  param_1[0xb42] = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0x59ec) = 0;
  *(undefined8 *)((long)param_1 + 0x59f4) = 0;
  *(undefined4 *)((long)param_1 + 0x59fc) = 0;
  param_1[0xb49] = 0x3c88888942700000;
  param_1[0xb4c] = &PTR_LAB_04b7ecf0;
  param_1[0xb50] = &PTR_LAB_04b7ecf0;
  param_1[0xb52] = param_1 + 0xb51;
  param_1[0xb51] = param_1 + 0xb51;
  param_1[0xb41] = param_1 + 0xb40;
  param_1[0xb40] = param_1 + 0xb40;
  param_1[0xb55] = param_1 + 0xb56;
  *(undefined4 *)(param_1 + 0xb44) = 0x3f800000;
  param_1[0xb4a] = 0;
  *(undefined1 *)(param_1 + 0xb4b) = 0;
  *(undefined4 *)(param_1 + 0xb4f) = 0;
  param_1[0xb4e] = param_1 + 0xb4d;
  param_1[0xb4d] = param_1 + 0xb4d;
  *(undefined4 *)(param_1 + 0xb53) = 0;
  param_1[0xb54] = 0x12c00000000;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_48 = 0;
  pcStack_70 = "RumbleCurveParams";
  puStack_60 = &DAT_040ec2af;
  puStack_50 = &DAT_0407ebb1;
  local_68 = local_78;
  local_58 = local_78;
  FUN_03c3736c(param_1 + 0xc82,&local_78,0);
  FUN_038e18e4(param_1 + 0xd27);
  FUN_038e18e4(param_1 + 0xd2f);
  __dest = (char *)param_1[0xc89];
  *(undefined1 **)((long)param_1 + 0x5a24) = &DAT_3f8000003f800000;
  *(undefined4 *)((long)param_1 + 0x5a44) = 0x3f800000;
  *(undefined1 **)((long)param_1 + 0x5a2c) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0x5a34) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0x5a3c) = &DAT_3f8000003f800000;
  if (__dest != "TestDefault") {
    iVar3 = 0xb;
    if (*(int *)(param_1 + 0xc8a) < 0xc) {
      iVar3 = *(int *)(param_1 + 0xc8a) + -1;
    }
    memcpy(__dest,"TestDefault",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  return;
}

