
void FUN_013cf520(float param_1,long param_2,float *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  byte bVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  
  puVar5 = PTR_DAT_04bbc7b0;
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb27c0;
  bVar13 = 0;
  uVar14 = 0;
  puVar1 = PTR_DAT_04bb2e50 + 0x10;
  do {
    if (bVar13 < 0x14) {
      if (((int)(char)bVar13 < (int)(uint)*(byte *)(param_2 + 0x59a)) ||
         ((int)(char)bVar13 <
          (int)((uint)*(byte *)(param_2 + 0x59b) + (uint)*(byte *)(param_2 + 0x59a)))) {
        lVar9 = *(long *)puVar3;
        if (lVar9 != 0) {
          uVar11 = *(uint *)(param_2 + 0x4f8 + ((long)((ulong)uVar14 << 0x20) >> 0x1d));
          if ((((uVar11 == 0) ||
               (plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                                    ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
              ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar11))
          {
            plVar12 = (long *)0x0;
          }
          if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
            plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
            lVar9 = *(long *)puVar3;
            iVar6 = (**(code **)(*plVar7 + 0x60))();
            if (iVar6 < 0x11) {
              uVar11 = 1;
            }
            else {
              uVar11 = *(uint *)(lVar9 + 0x5e8);
              if (4 < uVar11) goto LAB_013cf668;
              uVar11 = 0x1aU >> (ulong)(uVar11 & 0x1f) & 1;
            }
          }
          else {
LAB_013cf668:
            uVar11 = 0;
          }
          if (plVar12 != (long *)0x0) {
            lVar9 = plVar12[0x2a];
            if (((*PTR_DAT_04bbc7b8 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbc7b8), iVar6 != 0)) {
              *(undefined **)puVar5 = puVar1;
              __cxa_guard_release(PTR_DAT_04bbc7b8);
            }
            uVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar5);
            uVar2 = 0;
            if ((int)lVar9 == 1) {
              uVar2 = uVar11;
            }
            if ((((uVar8 & 1) != 0) && (uVar2 != 0)) &&
               ((lVar9 = plVar12[0x57], lVar9 != 0 &&
                ((lVar10 = *(long *)(*(long *)(lVar9 + 0x48) + 0x68), lVar10 != 0 &&
                 (fVar15 = *param_3 - *(float *)(lVar10 + 0x278),
                 fVar16 = param_3[2] - *(float *)(lVar10 + 0x280),
                 SQRT(fVar16 * fVar16 + fVar15 * fVar15) < param_1)))))) {
              *(undefined4 *)(lVar9 + 0x2b0) = *(undefined4 *)(lVar9 + 700);
            }
          }
        }
        bVar13 = bVar13 + 1;
      }
    }
    uVar14 = uVar14 + 1;
    if (uVar14 == 0x14) {
      return;
    }
  } while( true );
}

