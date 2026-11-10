
void FUN_0018dc74(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong local_28;
  
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  puVar1 = PTR_DAT_04bc0ec8;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = (long)(puVar1 + 0x10);
  local_28 = local_28 & 0xffffffff00000000;
  *param_1 = (long)&PTR_FUN_04838cd0;
  param_1[5] = (long)(param_1 + 3);
  param_1[6] = 0x10;
  FUN_0018ddb0(param_1 + 7,&local_28);
  local_28 = local_28 & 0xffffffff00000000;
  FUN_0018ddb0(param_1 + 0x17,&local_28);
  local_28 = 0;
  FUN_0018dfb0(param_1 + 0x27,&local_28);
  FUN_00197664(param_1 + 0x37);
  nn::mem::StandardAllocator::StandardAllocator((StandardAllocator *)(param_1 + 0x3b));
  param_1[0x44] = 0;
  nn::time::Initialize();
  DAT_04c57f00 = 0;
  if ((char *)param_1[5] != "255.255.255.255") {
    FUN_0018b070(param_1 + 2,"255.255.255.255",0xffffffffffffffff);
  }
  if (*(code **)PTR_DAT_04bcba20 == (code *)0x0) {
    puVar2 = malloc(0x41010);
  }
  else {
    puVar2 = (undefined8 *)(**(code **)PTR_DAT_04bcba20)();
  }
  *puVar2 = *(undefined8 *)PTR_DAT_04bcba28;
  param_1[0x44] = (long)(puVar2 + 2);
  nn::mem::StandardAllocator::Initialize((StandardAllocator *)(param_1 + 0x3b),(ulong)(puVar2 + 2));
  return;
}

