
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_024b5340(float *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined *local_a8;
  int local_a0;
  int local_9c;
  undefined *local_98;
  undefined *puStack_90;
  int local_88;
  int iStack_84;
  undefined *local_80;
  int local_78;
  int iStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  
  puVar3 = PTR_DAT_04bb27c8;
  uVar5 = 0;
  local_98 = PTR_DAT_04bbc1a0 + 0x10;
  uVar4 = 0;
  local_a8 = PTR_DAT_04bb2010 + 0x10;
  iVar2 = (int)((float)(int)(*param_1 + -5.0) / 5.0) - (uint)(*param_1 + -5.0 < 0.0);
  local_9c = (int)((float)(int)(param_1[2] + -5.0) / 5.0) - (uint)(param_1[2] + -5.0 < 0.0);
  local_78 = iVar2 + 2;
  iStack_74 = local_9c + 2;
  iVar1 = local_9c + 3;
  local_a0 = iVar2;
  puStack_90 = local_a8;
  local_88 = iVar2;
  iStack_84 = local_9c;
  local_80 = local_a8;
  do {
    if ((uVar5 & 1) == 0) {
      local_68 = 0;
      local_64 = 1;
      local_70 = 0;
      local_70 = 2;
      local_64 = 1;
      local_68 = 0;
      lVar6 = *(long *)puVar3;
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0xa8) == 0)) {
        uVar5 = 0;
        goto joined_r0x024b54a8;
      }
      uVar5 = FUN_00949898(lVar6 + 0x28,&local_a8,&local_70);
      if ((uVar4 & 1) == 0) goto LAB_024b54ac;
LAB_024b5430:
      uVar4 = 1;
    }
    else {
      uVar5 = 1;
joined_r0x024b54a8:
      if ((uVar4 & 1) != 0) goto LAB_024b5430;
LAB_024b54ac:
      local_68 = 0;
      local_64 = 5;
      local_70 = 0;
      local_70 = 0x20;
      local_64 = 5;
      local_68 = 0;
      lVar6 = *(long *)puVar3;
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0xa8) == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00949898(lVar6 + 0x28,&local_a8,&local_70);
      }
    }
    if (local_a0 < local_78) {
      local_a0 = local_a0 + 1;
    }
    else {
      local_9c = local_9c + 1;
      local_a0 = local_88;
    }
    if ((iVar2 == local_a0) && (iVar1 == local_9c)) {
      if ((uVar4 & uVar5 & 1) == 0) {
        uVar5 = FUN_016ebc50(0x409ccccd,param_1);
      }
      else {
        uVar5 = 0;
      }
      return uVar5 & 1;
    }
  } while( true );
}

