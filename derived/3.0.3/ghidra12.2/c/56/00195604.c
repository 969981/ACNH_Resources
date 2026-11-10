
void FUN_00195604(long *param_1)

{
  undefined *puVar1;
  long alStack_50 [2];
  long local_40;
  long lStack_38;
  undefined4 local_28;
  undefined1 local_24;
  
  *param_1 = (long)(PTR_DAT_04bcc040 + 0x10);
  param_1[1] = 0;
  FUN_0019c934(param_1 + 2);
  puVar1 = PTR_DAT_04bcc048;
  param_1[7] = 5;
  param_1[8] = 0x40;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)((long)param_1 + 0x24a) = 1;
  FUN_00186460(param_1 + 0x4a,0x20000000,1);
  local_28 = 0x4d264443;
  local_24 = 0x4c;
  FUN_0019c970(alStack_50,&local_28,5);
  if (((ulong)param_1[7] <= (ulong)(lStack_38 - local_40)) &&
     ((ulong)(lStack_38 - local_40) <= (ulong)param_1[8])) {
    if (param_1 + 2 != alStack_50) {
      FUN_001a2ac0(param_1 + 4);
    }
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  FUN_0019cd34(alStack_50);
  return;
}

