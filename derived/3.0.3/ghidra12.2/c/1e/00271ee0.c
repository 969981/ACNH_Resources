
bool FUN_00271ee0(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  int local_40 [4];
  undefined1 local_24;
  byte local_23;
  
  plVar4 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  uVar3 = FUN_0026be6c(*(undefined8 *)PTR_DAT_04bcd350);
  lVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,uVar3);
  if (lVar5 == 0) {
    return false;
  }
  if (plVar4[0x13] != 0) {
    bVar1 = *(byte *)(lVar5 + 0x38);
    bVar2 = *(byte *)(plVar4[0x13] + 0x38);
    if (bVar1 == bVar2 || 0x1f < (bVar2 | bVar1)) {
      return false;
    }
    lVar8 = *(long *)(param_1 + 0x90);
    iVar9 = (uint)bVar1 - (uint)(bVar2 <= bVar1);
    lVar5 = lVar8 + (long)iVar9 * 0x6b0;
    uVar6 = FUN_002aed20(lVar5);
    if ((uVar6 & 1) != 0) {
      local_24 = 4;
      local_23 = bVar2;
      FUN_002b0d5c(local_40,lVar5,&local_24,2,0);
      if (local_40[0] == 0) {
        if (DAT_04c60320 == 0) {
          local_40[0] = 0;
        }
        else {
          uVar7 = FUN_002290b0(DAT_04c60320,9);
          FUN_0022910c(uVar7,*(undefined2 *)(lVar8 + (long)iVar9 * 0x6b0 + 0x32));
        }
      }
      return local_40[0] == 0;
    }
  }
  return false;
}

