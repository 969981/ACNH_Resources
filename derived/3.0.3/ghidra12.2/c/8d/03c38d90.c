
void FUN_03c38d90(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  *param_1 = (long)&PTR_FUN_04b7ebf8;
  param_1[0x45] = (long)&PTR_LAB_04b7ecd0;
  FUN_038e1a84(param_1 + 0xd2f);
  FUN_038e1a84(param_1 + 0xd27);
  FUN_03c39724(param_1 + 0xc82);
  param_1[0xb50] = (long)&PTR_LAB_04b7ecf0;
  plVar3 = (long *)param_1[0xb52];
  while (plVar3 != param_1 + 0xb51) {
    plVar1 = (long *)plVar3[1];
    lVar2 = plVar3[2];
    plVar6 = *(long **)(lVar2 + 0x28);
    plVar4 = (long *)(lVar2 + 0x20);
    lVar7 = *plVar4;
    plVar3 = plVar1;
    if ((plVar6 != (long *)0x0 || lVar7 != 0) && (lVar5 = *(long *)(lVar2 + 0x38), lVar5 != 0)) {
      *(undefined8 *)(lVar2 + 0x38) = 0;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar6;
        plVar6 = *(long **)(lVar2 + 0x28);
      }
      if (plVar6 != (long *)0x0) {
        *plVar6 = *plVar4;
      }
      *plVar4 = 0;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
    }
  }
  param_1[0xb4c] = (long)&PTR_LAB_04b7ecf0;
  plVar3 = (long *)param_1[0xb4e];
  while (plVar3 != param_1 + 0xb4d) {
    plVar1 = (long *)plVar3[1];
    lVar2 = plVar3[2];
    plVar6 = *(long **)(lVar2 + 0x28);
    plVar4 = (long *)(lVar2 + 0x20);
    lVar7 = *plVar4;
    plVar3 = plVar1;
    if ((plVar6 != (long *)0x0 || lVar7 != 0) && (lVar5 = *(long *)(lVar2 + 0x38), lVar5 != 0)) {
      *(undefined8 *)(lVar2 + 0x38) = 0;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar6;
        plVar6 = *(long **)(lVar2 + 0x28);
      }
      if (plVar6 != (long *)0x0) {
        *plVar6 = *plVar4;
      }
      *plVar4 = 0;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
    }
  }
  nn::hid::VibrationNodeConnection::~VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xb36));
  nn::hid::VibrationNodeConnection::~VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xb2f));
  nn::hid::VibrationNodeConnection::~VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xb28));
  nn::hid::VibrationNodeConnection::~VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xb21));
  nn::hid::VibrationNodeConnection::~VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xb1a));
  nn::hid::VibrationNodeConnection::~VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xb13));
  nn::hid::VibrationNodeConnection::~VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xb0c));
  nn::hid::VibrationNodeConnection::~VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xb05));
  nn::hid::VibrationNodeConnection::~VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xafe));
  nn::hid::VibrationNodeConnection::~VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xaf7));
  nn::hid::VibrationNodeConnection::~VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xaf0));
  nn::hid::VibrationNodeConnection::~VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xae9));
  nn::hid::VibrationNodeConnection::~VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xae2));
  nn::hid::VibrationNodeConnection::~VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xadb));
  nn::hid::VibrationNodeConnection::~VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xad4));
  nn::hid::VibrationNodeConnection::~VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xacd));
  nn::hid::VibrationNodeConnection::~VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xac6));
  nn::hid::VibrationNodeConnection::~VibrationNodeConnection
            ((VibrationNodeConnection *)(param_1 + 0xabf));
  nn::hid::VibrationMixer::~VibrationMixer((VibrationMixer *)(param_1 + 0xab5));
  nn::hid::VibrationMixer::~VibrationMixer((VibrationMixer *)(param_1 + 0xaab));
  nn::hid::VibrationMixer::~VibrationMixer((VibrationMixer *)(param_1 + 0xaa1));
  nn::hid::VibrationMixer::~VibrationMixer((VibrationMixer *)(param_1 + 0xa97));
  nn::hid::VibrationMixer::~VibrationMixer((VibrationMixer *)(param_1 + 0xa8d));
  nn::hid::VibrationMixer::~VibrationMixer((VibrationMixer *)(param_1 + 0xa83));
  nn::hid::VibrationMixer::~VibrationMixer((VibrationMixer *)(param_1 + 0xa79));
  nn::hid::VibrationMixer::~VibrationMixer((VibrationMixer *)(param_1 + 0xa6f));
  nn::hid::VibrationMixer::~VibrationMixer((VibrationMixer *)(param_1 + 0xa65));
  nn::hid::VibrationMixer::~VibrationMixer((VibrationMixer *)(param_1 + 0xa5b));
  nn::hid::VibrationMixer::~VibrationMixer((VibrationMixer *)(param_1 + 0xa51));
  nn::hid::VibrationMixer::~VibrationMixer((VibrationMixer *)(param_1 + 0xa47));
  nn::hid::VibrationMixer::~VibrationMixer((VibrationMixer *)(param_1 + 0xa3d));
  nn::hid::VibrationMixer::~VibrationMixer((VibrationMixer *)(param_1 + 0xa33));
  nn::hid::VibrationMixer::~VibrationMixer((VibrationMixer *)(param_1 + 0xa29));
  nn::hid::VibrationMixer::~VibrationMixer((VibrationMixer *)(param_1 + 0xa1f));
  nn::hid::VibrationMixer::~VibrationMixer((VibrationMixer *)(param_1 + 0xa15));
  nn::hid::VibrationMixer::~VibrationMixer((VibrationMixer *)(param_1 + 0xa0b));
  nn::hid::VibrationTarget::~VibrationTarget((VibrationTarget *)(param_1 + 0xa01));
  nn::hid::VibrationTarget::~VibrationTarget((VibrationTarget *)(param_1 + 0x9f7));
  nn::hid::VibrationTarget::~VibrationTarget((VibrationTarget *)(param_1 + 0x9ed));
  nn::hid::VibrationTarget::~VibrationTarget((VibrationTarget *)(param_1 + 0x9e3));
  nn::hid::VibrationTarget::~VibrationTarget((VibrationTarget *)(param_1 + 0x9d9));
  nn::hid::VibrationTarget::~VibrationTarget((VibrationTarget *)(param_1 + 0x9cf));
  nn::hid::VibrationTarget::~VibrationTarget((VibrationTarget *)(param_1 + 0x9c5));
  nn::hid::VibrationTarget::~VibrationTarget((VibrationTarget *)(param_1 + 0x9bb));
  nn::hid::VibrationTarget::~VibrationTarget((VibrationTarget *)(param_1 + 0x9b1));
  nn::hid::VibrationTarget::~VibrationTarget((VibrationTarget *)(param_1 + 0x9a7));
  nn::hid::VibrationTarget::~VibrationTarget((VibrationTarget *)(param_1 + 0x99d));
  nn::hid::VibrationTarget::~VibrationTarget((VibrationTarget *)(param_1 + 0x993));
  nn::hid::VibrationTarget::~VibrationTarget((VibrationTarget *)(param_1 + 0x989));
  nn::hid::VibrationTarget::~VibrationTarget((VibrationTarget *)(param_1 + 0x97f));
  nn::hid::VibrationTarget::~VibrationTarget((VibrationTarget *)(param_1 + 0x975));
  nn::hid::VibrationTarget::~VibrationTarget((VibrationTarget *)(param_1 + 0x96b));
  nn::hid::VibrationTarget::~VibrationTarget((VibrationTarget *)(param_1 + 0x961));
  nn::hid::VibrationTarget::~VibrationTarget((VibrationTarget *)(param_1 + 0x957));
  FUN_038e1a84(param_1 + 0x94e);
  plVar3 = param_1 + 0x48;
  do {
    plVar3 = (long *)plVar3[1];
  } while (plVar3 != param_1 + 0x48);
  if ((char)param_1[0x46] != '\0') {
    DAT_05aed5a8 = 0;
  }
  *param_1 = (long)(PTR_DAT_04bcb5f8 + 0x10);
  FUN_03968cfc(param_1 + 0x39);
  FUN_03968cfc(param_1 + 0x2d);
  FUN_038ba020(param_1);
  return;
}

