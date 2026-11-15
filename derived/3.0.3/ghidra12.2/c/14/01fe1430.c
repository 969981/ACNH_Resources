
void FUN_01fe1430(int *param_1,float *param_2,float *param_3,int *param_4,long *param_5)

{
  undefined *puVar1;
  float *pfVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  
  puVar3 = PTR_DAT_04bb43c0;
  if (0 < *param_4) {
    uVar13 = 0;
    puVar1 = PTR_DAT_04bb3290 + 0x10;
    pfVar9 = param_2;
    do {
      lVar10 = *(long *)puVar3;
      lVar11 = *(long *)(*(long *)(param_4 + 2) + uVar13 * 8);
      uVar4 = FUN_0277d6c4(lVar11);
      if (*(long *)puVar3 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if (((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
           ((uVar6 = (**(code **)(*param_5 + 8))(param_5), (uVar6 & 1) == 0 ||
            (uVar6 = (**(code **)*param_5)(param_5,lVar11), (uVar6 & 1) != 0)))) {
          uVar4 = *(uint *)(lVar11 + 0x20);
          if ((((uVar4 == 0) ||
               (plVar12 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                                    ((ulong)(uVar4 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
              ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar4))
          {
            plVar12 = (long *)0x0;
          }
          iVar5 = *(int *)(*(long *)PTR_DAT_04bb27c0 + 0x288);
          if ((iVar5 == 1) || (iVar5 == -1)) {
            plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            (**(code **)(*plVar7 + 0x60))();
          }
          if (((*PTR_DAT_04bb5928 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar5 != 0)) {
            *(undefined **)PTR_DAT_04bb5920 = puVar1;
            __cxa_guard_release(PTR_DAT_04bb5928);
          }
          (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb5920);
          pfVar2 = pfVar9;
          if (199 < uVar13) {
            pfVar2 = param_2;
          }
          fVar14 = *param_3 - *(float *)(plVar12[0xd] + 0x278);
          fVar15 = param_3[2] - *(float *)(plVar12[0xd] + 0x280);
          *pfVar2 = fVar15 * fVar15 + fVar14 * fVar14;
          if (*param_1 < param_1[1]) {
            puVar8 = *(undefined8 **)(param_1 + 4);
            if (puVar8 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 4) = *puVar8;
            }
            *(int *)puVar8 = (int)uVar13;
            if (*param_1 < param_1[1]) {
              *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar8;
              *param_1 = *param_1 + 1;
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
      pfVar9 = pfVar9 + 1;
    } while ((long)uVar13 < (long)*param_4);
  }
  return;
}

