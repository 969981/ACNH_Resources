
/* WARNING: Removing unreachable block (ram,0x0099ab68) */
/* WARNING: Removing unreachable block (ram,0x0099ac14) */

void FUN_0099aad0(long param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int local_34;
  
  local_34 = 0;
  fVar4 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,param_1 + 0x2d4,&local_34);
  if (local_34 != 0xc) {
    if (local_34 == 5) {
      if (DAT_05231900 == 0) {
        return;
      }
      if (*(long *)(DAT_05231900 + 0x50) == 0) {
        return;
      }
      lVar3 = *(long *)(*(long *)(DAT_05231900 + 0x50) + 0x118);
      if (lVar3 == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x280);
      uVar6 = 0;
      if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 8), lVar3 != 0)) {
        puVar1 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x488) + 0xf0))(lVar3 + 0x488);
        uVar6 = *puVar1;
      }
      *(undefined4 *)(param_1 + 0x2d8) = uVar6;
      return;
    }
    if (local_34 != 1) {
      bVar2 = *(byte *)(param_1 + 0x340) | 0x10;
      goto LAB_0099aca4;
    }
  }
  fVar5 = 0.0;
  if (((*(long *)PTR_DAT_04bb2200 != 0) &&
      (lVar3 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar3 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x118), lVar3 != 0)) {
    fVar5 = (float)FUN_015bc77c(lVar3,param_1 + 0x2d4,0,0);
  }
  *(float *)(param_1 + 0x2d8) = fVar4 + fVar5;
  bVar2 = *(byte *)(param_1 + 0x340) & 0xef;
LAB_0099aca4:
  *(byte *)(param_1 + 0x340) = bVar2;
  return;
}

