
void FUN_0018623c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *local_58;
  undefined1 auStack_50 [16];
  undefined1 *local_40;
  
  FUN_00186330(&local_58,param_2,"/Incoming");
  FUN_00185b80(param_1 + 8,&local_58);
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_58 = puVar1;
  if ((local_40 != (undefined1 *)0x0) && (local_40 != auStack_50)) {
    pcVar2 = *(code **)(local_40 + -0x14);
    if (pcVar2 == (code *)0x0) {
      free(local_40 + -0x14);
    }
    else {
      (*pcVar2)();
    }
  }
  FUN_00186330(&local_58,param_2,"/Outgoing");
  FUN_00185b80(param_1 + 0x68,&local_58);
  if ((local_40 != (undefined1 *)0x0) && (local_40 != auStack_50)) {
    pcVar2 = *(code **)(local_40 + -0x14);
    if (pcVar2 == (code *)0x0) {
      local_58 = puVar1;
      free(local_40 + -0x14);
      return;
    }
    local_58 = puVar1;
    (*pcVar2)();
  }
  return;
}

