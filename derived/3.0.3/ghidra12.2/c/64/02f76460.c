
void FUN_02f76460(long *param_1,long param_2,uint param_3,int param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *local_90;
  undefined1 *puStack_88;
  undefined4 local_80;
  undefined1 local_7c [63];
  undefined1 local_3d;
  undefined8 local_38;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x260) = param_4;
    *(int *)(lVar2 + 0x264) = param_4;
    *(undefined4 *)(lVar2 + 0x268) = 0;
    *(undefined1 *)(lVar2 + 0x290) = 0;
    *(undefined1 *)(lVar2 + 0x2a0) = 0;
    FUN_03125a4c(lVar2,param_4);
    local_3d = 0;
    local_80 = 0x40;
    puStack_88 = local_7c;
    local_7c[0] = 0;
    local_90 = PTR_DAT_04bb2bc0 + 0x10;
    local_38 = 0;
    if (param_2 != 0) {
      if (*(uint *)(param_2 + 0x210) <= param_3) {
        param_3 = 0;
      }
      local_38 = *(undefined8 *)(*(long *)(param_2 + 0x218) + (long)(int)param_3 * 8);
    }
    if (**(int **)PTR_DAT_04bb3448 == 0xc) {
      iVar1 = param_4 % 10;
      param_4 = param_4 % 100;
      if ((iVar1 == 1) && (param_4 != 0xb)) {
        uVar4 = 0x44;
      }
      else if ((((iVar1 == 2) && (param_4 != 0xc)) || ((iVar1 == 3 && (param_4 != 0xd)))) ||
              ((uVar4 = 0x46, iVar1 == 4 && (param_4 != 0xe)))) {
        uVar4 = 0x45;
      }
    }
    else {
      uVar3 = 0x44;
      if (param_4 != 0) {
        uVar3 = 0x46;
      }
      uVar4 = 0x45;
      if (param_4 != 1) {
        uVar4 = uVar3;
      }
    }
    lVar2 = *(long *)PTR_DAT_04bb28f8 + 0x29f8 + (ulong)uVar4 * 0x128;
    if (0x50 < uVar4) {
      lVar2 = *(long *)PTR_DAT_04bb28f8 + 0x29f8;
    }
    FUN_034632e0(&local_90,lVar2);
  }
  return;
}

