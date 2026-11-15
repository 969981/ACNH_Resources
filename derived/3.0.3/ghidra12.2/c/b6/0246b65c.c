
/* WARNING: Removing unreachable block (ram,0x0246b6f8) */

void FUN_0246b65c(long param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  
  *(undefined1 *)(param_1 + 0x66d) = 0;
  *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(param_1 + 0x664);
  if (*(int *)(param_1 + 0x178) == 0) {
    *(undefined8 *)(param_1 + 0x660) = 0;
    *(undefined2 *)(param_1 + 0x66c) = 0x100;
    uVar3 = 6;
    if (*(char *)(param_1 + 0x1900) != '\0') {
      uVar3 = (uint)*(byte *)(param_1 + 0x1901);
    }
    *(uint *)(param_1 + 0x668) = uVar3;
    FUN_0231b3c0(param_1,uVar3,1);
  }
  fVar6 = -20.0;
  puVar5 = *(undefined8 **)(param_1 + 0x4c8);
  if (((*(long *)PTR_DAT_04bb2200 != 0) &&
      (lVar4 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar4 != 0)) &&
     (lVar4 = *(long *)(lVar4 + 0x118), lVar4 != 0)) {
    lVar4 = *(long *)(lVar4 + 0x280);
    fVar6 = 0.0;
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 8), lVar4 != 0)) {
      pfVar2 = (float *)(**(code **)(*(long *)(lVar4 + 0x488) + 0xf0))(lVar4 + 0x488);
      fVar6 = *pfVar2;
    }
    lVar4 = FUN_0251e98c(1);
    pfVar2 = (float *)(**(code **)(*(long *)(lVar4 + 0x1560) + 0xf0))(lVar4 + 0x1560);
    fVar6 = fVar6 + *pfVar2;
  }
  puVar1 = &DAT_054e9a58;
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = puVar5;
  }
  *(float *)((long)puVar1 + 0x27c) = fVar6;
  return;
}

