
void FUN_033065cc(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined *local_40;
  char *pcStack_38;
  undefined8 local_18;
  
  *(undefined4 *)(param_1 + 0x520) = param_2;
  *(undefined4 *)(param_1 + 0x524) = param_3;
  puVar1 = PTR_DAT_04bc8ed0;
  *(undefined4 *)(param_1 + 0x528) = param_4;
  local_40 = PTR_DAT_04bc8e68;
  *(undefined4 *)(param_1 + 0x52c) = param_5;
  *(undefined4 *)(param_1 + 0x530) = param_6;
  lVar4 = *(long *)puVar1;
  *(undefined4 *)(param_1 + 0x534) = param_7;
  *(undefined4 *)(param_1 + 0x538) = param_8;
  *(undefined1 *)(param_1 + 0x710) = 0;
  local_18 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined1 *)(lVar4 + 0x114) = 1;
  local_40 = local_40 + 0x10;
  pcStack_38 = "L_Line_00/P_Line";
  lVar2 = FUN_032cb990(&local_18,&local_40);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar4 + 0x113) = 0;
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | *(byte *)(lVar4 + 0x115);
  }
  *(undefined1 *)(param_1 + 0x712) = 1;
  if (((*(long *)(param_1 + 0x20) != 0) && (-1 < *(int *)(param_1 + 0x30))) &&
     (plVar3 = *(long **)(*(long *)(param_1 + 0x20) + 0x80), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(long *)(param_1 + 0x28) = param_1 + 0xe0;
  puVar1 = PTR_DAT_04bb4fb0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  lVar2 = *(long *)(*(long *)puVar1 + 8);
  if (lVar2 != 0) {
    local_40 = (undefined *)0x0;
    lVar4 = 0;
    if (*(char *)(lVar2 + 0x38) != '\0') {
      lVar4 = lVar2 + 8;
    }
    FUN_03366350(*(long *)puVar1,lVar4,PTR_s_Decide_Erase_04bc9780 + 0x2ec,0,&local_40,0);
  }
  return;
}

