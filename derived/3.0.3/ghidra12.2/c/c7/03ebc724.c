
void FUN_03ebc724(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *local_148;
  undefined1 *puStack_140;
  undefined4 local_138;
  undefined1 local_134 [255];
  undefined1 local_35;
  
  uVar1 = (**(code **)(*param_1 + 0x1e0))();
  if ((int)uVar1 < 0) {
    local_35 = 0;
    local_138 = 0x100;
    puStack_140 = local_134;
    local_134[0] = 0;
    local_148 = PTR_DAT_04bb21f8 + 0x10;
    FUN_038d1270(&local_148,"%s.as",param_1[1]);
  }
  else {
    if (*(uint *)(param_1 + 2) <= uVar1) {
      uVar1 = 0;
    }
    *(undefined8 *)(param_1[3] + (ulong)uVar1 * 8) = param_3;
  }
  return;
}

