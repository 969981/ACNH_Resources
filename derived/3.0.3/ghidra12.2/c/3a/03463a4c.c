
undefined8 FUN_03463a4c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  uVar5 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80[0] = 0xffffffff;
  local_48 = 0;
  local_40 = "agl::TextureData";
  local_38 = 0x10000;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  if (((*(byte *)(param_1 + 0x18) >> 1 & 1) == 0) || (*(int *)(param_1 + 0x100) == 1))
  goto LAB_03463b84;
  uVar2 = FUN_00817520(param_1);
  if (((uVar2 & 1) != 0) && ((*(byte *)(param_1 + 0x18) >> 1 & 1) != 0)) {
    uVar2 = FUN_03f2d924(param_1 + 0x10);
    if ((uVar2 & 1) != 0) {
      puVar3 = (undefined8 *)FUN_03f2d7f0(param_1 + 0x10);
      if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb4be0 = PTR_DAT_04bb4448 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4be8);
      }
      uVar5 = 0;
      if (puVar3 == (undefined8 *)0x0) goto LAB_03463b84;
      uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bb4be0);
      if (((((uVar2 & 1) != 0) && (puVar3[6] != 0)) &&
          (lVar4 = *(long *)(puVar3[6] + 8), lVar4 != 0)) &&
         ((*(long *)(lVar4 + 0x20) != 0 && (lVar4 = FUN_038fde10(), lVar4 != 0)))) {
        if (**(long **)(lVar4 + 0x28) != 0) {
          FUN_03973f28(&local_d0);
          local_40 = "[UI]TextureResLoad";
          FUN_03b137d0(param_3,&local_d0,0);
          uVar5 = 1;
          *(undefined4 *)(param_3 + 0x18) = 0;
          goto LAB_03463b84;
        }
      }
    }
  }
  uVar5 = 0;
LAB_03463b84:
  FUN_038fd0e0(local_80);
  return uVar5;
}

