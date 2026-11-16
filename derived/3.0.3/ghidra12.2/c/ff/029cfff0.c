
void FUN_029cfff0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_48;
  undefined4 local_40;
  undefined *local_38;
  long local_30;
  undefined1 local_28;
  
  if (((char)param_2[1] != '\0') && (lVar4 = *param_2, lVar4 != 0)) {
    plVar1 = &DAT_055ea988;
    if (*(char *)((long)param_2 + 9) != '\0') {
      plVar1 = &DAT_055ea998;
    }
    lVar5 = *plVar1;
    local_48 = 0;
    local_40 = 0;
    lVar2 = (**(code **)(**(long **)(*(long *)(lVar4 + 0x30) + 0x18) + 0x20))();
    if (((lVar5 != 0) && (*(char *)(lVar2 + 0x78) != '\0')) &&
       (uVar3 = FUN_03bf46a8(lVar4,"searchAndEmit(%s)",lVar5), (uVar3 & 1) != 0)) {
      local_28 = 0;
      local_38 = PTR_DAT_04bcadf8 + 0x10;
      local_30 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(lVar4 + 0x30) + 0x18),lVar5);
      if (local_30 != 0) {
        FUN_03bf47b0(lVar4,&local_38,&local_48);
      }
    }
  }
  return;
}

