
void FUN_0383ed30(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_68;
  undefined4 local_60;
  undefined *local_58;
  long local_50;
  undefined1 local_48;
  
  lVar3 = *(long *)(param_2 + 8);
  param_1[2] = 0;
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_2 + 0x10);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    if (lVar3 != 0) {
      if ((param_4 & 1) == 0) goto LAB_0383eea0;
LAB_0383edd0:
      local_68 = 0;
      local_60 = 0;
      lVar1 = (**(code **)(**(long **)(*(long *)(lVar3 + 0x30) + 0x18) + 0x20))();
      FUN_03be7150(*(undefined8 *)(lVar1 + 0x70),param_3,&local_68,lVar3,1,0);
      goto LAB_0383ef28;
    }
  }
  else if ((param_4 & 1) == 0) {
    local_68 = 0;
    local_60 = 0;
    lVar1 = (**(code **)(**(long **)(*(long *)(lVar3 + 0x30) + 0x18) + 0x20))();
    if (((param_3 != 0) && (*(char *)(lVar1 + 0x78) != '\0')) &&
       (uVar2 = FUN_03bf46a8(lVar3,"searchAndEmit(%s)",param_3), (uVar2 & 1) != 0)) {
      local_48 = 0;
      local_58 = PTR_DAT_04bcadf8 + 0x10;
      local_50 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(lVar3 + 0x30) + 0x18),param_3);
      if (local_50 != 0) {
        FUN_03bf47b0(lVar3,&local_58,&local_68);
      }
    }
    *param_1 = local_68;
    lVar3 = *(long *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 1) = local_60;
    if (lVar3 != 0) {
LAB_0383eea0:
      local_68 = 0;
      local_60 = 0;
      lVar1 = (**(code **)(**(long **)(*(long *)(lVar3 + 0x30) + 0x18) + 0x20))();
      if (((param_3 != 0) && (*(char *)(lVar1 + 0x78) != '\0')) &&
         (uVar2 = FUN_03bf46a8(lVar3,"searchAndEmit(%s)",param_3), (uVar2 & 1) != 0)) {
        local_48 = 0;
        local_58 = PTR_DAT_04bcadf8 + 0x10;
        local_50 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(lVar3 + 0x30) + 0x18),param_3);
        if (local_50 != 0) {
          FUN_03bf47b0(lVar3,&local_58,&local_68);
        }
      }
      goto LAB_0383ef28;
    }
  }
  else {
    local_68 = 0;
    local_60 = 0;
    lVar1 = (**(code **)(**(long **)(*(long *)(lVar3 + 0x30) + 0x18) + 0x20))();
    FUN_03be7150(*(undefined8 *)(lVar1 + 0x70),param_3,&local_68,lVar3,1,0);
    *param_1 = local_68;
    lVar3 = *(long *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 1) = local_60;
    if (lVar3 != 0) goto LAB_0383edd0;
  }
  local_68 = 0;
  local_60 = 0;
LAB_0383ef28:
  param_1[2] = local_68;
  *(undefined4 *)(param_1 + 3) = local_60;
  return;
}

