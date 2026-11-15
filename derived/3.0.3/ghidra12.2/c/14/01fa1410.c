
void FUN_01fa1410(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  int *piVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  void *__src;
  float fVar10;
  undefined4 local_1f8 [8];
  long local_1d8;
  undefined4 local_194;
  undefined2 local_190;
  undefined1 local_18e;
  int local_18c;
  void *local_e0;
  int local_d8;
  
  if (((*(uint *)(param_1 + 0xafb0) >> 0xb & 1) != 0) &&
     (*(int *)(*(long *)(param_1 + 8) + 0x750) != 0)) {
    *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) | 0x8000;
    *(undefined4 *)(param_1 + 0xaf8c) = 2;
    FUN_01fa09e0(param_1);
    return;
  }
  FUN_01e63f1c(local_1f8);
  local_1f8[0] = 1;
  if ((((*(int *)(param_1 + 0x77f4) == 1) || (*(int *)(param_1 + 0x77b0) == 1)) &&
      ((*(byte *)(param_1 + 0xafb1) >> 3 & 1) != 0)) && (**(char **)(param_1 + 0x78a8) != '\0')) {
    (**(code **)(*(long *)(param_1 + 0x78a0) + 0x18))(param_1 + 0x78a0);
    __src = *(void **)(param_1 + 0x78a8);
    if (local_e0 != __src) {
      (**(code **)(*(long *)(param_1 + 0x78a0) + 0x18))(param_1 + 0x78a0);
      lVar8 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x78a8) + lVar8) == '\0') goto LAB_01fa154c;
        lVar1 = *(long *)(param_1 + 0x78a8) + lVar8;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_01fa154c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_01fa154c;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_01fa154c:
      iVar2 = (int)lVar8;
      if (local_d8 <= (int)lVar8) {
        iVar2 = local_d8 + -1;
      }
      memcpy(local_e0,__src,(long)iVar2);
      *(undefined1 *)((long)local_e0 + (long)iVar2) = 0;
    }
  }
  pfVar5 = (float *)(**(code **)(*(long *)(DAT_053e0208 + 0x176d0) + 0xf0))();
  fVar10 = *pfVar5 * 30.0;
  uVar9 = 0;
  if (fVar10 != (float)(int)fVar10) {
    uVar9 = (uint)(fVar10 < 0.0);
  }
  local_18c = (int)fVar10 - uVar9;
  if ((*(int *)(param_1 + 0xaf88) == 1) && ((*(byte *)(param_1 + 0xafb1) >> 3 & 1) != 0)) {
    piVar6 = (int *)(**(code **)(*(long *)(DAT_053e0208 + 0x17b28) + 0xf0))();
    iVar2 = *piVar6;
    iVar3 = piVar6[1];
    puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar4 = puVar7[3];
    uVar9 = *puVar7 ^ *puVar7 << 0xb;
    *puVar7 = puVar7[1];
    puVar7[1] = puVar7[2];
    uVar9 = uVar9 >> 8 ^ uVar4 >> 0x13 ^ uVar9 ^ uVar4;
    puVar7[2] = uVar4;
    puVar7[3] = uVar9;
    local_18c = (int)((float)iVar2 +
                     ((float)(uVar9 >> 9 | 0x3f800000) + -1.0) * (float)(iVar3 - iVar2)) * 0x1e;
  }
  *(long *)(param_1 + 0x12200) = param_1;
  *(undefined8 *)(param_1 + 0x12208) = 0x600;
  local_1d8 = param_1 + 0x121f8;
  *(undefined8 *)(param_1 + 0x12210) = 1;
  local_194 = 1;
  local_18e = 1;
  local_190 = 0x101;
  if (*(int *)(param_1 + 0xb0c8) < *(int *)(param_1 + 0xb0cc)) {
    FUN_021920b0((int *)(param_1 + 0xb0c8),local_1f8);
  }
  return;
}

