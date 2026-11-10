
ulong FUN_0021e380(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 local_4c;
  undefined4 local_44;
  
  if (param_2 == 0) {
    local_44 = 0;
    local_4c = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_4c);
    iVar1 = FUN_002aaa3c(param_1);
    if (iVar1 == 0) goto LAB_0021e410;
LAB_0021e3b0:
    uVar3 = (uint)*(ushort *)(param_1 + 0xc);
    if (*(ushort *)(param_1 + 0xc) != 0) goto joined_r0x0021e460;
  }
  else {
    iVar1 = FUN_002aaa3c(param_1);
    if (iVar1 != param_2) goto LAB_0021e3b0;
LAB_0021e410:
    local_44 = 0;
    local_4c = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_4c);
    uVar3 = (uint)*(ushort *)(param_1 + 0xc);
    if (uVar3 != 0) goto joined_r0x0021e460;
  }
  local_44 = 0;
  local_4c = 0x800000000000000;
  (**(code **)(*param_1 + 0x10))(param_1,&local_4c);
  uVar3 = (uint)*(ushort *)(param_1 + 0xc);
joined_r0x0021e460:
  if (uVar3 < 2) {
    uVar5 = 0xffffffff;
  }
  else {
    lVar2 = param_1[10];
    if (lVar2 == 0) {
      uVar5 = 0;
      lVar2 = 0;
      do {
        if (lVar2 == 0) {
          local_4c = 0x800000000000000;
          local_44 = 0;
          (**(code **)(*param_1 + 0x10))(param_1,&local_4c);
          lVar2 = param_1[10];
        }
        iVar1 = *(int *)(lVar2 + (uVar5 & 0xffff) * 0x30 + 0x18);
        if (iVar1 != 0 && iVar1 == param_2) {
          return uVar5;
        }
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar3;
      } while ((int)(uVar3 & 0xffff) < (int)(*(ushort *)(param_1 + 0xc) - 1));
      uVar5 = 0xffffffff;
    }
    else if ((*(int *)(lVar2 + 0x18) == 0) || (*(int *)(lVar2 + 0x18) != param_2)) {
      uVar4 = 1;
      do {
        uVar4 = uVar4 & 0xffff;
        uVar5 = (ulong)uVar4;
        if ((int)(uVar3 - 1) <= (int)uVar4) {
          return 0xffffffff;
        }
        iVar1 = *(int *)(lVar2 + uVar5 * 0x30 + 0x18);
        uVar4 = uVar4 + 1;
      } while (iVar1 == 0 || iVar1 != param_2);
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

