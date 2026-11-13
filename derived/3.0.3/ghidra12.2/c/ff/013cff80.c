
bool FUN_013cff80(long param_1,uint *param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  byte bVar12;
  uint uVar13;
  
  puVar4 = PTR_DAT_04bb27c0;
  if (param_2 == (uint *)0x0) {
    bVar5 = false;
  }
  else {
    bVar12 = 0;
    uVar13 = 0;
    puVar1 = PTR_DAT_04bb2e50 + 0x10;
    do {
      if (bVar12 < 0x14) {
        uVar3 = (uint)(char)bVar12;
        if (((int)uVar3 < (int)(uint)*(byte *)(param_1 + 0x59a)) ||
           ((int)uVar3 < (int)((uint)*(byte *)(param_1 + 0x59b) + (uint)*(byte *)(param_1 + 0x59a)))
           ) {
          lVar9 = *(long *)puVar4;
          if (lVar9 != 0) {
            uVar10 = *(uint *)(param_1 + 0x4f8 + ((long)((ulong)uVar13 << 0x20) >> 0x1d));
            if ((((uVar10 == 0) ||
                 (plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                                      ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0))
                || ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) ||
               (*(uint *)(plVar11 + 0x46) != uVar10)) {
              plVar11 = (long *)0x0;
            }
            if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
              plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68)
                                                  );
              lVar9 = *(long *)puVar4;
              iVar6 = (**(code **)(*plVar7 + 0x60))();
              if (iVar6 < 0x11) {
                uVar10 = 1;
              }
              else {
                uVar10 = *(uint *)(lVar9 + 0x5e8);
                if (4 < uVar10) goto LAB_013d00c0;
                uVar10 = 0x1aU >> (ulong)(uVar10 & 0x1f) & 1;
              }
            }
            else {
LAB_013d00c0:
              uVar10 = 0;
            }
            if (plVar11 != (long *)0x0) {
              lVar9 = plVar11[0x2a];
              if (((*PTR_DAT_04bbc7b8 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbc7b8), iVar6 != 0)) {
                *(undefined **)PTR_DAT_04bbc7b0 = puVar1;
                __cxa_guard_release(PTR_DAT_04bbc7b8);
              }
              uVar8 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bbc7b0);
              uVar2 = 0;
              if ((int)lVar9 == 1) {
                uVar2 = uVar10;
              }
              if ((((uVar8 & 1) != 0) && (uVar2 != 0)) &&
                 ((plVar11[0xd] != 0 &&
                  (uVar8 = FUN_02a7beb4(param_3,plVar11[0xd] + 0x278), (uVar8 & 1) != 0)))) {
                *param_2 = *param_2 | 1 << (ulong)(uVar3 & 0x1f);
              }
            }
          }
          bVar12 = bVar12 + 1;
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x14);
    bVar5 = *param_2 != 0;
  }
  return bVar5;
}

