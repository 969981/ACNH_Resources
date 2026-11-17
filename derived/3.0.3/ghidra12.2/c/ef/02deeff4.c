
/* WARNING: Removing unreachable block (ram,0x02def0b4) */
/* WARNING: Removing unreachable block (ram,0x02def0bc) */
/* WARNING: Removing unreachable block (ram,0x02def090) */
/* WARNING: Removing unreachable block (ram,0x02def09c) */

void FUN_02deeff4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined *local_50;
  char *pcStack_48;
  uint local_24;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x30);
  if (*(int *)(lVar2 + 0x50) != 0xf) {
    *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(param_1 + 0x1c3b8);
    *(undefined4 *)(lVar2 + 0x50) = 0xf;
    *(undefined1 *)(lVar2 + 0x68) = 0;
    uVar1 = (**(code **)(*(long *)(lVar2 + 0x1190) + 0x10))(lVar2 + 0x1190);
    if ((uVar1 & 1) != 0) {
      *(undefined **)(lVar2 + 0x1190) = PTR_DAT_04bb2d80 + 0x10;
      *(undefined4 *)(lVar2 + 0x11b0) = 0xffffffff;
    }
    if (*(int *)(lVar2 + 0x10) != 1) {
      FUN_03ebb160(lVar2 + 8,1);
    }
  }
  local_24 = 0;
  FUN_02b67a30(&local_24,*(undefined4 *)(param_1 + 0x570e8));
  local_68 = (ulong)local_24 << 0x20;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "/L_LoadingIcon_00";
  local_60 = FUN_02bcb9a0(**(long **)(*(long *)(param_1 + 0x228) + 0x3f8) + 0x38,&local_50);
  local_58 = *(undefined1 *)(param_1 + 0x570f7);
  FUN_033bea20(lVar2,&local_68);
  local_50 = (undefined *)CONCAT44(local_50._4_4_,0xf);
  if ((*(int *)(lVar2 + 0x50) != -1) && (*(int *)(lVar2 + 0x50) == 0xf)) {
    (**(code **)(*(long *)(lVar2 + 0x1190) + 0x10))(lVar2 + 0x1190);
    *(long *)(lVar2 + 0x1198) = param_1;
    *(undefined1 **)(lVar2 + 0x11a0) = &LAB_02de9738;
    *(undefined8 *)(lVar2 + 0x11a8) = 0;
    *(undefined ***)(lVar2 + 0x1190) = &PTR_LAB_04acc248;
    *(undefined4 *)(lVar2 + 0x11b0) = 0xf;
  }
  return;
}

