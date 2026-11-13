
undefined8 FUN_014a2790(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined *local_148;
  undefined1 *local_140;
  undefined4 local_138;
  undefined1 local_134 [255];
  undefined1 local_35;
  
  local_35 = 0;
  local_138 = 0x100;
  plVar1 = (long *)(param_1 + 0x16e58);
  local_140 = local_134;
  local_134[0] = 0;
  local_148 = PTR_DAT_04bb21f8 + 0x10;
  uVar2 = (**(code **)(*plVar1 + 0xf0))(plVar1,&local_148,1);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*plVar1 + 0x108))(plVar1,&local_148);
  }
  if (*(char *)(param_1 + 0x18008) == '\0') {
    local_148 = *(undefined **)PTR_DAT_04bb39d0;
    local_140 = (undefined1 *)CONCAT44(local_140._4_4_,*(undefined4 *)(PTR_DAT_04bb39d0 + 8));
    FUN_014a2864(param_1,&local_148);
    FUN_014a2d80(param_1);
    FUN_014a3d60(param_1);
  }
  return 0;
}

