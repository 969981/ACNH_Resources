
/* WARNING: Removing unreachable block (ram,0x0231ef84) */
/* WARNING: Removing unreachable block (ram,0x0231effc) */

undefined1  [16] FUN_0231eef4(long param_1,undefined8 param_2,undefined4 *param_3)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = 0;
  auVar4 = FUN_016e026c(0,param_2,&local_28,0);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_28;
  }
  if (*(int *)(param_1 + 0x1810) == 6) {
    if (*(long *)PTR_DAT_04bb2200 == 0) {
      return ZEXT816(0xc1a00000);
    }
    lVar2 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50);
    if (lVar2 == 0) {
      return ZEXT816(0xc1a00000);
    }
    local_24 = 0;
    lVar2 = *(long *)(lVar2 + 0x118);
    if (lVar2 == 0) {
      return ZEXT816(0xc1a00000);
    }
    lVar2 = *(long *)(lVar2 + 0x280);
    fVar5 = 0.0;
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 8), lVar2 != 0)) {
      pfVar1 = (float *)(**(code **)(*(long *)(lVar2 + 0x488) + 0xf0))(0xc1a00000,lVar2 + 0x488);
      fVar5 = *pfVar1;
    }
    lVar2 = FUN_0251e98c(1);
    lVar3 = 0x1590;
  }
  else {
    if (*(int *)(param_1 + 0x1810) != 5) {
      return auVar4;
    }
    if (*(long *)PTR_DAT_04bb2200 == 0) {
      return ZEXT816(0xc1a00000);
    }
    lVar2 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50);
    if (lVar2 == 0) {
      return ZEXT816(0xc1a00000);
    }
    local_24 = 0;
    lVar2 = *(long *)(lVar2 + 0x118);
    if (lVar2 == 0) {
      return ZEXT816(0xc1a00000);
    }
    lVar2 = *(long *)(lVar2 + 0x280);
    fVar5 = 0.0;
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 8), lVar2 != 0)) {
      pfVar1 = (float *)(**(code **)(*(long *)(lVar2 + 0x488) + 0xf0))(0xc1a00000,lVar2 + 0x488);
      fVar5 = *pfVar1;
    }
    lVar2 = FUN_0251e98c(1);
    lVar3 = 0x1560;
  }
  pfVar1 = (float *)(**(code **)(*(long *)(lVar2 + lVar3) + 0xf0))();
  return ZEXT416((uint)(fVar5 + *pfVar1));
}

