
bool FUN_00272184(long param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  int local_44 [4];
  undefined1 local_34;
  undefined1 local_33;
  
  puVar1 = PTR_DAT_04bc1510;
  lVar3 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  lVar3 = *(long *)(lVar3 + 0x98);
  if (lVar3 != 0) {
    uVar2 = FUN_0026bfe0(DAT_04c603c8);
    if (0x1f < (uVar2 & 0xff)) {
      return false;
    }
    if ((uint)*(byte *)(lVar3 + 0x38) == (uVar2 & 0xff)) {
      plVar4 = (long *)FUN_002ba790(*(undefined8 *)puVar1);
      lVar3 = (**(code **)(*plVar4 + 0x50))(plVar4,param_2);
      if (lVar3 == 0) {
        return false;
      }
      lVar7 = *(long *)(param_1 + 0x90);
      iVar8 = (param_2 & 0xff) - (uint)((uVar2 & 0xff) <= (param_2 & 0xff));
      lVar3 = lVar7 + (long)iVar8 * 0x6b0;
      uVar5 = FUN_002aed20(lVar3);
      if ((uVar5 & 1) != 0) {
        local_33 = (undefined1)uVar2;
        local_34 = 0x10;
        FUN_002b0d5c(local_44,lVar3,&local_34,2,0);
        if (local_44[0] == 0) {
          if (DAT_04c60320 == 0) {
            local_44[0] = 0;
          }
          else {
            uVar6 = FUN_002290b0(DAT_04c60320,9);
            FUN_0022910c(uVar6,*(undefined2 *)(lVar7 + (long)iVar8 * 0x6b0 + 0x32));
          }
        }
        return local_44[0] == 0;
      }
    }
  }
  return false;
}

