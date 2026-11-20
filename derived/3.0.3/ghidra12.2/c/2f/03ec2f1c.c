
ulong FUN_03ec2f1c(long param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5,
                  ulong param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined **local_168;
  undefined1 *puStack_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  if (-1 < (int)param_3) {
    if ((int)param_3 < *(int *)(param_1 + 0x18)) {
      if ((*(long *)(param_1 + 0x80) != 0) && ((param_6 & 1) == 0)) {
        uVar3 = FUN_03ec3d80(*(long *)(param_1 + 0x80),param_2,(ulong)param_3,param_4 & 1,
                             param_5 & 1);
        return uVar3;
      }
      lVar4 = *(long *)((*(undefined8 **)(param_1 + 0x20))[(ulong)param_3 * 2] + 0x10);
      puStack_160 = (undefined1 *)*(long *)(PTR_PTR_04bb2238 + 8);
      if (lVar4 != 0) {
        puStack_160 = (undefined1 *)lVar4;
      }
      local_168 = &PTR_LAB_048f9770;
      (**(code **)(**(long **)(param_1 + 0x50) + 0x1b8))
                (*(long **)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48),&local_168,param_2,
                 **(undefined8 **)(param_1 + 0x20));
      uVar2 = 0;
      uVar1 = param_3;
      if (*(uint *)(param_1 + 0x18) <= param_3) {
        uVar1 = 0;
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 0x10);
      if ((*(byte *)(lVar4 + 0x68) & 1) == 0) {
        uVar2 = FUN_03ebed08(lVar4,param_2,*(undefined8 *)(param_1 + 0x38),1,param_4 & 1,param_5 & 1
                            );
      }
      if ((*(byte *)(*(long *)(param_1 + 0x38) + 0xb0) & 1) != 0) {
        FUN_03ec5760(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
      }
      FUN_03ec3220(0,param_1,1,param_3);
      goto LAB_03ec30a8;
    }
  }
  local_55 = 0;
  local_158 = 0x100;
  puStack_160 = local_154;
  local_154[0] = 0;
  local_168 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x10) + 8);
  FUN_038d1270(&local_168,"%s.as",lVar4 + *(int *)(lVar4 + 0x24) + (long)*(int *)(lVar4 + 8));
  uVar2 = 0;
LAB_03ec30a8:
  return (ulong)(uVar2 & 1);
}

