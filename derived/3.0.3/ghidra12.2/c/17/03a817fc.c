
void FUN_03a817fc(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = 0;
  if (DAT_05ae7600 != 0) {
    lVar3 = FUN_038cb610(DAT_05ae7600,param_1);
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar3 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
      }
      plVar5 = (long *)(lVar3 + 0x70);
      lVar4 = *plVar5;
      plVar1 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)param_1);
      *plVar5 = (long)plVar1;
      *plVar1 = lVar4;
      plVar1[1] = (long)plVar5;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar1;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar6 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
      }
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_04b70a30;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_038e4cec(param_1 + 0xc);
  FUN_038e4cec((long)param_1 + 0xd4);
  FUN_038e4cec(param_1 + 0x29);
  FUN_038e4cec((long)param_1 + 0x1bc);
  FUN_038e4cec(param_1 + 0x46);
  FUN_038e4cec((long)param_1 + 0x2a4);
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[99] = 0x3ecccccd3fc7ae14;
  param_1[0x70] = 0;
  param_1[100] = 0x3f8000003e4ccccd;
  param_1[0x65] = 0x13f800000;
  param_1[0x66] = 0x200000003;
  *(undefined4 *)(param_1 + 0x67) = 3;
  param_1[0x71] = 0;
  *(undefined8 *)((long)param_1 + 0x33c) = 0x41200000;
  *(undefined8 *)((long)param_1 + 0x344) = 0;
  *(undefined8 *)((long)param_1 + 0x34c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x354) = 0;
  *(undefined8 *)((long)param_1 + 0x35c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  param_1[0x80] = (long)"agl::TextureData";
  *(undefined4 *)((long)param_1 + 0x36c) = 0x3f800000;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0x10000;
  FUN_0390cee0(param_1 + 0x82);
  FUN_03941294(param_1 + 0x9e);
  param_1[0x68] = 0x3f4a7efa3eaa7efa;
  param_1[0x69] = 0x3f8000003f7e353f;
  param_1[0x6a] = 0x3e51eb853e6c8b44;
  param_1[0x6b] = 0x3f8000003bc49ba6;
  param_1[0x6c] = 0x3b83126f3edf3b64;
  param_1[0x6d] = 0x3f8000003a83126f;
  return;
}

