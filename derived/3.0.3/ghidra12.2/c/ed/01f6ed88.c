
void FUN_01f6ed88(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  lVar10 = *(long *)(param_1 + 0x18);
  lVar11 = *(long *)(*(long *)(lVar10 + 8) + 0x68);
  uVar1 = *(uint *)(*(long *)(lVar10 + 8) + 0x230);
  uVar12 = *param_2;
  if ((((uVar12 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar12)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar12 = 0;
      goto joined_r0x01f6ee60;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar12 = 5U >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01f6ee60;
    }
  }
  uVar12 = 1;
joined_r0x01f6ee60:
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar4 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    if (((((int)lVar7 == 1) && (uVar12 == 0 && ((uVar4 ^ 1) & 1) == 0)) &&
        ((uVar1 != *param_2 && ((int)plVar9[0xa0] == 0)))) &&
       ((((*(char *)(*(long *)(param_1 + 0x10) + 10) == '\0' ||
          (uVar6 = FUN_021b8f60(&DAT_053fe348,plVar9 + 0xa1,0), (uVar6 & 1) == 0)) &&
         (uVar6 = FUN_02087ce0(*(undefined8 *)(lVar10 + 0x18),param_2,0), (uVar6 & 1) != 0)) &&
        (fVar13 = *(float *)(plVar9[0xd] + 0x278) - *(float *)(lVar11 + 0x278),
        fVar14 = *(float *)(plVar9[0xd] + 0x280) - *(float *)(lVar11 + 0x280),
        fVar13 = fVar14 * fVar14 + fVar13 * fVar13, fVar13 < **(float **)(param_1 + 8))))) {
      *(uint *)(lVar10 + 0x136b8) = *param_2;
      **(float **)(param_1 + 8) = fVar13;
      *(undefined1 *)(*(long *)(param_1 + 0x10) + 8) = 1;
      *(undefined1 *)(*(long *)(param_1 + 0x10) + 9) = 0;
      bVar8 = *PTR_DAT_04bb32e0;
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      **(byte **)(param_1 + 0x10) = bVar8;
      *(int *)(*(long *)(param_1 + 0x10) + 4) = (int)plVar9[0xa1];
    }
  }
  return;
}

