
/* WARNING: Removing unreachable block (ram,0x0138a0e0) */
/* WARNING: Removing unreachable block (ram,0x0138a050) */
/* WARNING: Removing unreachable block (ram,0x01389fc0) */
/* WARNING: Removing unreachable block (ram,0x01389f30) */
/* WARNING: Removing unreachable block (ram,0x01389f78) */
/* WARNING: Removing unreachable block (ram,0x0138a008) */
/* WARNING: Removing unreachable block (ram,0x0138a098) */
/* WARNING: Removing unreachable block (ram,0x0138a128) */

void FUN_01389ee8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined **local_88;
  long *plStack_80;
  undefined4 *local_78;
  long local_68 [2];
  undefined4 local_58;
  long local_50;
  undefined8 uStack_48;
  undefined4 local_24;
  
  if (param_1 != 0) {
    local_24 = 0;
    local_50 = param_2 + 200;
    lVar1 = param_2 + 0x38;
    if (*(long *)(param_2 + 0xd0) != 0) {
      plStack_80 = local_68;
      local_58 = 0;
      local_88 = &PTR_LAB_04993aa8;
      local_78 = &local_24;
      local_68[0] = param_1;
      uStack_48 = param_3;
      FUN_012e6150(*(long *)(param_2 + 0xd0),&local_88,lVar1);
    }
    local_50 = param_2 + 0xd8;
    if (*(long *)(param_2 + 0xe0) != 0) {
      local_58 = 1;
      plStack_80 = local_68;
      local_88 = &PTR_LAB_04993aa8;
      local_78 = &local_24;
      local_68[0] = param_1;
      uStack_48 = param_3;
      FUN_012e6150(*(long *)(param_2 + 0xe0),&local_88,lVar1);
    }
    local_50 = param_2 + 0xe8;
    if (*(long *)(param_2 + 0xf0) != 0) {
      local_58 = 2;
      plStack_80 = local_68;
      local_88 = &PTR_LAB_04993aa8;
      local_78 = &local_24;
      local_68[0] = param_1;
      uStack_48 = param_3;
      FUN_012e6150(*(long *)(param_2 + 0xf0),&local_88,lVar1);
    }
    local_50 = param_2 + 0xf8;
    if (*(long *)(param_2 + 0x100) != 0) {
      local_58 = 3;
      plStack_80 = local_68;
      local_88 = &PTR_LAB_04993aa8;
      local_78 = &local_24;
      local_68[0] = param_1;
      uStack_48 = param_3;
      FUN_012e6150(*(long *)(param_2 + 0x100),&local_88,lVar1);
    }
    local_50 = param_2 + 0x108;
    if (*(long *)(param_2 + 0x110) != 0) {
      local_58 = 4;
      plStack_80 = local_68;
      local_88 = &PTR_LAB_04993aa8;
      local_78 = &local_24;
      local_68[0] = param_1;
      uStack_48 = param_3;
      FUN_012e6150(*(long *)(param_2 + 0x110),&local_88,lVar1);
    }
    local_50 = param_2 + 0x118;
    if (*(long *)(param_2 + 0x120) != 0) {
      local_58 = 5;
      plStack_80 = local_68;
      local_88 = &PTR_LAB_04993aa8;
      local_78 = &local_24;
      local_68[0] = param_1;
      uStack_48 = param_3;
      FUN_012e6150(*(long *)(param_2 + 0x120),&local_88,lVar1);
    }
    local_50 = param_2 + 0x128;
    if (*(long *)(param_2 + 0x130) != 0) {
      local_58 = 6;
      plStack_80 = local_68;
      local_88 = &PTR_LAB_04993aa8;
      local_78 = &local_24;
      local_68[0] = param_1;
      uStack_48 = param_3;
      FUN_012e6150(*(long *)(param_2 + 0x130),&local_88,lVar1);
    }
    local_50 = param_2 + 0x138;
    if (*(long *)(param_2 + 0x140) != 0) {
      local_58 = 7;
      plStack_80 = local_68;
      local_88 = &PTR_LAB_04993aa8;
      local_78 = &local_24;
      local_68[0] = param_1;
      uStack_48 = param_3;
      FUN_012e6150(*(long *)(param_2 + 0x140),&local_88,lVar1);
    }
  }
  return;
}

