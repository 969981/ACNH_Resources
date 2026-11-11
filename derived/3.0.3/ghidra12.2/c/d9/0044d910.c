
void FUN_0044d910(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_68;
  long lStack_60;
  ulong local_58;
  undefined8 local_48;
  
  lVar3 = *param_1;
  uVar1 = FUN_00428440(*(undefined8 *)(lVar3 + 8));
  local_68 = FUN_0044f880(uVar1);
  FUN_00424ca0(param_2,"hk::Presets(type = {}, builtinType={}, strict = {}, {{",&DAT_04861868,
               (undefined8 *)(lVar3 + 8),&local_68,lVar3);
  if (0 < *(int *)(lVar3 + 0x10)) {
    lVar4 = 0;
    do {
      local_48 = *(undefined8 *)(*(long *)(lVar3 + 0x18) + lVar4 * 8);
      local_68 = *(undefined8 *)(*(long *)(lVar3 + 0x20) + lVar4 * 8);
      lStack_60 = *(long *)(lVar3 + 8);
      uVar2 = 0;
      if (lStack_60 != 0) {
        uVar2 = FUN_00428370();
      }
      local_58 = uVar2;
      if ((uVar2 & 1) != 0) {
        FUN_0043dd30(uVar2 & 0xfffffffffffffffe);
      }
      if (lVar4 != 0) {
        FUN_00423880(param_2,&DAT_0408f28c,0xffffffff);
      }
      FUN_00424e60(param_2,"{}={:*!}",&DAT_04861888,&local_48,&local_68);
      if ((local_58 & 1) != 0) {
        FUN_0043dd50(local_58 & 0xfffffffffffffffe);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(lVar3 + 0x10));
  }
  FUN_00423880(param_2,&DAT_040e7c1c,0xffffffff);
  return;
}

