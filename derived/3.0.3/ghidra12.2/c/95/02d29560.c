
/* WARNING: Removing unreachable block (ram,0x02d29620) */
/* WARNING: Removing unreachable block (ram,0x02d29628) */
/* WARNING: Removing unreachable block (ram,0x02d295fc) */
/* WARNING: Removing unreachable block (ram,0x02d29608) */

void FUN_02d29560(long param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined4 local_48;
  undefined *local_40;
  char *pcStack_38;
  
  local_48 = 0x13;
  uVar1 = *(undefined1 *)(param_1 + 0x56f18);
  lVar4 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x30);
  iVar3 = *(int *)(lVar4 + 0x50);
  if (iVar3 != 0x13) {
    *(undefined8 *)(lVar4 + 0x58) = *(undefined8 *)(param_1 + 0x1c3c8);
    *(undefined4 *)(lVar4 + 0x50) = 0x13;
    *(undefined1 *)(lVar4 + 0x68) = uVar1;
    uVar2 = (**(code **)(*(long *)(lVar4 + 0x1190) + 0x10))(lVar4 + 0x1190);
    if ((uVar2 & 1) != 0) {
      *(undefined **)(lVar4 + 0x1190) = PTR_DAT_04bb2d80 + 0x10;
      *(undefined4 *)(lVar4 + 0x11b0) = 0xffffffff;
    }
    if (*(int *)(lVar4 + 0x10) != 1) {
      FUN_03ebb160(lVar4 + 8,1);
    }
    iVar3 = *(int *)(lVar4 + 0x50);
  }
  local_40 = (undefined *)CONCAT44(local_40._4_4_,0x13);
  if ((iVar3 != -1) && (*(int *)(lVar4 + 0x50) == 0x13)) {
    (**(code **)(*(long *)(lVar4 + 0x1190) + 0x10))(lVar4 + 0x1190);
    *(long *)(lVar4 + 0x1198) = param_1;
    *(undefined1 **)(lVar4 + 0x11a0) = &LAB_02d242c8;
    *(undefined8 *)(lVar4 + 0x11a8) = 0;
    *(undefined ***)(lVar4 + 0x1190) = &PTR_LAB_04abdc70;
    *(undefined4 *)(lVar4 + 0x11b0) = 0x13;
  }
  local_58[0] = 0;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "/L_LoadingIcon_00";
  local_50 = FUN_02bcb9a0(**(long **)(*(long *)(param_1 + 0x228) + 0x3f8) + 0x38,&local_40);
  FUN_033bed10(lVar4,local_58);
  return;
}

