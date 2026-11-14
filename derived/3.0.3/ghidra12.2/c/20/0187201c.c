
void FUN_0187201c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  *(undefined4 *)(param_1 + 0x96) = 0;
  *(undefined1 *)((long)param_1 + 0x4cc) = 0;
  *param_1 = &PTR_LAB_049cb9a0;
  param_1[0x98] = 0x8000000000000000;
  param_1[0x9b] = 0x8000000000000000;
  param_1[0x9e] = 0x8000000000000000;
  param_1[0xa1] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x99) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x4e4) = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x4fc) = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0x7fffffff;
  param_1[0x97] = &PTR_LAB_04b5e918;
  param_1[0x9a] = &PTR_LAB_04b5e918;
  param_1[0x9d] = &PTR_LAB_04b5e918;
  param_1[0xa0] = &PTR_LAB_04b5e918;
  *(undefined1 *)((long)param_1 + 0x514) = 0;
  *(undefined2 *)(param_1 + 0xa3) = 0;
  *(undefined1 *)((long)param_1 + 0x51a) = 1;
  if (__dest != "InsectActionFieldPop") {
    iVar1 = 0x14;
    if (*(int *)(param_1 + 0xd) < 0x15) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"InsectActionFieldPop",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  return;
}

