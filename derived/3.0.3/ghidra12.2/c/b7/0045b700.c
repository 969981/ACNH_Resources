
void FUN_0045b700(long param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  uint local_98;
  uint local_94;
  long local_90;
  undefined1 auStack_88 [64];
  long local_48;
  long local_40;
  ulong local_38;
  undefined8 local_28;
  
  local_40 = 0;
  local_38 = 0;
  local_48 = 0;
  if ((param_3[1] != 0) && (uVar1 = FUN_00428440(), (uVar1 & 0x1f) == 2)) {
    local_48 = *param_3;
    local_40 = param_3[1];
    if ((param_3[2] & 1U) != 0) {
      FUN_0043dd30(param_3[2] & 0xfffffffffffffffe);
    }
    local_38 = param_3[2];
    if (local_48 != 0) {
      FUN_0045c0c0(param_1,param_2,&local_48);
      goto joined_r0x0045b824;
    }
  }
  if (1 < DAT_04c70110) {
    FUN_00444bc0(auStack_88,&DAT_04c700c0,2);
    local_28 = *(undefined8 *)(param_2 + 8);
    local_90 = param_3[1];
    local_94 = FUN_00428440();
    local_94 = local_94 & 0x1f;
    local_98 = FUN_00428440(param_3[1]);
    local_98 = local_98 & 0x1f;
    lVar2 = FUN_004446b0(auStack_88,
                         "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                         ,&DAT_04862b88,&local_28,&local_90,&local_94,&local_98);
    *(char **)(lVar2 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
    ;
    *(undefined8 *)(lVar2 + 0x30) = 0x14d;
    FUN_00444c00(auStack_88);
  }
  *(undefined4 *)(param_1 + 8) = 0x80040200;
joined_r0x0045b824:
  if ((local_38 & 1) != 0) {
    FUN_0043dd50(local_38 & 0xfffffffffffffffe);
  }
  return;
}

