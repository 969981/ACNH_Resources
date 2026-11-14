
long FUN_01bb4374(long param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_34;
  undefined4 local_2c;
  
  lVar5 = 0;
  if (param_1 != 0) {
    local_34 = 0x5a;
    local_2c = *param_2;
    puVar3 = (undefined8 *)FUN_01bc06e0(param_1,&local_34,1);
    if (((*PTR_DAT_04bc0ab0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc0ab0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc0aa8 = PTR_DAT_04bc0ab8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc0ab0);
    }
    if ((puVar3 == (undefined8 *)0x0) ||
       (uVar4 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc0aa8), (uVar4 & 1) == 0)) {
      lVar5 = 0;
    }
    else {
      iVar2 = *(int *)(puVar3 + 0x23);
      if (param_3 == 0xc) {
        iVar1 = iVar2 % 10;
        iVar2 = iVar2 % 100;
        if ((iVar1 == 1) && (iVar2 != 0xb)) {
          uVar7 = 0x4d;
        }
        else if ((((iVar1 == 2) && (iVar2 != 0xc)) || ((iVar1 == 3 && (iVar2 != 0xd)))) ||
                ((uVar7 = 0x4f, iVar1 == 4 && (iVar2 != 0xe)))) {
          uVar7 = 0x4e;
        }
      }
      else {
        uVar6 = 0x4d;
        if (iVar2 != 0) {
          uVar6 = 0x4f;
        }
        uVar7 = 0x4e;
        if (iVar2 != 1) {
          uVar7 = uVar6;
        }
      }
      lVar5 = *(long *)PTR_DAT_04bb28f8 + 0x29f8 + (ulong)uVar7 * 0x128;
      if (0x50 < uVar7) {
        lVar5 = *(long *)PTR_DAT_04bb28f8 + 0x29f8;
      }
    }
  }
  return lVar5;
}

