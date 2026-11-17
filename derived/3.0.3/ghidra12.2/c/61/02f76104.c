
void FUN_02f76104(long *param_1,long param_2,uint param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined *local_90;
  undefined1 *puStack_88;
  undefined4 local_80;
  undefined1 local_7c [63];
  undefined1 local_3d;
  undefined8 local_38;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    *(int *)(lVar3 + 0x260) = param_4;
    *(int *)(lVar3 + 0x264) = param_4;
    *(undefined4 *)(lVar3 + 0x268) = 0;
    *(undefined1 *)(lVar3 + 0x290) = 0;
    *(undefined1 *)(lVar3 + 0x2a0) = 0;
    *(int *)(lVar3 + 600) = (int)lVar2;
    FUN_03125a4c(lVar3,param_4);
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
        uVar5 = 1;
      }
      else if ((((iVar1 == 2) && (param_4 != 0xc)) || ((iVar1 == 3 && (param_4 != 0xd)))) ||
              ((uVar5 = 3, iVar1 == 4 && (param_4 != 0xe)))) {
        uVar5 = 2;
      }
    }
    else {
      uVar4 = 3;
      if (param_4 == 0) {
        uVar4 = 1;
      }
      uVar5 = 2;
      if (param_4 != 1) {
        uVar5 = uVar4;
      }
    }
    lVar3 = *(long *)PTR_DAT_04bb28f8 + 0x29f8 + (ulong)uVar5 * 0x128;
    if (0x50 < uVar5) {
      lVar3 = *(long *)PTR_DAT_04bb28f8 + 0x29f8;
    }
    FUN_034632e0(&local_90,lVar3);
  }
  return;
}

