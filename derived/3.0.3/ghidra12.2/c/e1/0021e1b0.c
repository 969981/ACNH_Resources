
ulong FUN_0021e1b0(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_4c;
  undefined4 local_44;
  
  if (param_2 == 0) {
    local_44 = 0;
    local_4c = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_4c);
    lVar1 = FUN_002aaa28(param_1);
    if (lVar1 == 0) goto LAB_0021e240;
LAB_0021e1e0:
    uVar2 = (uint)*(ushort *)(param_1 + 0xc);
    if (*(ushort *)(param_1 + 0xc) != 0) goto joined_r0x0021e290;
  }
  else {
    lVar1 = FUN_002aaa28(param_1);
    if (lVar1 != param_2) goto LAB_0021e1e0;
LAB_0021e240:
    local_44 = 0;
    local_4c = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_4c);
    uVar2 = (uint)*(ushort *)(param_1 + 0xc);
    if (uVar2 != 0) goto joined_r0x0021e290;
  }
  local_44 = 0;
  local_4c = 0x800000000000000;
  (**(code **)(*param_1 + 0x10))(param_1,&local_4c);
  uVar2 = (uint)*(ushort *)(param_1 + 0xc);
joined_r0x0021e290:
  if (uVar2 < 2) {
    uVar5 = 0xffffffff;
  }
  else {
    lVar1 = param_1[10];
    if (lVar1 == 0) {
      uVar5 = 0;
      lVar1 = 0;
      do {
        if (lVar1 == 0) {
          local_4c = 0x800000000000000;
          local_44 = 0;
          (**(code **)(*param_1 + 0x10))(param_1,&local_4c);
          lVar1 = param_1[10];
        }
        lVar4 = *(long *)(lVar1 + (uVar5 & 0xffff) * 0x30 + 0x10);
        if (lVar4 != 0 && lVar4 == param_2) {
          return uVar5;
        }
        uVar2 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar2;
      } while ((int)(uVar2 & 0xffff) < (int)(*(ushort *)(param_1 + 0xc) - 1));
      uVar5 = 0xffffffff;
    }
    else if ((*(long *)(lVar1 + 0x10) == 0) || (*(long *)(lVar1 + 0x10) != param_2)) {
      uVar3 = 1;
      do {
        uVar3 = uVar3 & 0xffff;
        uVar5 = (ulong)uVar3;
        if ((int)(uVar2 - 1) <= (int)uVar3) {
          return 0xffffffff;
        }
        lVar4 = *(long *)(lVar1 + uVar5 * 0x30 + 0x10);
        uVar3 = uVar3 + 1;
      } while (lVar4 == 0 || lVar4 != param_2);
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

