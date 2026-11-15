
/* WARNING: Removing unreachable block (ram,0x0231d9d4) */
/* WARNING: Removing unreachable block (ram,0x0231da4c) */

void FUN_0231d944(long param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = 0;
  puVar1 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x4c8);
  }
  fVar5 = (float)FUN_016e026c(0,puVar1 + 0x4f,&local_28,0);
  if (*(int *)(param_1 + 0x1810) == 6) {
    fVar5 = -20.0;
    if ((*(long *)PTR_DAT_04bb2200 == 0) ||
       (lVar3 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar3 == 0)) goto LAB_0231daa4;
    local_24 = 0;
    lVar3 = *(long *)(lVar3 + 0x118);
    if (lVar3 == 0) goto LAB_0231daa4;
    lVar3 = *(long *)(lVar3 + 0x280);
    fVar5 = 0.0;
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 8), lVar3 != 0)) {
      pfVar2 = (float *)(**(code **)(*(long *)(lVar3 + 0x488) + 0xf0))(lVar3 + 0x488);
      fVar5 = *pfVar2;
    }
    lVar3 = FUN_0251e98c(1);
    lVar4 = 0x1590;
  }
  else {
    if (*(int *)(param_1 + 0x1810) != 5) goto LAB_0231daa4;
    fVar5 = -20.0;
    if ((*(long *)PTR_DAT_04bb2200 == 0) ||
       (lVar3 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar3 == 0)) goto LAB_0231daa4;
    local_24 = 0;
    lVar3 = *(long *)(lVar3 + 0x118);
    if (lVar3 == 0) goto LAB_0231daa4;
    lVar3 = *(long *)(lVar3 + 0x280);
    fVar5 = 0.0;
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 8), lVar3 != 0)) {
      pfVar2 = (float *)(**(code **)(*(long *)(lVar3 + 0x488) + 0xf0))(lVar3 + 0x488);
      fVar5 = *pfVar2;
    }
    lVar3 = FUN_0251e98c(1);
    lVar4 = 0x1560;
  }
  pfVar2 = (float *)(**(code **)(*(long *)(lVar3 + lVar4) + 0xf0))();
  fVar5 = fVar5 + *pfVar2;
LAB_0231daa4:
  puVar1 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x4c8);
  }
  if (*(float *)((long)puVar1 + 0x27c) < fVar5) {
    *(float *)((long)puVar1 + 0x27c) = fVar5;
  }
  return;
}

