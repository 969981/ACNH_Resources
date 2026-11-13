
void FUN_013cf760(float param_1,long param_2,float *param_3,byte param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  byte bVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  
  puVar3 = PTR_DAT_04bb27c0;
  if (param_4 < 0x14) {
    if (((int)(char)param_4 < (int)(uint)*(byte *)(param_2 + 0x59a)) ||
       ((int)(char)param_4 <
        (int)((uint)*(byte *)(param_2 + 0x59b) + (uint)*(byte *)(param_2 + 0x59a)))) {
      bVar11 = 0;
      uVar12 = 0;
      puVar1 = PTR_DAT_04bb2e50 + 0x10;
      do {
        if (bVar11 < 0x14) {
          uVar9 = (uint)(char)bVar11;
          if (((int)uVar9 < (int)(uint)*(byte *)(param_2 + 0x59a)) ||
             ((int)uVar9 <
              (int)((uint)*(byte *)(param_2 + 0x59b) + (uint)*(byte *)(param_2 + 0x59a)))) {
            if ((param_4 != uVar9) && (lVar7 = *(long *)puVar3, lVar7 != 0)) {
              uVar9 = *(uint *)(param_2 + 0x4f8 + ((long)((ulong)uVar12 << 0x20) >> 0x1d));
              if ((((uVar9 == 0) ||
                   (plVar10 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                                        ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0))
                  || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
                 (*(uint *)(plVar10 + 0x46) != uVar9)) {
                plVar10 = (long *)0x0;
              }
              if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
                plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                      (*(long *)PTR_DAT_04bb3350 + 0x68));
                lVar7 = *(long *)puVar3;
                iVar4 = (**(code **)(*plVar5 + 0x60))();
                if (iVar4 < 0x11) {
                  uVar9 = 1;
                }
                else {
                  uVar9 = *(uint *)(lVar7 + 0x5e8);
                  if (4 < uVar9) goto LAB_013cf8cc;
                  uVar9 = 0x1aU >> (ulong)(uVar9 & 0x1f) & 1;
                }
              }
              else {
LAB_013cf8cc:
                uVar9 = 0;
              }
              if (plVar10 != (long *)0x0) {
                lVar7 = plVar10[0x2a];
                if (((*PTR_DAT_04bbc7b8 & 1) == 0) &&
                   (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbc7b8), iVar4 != 0)) {
                  *(undefined **)PTR_DAT_04bbc7b0 = puVar1;
                  __cxa_guard_release(PTR_DAT_04bbc7b8);
                }
                uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bbc7b0);
                uVar2 = 0;
                if ((int)lVar7 == 1) {
                  uVar2 = uVar9;
                }
                if ((((uVar6 & 1) != 0) && (uVar2 != 0)) &&
                   ((lVar7 = plVar10[0x57], lVar7 != 0 &&
                    ((lVar8 = *(long *)(*(long *)(lVar7 + 0x48) + 0x68), lVar8 != 0 &&
                     (fVar13 = *param_3 - *(float *)(lVar8 + 0x278),
                     fVar14 = param_3[2] - *(float *)(lVar8 + 0x280),
                     SQRT(fVar14 * fVar14 + fVar13 * fVar13) < param_1)))))) {
                  *(undefined4 *)(lVar7 + 0x2b0) = *(undefined4 *)(lVar7 + 700);
                }
              }
            }
            bVar11 = bVar11 + 1;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != 0x14);
    }
  }
  return;
}

