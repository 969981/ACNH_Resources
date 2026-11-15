
bool FUN_01fd0998(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  
  if (((DAT_05292338 != 0) && (DAT_05aed670 != 0)) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar3 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar2 = FUN_006bd550(*puVar3,0);
    if (iVar2 != 0x758f7eaf) {
      return false;
    }
    if (((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) &&
       (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) != 0)) {
      lVar4 = FUN_0252d9bc(0);
      if (lVar4 == 0) {
        return false;
      }
      if (DAT_05292338 == 0) {
        iVar2 = 0;
        iVar5 = 0x10;
      }
      else {
        iVar2 = *(int *)(DAT_05292338 + 0xd8c);
        iVar5 = *(int *)(DAT_05292338 + 0xd9c);
      }
      iVar1 = iVar2;
      if (iVar5 <= iVar2) {
        iVar1 = iVar5;
      }
      if (iVar2 <= iVar5) {
        iVar2 = iVar5;
      }
      fVar6 = ((float)iVar1 * 5.0 + (float)iVar2 * 5.0 + 5.0) * 0.5;
      return fVar6 <= *(float *)(lVar4 + 8) !=
             *(float *)(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x280) < fVar6;
    }
  }
  return false;
}

