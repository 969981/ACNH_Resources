
void FUN_00453430(long param_1,code *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 local_48 [16];
  ulong local_38;
  
  pcVar1 = FUN_00453500;
  if (param_2 != (code *)0x0) {
    pcVar1 = param_2;
  }
  puVar2 = (undefined8 *)FUN_00438810(0x18);
  *(undefined8 **)(param_1 + 0x220) = puVar2;
  *puVar2 = pcVar1;
  *(undefined8 *)(*(long *)(param_1 + 0x220) + 0x10) = param_3;
  local_48._8_8_ = 0;
  local_38 = 0;
  if (*(long *)(param_1 + 0x220) == 0) {
    uVar3 = 0;
    local_48 = ZEXT816(0);
  }
  else {
    local_48 = FUN_00446e00(*(long *)(param_1 + 0x220),&DAT_04c153f8);
    if (local_48._8_8_ == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00428370(local_48._8_8_);
      if ((uVar3 & 1) != 0) {
        FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
      }
    }
  }
  local_38 = uVar3;
  FUN_00452380(param_1,local_48);
  if ((uVar3 & 1) != 0) {
    FUN_0043dd50(uVar3 & 0xfffffffffffffffe);
  }
  return;
}

