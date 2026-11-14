
void FUN_01860e78(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char *__dest;
  char *__dest_00;
  
  FUN_01812e50();
  __dest_00 = (char *)param_1[0xc];
  param_1[0x93] = param_3;
  __dest = "InsectActionFieldRestless";
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined1 *)((long)param_1 + 0x4a4) = 0;
  param_1[0x95] = 0;
  if (__dest_00 != "InsectActionFieldRestless") {
    iVar1 = 0x19;
    if (*(int *)(param_1 + 0xd) < 0x1a) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest_00,"InsectActionFieldRestless",(long)iVar1);
    __dest_00[iVar1] = '\0';
    __dest = (char *)param_1[0xc];
  }
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 1;
  *(undefined1 *)((long)param_1 + 0x4d4) = 0;
  *param_1 = &PTR_LAB_049ca338;
  param_1[0x99] = 0x8000000000000000;
  param_1[0x9c] = 0x8000000000000000;
  param_1[0x9f] = 0x8000000000000000;
  param_1[0xa2] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x9a) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x9d) = 0x7fffffff;
  param_1[0x98] = &PTR_LAB_04b5e918;
  *(undefined1 *)((long)param_1 + 0x4ec) = 0;
  param_1[0x9b] = &PTR_LAB_04b5e918;
  *(undefined4 *)(param_1 + 0xa0) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x504) = 0;
  param_1[0x9e] = &PTR_LAB_04b5e918;
  *(undefined4 *)(param_1 + 0xa3) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x51c) = 0;
  param_1[0xa1] = &PTR_LAB_04b5e918;
  if (__dest != "InsectActionFieldMimic") {
    iVar1 = 0x16;
    if (*(int *)(param_1 + 0xd) < 0x17) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"InsectActionFieldMimic",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  return;
}

