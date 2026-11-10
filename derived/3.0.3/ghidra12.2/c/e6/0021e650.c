
void FUN_0021e650(long *param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  if (param_2 == 0) {
    local_38 = 0;
    local_40 = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_40);
  }
  iVar5 = FUN_0021e1b0(param_1,param_2);
  if ((int)(*(ushort *)(param_1 + 0xc) - 1) <= iVar5) {
    local_38 = 0;
    local_40 = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_40);
  }
  lVar12 = param_1[10];
  iVar5 = FUN_0021e1b0(param_1,param_2);
  uVar1 = *(ushort *)(lVar12 + (long)iVar5 * 0x30 + 0x24);
  if ((uVar1 != 0) && (uVar1 != 1)) {
    lVar12 = lVar12 + (long)iVar5 * 0x30;
    uVar2 = *(ushort *)(lVar12 + 0x20);
    lVar10 = *(long *)(lVar12 + 0x28);
    uVar6 = 0;
    uVar7 = (uint)*(ushort *)(lVar12 + 0x22);
    if (uVar2 != 0) {
      uVar6 = uVar7 / uVar2;
    }
    uVar8 = (uint)uVar2;
    uVar3 = 0;
    uVar9 = (uint)uVar2;
    if (uVar8 != 0) {
      uVar3 = (uVar7 + 1) / uVar9;
    }
    uVar2 = *(ushort *)(lVar10 + (ulong)(uVar7 - uVar6 * uVar8) * 0x5ac);
    iVar5 = -0xfffd;
    if (uVar2 < 0xfffd) {
      iVar5 = 1;
    }
    uVar6 = iVar5 + (uint)uVar2;
    if (uVar6 == *(ushort *)(lVar10 + (ulong)((uVar7 + 1) - uVar3 * uVar9) * 0x5ac)) {
      uVar3 = 2;
      do {
        uVar11 = uVar3;
        if (uVar1 == uVar11) break;
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = (uVar7 + uVar11) / uVar8;
        }
        iVar5 = -0xfffd;
        if ((uVar6 & 0xffff) < 0xfffd) {
          iVar5 = 1;
        }
        uVar6 = iVar5 + (uVar6 & 0xffff);
        uVar3 = uVar11 + 1;
      } while (uVar6 == *(ushort *)(lVar10 + (ulong)((uVar7 + uVar11) - uVar4 * uVar9) * 0x5ac));
      if (uVar1 <= uVar11) goto LAB_0021e7b8;
    }
    local_38 = 0;
    local_40 = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_40);
  }
LAB_0021e7b8:
  lVar12 = param_1[0xb];
  if (lVar12 == 0) {
    local_38 = 0;
    local_40 = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_40);
    lVar12 = param_1[0xb];
  }
  iVar5 = FUN_0021e1b0(param_1,param_2);
  uVar6 = FUN_002aaa44(param_1);
  if ((int)(uVar6 & 0xff) <= iVar5) {
    iVar5 = iVar5 + 1;
  }
  FUN_002ae560(&local_40,lVar12,param_2,iVar5);
  if ((int)local_40 != 0) {
    local_44 = 0;
    local_4c = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_4c);
  }
  return;
}

